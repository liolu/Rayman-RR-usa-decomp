#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
// clang-format off
asm void func_0209a56c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r5, r0
    mov r4, r2
    bl func_02084450
    mov r6, r0
    add r3, sp, #0x18
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_02084450
    mov r6, r0
    add r3, sp, #0x24
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r6
    mov r0, r5
    mov r2, r4
    bl func_02084450
    mov r6, r0
    add r3, sp, #0xc
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_02084450
    ldr r1, [r4, #0xc]
    cmp r1, #0x8
    ldreq r7, [r4, #0x0]
    ldrne r1, [r4, #0x0]
    movne r7, r1, lsl #0xc
    smull r2, r1, r7, r7
    adds r6, r2, #0x800
    adc r5, r1, #0x0
    mov r10, r6, lsr #0xc
    orr r10, r10, r5, lsl #0x14
    ldr r5, [sp, #0x10]
    mov r2, r7, asr #0x1f
    smull r11, r5, r10, r5
    mov r2, r2, lsl #0xd
    mov r1, #0x800
    adds r3, r1, r7, lsl #0xd
    orr r2, r2, r7, lsr #0x13
    adc r1, r2, #0x0
    mov r9, r3, lsr #0xc
    orr r9, r9, r1, lsl #0x14
    rsb r7, r9, #0x1000
    mov r1, r10, asr #0x1f
    mov r3, r1, lsl #0xd
    ldr r6, [sp, #0x14]
    str r5, [sp, #0x0]
    smull r6, r5, r10, r6
    str r5, [sp, #0x8]
    ldr r2, [sp, #0x18]
    add r8, r7, r10
    smull r7, r2, r8, r2
    adds r7, r7, #0x800
    ldr ip, [sp, #0x20]
    ldr r5, [sp, #0x1c]
    str r6, [sp, #0x4]
    smull r6, r5, r8, r5
    adc r2, r2, #0x0
    adds r6, r6, #0x800
    mov r7, r7, lsr #0xc
    smull lr, ip, r8, ip
    adc r5, r5, #0x0
    mov r6, r6, lsr #0xc
    orr r6, r6, r5, lsl #0x14
    adds r5, lr, #0x800
    adc r8, ip, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r8, lsl #0x14
    mov r8, #0x800
    adds r8, r8, r10, lsl #0xd
    orr r3, r3, r10, lsr #0x13
    adc r3, r3, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r3, lsl #0x14
    sub r8, r9, r8
    ldr r1, [sp, #0xc]
    orr r7, r7, r2, lsl #0x14
    ldr r9, [sp, #0x24]
    smull r2, r1, r10, r1
    smull r10, r9, r8, r9
    adds r10, r10, #0x800
    ldr r3, [sp, #0x28]
    adc r9, r9, #0x0
    mov r10, r10, lsr #0xc
    orr r10, r10, r9, lsl #0x14
    smull r9, r3, r8, r3
    adds r9, r9, #0x800
    adc r3, r3, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    add r6, r6, r9
    ldr r9, [sp, #0x2c]
    add r7, r7, r10
    smull r10, r9, r8, r9
    adds r10, r10, #0x800
    adc r8, r9, #0x0
    adds r2, r2, #0x800
    mov r9, r10, lsr #0xc
    orr r9, r9, r8, lsl #0x14
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r7, r2
    str r1, [sp, #0x30]
    adds r2, r11, #0x800
    ldr r1, [sp, #0x0]
    mov r2, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r2
    str r1, [sp, #0x34]
    ldr r1, [sp, #0x4]
    add r5, r5, r9
    adds r2, r1, #0x800
    ldr r1, [sp, #0x8]
    mov r2, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r2, r2, r1, lsl #0x14
    add r1, r5, r2
    add r3, sp, #0x30
    str r1, [sp, #0x38]
    mov r6, r4
    mov r5, #0x6
L_0209a774:
    ldrb r1, [r3, #0x0]
    ldrb r2, [r3, #0x1]
    add r3, r3, #0x2
    subs r5, r5, #0x1
    swpb r1, r1, [r6]
    add r6, r6, #0x1
    swpb r1, r2, [r6]
    add r6, r6, #0x1
    bne L_0209a774
    mov r1, #0x15
    str r1, [r4, #0xc]
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
