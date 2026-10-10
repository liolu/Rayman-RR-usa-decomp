#!/usr/bin/env python3
"""One command for everything that does not need a human: sync, build, verify, drafts, publish.

    python tools/moulinette.py                 # full run (see steps below)
    python tools/moulinette.py --no-push       # same, but commit locally only
    python tools/moulinette.py --permute FUNC  # also run the permuter on FUNC (10 min, --minutes to change)
    python tools/moulinette.py --permute-near 50 --near-minutes 5   # overnight: permuter on 50 near misses

Steps:
 1. `git pull --ff-only` (skipped with --offline)
 2. configure + `ninja` (extract, split, link, rebuild the ROM)
 3. `ninja dis` and m2c drafts for every unmatched function of the delinked files (build/drafts/)
 4. automatic matching (`tools/auto_match.py`): m2c drafts that already match are added to src/auto/
    (and, with --permute-near, the permuter tries to finish the near misses)
 5. optional: permuter on one function
 6. strict verification (`tools/match.py verify`): byte-identical ROM, complete files at 100%, ASCII sources
 7. if the verification passed and src/, include/, config/ or docs/ changed:
    update the README progress table, commit (listing newly matched functions) and push to main

Nothing is committed or pushed when the verification fails.
"""

import argparse
import json
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
REPORT = ROOT / "build" / "usa" / "report.json"
SNAPSHOT = ROOT / "build" / "usa" / "published_matches.json"
TRACKED = ["src", "include", "config", "docs", "tools", "README.md", "CONTRIBUTING.md", "INSTALL.md", "AGENTS.md"]


def step(title: str):
    print(f"\n=== {title}", flush=True)


def run(cmd: list[str], check: bool = True, capture: bool = False) -> subprocess.CompletedProcess:
    r = subprocess.run(cmd, cwd=ROOT, text=True, capture_output=capture)
    if check and r.returncode != 0:
        if capture:
            print(r.stdout, r.stderr)
        raise SystemExit(f"FAILED: {' '.join(cmd)}")
    return r


def matched_functions() -> set[str]:
    report = json.loads(REPORT.read_text())
    return {f["name"] for u in report["units"] if not u.get("metadata", {}).get("auto_generated")
            for f in u.get("functions", []) if float(f.get("fuzzy_match_percent", 0)) == 100.0}


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--no-push", action="store_true", help="Commit locally, do not push")
    ap.add_argument("--no-commit", action="store_true", help="Verify only, do not commit")
    ap.add_argument("--offline", action="store_true", help="Do not git pull")
    ap.add_argument("--no-drafts", action="store_true", help="Skip m2c drafts")
    ap.add_argument("--permute", metavar="FUNCTION", help="Run the permuter on this function")
    ap.add_argument("--minutes", type=float, default=10.0, help="Permuter duration")
    ap.add_argument("--no-auto", action="store_true", help="Skip automatic matching of m2c drafts")
    ap.add_argument("--permute-near", type=int, default=0, metavar="N", help="Permuter on N near misses")
    ap.add_argument("--near-minutes", type=float, default=5.0, help="Permuter time per near miss")
    args = ap.parse_args()
    py = sys.executable

    if not args.offline:
        step("Sync with GitHub")
        run(["git", "pull", "--ff-only"], check=False)

    step("Build")
    if not (ROOT / "build.ninja").exists():
        run([py, "tools/configure.py", "usa"])
    run(["ninja"])
    # dsd does not delete stale files from a previous split: start from an empty directory
    shutil.rmtree(ROOT / "build" / "usa" / "asm", ignore_errors=True)
    run(["ninja", "dis"])

    if not args.no_drafts:
        step("m2c drafts")
        r = run([py, "tools/draft.py", "--worklist"], check=False)
        if r.returncode != 0:
            print("(drafts skipped: m2c not installed? see docs/automation.md)")

    if not args.no_auto:
        step("Automatic matching (m2c)")
        cmd = [py, "tools/auto_match.py"]
        if args.permute_near:
            cmd += ["--permute", str(args.permute_near), "--minutes", str(args.near_minutes)]
        if run(cmd, check=False).returncode != 0:
            print("(automatic matching failed or was rolled back, continuing)")

    if args.permute:
        step(f"Permuter on {args.permute}")
        run([py, "tools/permute.py", args.permute, "--minutes", str(args.minutes)], check=False)

    step("Verification")
    if run([py, "tools/match.py", "verify"], check=False).returncode != 0:
        print("\nVerification FAILED: nothing committed. Fix the errors above (see docs/troubleshooting.md).")
        sys.exit(1)

    now = matched_functions()
    before = set(json.loads(SNAPSHOT.read_text())) if SNAPSHOT.exists() else set()
    new = sorted(now - before)
    lost = sorted(before - now)
    if lost:
        print(f"WARNING: functions no longer matching: {', '.join(lost)}")

    if args.no_commit:
        print(f"\nOK. Newly matched since last publish: {', '.join(new) or 'none'}")
        return

    step("Publish")
    run([py, "tools/match.py", "progress"])
    run(["git", "add", "--", *TRACKED])
    if run(["git", "diff", "--cached", "--quiet"], check=False).returncode == 0:
        print("Nothing to commit.")
        SNAPSHOT.write_text(json.dumps(sorted(now)))
        return
    hooks = run(["pre-commit", "run"], check=False)
    if hooks.returncode != 0:
        # Hooks may have reformatted files: re-verify the reformatted code before committing
        run(["git", "add", "--", *TRACKED])
        if run([py, "tools/match.py", "verify"], check=False).returncode != 0:
            print("Verification failed after formatting: nothing committed.")
            sys.exit(1)
        run(["pre-commit", "run"])
    title = f"Match {len(new)} function(s)" if new else "Update decompilation"
    body = "\n".join(f"- {n}" for n in new[:50])
    if len(new) > 50:
        body += f"\n- ... and {len(new) - 50} more"
    run(["git", "commit", "-m", title + ("\n\n" + body if body else "")])
    SNAPSHOT.write_text(json.dumps(sorted(now)))
    if args.no_push:
        print("Committed locally (--no-push).")
        return
    run(["git", "push", "origin", "HEAD:main"])
    print("Pushed to main.")


if __name__ == "__main__":
    main()
