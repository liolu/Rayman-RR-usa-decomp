#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff883c();
extern void rand();
extern void _fgeq();
extern void func_0200a42c();
extern void func_020148a4();
extern void FX_Div();
extern void func_020a60cc();
// clang-format off
asm void func_020a911c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    add r6, sp, #0x28
    mov r3, r1
    mov r4, r2
    mov r5, #0x6
L_020a9134:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r5, r5, #0x1
    swpb r1, r1, [r6]
    add r6, r6, #0x1
    swpb r1, r2, [r6]
    add r6, r6, #0x1
    bne L_020a9134
    ldr r0, [sp, #0x30]
    add r5, sp, #0x10
    add r0, r0, #0x33
    add r1, r0, #0x300
    add r0, sp, #0x28
    str r1, [sp, #0x30]
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    add r5, sp, #0x1c
    mov r2, #0x6
L_020a9180:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_020a9180
    ldr r0, [sp, #0x20]
    ldr r5, [sp, #0x1c]
    rsb r7, r0, #0x0
    mov r0, r7
    mov r1, r5
    bl func_01ff883c
    bl func_020148a4
    mov r6, r0
    bl func_0200a42c
    ldr r1, =0x3c23d70a
    bl _fgeq
    addlo sp, sp, #0x34
    ldmlofd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =0x666
    mov r1, r6
    bl FX_Div
    smull r1, r2, r7, r0
    adds r3, r1, #0x800
    smull r1, r0, r5, r0
    adc r2, r2, #0x0
    adds r1, r1, #0x800
    mov r6, r3, lsr #0xc
    adc r0, r0, #0x0
    mov r5, r1, lsr #0xc
    orr r6, r6, r2, lsl #0x14
    orr r5, r5, r0, lsl #0x14
    bl rand
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl FX_Div
    ldr r1, =0xe66
    ldr r3, [sp, #0x28]
    mov lr, #0x0
    umull ip, r11, r0, r1
    sub r9, r3, r6
    ldr r7, [sp, #0x2c]
    mla r11, r0, lr, r11
    mov r10, r0, asr #0x1f
    mla r11, r10, r1, r11
    rsb r2, r1, #0x0
    adds r1, ip, #0x800
    adc r0, r11, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r8, [sp, #0x1c]
    add r10, r1, r2
    ldr r3, [sp, #0x20]
    smull r8, r2, r10, r8
    smull r1, r0, r10, r3
    adds r3, r8, #0x800
    adc r2, r2, #0x0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r2, r9, r3
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    sub r7, r7, r5
    orr r1, r1, r0, lsl #0x14
    add r0, r7, r1
    str r2, [sp, #0x28]
    str r0, [sp, #0x2c]
    bl rand
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl FX_Div
    ldr r9, =0xe66
    ldr r1, =0xe66
    ldr r2, [sp, #0x10]
    rsb r1, r1, #0x0
    add r7, r2, r6
    str r1, [sp, #0xc]
    ldr r1, [sp, #0x14]
    ldr r2, =0x333
    add r5, r1, r5
    mov r11, r2, lsl #0x2
    mov ip, #0x0
    umull r10, r9, r0, r9
    mla r9, r0, ip, r9
    mov r8, r0, asr #0x1f
    ldr r0, =0xe66
    ldr r6, [sp, #0x1c]
    mla r9, r8, r0, r9
    adds r8, r10, #0x800
    adc r0, r9, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    ldr r0, [sp, #0xc]
    ldr lr, [sp, #0x20]
    add r0, r8, r0
    smull r10, r9, r0, r6
    smull r8, r6, r0, lr
    adds r10, r10, #0x800
    adc r0, r9, #0x0
    mov r9, r10, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    add r0, r7, r9
    adds r7, r8, #0x800
    str r0, [sp, #0x10]
    adc r0, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    add r0, r5, r6
    str r0, [sp, #0x14]
    ldr r0, =0x333
    add r1, sp, #0x28
    stmia sp, {r0, r11}
    ldr r0, =0x30005100
    add r2, sp, #0x1c
    mov r3, #0xc8000
    str r4, [sp, #0x8]
    bl func_020a60cc
    ldr r1, =0x333
    ldr r0, =0x30005100
    str r1, [sp, #0x0]
    mov r1, r1, lsl #0x2
    str r1, [sp, #0x4]
    add r1, sp, #0x10
    add r2, sp, #0x1c
    mov r3, #0xc8000
    str r4, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
