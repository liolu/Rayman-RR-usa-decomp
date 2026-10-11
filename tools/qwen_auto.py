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
import json
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


def chat_loop(model: str, work: Path, name: str, addr: int, diff: str, minutes: float) -> str:
    """Asks the model for a full new file, compiles it, feeds the new diff back, until MATCH or timeout."""
    import re
    import urllib.request
    deadline = time.time() + minutes * 60
    messages = [{"role": "system", "content": CHAT_SYSTEM}]
    best = work.read_text(encoding="utf-8")
    history = []
    while time.time() < deadline:
        messages.append({"role": "user", "content": f"File:\n```c\n{work.read_text(encoding='utf-8')}```\n\n{diff}"})
        body = json.dumps({"model": model, "messages": messages[-7:], "stream": False,
                           "options": {"temperature": 0.7}, "think": False}).encode()
        try:
            req = urllib.request.Request("http://127.0.0.1:11434/api/chat", body,
                                         {"Content-Type": "application/json"})
            with urllib.request.urlopen(req, timeout=max(30, deadline - time.time())) as r:
                reply = json.loads(r.read())["message"]["content"]
        except Exception as e:  # timeout, Ollama not running...
            history.append(f"(request failed: {e})")
            break
        messages.append({"role": "assistant", "content": reply})
        m = re.search(r"```(?:c)?\n(.*?)```", reply, re.S)
        if not m:
            history.append("(no code block)")
            continue
        code = m.group(1)
        if any(ord(c) > 127 for c in code):
            code = "".join(c for c in code if ord(c) < 128)
        work.write_text(code, encoding="utf-8", newline="\n")
        ok, out = probe(work, name, addr, show=True)
        last = out.strip().splitlines()[-1] if out.strip() else "(no output)"
        history.append(last)
        if ok:
            return "\n".join(history)
        diff = out
    work.write_text(best, encoding="utf-8", newline="\n") if not probe(work, name, addr)[0] else None
    return "\n".join(history[-10:])


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
    todo = sorted((t for t in todo if t[0] not in tried), key=lambda t: t[1])
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
    main()
