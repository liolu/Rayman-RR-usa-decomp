#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void FX_Div();
// clang-format off
asm void func_020317f8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldr r2, [r5, #0xe0]
    ldr r0, [r5, #0x7c]
    mov r4, r1
    sub r0, r2, r0
    str r0, [sp, #0x0]
    ldr r3, [r5, #0xe4]
    ldr r2, [r5, #0x80]
    sub r2, r3, r2
    str r2, [sp, #0x4]
    ldr r3, [r5, #0xe8]
    ldr r2, [r5, #0x84]
    sub r2, r3, r2
    str r2, [sp, #0x8]
    bl FX_Div
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x4]
    mov r1, r4
    bl FX_Div
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x8]
    mov r1, r4
    bl FX_Div
    add r3, sp, #0x0
    str r0, [sp, #0x8]
    add r4, r5, #0x3c
    mov r2, #0x6
L_0203186c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203186c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
