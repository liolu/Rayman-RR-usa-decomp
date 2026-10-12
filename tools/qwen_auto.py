#!/usr/bin/env python3
"""Autopilot: a local Qwen (Ollama, through Qwen Code) matches near-miss functions one by one.

    python tools/qwen_auto.py                       # loop over all near misses, smallest first
    python tools/qwen_auto.py --max 20              # at most 20 functions
    python tools/qwen_auto.py --function func_02000930
    python tools/qwen_auto.py --minutes 8 --model qwen9-ctx

For each function the model only edits a scratch file (build/qwen_auto/<function>.c). The script itself then
re-checks it with probe_compiler. Only an exact match is integrated (src/auto/, delinks.txt), and only if
`match.py verify` passes; otherwise everything is rolled back. Matches are committed and pushed to main (only after `match.py verify` passed).
Needs build/auto/status.json and build/auto/near/ (run `python tools/auto_match.py` first).
"""
import argparse
import difflib
import json
import re
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

WORK = ROOT / "build" / "qwen_auto"
NEAR = ROOT / "build" / "auto" / "near"
STATUS = ROOT / "build" / "auto" / "status.json"
TRIED = WORK / "tried.json"
LOG = WORK / "log.txt"
STOP = WORK / "STOP"  # create this file to stop after the current function (the launcher does it)
PROFILE = "2.0/sp1p5"
FLAGS = "-O4,p"

PROMPT = """You are helping with a matching decompilation of a Nintendo DS game (C, Metrowerks mwccarm, -O4,p).
Goal: edit ONE file so that the compiled function is byte-identical to the original.

File to edit (the only file you may modify): {path}
Function: {name}   address: {addr}

Check command (run it after every edit):
  python "{probe}" {path} {name} {addr} --only {profile} --flags={flags} --show
It prints the original (TARGET) and your (CANDIDATE) ARM disassembly, then a line ending with MATCH when you succeeded.

Current difference:
{diff}

Rules:
- Edit only {path}. Do not touch any other file, do not run git, do not delete anything.
- Keep the first two lines (#define M2C_SELF_... and #include "m2c_protos.h") and the function signature.
- Do NOT ask questions, do NOT summarize the project: start editing immediately.
- Change the C code only: loop style (for/while/do-while, pointer increment vs index), order of declarations,
  temporaries, types (s32/u32/s16/u8), `*p++`, casts, merging or splitting expressions. One change at a time.
- ASCII only, comments in English.
- Stop as soon as the check prints MATCH. If after about 15 attempts it still differs, stop and say so.
"""


def run(cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, encoding="utf-8", errors="replace", **kw)


def git_state() -> str:
    return run(["git", "status", "--porcelain"]).stdout + run(["git", "diff"]).stdout


def probe(path: Path, name: str, addr: int, show: bool = False) -> tuple[bool, str]:
    cmd = [sys.executable, "tools/probe_compiler.py", str(path.relative_to(ROOT)), name, str(addr),
           "--only", PROFILE, f"--flags={FLAGS}"]
    if show:
        cmd.append("--show")
    out = run(cmd, timeout=180).stdout
    last = out.strip().splitlines()[-1] if out.strip() else ""
    return last.rstrip().endswith("MATCH"), out.strip()


def ask_qwen(model: str, prompt: str, minutes: float) -> str:
    qwen = shutil.which("qwen") or "qwen.cmd"
    try:
        # Run from the scratch directory: no QWEN.md / project memory there, so the model only sees the task
        r = subprocess.run([qwen, "--safe-mode", "--approval-mode", "yolo", "-m", model, "-p", prompt], cwd=WORK,
                           capture_output=True, text=True, encoding="utf-8", errors="replace", timeout=minutes * 60,
                           env={**__import__("os").environ, "QWEN_CODE_SUPPRESS_YOLO_WARNING": "1"})
        return (r.stdout or "")[-3000:] + (r.stderr or "")[-1000:]
    except subprocess.TimeoutExpired:
        return "(timeout)"


