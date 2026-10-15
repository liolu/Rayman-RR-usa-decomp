#include "m2c.h"

/* func_02017fac: 32-byte block copy.  `src` in r0, `dst` in r1, byte count fixed at 32.
 *
 * Probed before falling back to asm (this shape is not reachable from C):
 *  - every whole-struct assignment of a 32-byte aggregate (8x s32, 4x s64, 4x double,
 *    s32[3]+s32[3]+s64, nested 12/12/8 structs, union, packed, volatile, by-value struct
 *    parameters, array parameters) compiles to the 4-register relocated form
 *    `push {r3, lr}; mov lr, r0; mov ip, r1; ldm lr!, {r0-r3}; stmia ip!, {r0-r3}; ...`
 *    (8 instructions, 0x20 bytes) instead of the 7-instruction form here.
 *  - all 25 installed mwccarm profiles (1.2/*, 2.0/*, dsi/*) were probed and all produce that
 *    4-register form; -O1..-O4, -O4,s, -proc arm7tdmi change nothing.
 *  - 12/12/8 split struct assignments emit per-chunk non-incrementing `ldm lr, {r0,r1,r2}`
 *    plus `ldr/str` for the last 8 bytes; word-by-word assignments stay `ldr/str`.
 *  - copy loops (`for (i = 0; i < 8; i++) dst[i] = src[i];`, pointer-increment and
 *    end-pointer forms, constant and variable counts) are never unrolled by mwccarm.
 *  - the `__memcpy` intrinsic expands to a byte loop, a `memcpy` call to a `bx ip` tail call.
 * The routine is hand-written assembly, exactly like its neighbours in the same SDK block
 * MIi_CpuClear32 / MIi_CpuCopy32 / func_02017fc8 (3-register `ldm`/`stm` block transfer with
 * r2, r3 and ip as the transfer registers and the post-incrementing base pointers r0/r1).
 */
// clang-format off
asm void func_02017fac(void) {
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3}
    stmia r1!, {r2, r3}
    bx lr
}
// clang-format on
