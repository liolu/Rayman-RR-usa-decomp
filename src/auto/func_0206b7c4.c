#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040e34();
// clang-format off
asm void func_0206b7c4(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrh r2, [r5, #0x6]
    mov r4, r1
    mov r1, r2, lsr #0x1f
    rsb r0, r1, r2, lsl #0x1f
    adds r0, r1, r0, ror #0x1f
    ldr r1, [r5, #0x0]
    mov r0, r4
    bne L_0206b7f4
    bl func_02040e34
    b L_0206b7fc
L_0206b7f4:
    add r2, r2, #0x1
    bl func_02040e34
L_0206b7fc:
    ldrh r0, [r5, #0x6]
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
