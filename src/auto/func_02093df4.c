#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_02084450();
extern void func_02084ea0();
// clang-format off
asm void func_02093df4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x54
    mov r8, r2
    add r2, sp, #0x44
    mov r5, r0
    ldr r9, [r1, #-0x8]
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x34
    mov r0, r5
    add r4, sp, #0x44
    bl func_02084450
    mov r1, r0
    mov r0, r5
    add r2, sp, #0x24
    add r5, sp, #0x34
    bl func_02084450
    mov r7, r0
    cmp r9, #0x71
    add r6, sp, #0x24
    beq L_02094008
    cmp r9, #0x72
    bne L_0209410c
    ldr r9, [r4, #0x0]
    ldr r10, [r5, #0x0]
    ldr r3, [r6, #0x0]
    sub r9, r9, r10
    subs r10, r3, r10
    ldmia r6, {r0, r1, r2}
    add r11, sp, #0x0
    stmia r11, {r0, r1, r2}
    str r10, [r6, #0x0]
    rsbmi r10, r10, #0x0
    ldr ip, [r5, #0x4]
    ldr r3, [r6, #0x4]
    ldr lr, [r4, #0x4]
    sub r2, r3, ip
    sub r0, lr, ip
    ldr r11, [r4, #0x8]
    ldr r3, [r5, #0x8]
    ldr r1, [r6, #0x8]
    sub r5, r11, r3
    sub r1, r1, r3
    str r9, [sp, #0xc]
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r2, [r6, #0x4]
    str r1, [r6, #0x8]
    cmp r10, #0x10
    bge L_02093f0c
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_02093f0c
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_02093f0c
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_02093f0c:
    mov r0, r6
    bl func_01ff8668
    mov r5, r0
    mov r0, r6
    mov r1, r6
    bl func_01ff84a0
    add r0, sp, #0xc
    mov r1, r6
    bl VEC_DotProduct
    cmp r0, #0x0
    bge L_02093f60
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_02093f60:
    ldr r3, [r6, #0x0]
    ldmib r6, {r1, r2}
    smull r6, r3, r0, r3
    adds r9, r6, #0x800
    adc r6, r3, #0x0
    smull r1, r11, r0, r1
    mov r9, r9, lsr #0xc
    smull r3, r10, r0, r2
    adds r1, r1, #0x800
    adc r2, r11, #0x0
    adds r11, r3, #0x800
    mov r3, r1, lsr #0xc
    adc r10, r10, #0x0
    mov r1, r11, lsr #0xc
    cmp r0, r5
    orr r9, r9, r6, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r10, lsl #0x14
    ble L_02093fe0
    ldr r3, [sp, #0x0]
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x4]
    ldr r0, [r4, #0x4]
    sub r3, r3, r2
    sub r2, r1, r0
    ldr r1, [sp, #0x8]
    ldr r0, [r4, #0x8]
    str r3, [sp, #0x18]
    sub r0, r1, r0
    str r2, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_02093fe0:
    ldr r4, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r0, [sp, #0x14]
    sub r4, r9, r4
    sub r2, r3, r2
    sub r0, r1, r0
    str r4, [sp, #0x18]
    str r2, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_02094008:
    ldr r2, [r4, #0x0]
    ldr r1, [r5, #0x0]
    ldr r0, [r6, #0x0]
    sub r10, r2, r1
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    ldr r9, [r4, #0x4]
    ldr r3, [r5, #0x4]
    ldr r2, [r4, #0x8]
    ldr r1, [r5, #0x8]
    sub r3, r9, r3
    sub r1, r2, r1
    str r10, [sp, #0xc]
    str r3, [sp, #0x10]
    str r1, [sp, #0x14]
    cmp r0, #0x10
    bge L_02094088
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_02094088
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_02094088
    mov r0, #0x0
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_02094088:
    mov r0, r6
    mov r1, r6
    bl func_01ff84a0
    add r0, sp, #0xc
    mov r1, r6
    bl VEC_DotProduct
    ldmia r6, {r1, r3}
    smull r3, r4, r0, r3
    ldr r2, [r6, #0x8]
    adds r6, r3, #0x800
    smull r3, r5, r0, r2
    adc r2, r4, #0x0
    adds r9, r3, #0x800
    smull r1, r4, r0, r1
    mov r3, r6, lsr #0xc
    adc r0, r5, #0x0
    adds r6, r1, #0x800
    adc r5, r4, #0x0
    mov r6, r6, lsr #0xc
    mov r1, r9, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    ldr r4, [sp, #0xc]
    orr r6, r6, r5, lsl #0x14
    sub r5, r6, r4
    ldr r4, [sp, #0x10]
    ldr r2, [sp, #0x14]
    orr r1, r1, r0, lsl #0x14
    sub r3, r3, r4
    sub r0, r1, r2
    str r5, [sp, #0x18]
    str r3, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02094124
L_0209410c:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    add sp, sp, #0x54
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02094124:
    add r4, sp, #0x18
    mov r3, r8
    mov r2, #0x6
L_02094130:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02094130
    mov r1, #0x15
    mov r0, r7
    str r1, [r8, #0xc]
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