CHAT_SYSTEM = """You fix C code for a matching decompilation (Nintendo DS, Metrowerks mwccarm, ARM, -O4,p).
You receive a C file and the ARM disassembly of the ORIGINAL function (TARGET) next to the one your code produces
(CANDIDATE); lines marked * differ. Rewrite the C so that the compiled code becomes identical.
Allowed changes: loop form (for/while/do-while, *p++ vs index), declaration order, temporaries, types
(s32/u32/s16/u16/s8/u8, signed/unsigned), casts, splitting or merging expressions, returning a value.
Keep the first two lines and the function name. ASCII only.
Answer with the COMPLETE new C file in a single ```c code block and nothing else."""


def score(out: str) -> int:
    """Distance of a probe result: 0 = MATCH, then differing instructions, then wrong size, then compile error."""
    last = out.strip().splitlines()[-1] if out.strip() else ""
    if last.rstrip().endswith("MATCH"):
        return 0
    m = re.search(r"(\d+)/\d+ diff", last)
    if not m:
        return 10000
    return int(m.group(1)) + (1000 if "(size" in last else 0)


def chat_loop(model: str, work: Path, name: str, addr: int, diff: str, minutes: float) -> str:
    """Asks the model for a full new file, compiles it, until MATCH or timeout.

    Every request starts from the BEST version so far (not the last one), with a short list of the attempts that
    failed: a small model otherwise drifts further away at each step."""
    import urllib.request
    deadline = time.time() + minutes * 60
    best, best_out = work.read_text(encoding="utf-8"), diff
    best_score = score(diff)
    history, tried_notes = [], []
    while time.time() < deadline:
        notes = ""
        if tried_notes:
            notes = "\n\nAlready tried from this file, all worse or equal (do something different):\n" + \
                "\n".join(tried_notes[-6:])
        messages = [{"role": "system", "content": CHAT_SYSTEM},
                    {"role": "user", "content": f"File:\n```c\n{best}```\n\nResult of this file:\n{best_out}{notes}"}]
        temp = min(1.0, 0.4 + 0.1 * len(tried_notes))  # more variety after each failure
        body = json.dumps({"model": model, "messages": messages, "stream": False,
                           "options": {"temperature": temp}, "think": False}).encode()
        try:
            req = urllib.request.Request("http://127.0.0.1:11434/api/chat", body,
                                         {"Content-Type": "application/json"})
            with urllib.request.urlopen(req, timeout=max(30, deadline - time.time())) as r:
                reply = json.loads(r.read())["message"]["content"]
        except Exception as e:  # timeout, Ollama not running...
            history.append(f"(request failed: {e})")
            break
        m = re.search(r"```[a-zA-Z]*\s*\n(.*?)```", reply, re.S)
        code = m.group(1) if m else None
        if code is None and name in reply and "{" in reply:
            # No fences: keep from the first #include / declaration to the last closing brace
            starts = [i for i in (reply.find("#include"), reply.find("s32 "), reply.find("void ")) if i >= 0]
            end = reply.rfind("}")
            if starts and min(starts) < end:
                code = reply[min(starts):end + 1] + "\n"
        if code is None:
            history.append("(no code block)")
            if history.count("(no code block)") >= 3:
                break  # the model does not follow the format: give up on this function
            continue
        if any(ord(c) > 127 for c in code):
            code = "".join(c for c in code if ord(c) < 128)
        work.write_text(code, encoding="utf-8", newline="\n")
        ok, out = probe(work, name, addr, show=True)
        last = out.strip().splitlines()[-1] if out.strip() else "(no output)"
        s = score(out)
        history.append(f"{last}  (best {min(s, best_score)})")
        if ok:
            return "\n".join(history)
        if s < best_score:
            best, best_out, best_score, tried_notes = code, out, s, []
        else:
            # Remember what failed, with the compiler error if there was one
            err = [l for l in out.splitlines() if "rror" in l][:2] if s >= 10000 else []
            changed = [l[1:] for l in difflib.unified_diff(best.splitlines(), code.splitlines(), lineterm="", n=0)
                       if l[:1] in "+-" and l[:3] not in ("+++", "---")][:6]
            tried_notes.append(f"- change {changed} -> {last.split(':', 1)[-1].strip()} {' '.join(err)}"[:400])
    work.write_text(best, encoding="utf-8", newline="\n")
    return "\n".join(history[-12:])


