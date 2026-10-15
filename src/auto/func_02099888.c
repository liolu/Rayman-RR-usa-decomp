#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_01ff8878();
extern void func_01ff88b4();
extern void _fdiv();
extern void func_0200a3b8();
extern void func_0200a474();
extern void func_0200a4bc();
extern void func_0200eb98();
extern void FX_Inv();
extern void FX_Div();
extern void func_0202c700();
extern void func_0202e258();
extern void func_0208429c();
extern void func_02084450();
extern char data_020dc19c[];
// clang-format off
asm void func_02099888(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x88
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r8, r0
    mov r4, r2
    bl func_02084450
    mov r5, r0
    cmp r6, #0x40
    bgt L_020998b8
    beq L_0209a15c
    b L_0209a354
L_020998b8:
    sub r0, r6, #0x73
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0209a354
L_020998c8:
    b L_02099fb8
    b L_02099cb0
    b L_02099cb0
    b L_0209a078
    b L_0209a13c
    b L_020998e0
L_020998e0:
    add r3, sp, #0x7c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_02084450
    ldr r2, [r4, #0xc]
    mov r1, r0
    cmp r2, #0x8
    ldreq r7, [r4, #0x0]
    ldrne r0, [r4, #0x0]
    movne r7, r0, lsl #0xc
    cmp r7, #0x0
    beq L_02099c60
    mov r0, r8
    mov r2, r4
    bl func_02084450
    ldr r1, =0x8efa35
    mov r6, #0x0
    umull r5, r3, r7, r1
    mla r3, r7, r6, r3
    mov r2, r7, asr #0x1f
    mla r3, r2, r1, r3
    mov r1, r5, lsr #0x1c
    orr r1, r1, r3, lsl #0x4
    adds r2, r1, #0x1
    adc r1, r6, r3, asr #0x1c
    mov r2, r2, lsr #0x1
    orr r2, r2, r1, lsl #0x1f
    mov r1, #0x1
    subs r3, r1, r2
    sbc r1, r6, r2, asr #0x1f
    mov r1, r1, lsl #0xb
    mov r2, r3, lsl #0xb
    orr r1, r1, r3, lsr #0x15
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    mov r5, r0
    ldr r7, [r4, #0x0]
    mov r0, r6
    bl func_01ff8878
    smull r2, r1, r0, r7
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x0]
    ldr r7, [r4, #0x4]
    mov r0, r6
    bl func_01ff8878
    smull r2, r1, r0, r7
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x4]
    ldr r7, [r4, #0x8]
    mov r0, r6
    bl func_01ff8878
    smull r2, r1, r0, r7
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x8]
    mov r0, r6
    bl func_01ff88b4
    str r0, [sp, #0x0]
    add r0, sp, #0x58
    ldmia r4, {r1, r2, r3}
    bl func_0202e258
    add r0, sp, #0x7c
    cmp r0, r4
    bne L_02099b3c
    add r3, sp, #0x4c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r3, [sp, #0x70]
    ldr r2, [sp, #0x54]
    ldr r1, [sp, #0x58]
    smull r2, r8, r3, r2
    ldr r0, [sp, #0x4c]
    adds r9, r2, #0x800
    smull r6, r7, r1, r0
    adc r0, r8, #0x0
    adds r8, r6, #0x800
    mov r1, r9, lsr #0xc
    ldr r3, [sp, #0x64]
    ldr r2, [sp, #0x50]
    adc r7, r7, #0x0
    smull r6, r2, r3, r2
    adds r3, r6, #0x800
    mov r6, r8, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x0]
    ldr r3, [sp, #0x74]
    ldr r2, [sp, #0x54]
    ldr r1, [sp, #0x5c]
    smull r2, r8, r3, r2
    ldr r0, [sp, #0x4c]
    adds r9, r2, #0x800
    smull r6, r7, r1, r0
    adc r0, r8, #0x0
    adds r8, r6, #0x800
    mov r1, r9, lsr #0xc
    ldr r3, [sp, #0x68]
    ldr r2, [sp, #0x50]
    adc r7, r7, #0x0
    smull r6, r2, r3, r2
    adds r3, r6, #0x800
    mov r6, r8, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x4]
    ldr r1, [sp, #0x78]
    ldr r0, [sp, #0x54]
    ldr r3, [sp, #0x60]
    smull r0, r8, r1, r0
    ldr r2, [sp, #0x4c]
    adds r9, r0, #0x800
    ldr r1, [sp, #0x6c]
    ldr r0, [sp, #0x50]
    smull r7, r6, r3, r2
    smull r3, r2, r1, r0
    adc r1, r8, #0x0
    mov r0, r9, lsr #0xc
    adds r7, r7, #0x800
    orr r0, r0, r1, lsl #0x14
    adc r1, r6, #0x0
    mov r6, r7, lsr #0xc
    adds r3, r3, #0x800
    orr r6, r6, r1, lsl #0x14
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r2
    add r0, r0, r1
    str r0, [r4, #0x8]
    b L_02099ca4
L_02099b3c:
    ldr r3, [sp, #0x70]
    ldr r2, [sp, #0x84]
    ldr r1, [sp, #0x58]
    ldr r0, [sp, #0x7c]
    smull r2, r8, r3, r2
    adds r9, r2, #0x800
    ldr r3, [sp, #0x64]
    ldr r2, [sp, #0x80]
    smull r6, r7, r1, r0
    adc r0, r8, #0x0
    adds r8, r6, #0x800
    mov r1, r9, lsr #0xc
    smull r6, r2, r3, r2
    adc r7, r7, #0x0
    adds r3, r6, #0x800
    mov r6, r8, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x0]
    ldr r3, [sp, #0x74]
    ldr r2, [sp, #0x84]
    ldr r1, [sp, #0x5c]
    ldr r0, [sp, #0x7c]
    smull r2, r8, r3, r2
    adds r9, r2, #0x800
    ldr r3, [sp, #0x68]
    ldr r2, [sp, #0x80]
    smull r6, r7, r1, r0
    adc r0, r8, #0x0
    adds r8, r6, #0x800
    mov r1, r9, lsr #0xc
    smull r6, r2, r3, r2
    adc r7, r7, #0x0
    adds r3, r6, #0x800
    mov r6, r8, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x4]
    ldr r1, [sp, #0x78]
    ldr r0, [sp, #0x84]
    ldr r3, [sp, #0x60]
    ldr r2, [sp, #0x7c]
    smull r0, r8, r1, r0
    adds r9, r0, #0x800
    ldr r1, [sp, #0x6c]
    ldr r0, [sp, #0x80]
    smull r7, r6, r3, r2
    smull r3, r2, r1, r0
    adc r1, r8, #0x0
    mov r0, r9, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    adds r7, r7, #0x800
    adc r1, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    adds r3, r3, #0x800
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r6, r2
    add r0, r0, r1
    str r0, [r4, #0x8]
    b L_02099ca4
L_02099c60:
    mov r0, r1
    bl func_0208429c
    add r6, sp, #0x7c
    mov r5, r0
    mov r3, r4
    mov r2, #0x6
L_02099c78:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02099c78
    mov r0, #0x15
    str r0, [r4, #0xc]
L_02099ca4:
    add sp, sp, #0x88
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02099cb0:
    add r3, sp, #0x40
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_02084450
    ldr r2, [r4, #0xc]
    mov r1, r0
    cmp r2, #0x8
    ldreq r7, [r4, #0x0]
    ldrne r0, [r4, #0x0]
    mov r2, r4
    movne r7, r0, lsl #0xc
    mov r0, r8
    bl func_02084450
    mov r5, r0
    add r3, sp, #0x34
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    cmp r7, #0x0
    blt L_02099d10
    cmp r7, #0x1000
    ble L_02099d20
L_02099d10:
    cmp r7, #0x0
    movlt r7, #0x0
    cmp r7, #0x1000
    movgt r7, #0x1000
L_02099d20:
    cmp r6, #0x74
    cmpne r7, #0x0
    beq L_02099f34
    ldr r2, =data_020dc19c
    mov r1, #0x0
    ldr r3, [r2, #0xc4]
    mov r0, #0x3e8000
    umull r8, r6, r3, r0
    mla r6, r3, r1, r6
    mov r1, r3, asr #0x1f
    adds r3, r8, #0x800
    mla r6, r1, r0, r6
    ldr r0, [r2, #0xbc]
    adc r2, r6, #0x0
    mov r1, r3, lsr #0xc
    mov r0, r0, lsl #0xc
    orr r1, r1, r2, lsl #0x14
    bl FX_Div
    add r0, r0, #0x800
    mov r6, r0, asr #0xc
    cmp r6, #0x1
    blt L_02099d80
    cmp r6, #0x8
    ble L_02099d84
L_02099d80:
    bl func_0200eb98
L_02099d84:
    cmp r6, #0x7
    addls pc, pc, r6, lsl #0x2
    b L_02099ef8
L_02099d90:
    b L_02099ef8
    b L_02099db0
    b L_02099db4
    b L_02099dcc
    b L_02099df8
    b L_02099e24
    b L_02099e64
    b L_02099ea4
L_02099db0:
    b L_02099f34
L_02099db4:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099dcc:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r7
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099df8:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r1, r0, r2, r2
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099e24:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r1, r0, r2, r2
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r7
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099e64:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r7
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r1, r0, r2, r2
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099ea4:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r7
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r1, r0, r2, r2
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r7
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    b L_02099f34
L_02099ef8:
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r1, r0, r2, r2
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r2
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
L_02099f34:
    ldr r3, [sp, #0x34]
    ldr r1, [sp, #0x40]
    mov r0, r5
    sub r1, r1, r3
    smull r2, r1, r7, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [r4, #0x0]
    ldr r3, [sp, #0x38]
    ldr r1, [sp, #0x44]
    sub r1, r1, r3
    smull r2, r1, r7, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [r4, #0x4]
    ldr r3, [sp, #0x3c]
    ldr r1, [sp, #0x48]
    add sp, sp, #0x88
    sub r1, r1, r3
    smull r2, r1, r7, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [r4, #0x8]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02099fb8:
    add r3, sp, #0x28
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_02084450
    ldr r1, [r4, #0x0]
    mov r5, r0
    cmp r1, #0x0
    ldreq r0, [r4, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r4, #0x8]
    cmpeq r0, #0x0
    addeq r0, sp, #0x28
    ldmeqia r0, {r0, r1, r2}
    stmeqia r4, {r0, r1, r2}
    beq L_0209a06c
    mov r0, r4
    mov r1, r4
    bl func_01ff84a0
    add r1, sp, #0x28
    mov r0, r4
    bl VEC_DotProduct
    ldr r1, [r4, #0x0]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r4, #0x0]
    ldr r1, [r4, #0x4]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r4, #0x4]
    ldr r1, [r4, #0x8]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0x8]
L_0209a06c:
    add sp, sp, #0x88
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0209a078:
    add r3, sp, #0x1c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_02084450
    ldr r1, [r4, #0xc]
    ldr r5, [sp, #0x1c]
    cmp r1, #0x8
    ldreq r2, [r4, #0x0]
    ldrne r1, [r4, #0x0]
    ldr r3, [sp, #0x24]
    movne r2, r1, lsl #0xc
    smull r6, r5, r2, r5
    adds r8, r6, #0x800
    ldr r1, [sp, #0x20]
    adc r5, r5, #0x0
    smull r1, r6, r2, r1
    adds r7, r1, #0x800
    mov r1, r8, lsr #0xc
    orr r1, r1, r5, lsl #0x14
    smull r5, r3, r2, r3
    adc r2, r6, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r2, lsl #0x14
    adds r5, r5, #0x800
    adc r2, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [sp, #0x24]
    add r6, sp, #0x1c
    mov r5, r4
    str r1, [sp, #0x1c]
    str r7, [sp, #0x20]
    mov r3, #0x6
L_0209a108:
    ldrb r1, [r6, #0x0]
    ldrb r2, [r6, #0x1]
    add r6, r6, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_0209a108
    mov r1, #0x15
    add sp, sp, #0x88
    str r1, [r4, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0209a13c:
    mov r0, r4
    bl func_01ff8668
    str r0, [r4, #0x0]
    mov r1, #0x8
    add sp, sp, #0x88
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0209a15c:
    ldr r0, =data_020dc19c
    mvn r1, #0x0
    ldr r0, [r0, #0x12c]
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r7, [r0, #0x0]
    add r0, sp, #0x4
    mov r2, r4
    add r1, r7, #0xc
    bl func_0202c700
    ldr r0, [sp, #0xc]
    ldr r1, [r7, #0x78]
    cmp r0, r1
    blt L_0209a310
    bl FX_Inv
    ldr r1, =data_020dc19c
    ldr r2, [r7, #0x80]
    ldr r10, [r1, #0xd0]
    smull r0, r6, r2, r0
    adds ip, r0, #0x800
    mov r3, r10, lsl #0xc
    mov r0, r3, asr #0x1f
    mov r8, r0, lsl #0xb
    ldr r0, [sp, #0x8]
    ldr r2, [r7, #0x88]
    ldr r9, [r1, #0xd4]
    smull r2, r1, r0, r2
    orr r8, r8, r3, lsr #0x15
    adc r0, r6, #0x0
    mov r6, ip, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    mov r0, #0x800
    adds r0, r0, r3, lsl #0xb
    adc r3, r8, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    smull r3, r1, r2, r6
    adds r2, r3, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r8, r0, r2
    mov r0, r9
    bl func_0200a474
    mov r1, r0
    ldr r0, =0x447a0000
    bl _fdiv
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    mov r3, r9, lsl #0xc
    ldr r2, [r7, #0x84]
    mov r1, r3, asr #0x1f
    mov r7, r1, lsl #0xb
    orr r7, r7, r3, lsr #0x15
    mov r1, #0x800
    adds r1, r1, r3, lsl #0xb
    adc r3, r7, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r3, lsl #0x14
    ldr r3, [sp, #0x4]
    smull r7, r2, r3, r2
    adds r3, r7, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    smull r6, r2, r3, r6
    adds r3, r6, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r1, r1, r3
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x10]
    mov r0, r10
    bl func_0200a474
    mov r1, r0
    ldr r0, =0x447a0000
    bl _fdiv
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    smull r1, r0, r8, r0
    adds r2, r1, #0x800
    adc r1, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    ldr r0, [sp, #0x10]
    str r2, [sp, #0x14]
    cmp r0, #0x3e8000
    movgt r0, #0x3e8000
    strgt r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, #0x0
    cmp r0, #0x3e8000
    movgt r0, #0x3e8000
    str r1, [sp, #0x18]
    strgt r0, [sp, #0x14]
L_0209a310:
    add r6, sp, #0x10
    mov r3, r4
    mov r2, #0x6
L_0209a31c:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0209a31c
    mov r1, #0x15
    add sp, sp, #0x88
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0209a354:
    mov r0, r5
    add sp, sp, #0x88
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
