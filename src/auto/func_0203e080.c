#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
// clang-format off
asm void func_0203e080(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r6, #0x0
    mov r9, r0
    str r6, [r9, #0x0]
    str r6, [r9, #0x4]
    ldr r0, [sp, #0x50]
    str r6, [sp, #0xc]
    str r2, [sp, #0x0]
    str r0, [sp, #0x50]
    str r3, [sp, #0x4]
    mov r8, r3
    mov r3, #0x1
    str r6, [sp, #0x8]
    mov r4, r6
    str r6, [r9, #0x8]
    mov r2, r6
    mov r1, r3
    mov r11, r3
    mov r0, r6
    mov lr, r3
    mvn r10, #0x0
    b L_0203e160
L_0203e0dc:
    ldrsh r5, [r8, #0x2e]
    cmp r5, #0x63
    movne r5, r3
    moveq r5, r2
    tst r5, #0xff
    beq L_0203e158
    ldr ip, [r8, #0x20]
    mov r5, #0x0
    ldr ip, [ip, #0xc]
    mov r7, r5
    cmp ip, r10
    beq L_0203e11c
    ldrh ip, [ip, #0x2]
    and ip, ip, #0x4000
    cmp ip, #0x4000
    moveq r7, r1
L_0203e11c:
    tst r7, #0xff
    beq L_0203e150
    mov r7, r0
    ldr ip, [r8, #0x1c]
    ldr ip, [ip, #0xc]
    cmp ip, r10
    beq L_0203e148
    ldrh ip, [ip, #0x2]
    and ip, ip, #0x4000
    cmp ip, #0x4000
    moveq r7, r11
L_0203e148:
    tst r7, #0xff
    movne r5, lr
L_0203e150:
    tst r5, #0xff
    strne r8, [sp, #0x8]
L_0203e158:
    add r8, r8, #0x68
    add r4, r4, #0x1
L_0203e160:
    ldr r5, [sp, #0x0]
    cmp r4, r5
    bge L_0203e178
    ldr r5, [sp, #0x8]
    cmp r5, #0x0
    beq L_0203e0dc
L_0203e178:
    mov r5, #0x1
    cmp r5, #0x2
    bgt L_0203e4f4
L_0203e184:
    ldr r7, [sp, #0x4]
    mov r11, #0x1
    mov r8, #0x0
    mvn r10, #0x0
    b L_0203e4d4
L_0203e198:
    ldr r0, [r7, #0x28]
    and r0, r5, r0
    cmp r5, r0
    bne L_0203e4cc
    ldr r0, [sp, #0x50]
    cmp r8, r0
    ble L_0203e1cc
    ldr r0, [r7, #0x0]
    cmp r0, #0x0
    movlt r0, #0x1
    movge r0, #0x0
    tst r0, #0xff
    beq L_0203e4c8
L_0203e1cc:
    ldrsh r0, [r7, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203e4cc
    ldr r1, [r7, #0x20]
    mov r0, #0x0
    ldr r1, [r1, #0xc]
    mov r2, r0
    cmp r1, r10
    beq L_0203e20c
    ldrh r1, [r1, #0x2]
    and r1, r1, #0x4000
    cmp r1, #0x4000
    moveq r2, #0x1
L_0203e20c:
    tst r2, #0xff
    beq L_0203e240
    ldr r1, [r7, #0x1c]
    mov r2, #0x0
    ldr r1, [r1, #0xc]
    cmp r1, r10
    beq L_0203e238
    ldrh r1, [r1, #0x2]
    and r1, r1, #0x4000
    cmp r1, #0x4000
    moveq r2, #0x1
L_0203e238:
    tst r2, #0xff
    movne r0, #0x1
L_0203e240:
    tst r0, #0xff
    bne L_0203e4cc
    cmp r6, #0x0
    beq L_0203e490
    add r2, r7, #0x30
    add r1, sp, #0x1c
    mov r0, #0x6
L_0203e25c:
    ldrb r3, [r2, #0x0]
    ldrb r4, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r4, [r1]
    add r1, r1, #0x1
    bne L_0203e25c
    ldr r2, [r9, #0x0]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203e2b0
    ldr r2, [r9, #0x4]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203e2b0:
    cmp r1, #0x0
    beq L_0203e2cc
    ldr r1, [r9, #0x8]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_0203e2cc:
    tst r0, #0xff
    bne L_0203e2e4
    add r0, sp, #0x10
    mov r1, r9
    bl func_01ff84a0
    b L_0203e314
L_0203e2e4:
    mov r2, r9
    add r1, sp, #0x10
    mov r0, #0x6
L_0203e2f0:
    ldrb r3, [r2, #0x0]
    ldrb r4, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r4, [r1]
    add r1, r1, #0x1
    bne L_0203e2f0
L_0203e314:
    add r0, sp, #0x10
    add r1, sp, #0x1c
    bl VEC_DotProduct
    mov r4, r0
    cmp r4, #0x0
    ble L_0203e3f8
    mov r0, r9
    bl func_01ff8668
    cmp r4, r0
    bge L_0203e3c4
    ldr r0, [sp, #0x14]
    ldr r3, [sp, #0x20]
    smull ip, r0, r4, r0
    adds r2, ip, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    sub r0, r3, r2
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x24]
    smull lr, r3, r4, r2
    adds lr, lr, #0x800
    adc r2, r3, #0x0
    mov r3, lr, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    sub lr, r1, r3
    ldr r1, [sp, #0x10]
    ldr r3, [sp, #0x1c]
    smull r2, r1, r4, r1
    adds r4, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    ldr ip, [r9, #0x0]
    sub r1, r3, r2
    add r1, ip, r1
    str r1, [r9, #0x0]
    ldr r1, [r9, #0x4]
    add r0, r1, r0
    str r0, [r9, #0x4]
    ldr r0, [r9, #0x8]
    add r0, r0, lr
    str r0, [r9, #0x8]
    b L_0203e4cc
L_0203e3c4:
    add r2, sp, #0x1c
    mov r1, r9
    mov r0, #0x6
L_0203e3d0:
    ldrb r3, [r2, #0x0]
    ldrb r4, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r4, [r1]
    add r1, r1, #0x1
    bne L_0203e3d0
    b L_0203e4cc
L_0203e3f8:
    mov r0, #0x1
    cmp r5, #0x1
    str r0, [sp, #0xc]
    bne L_0203e4cc
    ldr r0, [sp, #0x14]
    ldr r3, [sp, #0x20]
    smull ip, r0, r4, r0
    adds r2, ip, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    sub r0, r3, r2
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x24]
    smull lr, r3, r4, r2
    adds lr, lr, #0x800
    adc r2, r3, #0x0
    mov r3, lr, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    sub lr, r1, r3
    ldr r1, [sp, #0x10]
    ldr r3, [sp, #0x1c]
    smull r2, r1, r4, r1
    adds r4, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    ldr ip, [r9, #0x0]
    sub r1, r3, r2
    add r1, ip, r1
    str r1, [r9, #0x0]
    ldr r1, [r9, #0x4]
    add r0, r1, r0
    str r0, [r9, #0x4]
    ldr r0, [r9, #0x8]
    add r0, r0, lr
    str r0, [r9, #0x8]
    b L_0203e4cc
L_0203e490:
    add r4, r7, #0x30
    mov r3, r9
    mov r2, #0x6
L_0203e49c:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0203e49c
    mov r6, #0x1
    b L_0203e4cc
L_0203e4c8:
    mov r11, #0x0
L_0203e4cc:
    add r7, r7, #0x68
    add r8, r8, #0x1
L_0203e4d4:
    ldr r0, [sp, #0x0]
    cmp r8, r0
    bge L_0203e4e8
    cmp r11, #0x0
    bne L_0203e198
L_0203e4e8:
    add r5, r5, #0x1
    cmp r5, #0x2
    ble L_0203e184
L_0203e4f4:
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    beq L_0203e5c8
    ldr r1, [sp, #0x8]
    add r0, sp, #0x10
    add r1, r1, #0x4
    bl func_01ff84a0
    add r0, sp, #0x10
    mov r1, r9
    bl VEC_DotProduct
    ldr r3, [sp, #0x14]
    sub r0, r0, #0x28
    smull r3, r4, r0, r3
    ldr r2, [sp, #0x18]
    adds r7, r3, #0x800
    smull r3, r5, r0, r2
    adc r2, r4, #0x0
    ldr r1, [sp, #0x10]
    adds r6, r3, #0x800
    smull r1, r4, r0, r1
    adc r0, r5, #0x0
    adds r5, r1, #0x800
    mov r1, r6, lsr #0xc
    mov r3, r7, lsr #0xc
    adc r4, r4, #0x0
    mov r5, r5, lsr #0xc
    ldr r6, [r9, #0x0]
    orr r5, r5, r4, lsl #0x14
    sub r4, r6, r5
    str r4, [r9, #0x0]
    ldr r4, [r9, #0x4]
    orr r3, r3, r2, lsl #0x14
    sub r2, r4, r3
    str r2, [r9, #0x4]
    ldr r2, [r9, #0x8]
    orr r1, r1, r0, lsl #0x14
    sub r0, r2, r1
    str r0, [r9, #0x8]
    ldr r0, [sp, #0x8]
    ldr r1, [r9, #0x0]
    ldr r0, [r0, #0x30]
    add r0, r1, r0
    str r0, [r9, #0x0]
    ldr r0, [sp, #0x8]
    ldr r1, [r9, #0x4]
    ldr r0, [r0, #0x34]
    add r0, r1, r0
    str r0, [r9, #0x4]
    ldr r0, [sp, #0x8]
    ldr r1, [r9, #0x8]
    ldr r0, [r0, #0x38]
    add r0, r1, r0
    str r0, [r9, #0x8]
L_0203e5c8:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    and r0, r0, #0xff
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
