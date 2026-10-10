# Contribution guide
- [Before you write code](#before-you-write-code)
- [What gets merged](#what-gets-merged)
- [Project structure](#project-structure)
- [Code style](#code-style)
- [Clean-room policy](#clean-room-policy)

## Before you write code
1. Get a working build first: follow [INSTALL.md](INSTALL.md) and make sure `ninja` ends with `rrr_usa.nds: OK`.
2. Read [docs/decompiling.md](docs/decompiling.md) and [docs/engine.md](docs/engine.md).
3. If you plan to work on a whole source file, open an issue named after the file (for example `StdGame.c`) so
   that nobody else works on it at the same time.

## What gets merged

> [!IMPORTANT]
> Submitted code must compile to the **same bytes** as the original game. Equivalent behavior is not enough.

- `ninja` passes and the ROM is still `OK`.
- Every function you add is at 100% in objdiff (`ninja report`).
- Symbols are renamed in `config/usa/arm9/symbols.txt` to the names used in your code.
- A file is marked `complete` in `delinks.txt` only when all of its functions **and** data match.
- One logical change per pull request. Several matched functions of the same source file are fine.
- Names must reflect what the code does. Keep `func_XXXXXXXX` / `unk_XX` when the purpose is unknown, rather than
  inventing a name.
- A function that is close but not exact is still worth sharing: open a draft pull request or post a
  [decomp.me](https://decomp.me) scratch (`nds_arm9` platform, compiler `mwcc_30_131`, flags from
  `tools/configure.py`).

## Project structure
- `build/`: build output (ignored)
    - `usa/delinks/`: objects split from the base ROM
    - `usa/src/`: compiled C code
    - `usa/asm/`: disassembly (`ninja dis`)
    - `usa/arm9.o`, `usa/report.json`: linked ELF and progress report
- `config/usa/`: [`dsd`](https://github.com/AetiasHax/ds-decomp) configuration (`delinks.txt`, `symbols.txt`, `relocs.txt`)
- `docs/`: documentation about the game and the workflow
- `extract/`: base ROM and extracted assets (ignored, see [extract/README.md](extract/README.md))
- `include/`: headers, one directory per engine module (`HIE/`, `MTH/`, `GAM/`...)
- `src/`: decompiled C files, one directory per engine module
- `tools/`: build scripts and helpers
    - `configure.py`: generates `build.ninja`
    - `probe_compiler.py`: compiles one function with every compiler version and compares it to the game
    - `probes/`: the C files used to identify the compiler

## Code style
- Format C files with the provided `.clang-format`. The pre-commit hook does it for you.
- **ASCII only** in source files. `sjiswrap` reads sources as Shift-JIS and rejects other encodings.
- Write comments in English.
- Follow the OpenSpace naming conventions described in [docs/engine.md](docs/engine.md).
- Write natural C that a 2006 engine programmer could have written. No inline assembly to force a function that
  the compiler generated, no hacks.

## Clean-room policy
- Only the game binary and public, legally shared projects may be used as sources.
- **Never** use the leaked Rayman 2 DS source code (2022), not even to check a name. Pull requests suspected of
  relying on it will be rejected.
- Do not copy code from the Nintendo SDK.
- Contributions written with AI assistance are accepted, under the same rule as everything else: the build proves
  the match. Do not submit AI-written code to other projects that forbid it (for example
  [nitro-decomp/nitro](https://github.com/nitro-decomp/nitro)).
