# Decompiling

This document describes how to split the game into source files and match functions. The workflow follows
[zeldaret/ph](https://github.com/zeldaret/ph/blob/main/docs/decompiling.md) and the Rayman 3 PS2 decompilation
([LawlessCowboy/ray3](https://github.com/LawlessCowboy/ray3)), and has been verified on this game.

- [Golden rules](#golden-rules)
- [Pick a source file](#pick-a-source-file)
- [Split (delink) a source file](#split-delink-a-source-file)
- [Decompile a function](#decompile-a-function)
- [Read a diff](#read-a-diff)
- [Finish a source file](#finish-a-source-file)
- [Tools](#tools)

## Golden rules
1. **The build is the source of truth.** A function is done when objdiff shows 100%. A file is done when `ninja`
   still ends with `rrr_usa.nds: OK` after it is marked `complete`.
2. **One hypothesis at a time.** Change one thing (loop shape, a type, declaration order...), rebuild, look at the
   diff. Record what you learned in [compiler.md](compiler.md) or [troubleshooting.md](troubleshooting.md) only
   once you can reproduce it.
3. **Stuck? Move on** to another function and come back later, or share a decomp.me scratch.
4. **Keep the ROM matching.** Run `ninja` after every change to `config/`.

## Pick a source file
The game contains assertion strings that name their source file. They are the best starting points:

`3dData.c`, `Brain.c`, `CollSet.c`, `Culling.c`, `Dynam.c`, `HieMtStk.c` (done), `Inters.c`, `MSSound.c`, `MSWay.c`,
`MS_Micro.c`, `MSlight.c`, `PlayAnim.c`, `SectInfo.c`, `Sndldbin.c`, `StdGame.c`, `U_vpt.c`, `cineinfo.c`

Small files with few functions are the easiest.

## Split (delink) a source file
A source file is one contiguous range in each section (`.text`, `.rodata`, `.data`, `.bss`).

1. Find an **anchor**: the address of an assertion string (search the bytes in `extract/usa/arm9/arm9.bin`, then
   `grep data_<address> build/usa/asm/*.s`) and the function that loads it.
2. Find its **neighbors**: functions that use the same global variables almost always belong to the same file.
   ```bash
   awk '/^func_[0-9a-f]+: /{f=$1} /data_020c3f9[048c]/{print f, $NF}' build/usa/asm/*.s | sort | uniq -c
   ```
3. Add the file to `config/usa/arm9/delinks.txt` (format: [dsd docs](https://github.com/AetiasHax/ds-decomp/blob/main/docs/delinks.md)):
   ```
   src/HIE/HieMtStk.c:
       .text       start:0x0201b2b8 end:0x0201b41c
       .data       start:0x020bbfec end:0x020bc038
   ```
4. Run `ninja`: the ROM must still be `OK`.

## Decompile a function
1. Start with the **small** functions (< 0x80 bytes) of the file.
2. Read the assembly in objdiff, in `build/usa/asm/`, or in Ghidra 11.2.1 with
   [dsd-ghidra](https://github.com/AetiasHax/dsd-ghidra) (do not auto-analyze, run the `SyncDsd.java` script).
3. Write the C code in `src/<MODULE>/<File>.c`, shared declarations in `include/<MODULE>/`.
4. Rename the symbols in `config/usa/arm9/symbols.txt` (`func_0201b39c` → `HIE_fn_bPopOnCameraMatrixStack`,
   `data_020c3f98` → `HIE_g_lNbMatrixInCameraStack`...). Format: [dsd docs](https://github.com/AetiasHax/ds-decomp/blob/main/docs/symbols.md).
5. Run `ninja report` and open objdiff (project directory = repository root). Iterate until 100%.

Verified patterns for this game (details in [compiler.md](compiler.md)):
- A test `x > 0` compiled as `subs` + `bne` means `x` is **unsigned**.
- When the function name string is stored **before** the other strings of a function, the source declares
  `static char szFunctionName[] = "...";` at the top of the function and passes it to the assertion.
- `ldrsb` on `char` loads: `char` is signed (`-char signed`, already set).

## Read a diff
Adapted from ray3:
- **Registers only** → declaration order, variable lifetime, signed vs unsigned type.
- **Extra or missing instruction** → loop or `if` shape, a cast, a type size.
- **Constant or relocation** → wrong struct field or wrong global.
- **Stack offsets** → extra/missing locals, size of a local struct.

## Finish a source file
1. All functions **and** data at 100% in `ninja report`.
2. Exact data sizes in `symbols.txt` (`kind:data(byte[31])`): dsd counts alignment padding into the size.
3. Add `complete` under the file name in `delinks.txt`.
4. Run `ninja apply` to copy compiler-generated names (`@43`, `szFunctionName$37`, marked `local`) into
   `symbols.txt`, then `ninja`: it must end with `rrr_usa.nds: OK`.
5. Update the progress table in the README and open a pull request.

## Tools
`tools/probe_compiler.py` compiles one function with every installed compiler version and option set, and compares
it with the game. It is the fastest way to test a hypothesis on a single function:

```shell
python tools/probe_compiler.py tools/probes/hie_pop.c HIE_fn_bPopOnCameraMatrixStack 0x0201b39c --only 2.0/sp1p5 --flags=-O4,p --show
```

`--show` prints target and candidate side by side, `*` marks differing lines.
