#include "m2c.h"

extern s32 micWork;
// clang-format on

/* Probed before falling back to asm:
 * - C forms of the polling loop (do/while, while, pointer local, volatile
 *   global, loop entered through a preceding call) all put the literal-pool
 *   address in r0: `ldr r0, [pc, #12]; ldr r0, [r0]`.
 * - All 25 installed mwccarm profiles (1.2/base..1.2/sp4, 2.0/base..2.0/sp2p4,
 *   dsi/1.1..dsi/1.6sp2) with -O4,p produce that same r0 form; `ldr ip, [pc]`
 *   appears nowhere in the rest of this ROM's compiled code.
 * The original is therefore assembly (or an SDK object from another toolchain)
 * that keeps the global's address in ip, which this compiler never does.
 */
// clang-format off
asm void MicWaitBusy(void) {
    ldr ip, =micWork
L_0200f768:
    ldr r0, [ip, #0x0]
    cmp r0, #0x1
    beq L_0200f768
    bx lr
}
