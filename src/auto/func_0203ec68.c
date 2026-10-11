#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c8a4();
extern void func_0202cb6c();
// clang-format off
asm void func_0203ec68(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r6, r0
    ldr r4, [r6, #0xe0]
    ldr r0, [r6, #0x7c]
    mov r7, r1
    sub r4, r4, r0
    str r4, [sp, #0x24]
    ldr r1, [r6, #0xe4]
    ldr r0, [r6, #0x80]
    mov r4, r4, lsl #0x8
    sub r1, r1, r0
    str r1, [sp, #0x28]
    ldr r5, [r6, #0xe8]
    ldr r0, [r6, #0x84]
    mov r1, r1, lsl #0x8
    sub r0, r5, r0
    mov r0, r0, lsl #0x8
    str r4, [sp, #0x24]
    str r1, [sp, #0x28]
    str r0, [sp, #0x2c]
    ldr r0, [r6, #0xc]
    mov r5, r2
    mov r4, r3
    tst r0, #0x800
    beq L_0203ece8
    ldr r0, [sp, #0x58]
    ldr r1, [sp, #0x54]
    bl func_0202cb6c
    ldr r0, [r6, #0xc]
    bic r0, r0, #0x800
    str r0, [r6, #0xc]
L_0203ece8:
    ldr r1, [r6, #0x3c]
    mov r0, r7, lsl #0x8
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x18]
    ldr r1, [r6, #0x40]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x1c]
    ldr r1, [r6, #0x44]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x20]
    ldr r0, [r6, #0xc]
    tst r0, #0x10
    bne L_0203edc4
    add r7, sp, #0x0
    add r3, r6, #0x1cc
    mov r2, #0x6
L_0203ed58:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0203ed58
    ldr r9, [sp, #0x0]
    ldr lr, [sp, #0x4]
    ldr r8, [sp, #0x8]
    ldr r7, [sp, #0x18]
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x20]
    mov r1, r9, lsl #0x8
    mov r0, lr, lsl #0x8
    mov ip, r8, lsl #0x8
    sub r7, r7, r9, lsl #0x8
    sub r3, r3, lr, lsl #0x8
    sub r2, r2, r8, lsl #0x8
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    str ip, [sp, #0x8]
    str r7, [sp, #0x18]
    str r3, [sp, #0x1c]
    str r2, [sp, #0x20]
L_0203edc4:
    add r0, sp, #0x24
    ldr r1, [sp, #0x58]
    mov r2, r0
    bl func_0202c8a4
    add r0, sp, #0x18
    ldr r1, [sp, #0x58]
    mov r2, r0
    bl func_0202c8a4
    ldr r2, [sp, #0x28]
    ldr r0, [sp, #0x1c]
    ldr lr, [sp, #0x18]
    sub r7, r0, r2
    ldr r0, [sp, #0x24]
    smull ip, r7, r4, r7
    sub lr, lr, r0
    smull r8, lr, r5, lr
    adds r8, r8, #0x800
    ldr r1, [sp, #0x2c]
    ldr r3, [sp, #0x20]
    ldr r4, [sp, #0x50]
    sub r3, r3, r1
    smull r5, r3, r4, r3
    adc r4, lr, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r4, lsl #0x14
    add r0, r0, r8
    adds r4, ip, #0x800
    str r0, [sp, #0xc]
    adc r0, r7, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r2, r2, r4
    adds r4, r5, #0x800
    str r2, [sp, #0x10]
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r3, r1, r3
    add r0, sp, #0xc
    ldr r1, [sp, #0x54]
    mov r2, r0
    str r3, [sp, #0x14]
    bl func_0202c8a4
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r3, r2, asr #0x8
    mov r1, r1, asr #0x8
    mov r0, r0, asr #0x8
    str r3, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
    ldr r0, [r6, #0x7c]
    add r0, r0, r2, asr #0x8
    str r0, [r6, #0xe0]
    ldr r1, [r6, #0x80]
    ldr r0, [sp, #0x10]
    add r0, r1, r0
    str r0, [r6, #0xe4]
    ldr r1, [r6, #0x84]
    ldr r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r6, #0xe8]
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
