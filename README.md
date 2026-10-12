Rayman Raving Rabbids (Nintendo DS)
[![CI]][actions]
=============

[CI]: https://github.com/liolu/Rayman-RR-usa-decomp/actions/workflows/ci.yaml/badge.svg
[actions]: https://github.com/liolu/Rayman-RR-usa-decomp/actions/workflows/ci.yaml

**Work in progress!** This project aims to recreate the source code of ***Rayman Raving Rabbids*** for the
Nintendo DS (USA, 2007, Ubisoft Casablanca) by decompiling its code by hand. The goal is a *matching*
decompilation: the C code, compiled with the original compiler, rebuilds a ROM identical to the original.

**The repository does not contain assets or assembly code.** To build the ROM, you must own a copy of the game
to extract assets from.

> [!NOTE]
> The game runs on Ubisoft's **OpenSpace / CPA** engine, the engine of Rayman 2. It is written in C and compiled
> with Metrowerks CodeWarrior for DS (`mwccarm` 2.0, `-O4,p`).

## Progress

<!-- progress:start -->
**Code:** 37.31% · **Data:** 0.04% · **Functions:** 2057/3608

| File | Code | Functions | Status |
|---|---|---|---|
| `src/HIE/HieMtStk.c` | 100.0% | 3/3 | ✅ complete |
| `src/auto/` (2051 files, raw m2c output) | – | 2054/2054 | 🤖 auto-matched, to clean up |
<!-- progress:end -->

Run `ninja report` to get detailed numbers in `build/usa/report.json`.

## How to install
See [INSTALL.md](INSTALL.md).

## Contribution
See [CONTRIBUTING.md](CONTRIBUTING.md). The decompilation workflow is described in
[docs/decompiling.md](docs/decompiling.md).

## Documentation
- [docs/decompiling.md](docs/decompiling.md): how to split files and match functions
- [docs/engine.md](docs/engine.md): the OpenSpace engine, naming conventions and reference projects
- [docs/compiler.md](docs/compiler.md): how the compiler and flags were identified
- [docs/troubleshooting.md](docs/troubleshooting.md): known errors and their fixes
- [docs/automation.md](docs/automation.md): the `moulinette` pipeline, m2c drafts and the permuter

## AI assistance
Parts of this project are developed with the help of an AI assistant. No code is accepted on trust: every function
must be proven by the build (objdiff at 100% and a byte-identical ROM, see [CONTRIBUTING.md](CONTRIBUTING.md)).
Instructions for AI agents are in [AGENTS.md](AGENTS.md).

## Credits
- Build system adapted from [zeldaret/ph](https://github.com/zeldaret/ph) (CC0).
- [ds-decomp (dsd)](https://github.com/AetiasHax/ds-decomp) and [objdiff](https://github.com/encounter/objdiff).
- Engine knowledge from [raytools/ACP_Ray2](https://github.com/raytools/ACP_Ray2) and
  [byvar/raymap](https://github.com/byvar/raymap).

This project is not affiliated with Ubisoft or Nintendo.
