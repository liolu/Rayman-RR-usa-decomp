# Troubleshooting

Known errors, their cause and the fix. Add an entry every time you solve a new problem
(format: symptom → cause → fix).

## Build

**`sjiswrap: File ... contains Shift JIS encoding errors`**
- Cause: non-ASCII characters (accents, UTF-8) in a source or header. `sjiswrap` reads sources as Shift-JIS.
- Fix: ASCII only, comments in English. Check with `grep -rnP "[^\x00-\x7F]" src include`.

**`ninja` prints `Downloading dsd ...` although dsd is present**
- Cause: `configure.py` downloads the exact `DSD_VERSION` it expects.
- Fix: nothing to do. To use pre-installed compilers, pass `--compiler` or set `MWCCARM`.

**After marking a file `complete`: `Symbol 'data_020bc02c' ... not found by name in linked binary (Possible name: @44)`**
- Cause: the compiler gives internal names to anonymous string literals (`@43`, `@44`) and to local statics
  (`name$37`). The ROM itself is already correct; only the name check fails.
- Fix: `ninja apply` copies these names into `symbols.txt` as `local` symbols, then run `ninja` again.

## Matching

**Code at 100% but `.data` at ~58% (assertion strings)**
- Cause: in the game, the function name string comes **before** the expression and file name strings, although the
  call passes them in the order expression, file, function.
- Fix: declare `static char szFunctionName[] = "...";` at the top of the function and pass it to the assertion.
  This is the shape of the OpenSpace assertion macro: reuse it everywhere.

**`.data` at ~99% although the bytes are identical**
- Cause: dsd includes alignment padding in data symbol sizes (0x20 instead of 0x1f).
- Fix: give the real size in `symbols.txt`, e.g. `kind:data(byte[31])`.

**`func_0200cbdc` (search in a linked list) does not match (open)**
- Symptom: the game has `b <test>` at the top of the loop and a separate `bxeq lr`. Every tried form (`for`,
  `while`, `break`, `return` inside the loop) gives either a rotated loop or conditional instructions
  (`ldrne`/`cmpne`). Same result with every 2.0 compiler, so it is not a compiler version issue.
- Ideas: an OpenSpace list macro (`LST_M_...` in ACP_Ray2), an inline function, or different flags for that file.

**`addcc` where the game has `addlt` (constant written `0xFFFFCDBC`)**
- Cause: m2c writes a negative `int` constant as hex. In C, `0xFFFFCDBC` has type `unsigned int`, so
  `x < 0xFFFFCDBC` compiles as an **unsigned** comparison, while the game's comparison is signed.
- Fix: write the signed value instead (`x < -12868`). `auto_match.variants` (`signed_constants`) tries it;
  it matched `func_02032220` and `func_02088dc8` (2.0/sp1p5) and `func_02088e60` (1.2/sp2p3).

**`beq` where the game has `bls` at the top of a loop**
- Cause: m2c rebuilds the compiler's rotated `for` loop as `if (guard) { do { step; body } while (cond); }`,
  which the compiler then compiles differently from the `for` loop it started from.
- Fix: write the `for` loop again (`for (v = init; cond; step) { body }`, step taken out of the body).
  `auto_match.variants` (`rotated_loops`) tries it; it matched `func_0205e720`.

**A local typed `s32` makes a condition signed (`addlt` where the game has `addcc`)**
- Cause: m2c types every local `s32`; the original function often uses an unsigned type there.
- Fix: `auto_match.variants` (`local_types`) tries the same draft with every local's signedness flipped.
  No new match yet (it only fixed drafts of functions already matched), but it is cheap.

**`add r1, r1, #0x30` where the game has `add r1, r1, #0xC`**
- Cause: `var_r1 += 0xC;` on a pointer m2c typed `M2C_UNK *` (4 bytes): C scales the offset by 4.
- Fix: make the addition explicit in bytes, `var_r1 = (M2C_UNK *)((s8 *)var_r1 + 0xC);`
  (`auto_match.variants`, `pointer_add_bytes`). No match yet, but it removes the difference.

**A wrapper forwards one argument less than the game**
- Symptom: the game keeps the last argument register intact across the tail call (`mov r3, r0; ...; bx ip`);
  the draft's call has one argument fewer and the compiler reuses that register.
