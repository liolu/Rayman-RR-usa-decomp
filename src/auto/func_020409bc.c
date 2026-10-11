#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040e34();
extern void func_02041344();
extern void func_02041d5c();
// clang-format off
asm void func_020409bc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrh r1, [r6, #0x2]
    mov r0, #0x9d
    bl func_02041344
    ldrh r2, [r6, #0x0]
    mov r4, r0
    mov r1, #0x4
    add r0, r2, #0x1
    bl func_02041d5c
    ldrh r2, [r6, #0x0]
    mov r5, r0
    mov r3, r2, lsr #0x1f
    rsb r1, r3, r2, lsl #0x1f
    adds r1, r3, r1, ror #0x1f
    mov r1, r4
    bne L_02040a08
    bl func_02040e34
    b L_02040a10
L_02040a08:
    add r2, r2, #0x1
    bl func_02040e34
L_02040a10:
    ldrh r1, [r6, #0x0]
    mov r3, #0x0
    mov r0, r5
    add r2, r5, r1
    swpb r1, r3, [r2]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