def integrate_and_verify(name: str, size: int, addr: int, source: str) -> bool:
    import auto_match as am
    delinks = am.DELINKS.read_bytes()
    compilers = am.COMPILERS_TXT.read_bytes() if am.COMPILERS_TXT.exists() else b""
    created = am.integrate([(name, size, addr, source)])
    run([sys.executable, "tools/configure.py", "usa"])
    verify = run([sys.executable, "tools/match.py", "verify"])
    if verify.returncode == 0 and "VERIFY PASSED" in verify.stdout:
        return True
    am.DELINKS.write_bytes(delinks)
    am.COMPILERS_TXT.write_bytes(compilers)
    for p in created:
        p.unlink(missing_ok=True)
    run([sys.executable, "tools/configure.py", "usa"])
    return False


def log(msg: str):
    print(msg, flush=True)
    with LOG.open("a", encoding="utf-8") as f:
        f.write(f"{time.strftime('%H:%M:%S')} {msg}\n")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--model", default="qwen9-ctx")
    ap.add_argument("--minutes", type=float, default=10.0, help="time limit per function")
    ap.add_argument("--max", type=int, default=0, help="maximum number of functions (0 = all)")
    ap.add_argument("--function", help="only this function")
    ap.add_argument("--retry", action="store_true", help="also retry functions that already failed")
    args = ap.parse_args()

    if not STATUS.exists() or not NEAR.exists():
        raise SystemExit("Run `python tools/auto_match.py` first (needs build/auto/status.json and near/).")
    WORK.mkdir(parents=True, exist_ok=True)
    tried = set(json.loads(TRIED.read_text())) if TRIED.exists() and not args.retry else set()

    todo = [(n, s, a) for n, s, a, st in json.loads(STATUS.read_text()) if st == "near" and (NEAR / f"{n}.c").exists()]
    if args.function:
        todo = [t for t in todo if t[0] == args.function]
    import tempfile
    import auto_match as am
    todo = [t for t in todo if t[0] not in tried]
    with tempfile.TemporaryDirectory() as tmp:  # fewest differing instructions first
        todo.sort(key=lambda t: (am.diff_count(Path(tmp), *t, (NEAR / f"{t[0]}.c").read_text(encoding="utf-8")), t[1]))
    if args.max:
        todo = todo[:args.max]
    log(f"{len(todo)} functions to try with {args.model}")

    won = 0
    STOP.unlink(missing_ok=True)
    for name, size, addr in todo:
        if STOP.exists():
            log("STOP file found: stopping before the next function.")
            break
        work = WORK / f"{name}.c"
        shutil.copyfile(NEAR / f"{name}.c", work)
        _, diff = probe(work, name, addr, show=True)
        before = git_state()
        t0 = time.time()
        answer = chat_loop(args.model, work, name, addr, diff, args.minutes)
        with LOG.open("a", encoding="utf-8") as f:
            f.write(f"--- qwen for {name} ---\n{answer.strip()[-1500:]}\n")
        if git_state() != before:
            log(f"STOP: the model modified files outside {WORK.relative_to(ROOT)}; check `git status`.")
            sys.exit(2)
        ok, _ = probe(work, name, addr)
        result = "no match"
        if ok:
            source = work.read_text(encoding="utf-8")
            if integrate_and_verify(name, size, addr, source):
                run(["git", "add", "src/auto", "config/usa"])
                msg = f"Match {name} (qwen autopilot)\n\nCo-Authored-By: Qwen <noreply@qwen.ai>\n"
                run(["git", "commit", "-m", msg, "--", f"src/auto/{name}.c", "config/usa"])
                won += 1
                pushed = run(["git", "push", "-q", "origin", "HEAD:main"]).returncode == 0
                result = "MATCH + verified + committed" + (" + pushed" if pushed else " (push failed, will retry)")
            else:
                result = "matched but VERIFY FAILED (rolled back)"
        tried.add(name)
        TRIED.write_text(json.dumps(sorted(tried)))
        log(f"{name}: {result} ({time.time() - t0:.0f}s)")
    log(f"done: {won}/{len(todo)} new matches")


if __name__ == "__main__":
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from pipeline_lock import pipeline_lock

    with pipeline_lock("qwen_auto"):
        main()
