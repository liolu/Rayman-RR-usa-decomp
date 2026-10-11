#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_02014910();
// clang-format off
asm void func_020333ec(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r8, [sp, #0x3c]
    mov r10, r0
    mov r0, r8
    str r1, [sp, #0x0]
    str r2, [sp, #0x4]
    str r3, [sp, #0x8]
    ldr r9, [sp, #0x38]
    ldr r7, [sp, #0x40]
    ldr r6, [sp, #0x44]
    mov r11, #0x0
    bl func_01ff8668
    ldrsb r1, [sp, #0x30]
    mov r5, r0
    mov r4, r5
    cmp r1, #0x0
    bne L_0203343c
    cmp r5, #0x10
    bgt L_0203349c
L_0203343c:
    ldr r1, [r9, #0x0]
    ldr r0, [r8, #0x0]
    mov r2, #0x6
    add r0, r1, r0
    str r0, [r7, #0x0]
    ldr r1, [r9, #0x4]
    ldr r0, [r8, #0x4]
    add r0, r1, r0
    str r0, [r7, #0x4]
    ldr r1, [r9, #0x8]
    ldr r0, [r8, #0x8]
    add r0, r1, r0
    str r0, [r7, #0x8]
L_02033470:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r6]
    add r6, r6, #0x1
    bne L_02033470
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203349c:
    cmp r10, #0x0
    bne L_020334e4
    mov r2, #0x6
L_020334a8:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_020334a8
    mov r0, #0x0
    str r0, [r8, #0x0]
    str r0, [r8, #0x4]
    add sp, sp, #0xc
    str r0, [r8, #0x8]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020334e4:
    mov r1, r6
    mov r0, #0x6
L_020334ec:
    ldrb r2, [r8, #0x0]
    ldrb r3, [r8, #0x1]
    add r8, r8, #0x2
    subs r0, r0, #0x1
    swpb r2, r2, [r1]
    add r1, r1, #0x1
    swpb r2, r3, [r1]
    add r1, r1, #0x1
    bne L_020334ec
    ldrsb r0, [sp, #0x34]
    cmp r5, r10
    movgt r4, r10
    movgt r11, #0x1
    cmp r0, #0x0
    bne L_0203359c
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_02033570
    smull r1, r0, r10, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    bge L_02033570
    ldr r1, [sp, #0x4]
    mov r0, r5
    bl func_02014910
    cmp r0, #0x10
    ble L_02033570
    cmp r0, r4
    movlt r4, r0
    movlt r11, #0x1
L_02033570:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_0203359c
    ldr r1, [sp, #0x0]
    mov r0, r10
    bl func_02014910
    ldr r1, [sp, #0x8]
    add r0, r1, r0
    cmp r4, r0
    movgt r4, r0
    movgt r11, #0x1
L_0203359c:
    cmp r11, #0x0
    beq L_02033628
    ldr r0, [r6, #0x0]
    mov r1, r5
    smull r2, r0, r4, r0
    adds r2, r2, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [r6, #0x0]
    ldr r0, [r6, #0x4]
    smull r2, r0, r4, r0
    adds r2, r2, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [r6, #0x4]
    ldr r0, [r6, #0x8]
    smull r2, r0, r4, r0
    adds r2, r2, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [r6, #0x8]
    ldr r0, [r6, #0x0]
    bl func_02014910
    str r0, [r6, #0x0]
    ldr r0, [r6, #0x4]
    mov r1, r5
    bl func_02014910
    str r0, [r6, #0x4]
    ldr r0, [r6, #0x8]
    mov r1, r5
    bl func_02014910
    str r0, [r6, #0x8]
L_02033628:
    ldr r1, [r9, #0x0]
    ldr r0, [r6, #0x0]
    add r0, r1, r0
    str r0, [r7, #0x0]
    ldr r1, [r9, #0x4]
    ldr r0, [r6, #0x4]
    add r0, r1, r0
    str r0, [r7, #0x4]
    ldr r1, [r9, #0x8]
    ldr r0, [r6, #0x8]
    add r0, r1, r0
    str r0, [r7, #0x8]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
