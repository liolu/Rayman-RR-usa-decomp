#include "m2c.h"

extern void OS_SetThreadPriority(void *, s32);
extern void OS_WakeupThreadDirect(void *);
extern M2C_UNK cardi_common;

/* Target shape (18 insns, 0x48 bytes) is not reachable from C with the game
 * compilers: mwcc always turns the trailing call into a tail call
 * (`add sp, sp, #0x4 / pop {...,pc}` or `pop {...,pc}`), while the game body
 * keeps a 16-byte frame and ends with `add sp, sp, #0x4 / pop {r4,r5,lr} /
 * bx lr`.  The game also keeps arg0 in r5 but passes r0 (== &cardi_common +
 * 0x44, still live from the previous add) to OS_WakeupThreadDirect, which no C
 * expression of the recovered semantics reproduces.
 *
 * Probed: 2.0/{base,sp1,sp1p2,sp1p5,sp1p6,sp1p7}, 1.2/sp2p3; -O4,p, -O4,s,
 * -O4, -O3, -O2, -O1; extra trailing arguments, stack locals (plain/volatile/
 * address-taken), volatile pointer locals, dead stores after the last call,
 * conditional/duplicated last call, returned locals.  All either tail-call
 * (size 0x40) or add extra live ranges/instructions. */
// clang-format off
asm void CARDi_SetTask(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r4, =cardi_common
    mov r5, r0
    ldr r1, [r4, #0x108]
    add r0, r4, #0x44
    bl OS_SetThreadPriority
    add r0, r4, #0x44
    str r0, [r4, #0x104]
    str r5, [r4, #0x40]
    ldr r1, [r4, #0x114]
    orr r1, r1, #0x8
    str r1, [r4, #0x114]
    bl OS_WakeupThreadDirect
    add sp, sp, #0x4
    ldmia sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
