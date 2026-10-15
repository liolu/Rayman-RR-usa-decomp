#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8878();
extern void func_020148a4();
extern void FX_Div();
extern void G3i_OrthoW_();
extern void func_0204d0b8();
extern char data_020dba38[];
extern char data_020dba39[];
extern char data_020dba58[];
extern char data_020dba5c[];
extern char data_020dba6c[];
extern char data_020e4f30[];
// clang-format off
asm void func_0204ff98(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldr r9, =data_020dba38
    mov r4, #0x1
    mov r10, r0
    swpb r0, r4, [r9]
    ldr r8, =data_020dba39
    ldr r7, =data_020dba58
    mov r5, r2
    swpb r0, r4, [r8]
    mov r2, #0x0
    swpb r0, r2, [r7]
    mov r6, r1
    str r4, [sp, #0x0]
    mov r1, r3
    str r4, [sp, #0x4]
    mov r0, r5
    mov r3, r2
    str r4, [sp, #0x8]
    bl func_0204d0b8
    ldr r0, =data_020e4f30
    str r5, [r0, #0x0]
    ldr r0, [r10, #0x0]
    ldr r5, [r10, #0x4]
    smull r1, r2, r0, r0
    adds r3, r1, #0x800
    str r0, [sp, #0x14]
    smull r1, r0, r5, r5
    adc r2, r2, #0x0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    bl func_020148a4
    ldr r2, =data_020dba6c
    add r7, r0, r0
    ldr r1, =0x1f20c0
    ldr r3, [r2, #0x54]
    ldr r0, =0x40004a4
    orr r1, r1, r3, lsl #0x18
    str r1, [r0, #0x0]
    add r0, r3, #0x1
    str r0, [r2, #0x54]
    cmp r0, #0x3f
    movgt r0, #0x0
    strgt r0, [r2, #0x54]
    mov r0, #0x0
    ldr r1, =0x4000440
    mov r2, r0
    str r0, [r1, #0x0]
    str r0, [r1, #0x14]
    sub r1, r0, #0x1000
    str r1, [sp, #0x0]
    mov r1, #0x1000
    str r1, [sp, #0x4]
    str r1, [sp, #0x8]
    mov r1, #0x1
    str r1, [sp, #0xc]
    mov r1, #0xc0000
    mov r3, #0x100000
    str r0, [sp, #0x10]
    bl G3i_OrthoW_
    ldr r3, =0x4000440
    mov r0, #0x1
    str r0, [r3, #0x0]
    mov r1, #0x0
    str r1, [r3, #0x14]
    mov r2, #0x3
    ldr r0, =0x1922
    mov r1, r6, lsl #0xc
    str r2, [r3, #0xc0]
    bl FX_Div
    sub r1, r6, #0x1
    str r0, [sp, #0x1c]
    mov r0, r1
    cmp r0, #0x1
    ldr r0, =0x1922
    str r1, [sp, #0x20]
    str r0, [sp, #0x18]
    mov r8, #0x1
    bls L_02050380
    ldr r4, =0x4000454
    mov r9, #0x2
    mov r11, #0x0
L_020500f4:
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    sub r0, r1, r0
    str r0, [sp, #0x18]
    bl func_01ff8878
    mov r6, r0
    add r0, r10, r9, lsl #0x2
    ldr r0, [r0, #0x4]
    ldr r1, [r10, r9, lsl #0x2]
    sub r5, r5, r0
    ldr r0, [sp, #0x14]
    sub r0, r0, r1
    smull r2, r1, r0, r0
    str r0, [sp, #0x24]
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r1, r1, r0
    mov r0, r2, lsr #0xc
    smull r3, r2, r5, r5
    adds r3, r3, #0x800
    orr r0, r0, r1, lsl #0x14
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    bl func_020148a4
    mov r1, r0
    mov r0, r6, asr #0x1f
    mov r2, r0, lsl #0xe
    mov r0, #0x800
    adds r3, r0, r6, lsl #0xe
    orr r2, r2, r6, lsr #0x12
    mov r0, #0x0
    adc r2, r2, r0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl FX_Div
    ldr r1, [sp, #0x24]
    smull r6, r3, r1, r0
    smull r2, r1, r5, r0
    mov r0, #0x800
    adds r5, r6, r0
    mov r0, #0x0
    adc r3, r3, r0
    mov r0, r5, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    adds r3, r2, #0x800
    adc r1, r1, #0x0
    mov r6, r3, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    cmp r8, #0x1
    bne L_0205027c
    str r11, [r4, #0x0]
    ldmia r10, {r2, r3}
    str r2, [r4, #0x1c]
    mov r1, r7, lsl #0x8
    rsb r2, r0, #0x0
    mov r1, r1, asr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    str r3, [r4, #0x1c]
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r6, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r1, r1, asr #0x10
    mov r2, r2, lsr #0x10
    str r11, [r4, #0x1c]
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    str r3, [r4, #0x34]
    orr r1, r2, r1, lsr #0x10
    str r1, [r4, #0x38]
    ldr r1, =data_020dba5c
    str r11, [r4, #0x38]
    ldr r2, [r1, #0x0]
    rsb r1, r6, #0x0
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    ldrb r2, [r2, #0xc]
    mov r5, #0x1000
    mov r1, r1, lsl #0x10
    mov r2, r5, lsl r2
    mov r2, r2, lsl #0x8
    mov r2, r2, asr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    orr r2, r3, r2, lsl #0x10
    str r2, [r4, #0x34]
    mov r2, r0, lsl #0x10
    mov r2, r2, asr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    orr r1, r2, r1, lsr #0x10
    str r1, [r4, #0x38]
    str r11, [r4, #0x38]
L_0205027c:
    ldr r1, =data_020dba5c
    add r5, r10, r9, lsl #0x2
    ldr r1, [r1, #0x0]
    add r8, r8, #0x1
    ldrb r3, [r1, #0xd]
    mov r1, r6, lsl #0x10
    mov r2, r1, asr #0x10
    mov r3, r3, lsr #0x1
    mov r1, #0x1000
    add r7, r7, r1, lsl r3
    mov r3, #0x0
    str r3, [r4, #0x0]
    mov r1, r2, lsl #0x10
    rsb r2, r6, #0x0
    ldr ip, [r5, #0x4]
    ldr r6, [r10, r9, lsl #0x2]
    mov r3, r7, lsl #0x8
    str r6, [r4, #0x1c]
    mov r3, r3, asr #0x10
    mov r3, r3, lsl #0x10
    str ip, [r4, #0x1c]
    mov r6, #0x0
    str r6, [r4, #0x1c]
    rsb r6, r0, #0x0
    mov r6, r6, lsl #0x10
    mov r6, r6, asr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r2, r2, asr #0x10
    mov r0, r0, lsr #0x10
    str r3, [r4, #0x34]
    orr r1, r6, r1, lsr #0x10
    str r1, [r4, #0x38]
    mov r1, #0x0
    str r1, [r4, #0x38]
    ldr r1, =data_020dba5c
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x10
    ldr r1, [r1, #0x0]
    orr r0, r0, r2, lsr #0x10
    ldrb r2, [r1, #0xc]
    ldr r1, [sp, #0x20]
    cmp r8, r1
    mov r1, #0x1000
    mov r1, r1, lsl r2
    mov r1, r1, lsl #0x8
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    orr r1, r3, r1, lsl #0x10
    str r1, [r4, #0x34]
    str r0, [r4, #0x38]
    mov r0, #0x0
    str r0, [r4, #0x38]
    ldr r0, [r10, r9, lsl #0x2]
    ldr r5, [r5, #0x4]
    str r0, [sp, #0x14]
    add r9, r9, #0x2
    blo L_020500f4
L_02050380:
    ldr r0, =0x4000504
    mov r3, #0x0
    ldr r2, =data_020dba38
    str r3, [r0, #0x0]
    ldr r1, =data_020dba39
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
