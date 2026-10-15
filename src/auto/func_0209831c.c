#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff87a0();
extern void func_020148a4();
extern void FX_Div();
extern void func_02067900();
extern void func_02084450();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_0209831c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x44
    mov r6, r1
    mov r4, r0
    ldr r0, [r6, #-0x8]
    mov r5, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    mov r3, #0x0
    add r2, sp, #0x34
    mov r0, r4
    mov r1, r6
    str r3, [sp, #0x4]
    str r3, [sp, #0x8]
    str r3, [sp, #0xc]
    bl func_02084450
    add r6, sp, #0x34
    mov r7, r0
    add r3, sp, #0x28
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r7
    mov r2, r6
    mov r0, r4
    bl func_02084450
    mov r7, r0
    add r3, sp, #0x1c
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r7
    mov r2, r6
    bl func_02084450
    mov r4, r0
    ldr r0, [sp, #0x40]
    mov r2, #0x6
    cmp r0, #0x8
    ldreq r0, [sp, #0x34]
    ldrne r0, [sp, #0x34]
    movne r0, r0, lsl #0xc
    cmp r0, #0x0
    bge L_0209840c
    add r6, sp, #0x4
    mov r3, r5
L_020983d4:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020983d4
    mov r1, #0x15
    add sp, sp, #0x44
    mov r0, r4
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_0209840c:
    ldr r8, [sp, #0x24]
    ldr r9, [sp, #0x30]
    add r7, r0, r8
    cmp r7, r9
    addlt r7, r0, r9
    mov r0, #0x0
    add r6, sp, #0x10
    mov r3, r5
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
L_02098444:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02098444
    mov r0, #0x15
    str r0, [r5, #0xc]
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    bne L_020984c8
    add r6, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_02098490:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02098490
    mov r1, #0x15
    add sp, sp, #0x44
    mov r0, r4
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_020984c8:
    bl func_02067900
    cmp r0, #0x0
    bne L_02098518
    add r6, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_020984e0:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020984e0
    mov r1, #0x15
    add sp, sp, #0x44
    mov r0, r4
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_02098518:
    ldr r6, [r0, #0x10]
    cmp r6, #0x0
    bne L_02098568
    add r6, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_02098530:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02098530
    mov r1, #0x15
    add sp, sp, #0x44
    mov r0, r4
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_02098568:
    sub r1, r7, r9
    mov r0, r1, asr #0x1f
    mov r2, r0, lsl #0xd
    mov r0, #0x800
    adds r3, r0, r1, lsl #0xd
    orr r2, r2, r1, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r2, r0, r1, r6
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020148a4
    mov r7, r0
    mov r0, #0x1
    subs r1, r0, r6
    mov r0, #0x0
    sbc r0, r0, r6, asr #0x1f
    mov r0, r0, lsl #0xb
    mov r3, r1, lsl #0xb
    sub r2, r9, r8
    orr r0, r0, r1, lsr #0x15
    mov r6, r3, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    mov r0, r6
    str r7, [sp, #0x18]
    mov r1, r7
    bl func_01ff87a0
    cmp r0, #0x0
    bge L_0209862c
    add r6, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_020985f4:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020985f4
    mov r1, #0x15
    add sp, sp, #0x44
    mov r0, r4
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_0209862c:
    bl func_020148a4
    mov r1, r6, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r6, lsl #0xd
    orr r2, r2, r6, lsr #0x13
    rsb r3, r7, #0x0
    adc r2, r2, #0x0
    mov r1, r1, lsr #0xc
    sub r0, r3, r0
    orr r1, r1, r2, lsl #0x14
    bl FX_Div
    mov r6, r0
    ldr r2, [sp, #0x1c]
    ldr r0, [sp, #0x28]
    mov r1, r6
    sub r0, r2, r0
    bl FX_Div
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x2c]
    str r0, [sp, #0x10]
    mov r1, r6
    sub r0, r3, r2
    bl FX_Div
    add r6, sp, #0x10
    mov r3, r5
    str r0, [sp, #0x14]
    mov r2, #0x6
L_0209869c:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0209869c
    mov r1, #0x15
    mov r0, r4
    str r1, [r5, #0xc]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
