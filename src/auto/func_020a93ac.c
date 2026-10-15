#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void rand();
extern void FX_Div();
extern void func_020a60cc();
extern char data_020e4f10[];
// clang-format off
asm void func_020a93ac(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    add r5, sp, #0x18
    mov r10, r2
    mov r4, #0x6
L_020a93c0:
    ldrb r2, [r0, #0x0]
    ldrb r3, [r0, #0x1]
    add r0, r0, #0x2
    subs r4, r4, #0x1
    swpb r2, r2, [r5]
    add r5, r5, #0x1
    swpb r2, r3, [r5]
    add r5, r5, #0x1
    bne L_020a93c0
    add r4, sp, #0xc
    mov r3, #0x6
L_020a93ec:
    ldrb r0, [r1, #0x0]
    ldrb r2, [r1, #0x1]
    add r1, r1, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r2, [r4]
    add r4, r4, #0x1
    bne L_020a93ec
    mov r8, #0x0
    ldr r7, =0x7fff000
    ldr r4, =0xccd
    ldr r5, =0x171
    ldr r11, =data_020e4f10
    mov r6, r8
L_020a9428:
    bl rand
    mov r0, r0, lsl #0xc
    mov r1, r7
    bl FX_Div
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xc]
    bl rand
    mov r0, r0, lsl #0xc
    mov r1, r7
    bl FX_Div
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r6, [sp, #0x14]
    str r0, [sp, #0x10]
    bl rand
    mov r0, r0, lsl #0xc
    mov r1, r7
    bl FX_Div
    mov r9, #0x0
    umull r3, r2, r0, r5
    mla r2, r0, r9, r2
    mov ip, r0, asr #0x1f
    mov r0, #0x800
    adds r3, r3, r0
    mla r2, ip, r5, r2
    mov r0, r9
    ldrsb r1, [r11, #0x12]
    adc r0, r2, r0
    cmp r1, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r9, r1, #0x28
    beq L_020a9538
    bl rand
    mov r0, r0, lsl #0xc
    mov r1, r7
    bl FX_Div
    mov r3, #0x0
    umull r2, r1, r0, r4
    mla r1, r0, r3, r1
    mov ip, r0, asr #0x1f
    mov r0, #0x800
    adds r2, r2, r0
    mla r1, ip, r4, r1
    mov r0, r3
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x33
    add r3, r0, #0x300
    b L_020a9570
L_020a9538:
    bl rand
    mov r0, r0, lsl #0xc
    mov r1, r7
    bl FX_Div
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r1, #0x1000
L_020a9570:
    ldr r0, =0x10003
    str r9, [sp, #0x0]
    add r1, sp, #0x18
    add r2, sp, #0xc
    stmib sp, {r9, r10}
    bl func_020a60cc
    add r8, r8, #0x1
    cmp r8, #0xa
    blt L_020a9428
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
