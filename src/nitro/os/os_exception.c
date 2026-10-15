#include "m2c.h"

/* Target: push {r0, lr} / bl OSi_SetExContext / bl OSi_DisplayExContext / pop {r0, lr} / bx lr
 *
 * Not reproducible from C. Probed here:
 *   - 'f(); g();' (the draft), a single call, the argument forwarded to the
 *     first or to the second callee, the argument returned as the result, a
 *     local copy of it, 2 and 4 dead parameters, old-style declarations,
 *     s32/u32 signatures;
 *   - every installed mwccarm (1.2/b56..1.2/sp4, 2.0/base..2.0/sp2p4, dsi
 *     1.1..1.6sp2) with -O0..-O4, ',p' and ',s', and
 *     -proc arm7tdmi/arm920t/arm940t/arm946e/arm966e.
 * mwcc 2.0 pads the 8-byte frame with r3: 'push {r3, lr} ... pop {r3, pc}'
 * (16 bytes with arm946e) or 'pop {r3, lr}; bx lr' (20 bytes with
 * arm7tdmi/arm920t/arm940t) - the right length but r3, never r0. The 1.2
 * family always emits 'stmfd sp!, {lr}; sub sp, sp, #4 ... add sp, sp, #4;
 * ldmfd sp!, {lr}' (28 bytes) and 1.2/sp3+ folds the return into 'ldmfd pc'
 * (24 bytes). No C form and no profile produces this unmerged
 * 'pop {r0, lr}' epilogue, where r0 is written by the prologue only.
 * The region is hand-written OS assembly: mrc/mcr (0x0200e05c..0x0200e098), a
 * custom 'stmdb ip!' exception prologue (0x0200e0a0), mrs/msr context save
 * (0x0200e128, 0x0200e1b8). This stub is assembly in the original source too.
 * Assembled with stmfd/ldmfd because mwcc's assembler rejects the push/pop
 * mnemonics; they encode to the target's push/pop. */
extern void OSi_SetExContext();
extern void OSi_DisplayExContext();
// clang-format on

// clang-format off
asm void OSi_GetAndDisplayContext(void) {
    stmfd sp!, {r0, lr}
    bl OSi_SetExContext
    bl OSi_DisplayExContext
    ldmfd sp!, {r0, lr}
    bx lr
}
