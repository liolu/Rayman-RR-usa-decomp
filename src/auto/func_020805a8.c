#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff8778();
extern void func_01ff8858();
extern void func_020148a4();
extern void FX_Div();
// clang-format off
asm void func_020805a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, r2
    ldr r2, [r6, #0x0]
    mov r8, r0
    cmp r2, #0x0
    ldreq r0, [r6, #0x4]
    mov r7, r1
    cmpeq r0, #0x0
    ldreq r0, [r6, #0x8]
    mov r5, r3
    ldr r4, [sp, #0x28]
    cmpeq r0, #0x0
    beq L_020806b0
    ldr r2, [r8, #0x0]
    ldr r0, [r7, #0x0]
    add r1, sp, #0x0
    sub r0, r2, r0
    str r0, [sp, #0x0]
    ldr r3, [r8, #0x4]
    ldr r2, [r7, #0x4]
    mov r0, r6
    sub r2, r3, r2
    str r2, [sp, #0x4]
    ldr r3, [r8, #0x8]
    ldr r2, [r7, #0x8]
    sub r2, r3, r2
    str r2, [sp, #0x8]
    bl VEC_DotProduct
    mov r9, r0
    mov r0, r6
    bl func_01ff8778
    mov r1, r0
    mov r0, r9
    bl FX_Div
    str r0, [r5, #0x0]
    ldr r1, [r6, #0x0]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    ldr r2, [r7, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r4, #0x0]
    ldr r1, [r5, #0x0]
    ldr r0, [r6, #0x4]
    ldr r3, [r7, #0x4]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [r4, #0x4]
    ldr r1, [r5, #0x0]
    ldr r0, [r6, #0x8]
    ldr r3, [r7, #0x8]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [r4, #0x8]
    b L_020806e4
L_020806b0:
    mov r0, #0x0
    mov r3, r4
    str r0, [r5, #0x0]
    mov r2, #0x6
L_020806c0:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020806c0
L_020806e4:
    ldr r6, [r4, #0x0]
    ldr r5, [r4, #0x4]
    ldmia r8, {r0, r1, r2}
    ldr r3, [r4, #0x8]
    sub r0, r6, r0
    sub r1, r5, r1
    sub r2, r3, r2
    bl func_01ff8858
    bl func_020148a4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