- Cause: m2c only declares the parameters the function itself reads, so the wrapper looks 2-parameter.
- Fix: add the missing parameter and pass it through. `func_0200bd40` (three parameters, all forwarded to
  `func_02017f60`) matches that way with 2.0/sp1p5; `auto_match.variants` (`forward_extra_arg`) tries it.

**`a pointer/array type was expected for this operation instead of 'long'` (156 of the 295 compile failures)**
- Cause: m2c typed a variable holding an address as an integer, so `*(temp_r3 + arg1)` is not valid C.
- Workaround: cast the whole operand, `*(s8 *)(temp_r3 + arg1)`, which keeps the byte arithmetic. A
  compiler-driven loop that patches the failing line makes 108 of the 295 compile (22 near, 86 different
  size) but none matches on its own: the type really is lost. Only useful to let the variants run.


## Probe tool

**Every compiler gives `N/N diff` even with correct C**
- Cause: a wrong function size was typed by hand.
- Fix: leave the size out, `probe_compiler.py` reads it from `symbols.txt`.

**`error: argument --flags: expected one argument`**
- Cause: a value starting with `-` (`-O4,p`) is parsed as an option.
- Fix: write `--flags=-O4,p`.

## Environment

**`dsd init` fails with `Local function call from 0x... leads to no function`**
- Seen on other games (Children of Mana, The Sims 2 DS, Viva Piñata DS), not on this one.
- Cause: dsd's automatic analysis misses a called function (unusual code, data mixed with code).
- Fix: add the missing function to `symbols.txt` by hand and run `dsd init` again.

**GCC not found after installing WinLibs with winget (Windows)**
- Cause: the package does not add GCC to the `PATH`.
- Fix: add its `mingw64/bin` directory to the `PATH` of your shell.

## Automation

**Files declared in `delinks.txt` disappear from the link (`Unreferenced symbols ... [whole file]`), symbols shift**
- Cause: mwldarm dead-strips unreferenced files **by default**, e.g. `AutoloadCallback`, which is only reached
  through the ROM header. Removing `-dead` is not enough.
- Fix: `-nodead` in the linker flags (`tools/configure.py`).

**Drafts or `auto_match` use old symbol names (link error `Undefined : "func_0201b39c"`)**
- Cause: `dsd dis` does not delete its old output, and the gap file names change when `delinks.txt` changes, so a
  stale `.s` file with the old names was read first.
- Fix: delete `build/usa/asm/` before `ninja dis` (the moulinette and `auto_match.py` do it).


**The permuter keeps running after its time limit / worker processes stay alive (Windows)**
- Cause: `taskkill /T` needs WMI; on some Windows installs WMI is broken (`Invalid provider registration` /
  `Inscription du fournisseur non valide`), so only the parent process was stopped.
- Fix: `tools/permute.py` kills the process tree with `psutil` (`pip install psutil`).

**The permuter fails to compile anything when started from PowerShell**
- Cause: `bash` resolves to `C:\Windows\System32\bash.exe` (WSL) instead of Git Bash.
- Fix: put Git's `bin` directory first in `PATH`.

**`unknown relocation type 'R_ARM_V4BX'` in the permuter**
- Cause: GNU as targets ARMv4 by default and tags every `bx` with a V4BX relocation.
- Fix: assemble the target with `-mcpu=arm946e-s` (done by `tools/permute.py`).

**Assembly functions no longer compile after `pre-commit` (`add r2, r0, #0x2 swpb r0, r1, [r2] bx lr`)**
- Cause: clang-format joins the instructions of an `asm` function on one line.
- Fix: wrap every `asm` function in `// clang-format off` / `// clang-format on`. The moulinette re-verifies the
  build after formatting, which is how this was caught.

**`func_0200c4f8` tail call uses `r1` instead of `ip` (open)**
- The game loads the target in `r1` (`ldr r1, =func_0200c61c; bx r1`); every C form tried (8 signatures, every
  compiler version) uses `ip`. Possibly hand-written assembly.

## Notes

**Raw address `.word 0x20bbb2c` in `func_0200b53c`**
- This is the start of the `.ctor` section (empty in this game). The function calls the static initializers.
- dsd already handles it correctly (`relocs.txt`: `kind:link_time_const(ARM9_CTOR_START)`). Nothing to do.
