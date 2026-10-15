#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8778();
extern void func_01ff87d0();
extern void rand();
extern void func_02014834();
extern void FX_Div();
extern void func_020a60cc();
extern void func_020affb8();
extern char data_020b7490[];
extern char data_020e4f10[];
// clang-format off
asm void func_020a95b0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r7, r0
    mov r6, r1
    ldr r4, [r7, #0x0]
    ldr r1, [r6, #0x0]
    add r0, sp, #0xc
    sub r1, r4, r1
    str r1, [sp, #0xc]
    ldr r5, [r7, #0x4]
    ldr r4, [r6, #0x4]
    mov r1, r0
    sub r4, r5, r4
    str r4, [sp, #0x10]
    ldr r8, [r7, #0x8]
    ldr r4, [r6, #0x8]
    mov r5, r2
    sub r2, r8, r4
    mov r4, r3
    str r2, [sp, #0x14]
    bl func_01ff84a0
    add r0, sp, #0xc
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_020affb8
    bl rand
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl FX_Div
    ldr r11, =0xc8f4
    mov r2, #0x0
    umull r10, r9, r0, r11
    mla r9, r0, r2, r9
    mov r8, r0, asr #0x1f
    adds r2, r10, #0x800
    mla r9, r8, r11, r9
    ldr ip, =0xffff9b86
    adc r0, r9, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r2, ip
    mov r0, r0, lsl #0x13
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #0x4
    mov r2, r0, lsl #0x1
    add r0, r2, #0x1
    ldr lr, =data_020b7490
    mov r0, r0, lsl #0x1
    ldrsh r8, [lr, r0]
    mov r0, r2, lsl #0x1
    ldrsh r9, [lr, r0]
    ldr r1, [sp, #0x24]
    ldr r3, [sp, #0x18]
    mov r0, r8
    mov r2, r9
    bl func_01ff87d0
    str r0, [sp, #0xc]
    ldr r1, [sp, #0x28]
    ldr r3, [sp, #0x1c]
    mov r0, r8
    mov r2, r9
    bl func_01ff87d0
    str r0, [sp, #0x10]
    ldr r1, [sp, #0x2c]
    ldr r3, [sp, #0x20]
    mov r2, r9
    mov r0, r8
    bl func_01ff87d0
    str r0, [sp, #0x14]
    add r0, sp, #0xc
    bl func_01ff8778
    cmp r0, #0x1000
    bge L_020a96fc
    ldr r1, =data_020e4f10
    ldr r1, [r1, #0x4]
    cmp r1, #0x0
    beq L_020a96fc
    smull r2, r1, r0, r4
    adds r0, r2, #0x800
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    b L_020a9714
L_020a96fc:
    bl func_02014834
    smull r2, r1, r0, r4
    adds r0, r2, #0x800
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
L_020a9714:
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #0x10]
    smull r4, r3, r0, r3
    adds r9, r4, #0x800
    smull r2, r4, r0, r2
    adc r3, r3, #0x0
    adds r8, r2, #0x800
    mov r2, r9, lsr #0xc
    orr r2, r2, r3, lsl #0x14
    ldr r1, [sp, #0x14]
    adc r4, r4, #0x0
    smull r1, r3, r0, r1
    adds r0, r1, #0x800
    mov r1, r8, lsr #0xc
    orr r1, r1, r4, lsl #0x14
    adc r3, r3, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    str r2, [sp, #0x3c]
    str r1, [sp, #0x40]
    str r0, [sp, #0x44]
    ldr r4, [r6, #0x0]
    add r3, sp, #0x30
    add r2, r2, r4
    str r2, [sp, #0x3c]
    ldr r4, [r6, #0x4]
    mov r2, #0x6
    add r1, r1, r4
    str r1, [sp, #0x40]
    ldr r1, [r6, #0x8]
    add r0, r0, r1
    str r0, [sp, #0x44]
L_020a9794:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a9794
    ldr r0, =0xe66
    add r1, sp, #0x3c
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    add r2, sp, #0x30
    mov r0, #0x4000000a
    mov r3, #0x2000
    str r5, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0x48
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
