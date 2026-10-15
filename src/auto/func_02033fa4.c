#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_01ff87ec();
extern void FX_Inv();
extern void FX_Div();
extern void func_0202c664();
extern void func_0202e19c();
extern void func_0202e1e0();
extern void func_02033dd8();
extern void func_020359b8();
extern void func_02035a48();
// clang-format off
asm void func_02033fa4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x23c
    mov r10, r0
    mov r0, r3
    str r3, [sp, #0x4]
    add r3, r1, #0x220
    ldr r1, [r1, #0x168]
    str r2, [sp, #0x0]
    ldr r2, [sp, #0x260]
    mov r4, #0x0
    str r1, [sp, #0x2c]
    str r2, [sp, #0x260]
    add r2, sp, #0x1f4
    ldr r0, [r0, #0x24]
    add r1, sp, #0x20c
    str r3, [sp, #0x28]
    mov r5, r4
    add r6, sp, #0x1d0
    add r7, sp, #0x1e8
    str r2, [sp, #0x20]
    add r8, sp, #0x224
    bl func_0202e1e0
    add r9, sp, #0x20c
    mov r3, r7
    mov r2, #0x6
L_02034008:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02034008
    ldr r9, [sp, #0x260]
    ldr r3, [sp, #0x20]
    mov r2, #0x6
L_02034038:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02034038
    ldr r0, [sp, #0x2c]
    add r3, sp, #0x200
    add r9, r0, #0xf8
    mov r2, #0x6
L_0203406c:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0203406c
    add r0, sp, #0x200
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    mov r2, r1
    cmp r0, #0x4
    bge L_020340c8
    add r0, sp, #0x200
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x1
L_020340c8:
    cmp r2, #0x0
    beq L_020340e8
    add r0, sp, #0x200
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x1
L_020340e8:
    tst r1, #0xff
    bne L_020340fc
    add r0, sp, #0x200
    mov r1, r0
    bl func_01ff84a0
L_020340fc:
    ldr r0, [sp, #0x2c]
    add r0, r0, #0x100
    ldrsb r2, [r0, #0x68]
    ldr r0, [sp, #0x2c]
    add r1, r0, #0x168
    mov r0, #0x0
    str r0, [sp, #0x24]
    bic r0, r2, #0x1
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x24]
    ldr r0, [sp, #0x2c]
    str r1, [r0, #0x4]
    ldr r0, [sp, #0x28]
    ldrh r0, [r0, #0x56]
    tst r0, #0x40
    beq L_02034174
    mov r4, r7
    mov r3, #0x6
L_02034144:
    ldr r0, [sp, #0x260]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x260]
    swpb r0, r2, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02034144
    b L_02034ed0
L_02034174:
    add r0, sp, #0x154
    bl func_0202c664
    add r0, sp, #0xf0
    bl func_0202c664
    add r9, sp, #0x50
    mov r3, r7
    mov r2, #0x6
L_02034190:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r9]
    add r9, r9, #0x1
    swpb r0, r1, [r9]
    add r9, r9, #0x1
    bne L_02034190
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x50]
    ldr r0, [r0, #0x0]
    ldr r3, [sp, #0x54]
    subs r0, r1, r0
    ldr r1, [sp, #0x20]
    str r0, [sp, #0x50]
    ldr r1, [r1, #0x4]
    ldr r2, [sp, #0x58]
    sub r1, r3, r1
    str r1, [sp, #0x54]
    ldr r1, [sp, #0x20]
    rsbmi r0, r0, #0x0
    ldr r1, [r1, #0x8]
    sub r1, r2, r1
    str r1, [sp, #0x58]
    ldr r1, [sp, #0x54]
    ldr r2, [sp, #0x58]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    add r1, r1, r2
    adds r0, r0, r1
    rsbmi r0, r0, #0x0
    cmp r0, #0x51
    movlt r0, #0x1
    movge r0, #0x0
    and r0, r0, #0xff
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_02034244
    ldr r0, [sp, #0x28]
    ldrh r0, [r0, #0x56]
    tst r0, #0x100
    bne L_02034ed0
L_02034244:
    add r0, sp, #0x68
    add r9, sp, #0xa4
    str r0, [sp, #0x8]
L_02034250:
    add r0, sp, #0x154
    mov r1, r7
    bl func_0202e19c
    ldr r1, [sp, #0x20]
    add r0, sp, #0xf0
    bl func_0202e19c
    ldr r1, [sp, #0x4]
    mov r0, r10
    add r2, sp, #0x154
    add r3, sp, #0xf0
    bl func_02033dd8
    cmp r0, #0x0
    bgt L_020342bc
    mov r4, r7
    mov r3, #0x6
L_0203428c:
    ldr r0, [sp, #0x20]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x20]
    swpb r0, r2, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203428c
    b L_02034ed0
L_020342bc:
    ldr r0, [sp, #0x2c]
    add r1, r10, #0x4
    add r2, r0, #0xc
    mov r0, #0x6
L_020342cc:
    ldrb r3, [r1, #0x0]
    ldrb r11, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r11, [r2]
    add r2, r2, #0x1
    bne L_020342cc
    add r2, r10, #0x4
    add r1, sp, #0x1b8
    mov r0, #0x6
L_020342fc:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_020342fc
    ldr r0, [sp, #0x260]
    ldr r3, [r0, #0x0]
    add r0, sp, #0x20c
    ldmia r0, {r1, r2}
    sub r0, r3, r1
    str r0, [r6, #0x0]
    ldr r0, [sp, #0x260]
    ldr r3, [r0, #0x4]
    add r0, sp, #0x20c
    ldr r1, [r0, #0x8]
    sub r0, r3, r2
    str r0, [r6, #0x4]
    ldr r0, [sp, #0x260]
    ldr r2, [r0, #0x8]
    mov r0, r6
    sub r1, r2, r1
    str r1, [r6, #0x8]
    bl func_01ff8668
    mov r11, r0
    ldr r0, [sp, #0x2c]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x68]
    tst r0, #0x1
    bne L_020344c0
    cmp r11, #0x0
    beq L_020344c0
    bic r2, r0, #0x2
    ldr r0, [sp, #0x2c]
    add r1, r0, #0x168
    swpb r0, r2, [r1]
    add r1, sp, #0x1b8
    mov r0, r6
    bl VEC_DotProduct
    mov r1, r11
    bl FX_Div
    ldr r1, =0xfffff4cd
    cmp r0, r1
    bge L_020344c0
    ldr r0, [sp, #0x28]
    ldr r3, [r0, #0x58]
    add r0, sp, #0x20c
    ldmia r0, {r1, r2}
    sub r1, r3, r1
    add r0, sp, #0x1dc
    str r1, [r0, #0x0]
    ldr r0, [sp, #0x28]
    ldr r3, [r0, #0x5c]
    add r0, sp, #0x20c
    ldr r1, [r0, #0x8]
    sub r2, r3, r2
    add r0, sp, #0x1dc
    str r2, [r0, #0x4]
    ldr r0, [sp, #0x28]
    ldr r2, [r0, #0x60]
    ldr r0, [r6, #0x0]
    sub r1, r2, r1
    str r0, [sp, #0x1c]
    add r0, sp, #0x1dc
    str r1, [r0, #0x8]
    mov r0, r11
    bl FX_Inv
    ldr r1, [sp, #0x1c]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r6, #0x4]
    str r1, [r6, #0x0]
    str r0, [sp, #0x18]
    mov r0, r11
    bl FX_Inv
    ldr r1, [sp, #0x18]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r11
    ldr r11, [r6, #0x8]
    str r1, [r6, #0x4]
    bl FX_Inv
    smull r2, r1, r0, r11
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, sp, #0x1dc
    str r1, [r6, #0x8]
    mov r1, r0
    bl func_01ff84a0
    mov r0, r6
    add r1, sp, #0x1dc
    bl VEC_DotProduct
    ldr r1, =0xb33
    cmp r0, r1
    ble L_020344c0
    ldr r0, [sp, #0x2c]
    add r0, r0, #0x100
    ldrsb r2, [r0, #0x68]
    ldr r0, [sp, #0x2c]
    add r1, r0, #0x168
    orr r0, r2, #0x2
    swpb r0, r0, [r1]
L_020344c0:
    ldr r0, [sp, #0x2c]
    mov r2, #0x4
    add r1, r0, #0x168
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x68]
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x2c]
    str r2, [r0, #0x4]
    ldr r0, [r10, #0x0]
    cmp r0, #0x0
    bge L_020345e4
    ldrsb r2, [r1, #0x0]
    add r0, r10, #0x30
    orr r2, r2, #0x1
    swpb r2, r2, [r1]
    bl func_01ff8668
    mov r4, r0
    ldr r9, [r10, #0x30]
    bl FX_Inv
    str r0, [sp, #0x30]
    mov r0, r4
    ldr r5, [r10, #0x34]
    bl FX_Inv
    str r0, [sp, #0x34]
    mov r0, r4
    ldr r8, [r10, #0x38]
    bl FX_Inv
    ldr r1, [sp, #0x30]
    smull r11, r9, r1, r9
    ldr r1, [sp, #0x34]
    smull r5, r3, r1, r5
    smull r2, r1, r0, r8
    add r8, r4, #0x51
    adds r4, r11, #0x800
    adc r0, r9, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    smull r4, r0, r8, r4
    adds r4, r4, #0x800
    adc r0, r0, #0x0
    mov r4, r4, lsr #0xc
    adds r5, r5, #0x800
    orr r4, r4, r0, lsl #0x14
    adc r0, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    smull r3, r0, r8, r3
    adds r5, r3, #0x800
    adc r3, r0, #0x0
    adds r2, r2, #0x800
    mov r0, r5, lsr #0xc
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    smull r2, r1, r8, r2
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    ldr r1, [sp, #0x20]
    orr r0, r0, r3, lsl #0x14
    ldr r3, [r1, #0x0]
    ldr r1, [r1, #0x4]
    add r3, r4, r3
    add r0, r0, r1
    str r0, [r7, #0x4]
    ldr r0, [sp, #0x20]
    str r3, [r7, #0x0]
    ldr r0, [r0, #0x8]
    add r0, r2, r0
    str r0, [r7, #0x8]
    b L_02034ed0
L_020345e4:
    ldr r0, [sp, #0x20]
    ldr r1, [r7, #0x0]
    ldmia r0, {r2, r3}
    sub r2, r2, r1
    add r0, sp, #0x218
    str r2, [r0, #0x0]
    ldr r0, [r7, #0x4]
    ldr r11, [sp, #0x20]
    sub lr, r3, r0
    add r3, sp, #0x218
    str lr, [r3, #0x4]
    ldr r3, [r7, #0x8]
    ldr ip, [r11, #0x8]
    str r3, [sp, #0x3c]
    ldr r11, [sp, #0x3c]
    mov r3, #0x0
    sub ip, ip, r11
    add r11, sp, #0x218
    str ip, [r11, #0x8]
    ldr r11, [r10, #0x0]
    str ip, [sp, #0x38]
    smull ip, r2, r11, r2
    adds r11, ip, #0x800
    adc r2, r2, #0x0
    mov r11, r11, lsr #0xc
    orr r11, r11, r2, lsl #0x14
    add r2, sp, #0x218
    str r11, [r2, #0x0]
    ldr r2, [r10, #0x0]
    add r1, r11, r1
    smull ip, r11, r2, lr
    adds r2, ip, #0x800
    adc r11, r11, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r11, lsl #0x14
    add r11, sp, #0x218
    add r0, r2, r0
    str r2, [r11, #0x4]
    ldr r2, [r10, #0x0]
    str r1, [r11, #0x0]
    mov r1, r11
    str r0, [r1, #0x4]
    ldr r0, [sp, #0x38]
    smull r1, r0, r2, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x3c]
    cmp r4, #0x0
    add r1, r1, r0
    mov r0, r11
    str r1, [r0, #0x8]
    bls L_02034708
    add r0, sp, #0x1b8
    add r1, sp, #0x1b8
    ldr r11, [r0, #0x0]
    ldr r0, [r0, #0x8]
    ldr r1, [r1, #0x4]
    add r2, sp, #0xa4
L_020346d4:
    ldr ip, [r2, #0x0]
    cmp r11, ip
    ldreq ip, [r2, #0x4]
    cmpeq r1, ip
    ldreq ip, [r2, #0x8]
    cmpeq r0, ip
    moveq r0, #0x1
    streq r0, [sp, #0x14]
    beq L_02034710
    add r2, r2, #0xc
    add r3, r3, #0x1
    cmp r3, r4
    blo L_020346d4
L_02034708:
    mov r0, #0x0
    str r0, [sp, #0x14]
L_02034710:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    bne L_02034adc
    cmp r4, #0x5
    bne L_02034758
    add r4, sp, #0x20c
    mov r3, r7
    mov r2, #0x6
L_02034730:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02034730
    b L_02034ed0
L_02034758:
    add r2, sp, #0x1b8
    mov r1, r9
    mov r0, #0x6
L_02034764:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034764
    add r0, sp, #0x218
    ldmia r0, {r2, r3}
    ldr r1, [r10, #0x10]
    add r0, sp, #0x1c4
    sub r1, r2, r1
    str r1, [r0, #0x0]
    ldr r1, [r10, #0x14]
    add r0, sp, #0x218
    ldr r2, [r0, #0x8]
    sub r1, r3, r1
    add r0, sp, #0x1c4
    str r1, [r0, #0x4]
    ldr r1, [r10, #0x18]
    add r9, r9, #0xc
    sub r2, r2, r1
    mov r1, r0
    add r4, r4, #0x1
    str r2, [r1, #0x8]
    bl func_01ff84a0
    add r0, sp, #0xe0
    add r1, sp, #0x1c4
    add r2, sp, #0x1b8
    bl func_02035a48
    ldr r1, [sp, #0xe0]
    ldr r0, =0x861
    cmp r1, r0
    bge L_02034824
    add r2, sp, #0x1b8
    add r1, sp, #0x1c4
    mov r0, #0x6
L_02034800:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034800
L_02034824:
    ldr r1, [r7, #0x0]
    add r0, sp, #0x218
    ldmia r0, {r2, r11}
    subs r0, r2, r1
    add r1, sp, #0x218
    str r0, [r6, #0x0]
    rsbmi r0, r0, #0x0
    ldr r3, [r7, #0x4]
    ldr r2, [r1, #0x8]
    sub r1, r11, r3
    str r1, [r6, #0x4]
    ldr r1, [r7, #0x8]
    mov r3, #0x0
    sub r1, r2, r1
    str r1, [r6, #0x8]
    mov r1, r3
    cmp r0, #0x4
    bge L_02034880
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x1
L_02034880:
    cmp r1, #0x0
    beq L_0203489c
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_0203489c:
    tst r3, #0xff
    bne L_020349b0
    mov r0, r6
    bl func_01ff8668
    str r0, [sp, #0x40]
    subs r11, r0, #0x51
    bpl L_020348cc
    mov r0, #0x0
    str r0, [r6, #0x0]
    str r0, [r6, #0x4]
    str r0, [r6, #0x8]
    b L_02034954
L_020348cc:
    ldr r0, [r6, #0x0]
    ldr r1, [sp, #0x40]
    str r0, [sp, #0x10]
    mov r0, r11
    bl FX_Div
    ldr r1, [sp, #0x10]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r6, #0x4]
    str r1, [r6, #0x0]
    str r0, [sp, #0xc]
    ldr r1, [sp, #0x40]
    mov r0, r11
    bl FX_Div
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x40]
    smull r3, r2, r0, r2
    adds r3, r3, #0x800
    adc r0, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    mov r0, r11
    ldr r11, [r6, #0x8]
    str r2, [r6, #0x4]
    bl FX_Div
    smull r2, r1, r0, r11
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x8]
L_02034954:
    mov r2, r7
    add r1, sp, #0x230
    mov r0, #0x6
L_02034960:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034960
    ldr r0, [r6, #0x0]
    ldmia r7, {r1, r2}
    add r0, r1, r0
    str r0, [r7, #0x0]
    ldr r0, [r6, #0x4]
    ldr r1, [r7, #0x8]
    add r0, r2, r0
    str r0, [r7, #0x4]
    ldr r0, [r6, #0x8]
    add r0, r1, r0
    str r0, [r7, #0x8]
L_020349b0:
    ldr r0, [sp, #0x260]
    ldr r1, [r0, #0x0]
    ldmia r7, {r0, r2}
    sub r0, r1, r0
    str r0, [r8, #0x0]
    ldr r0, [sp, #0x260]
    ldr r1, [r7, #0x8]
    ldr r0, [r0, #0x4]
    sub r0, r0, r2
    str r0, [r8, #0x4]
    ldr r0, [sp, #0x260]
    ldr r2, [r0, #0x8]
    mov r0, r8
    sub r1, r2, r1
    str r1, [r8, #0x8]
    mov r1, r8
    add r2, sp, #0x1c4
    bl func_020359b8
    add r0, sp, #0x200
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    mov r2, r1
    cmp r0, #0x4
    bge L_02034a30
    add r0, sp, #0x200
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x1
L_02034a30:
    cmp r2, #0x0
    beq L_02034a50
    add r0, sp, #0x200
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x1
L_02034a50:
    tst r1, #0xff
    bne L_02034adc
    ldr r2, [r8, #0x0]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_02034a88
    ldr r2, [r8, #0x4]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_02034a88:
    cmp r1, #0x0
    beq L_02034aa4
    ldr r1, [r8, #0x8]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02034aa4:
    tst r0, #0xff
    bne L_02034adc
    mov r0, r6
    mov r1, r8
    bl func_01ff84a0
    add r0, sp, #0xe0
    mov r1, r6
    add r2, sp, #0x200
    bl func_02035a48
    ldr r1, [sp, #0xe0]
    ldr r0, =0x29e3
    cmp r1, r0
    movgt r0, #0x1
    strgt r0, [sp, #0x24]
L_02034adc:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    ldreq r0, [sp, #0x14]
    cmpeq r0, #0x0
    beq L_02034dac
    cmp r4, #0x1
    bls L_02034b3c
    add r0, sp, #0x1b8
    ldr r1, [r0, #0x0]
    ldr r0, [r9, #-0xc]
    cmp r1, r0
    bne L_02034b34
    add r0, sp, #0x1b8
    ldr r1, [r0, #0x4]
    ldr r0, [r9, #-0x8]
    cmp r1, r0
    bne L_02034b34
    add r0, sp, #0x1b8
    ldr r1, [r0, #0x8]
    ldr r0, [r9, #-0x4]
    cmp r1, r0
    beq L_02034b3c
L_02034b34:
    cmp r5, #0x5
    bne L_02034b5c
L_02034b3c:
    ldr r0, [sp, #0x2c]
    add r0, r0, #0x100
    ldrsb r2, [r0, #0x68]
    ldr r0, [sp, #0x2c]
    add r1, r0, #0x168
    orr r0, r2, #0x2
    swpb r0, r0, [r1]
    b L_02034ed0
L_02034b5c:
    ldr r2, [sp, #0x260]
    mov r1, r8
    mov r0, #0x6
L_02034b68:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034b68
    ldr r0, [r7, #0x0]
    ldmia r8, {r1, r2}
    sub r0, r1, r0
    str r0, [r8, #0x0]
    ldr r0, [r7, #0x4]
    ldr r1, [r8, #0x8]
    sub r0, r2, r0
    str r0, [r8, #0x4]
    ldr r0, [r7, #0x8]
    add r2, sp, #0xa4
    sub r0, r1, r0
    str r0, [r8, #0x8]
    sub r1, r4, #0x1
    mov r0, #0xc
    mla r0, r1, r0, r2
    cmp r6, r0
    addne r0, sp, #0x1b8
    cmpne r6, r0
    ldr r0, [r9, #-0x8]
    add r1, sp, #0x1b8
    bne L_02034c6c
    add r3, sp, #0x1b8
    ldr r1, [r1, #0x8]
    ldr r2, [r9, #-0x4]
    ldr r3, [r3, #0x4]
    bl func_01ff87ec
    add r1, sp, #0x1b8
    add r3, sp, #0x1b8
    str r0, [sp, #0x5c]
    ldr r0, [r9, #-0x4]
    ldr r1, [r1, #0x0]
    ldr r2, [r9, #-0xc]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    add r1, sp, #0x1b8
    add r3, sp, #0x1b8
    str r0, [sp, #0x60]
    ldr r0, [r9, #-0xc]
    ldr r1, [r1, #0x4]
    ldr r2, [r9, #-0x8]
    ldr r3, [r3, #0x0]
    bl func_01ff87ec
    str r0, [sp, #0x64]
    add r2, sp, #0x5c
    mov r1, r6
    mov r0, #0x6
L_02034c44:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034c44
    b L_02034cc4
L_02034c6c:
    add r3, sp, #0x1b8
    ldr r1, [r1, #0x8]
    ldr r2, [r9, #-0x4]
    ldr r3, [r3, #0x4]
    bl func_01ff87ec
    add r1, sp, #0x1b8
    add r3, sp, #0x1b8
    str r0, [r6, #0x0]
    ldr r0, [r9, #-0x4]
    ldr r1, [r1, #0x0]
    ldr r2, [r9, #-0xc]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    add r1, sp, #0x1b8
    add r3, sp, #0x1b8
    str r0, [r6, #0x4]
    ldr r0, [r9, #-0xc]
    ldr r1, [r1, #0x4]
    ldr r2, [r9, #-0x8]
    ldr r3, [r3, #0x0]
    bl func_01ff87ec
    str r0, [r6, #0x8]
L_02034cc4:
    mov r0, r6
    mov r1, r6
    bl func_01ff84a0
    cmp r5, #0x0
    mov r1, #0x0
    bls L_02034d18
    ldr r3, [r6, #0x0]
    ldmib r6, {r0, ip}
    add r2, sp, #0x68
L_02034ce8:
    ldr r11, [r2, #0x0]
    cmp r3, r11
    ldreq r11, [r2, #0x4]
    cmpeq r0, r11
    ldreq r11, [r2, #0x8]
    cmpeq ip, r11
    moveq r0, #0x1
    beq L_02034d1c
    add r2, r2, #0xc
    add r1, r1, #0x1
    cmp r1, r5
    blo L_02034ce8
L_02034d18:
    mov r0, #0x0
L_02034d1c:
    cmp r0, #0x0
    bne L_02034ed0
    ldr r1, [sp, #0x8]
    mov r2, r6
    mov r0, #0x6
L_02034d30:
    ldrb r3, [r2, #0x0]
    ldrb r11, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, r11, [r1]
    add r1, r1, #0x1
    bne L_02034d30
    ldr r0, [sp, #0x8]
    mov r1, r8
    add r0, r0, #0xc
    str r0, [sp, #0x8]
    add r0, sp, #0x1dc
    mov r2, r6
    add r5, r5, #0x1
    bl func_020359b8
    add r0, sp, #0x1dc
    ldr r0, [r0, #0x0]
    ldmia r8, {r1, r2}
    sub r0, r1, r0
    str r0, [r8, #0x0]
    add r0, sp, #0x1dc
    ldr r0, [r0, #0x4]
    ldr r1, [r8, #0x8]
    sub r0, r2, r0
    str r0, [r8, #0x4]
    add r0, sp, #0x1dc
    ldr r0, [r0, #0x8]
    sub r0, r1, r0
    str r0, [r8, #0x8]
L_02034dac:
    ldr r2, [r8, #0x0]
    cmp r2, #0x0
    ldreq r0, [r8, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r8, #0x8]
    cmpeq r0, #0x0
    bne L_02034de0
    mov r1, #0x0
    add r0, sp, #0x200
    str r1, [r0, #0x0]
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    b L_02034e20
L_02034de0:
    ldmia r7, {r0, r1}
    add r2, r0, r2
    ldr r0, [sp, #0x20]
    str r2, [r0, #0x0]
    ldr r0, [r8, #0x4]
    ldr r2, [r7, #0x8]
    add r1, r1, r0
    ldr r0, [sp, #0x20]
    str r1, [r0, #0x4]
    ldr r1, [r8, #0x8]
    add r0, sp, #0x200
    add r2, r2, r1
    ldr r1, [sp, #0x20]
    str r2, [r1, #0x8]
    mov r1, r8
    bl func_01ff84a0
L_02034e20:
    add r2, sp, #0x44
    mov r1, r7
    mov r0, #0x6
L_02034e2c:
    ldrb r3, [r1, #0x0]
    ldrb r11, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r11, [r2]
    add r2, r2, #0x1
    bne L_02034e2c
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x44]
    ldr r0, [r0, #0x0]
    ldr r3, [sp, #0x48]
    subs r0, r1, r0
    ldr r1, [sp, #0x20]
    str r0, [sp, #0x44]
    ldr r1, [r1, #0x4]
    ldr r2, [sp, #0x4c]
    sub r1, r3, r1
    str r1, [sp, #0x48]
    ldr r1, [sp, #0x20]
    rsbmi r0, r0, #0x0
    ldr r1, [r1, #0x8]
    sub r1, r2, r1
    str r1, [sp, #0x4c]
    ldr r1, [sp, #0x48]
    ldr r2, [sp, #0x4c]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    add r1, r1, r2
    adds r0, r0, r1
    rsbmi r0, r0, #0x0
    cmp r0, #0x51
    movlt r0, #0x1
    movge r0, #0x0
    and r0, r0, #0xff
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    beq L_02034250
L_02034ed0:
    add r0, sp, #0x20c
    ldr r2, [r0, #0x0]
    ldr r3, [r7, #0x0]
    ldr r1, [r7, #0x4]
    sub r4, r3, r2
    ldr r0, [r0, #0x4]
    mov r3, r6
    sub r2, r1, r0
    add r0, sp, #0x20c
    str r2, [r6, #0x4]
    ldr r1, [r7, #0x8]
    ldr r0, [r0, #0x8]
    str r4, [r6, #0x0]
    sub r0, r1, r0
    str r0, [r6, #0x8]
    ldr r0, [sp, #0x2c]
    mov r2, #0x6
    add r4, r0, #0xf8
L_02034f18:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02034f18
    ldr r0, [sp, #0x28]
    mov r4, #0x0
    ldr r1, [r0, #0x58]
    add r0, sp, #0x20c
    ldr r0, [r0, #0x0]
    subs r0, r1, r0
    str r0, [r6, #0x0]
    ldr r1, [sp, #0x28]
    rsbmi r0, r0, #0x0
    ldr r5, [r1, #0x5c]
    add r1, sp, #0x20c
    ldr r3, [r1, #0x4]
    ldr r2, [r1, #0x8]
    sub r1, r5, r3
    str r1, [r6, #0x4]
    ldr r1, [sp, #0x28]
    mov r3, r4
    ldr r1, [r1, #0x60]
    cmp r0, #0x4
    sub r1, r1, r2
    mov r2, r4
    str r1, [r6, #0x8]
    bge L_02034fac
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x1
L_02034fac:
    cmp r2, #0x0
    beq L_02034fc8
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_02034fc8:
    tst r3, #0xff
    bne L_02035094
    mov r0, r6
    mov r1, r6
    bl func_01ff84a0
    ldr r0, [sp, #0x28]
    ldr r1, [r0, #0x58]
    ldmia r7, {r0, r2}
    subs r1, r1, r0
    add r0, sp, #0x1dc
    str r1, [r0, #0x0]
    ldr r0, [sp, #0x28]
    rsbmi r1, r1, #0x0
    ldr r3, [r0, #0x5c]
    mov r0, #0x0
    sub r3, r3, r2
    add r2, sp, #0x1dc
    str r3, [r2, #0x4]
    ldr r2, [sp, #0x28]
    mov r5, r0
    ldr r3, [r2, #0x60]
    ldr r2, [r7, #0x8]
    cmp r1, #0x4
    sub r3, r3, r2
    add r2, sp, #0x1dc
    str r3, [r2, #0x8]
    bge L_0203504c
    add r1, sp, #0x1dc
    ldr r1, [r1, #0x4]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r5, #0x1
L_0203504c:
    cmp r5, #0x0
    beq L_0203506c
    add r1, sp, #0x1dc
    ldr r1, [r1, #0x8]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_0203506c:
    tst r0, #0xff
    bne L_02035094
    add r0, sp, #0x1dc
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0xe0
    mov r1, r6
    add r2, sp, #0x1dc
    bl func_02035a48
    ldr r4, [sp, #0xe0]
L_02035094:
    ldr r0, [sp, #0x0]
    ldr r3, [sp, #0x264]
    str r4, [r0, #0xc]
    mov r2, #0x6
L_020350a4:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020350a4
    mov r0, r10
    add sp, sp, #0x23c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
