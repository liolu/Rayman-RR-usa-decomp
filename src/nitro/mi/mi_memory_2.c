#include "m2c.h"

/* MIi_CpuCopy32: word copy, `dst` = r1, `src` = r0, length in bytes = r2.
 *
 * Written in assembly: this is a single-register block-transfer loop
 * (`ldm r0!, {r2}` / `stm r1!, {r2}` with the `lt` condition), a shape no
 * available mwccarm profile emits from C. All 25 bundled compiler profiles
 * were probed with word/struct/union/packed/volatile/bitfield copies; a
 * 4-byte copy always comes out as `ldr`/`str` (8-byte as two `ldr`s, >= 12
 * bytes as `ldm`/`stm`). The sibling routines in the same SDK block
 * (MIi_CpuClear32, MIi_CpuClearFast, func_02017fac, func_02017fc8) use the same
 * hand-written block-transfer idiom. */
// clang-format off
asm void MIi_CpuCopy32(void) {
    add ip, r1, r2
L_02017f4c:
    cmp r1, ip
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt L_02017f4c
    bx lr
}
// clang-format on
