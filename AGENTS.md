# Instructions for AI agents

Read this before making any change. This is a **matching** decompilation of Rayman Raving Rabbids (Nintendo DS, USA):
C code compiled with the original compiler must rebuild a byte-identical ROM.

## Facts
- Engine: Ubisoft OpenSpace / CPA (Rayman 2 engine), plain **C**. See `docs/engine.md`.
- Compiler: Metrowerks `mwccarm` 2.0 (`2.0/sp1p5`), flags in `tools/configure.py` (`-O4,p -char signed ...`).
  See `docs/compiler.md`.
- Tooling: `dsd` (split/link/ROM), `objdiff` (diff), `ninja` (build). Config lives in `config/usa/arm9/`.

## Hard rules
1. **Only the build decides.** A function is matched only when objdiff reports 100% (`ninja report`, then
   `build/usa/report.json`). A file is complete only when `ninja` still ends with `rrr_usa.nds: OK` after marking
   it `complete`. Never claim a match from assembly that "looks the same" or code that is "equivalent".
2. **Clean room.** Use only the game binary and public projects listed in `docs/engine.md`. Never use, reproduce or
   recall the leaked Rayman 2 DS source code or the Nintendo SDK source code. If you recognize code from such a
   source, stop and say so.
3. **Natural C.** Original-looking types, control flow, macros and declaration order. No inline assembly to force a
   compiler-generated function, no `#pragma` tricks, no hard-coded addresses where a symbol exists.
4. **ASCII only** in `src/`, `include/` and `tools/probes/` (Shift-JIS wrapper). Comments in English.
5. **One hypothesis at a time**, rebuild after each edit. After ~20 unsuccessful variants on a function, stop, write
   down the diagnosis (first differing instruction + hypothesis) and move to another function.
6. Do not modify `tools/configure.py`, compiler flags or `delinks.txt` section ranges of other files unless the task
   asks for it. Never commit the ROM, the BIOS, `extract/` or `build/`.
7. Do not contribute AI-generated code to projects that forbid it (e.g. `nitro-decomp/nitro`).

## Workflow
```shell
python tools/configure.py usa   # once, or after editing tools/configure.py
ninja                           # must end with: rrr_usa.nds: OK
ninja dis                       # disassembly in build/usa/asm/
ninja report                    # compiles src/, progress in build/usa/report.json
```
1. Pick a function in a delinked file (`config/usa/arm9/delinks.txt`). Start with small ones.
2. Read its assembly in `build/usa/asm/`. Write C in `src/<MODULE>/<File>.c`, declarations in `include/<MODULE>/`.
3. Rename symbols in `config/usa/arm9/symbols.txt` to the OpenSpace names used in the code.
4. Iterate with `ninja report`. For quick single-function experiments:
   `python tools/probe_compiler.py <file.c> <function> <address> --only 2.0/sp1p5 --flags=-O4,p --show`
5. When a whole file matches: exact data sizes in `symbols.txt`, `complete` in `delinks.txt`, `ninja apply`,
   `ninja` → `OK`.
6. Record any new, reproduced finding in `docs/compiler.md` or `docs/troubleshooting.md`.

Full guide: `docs/decompiling.md`. Contribution rules: `CONTRIBUTING.md`.

## Known patterns
- `x > 0` compiled as `subs`/`bne` → `x` is unsigned.
- Assertions: `static char szFunctionName[] = "...";` at the top of the function, then
  `func_02000f58(expr, file, szFunctionName, line)` (assert handler, not yet named).
- dsd data sizes include padding: set `kind:data(byte[N])` with the real size.

## Git
`main` receives pull requests. Work on a branch named after the task (e.g. `match/StdGame`), one logical change per
pull request, and fill in the pull request checklist.
