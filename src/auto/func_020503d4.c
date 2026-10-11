#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020148a4();
extern void func_02014910();
extern void func_0202c700();
extern void func_0204d0b8();
extern char data_020dba38[];
extern char data_020dba39[];
extern char data_020dba58[];
extern char data_020dba5c[];
extern char data_020dba6c[];
extern char data_020e4f30[];
// clang-format off
asm void func_020503d4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    ldr r4, [r3, #0x64]
    str r2, [sp, #0xc]
    ldr r2, [r4, #0x0]
    ldr r6, =data_020dba38
    mov r10, r1
    mov r7, #0x1
    mov r1, r3
    swpb r3, r7, [r6]
    ldr r5, =data_020dba39
    str r2, [sp, #0x24]
    swpb r3, r7, [r5]
    ldr r5, [sp, #0x68]
    ldr r4, =data_020dba58
    mov r2, #0x0
    swpb r3, r2, [r4]
    mov r4, r0
    str r7, [sp, #0x0]
    str r7, [sp, #0x4]
    mov r3, r2
    str r7, [sp, #0x8]
    str r5, [sp, #0x68]
    bl func_0204d0b8
    ldr r1, =data_020dba6c
    ldr r2, =data_020e4f30
    ldr r5, [r1, #0x58]
    ldr r0, =0x1f20c0
    add r3, r5, #0x1
    str r4, [r2, #0x0]
    ldr r2, =0x40004a4
    orr r0, r0, r5, lsl #0x18
    str r0, [r2, #0x0]
    cmp r3, #0x3f
    str r3, [r1, #0x58]
    movgt r0, #0x0
    strgt r0, [r1, #0x58]
    ldr r2, =data_020dba5c
    ldr r3, [sp, #0x6c]
    mov r0, #0x5000
    mov r1, #0x0
    umull r5, r4, r3, r0
    mla r4, r3, r1, r4
    mov r1, r3, asr #0x1f
    adds r3, r5, #0x800
    mla r4, r1, r0, r4
    ldr r2, [r2, #0x0]
    mov r5, #0x1000
    ldrb r0, [r2, #0xd]
    adc r2, r4, #0x0
    mov r1, r3, lsr #0xc
    mov r0, r5, lsl r0
    orr r1, r1, r2, lsl #0x14
    ldr r8, [r10, #0x0]
    ldr r7, [r10, #0x8]
    bl func_02014910
    ldr r1, [sp, #0xc]
    ldr r2, =0x4000500
    mov r9, #0x3
    cmp r1, #0x1
    mov r1, #0x1
    str r9, [r2, #0x0]
    mov r11, #0x0
    str r1, [sp, #0x18]
    bls L_020507d0
    str r0, [sp, #0x10]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x14]
    sub r0, r2, #0xac
    str r0, [sp, #0x28]
    sub r6, r2, #0x90
    sub r5, r2, #0x78
    sub r4, r2, #0x74
L_020504f8:
    add r0, r10, r9, lsl #0x2
    ldr r1, [r0, #0x8]
    ldr r0, [r10, r9, lsl #0x2]
    sub r7, r7, r1
    sub r8, r8, r0
    smull r2, r1, r8, r8
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r1, r1, r0
    mov r0, r2, lsr #0xc
    smull r3, r2, r7, r7
    adds r3, r3, #0x800
    orr r0, r0, r1, lsl #0x14
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    bl func_020148a4
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x68]
    ldr r1, [sp, #0x20]
    bl func_02014910
    smull r3, r2, r8, r0
    smull r1, r0, r7, r0
    adds r7, r3, #0x800
    mov r3, #0x0
    adc r2, r2, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r2, lsl #0x14
    adds r2, r1, #0x800
    mov r1, r3
    adc r0, r0, r1
    mov r8, r2, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    ldr r0, [sp, #0x18]
    cmp r0, #0x1
    bne L_02050678
    ldr r0, [sp, #0x28]
    mov r2, r10
    str r1, [r0, #0x0]
    ldr r1, [sp, #0x24]
    add r0, sp, #0x34
    add r1, r1, #0xc
    bl func_0202c700
    ldr r1, [sp, #0x34]
    ldr r0, [sp, #0x3c]
    ldr r2, [sp, #0x38]
    rsb r1, r1, #0x0
    str r1, [r6, #0x0]
    str r0, [sp, #0x1c]
    rsb r1, r7, #0x0
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    rsb r0, r0, #0x0
    str r2, [r6, #0x0]
    str r0, [r6, #0x0]
    mov r0, r11, lsl #0x8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r8, lsl #0x10
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    str r2, [r5, #0x0]
    orr r0, r1, r0, lsr #0x10
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x0]
    ldr r0, =data_020dba5c
    mov r3, #0x1000
    ldr r1, [r0, #0x0]
    rsb r0, r8, #0x0
    ldrb r1, [r1, #0xc]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r3, lsl r1
    mov r1, r1, lsl #0x8
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    orr r1, r2, r1, lsl #0x10
    str r1, [r5, #0x0]
    mov r1, r7, lsl #0x10
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    orr r0, r1, r0, lsr #0x10
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x0]
L_02050678:
    ldr lr, [sp, #0x20]
    ldr r3, [sp, #0x10]
    ldr r0, [sp, #0x28]
    umull ip, r3, lr, r3
    str ip, [sp, #0x2c]
    ldr ip, [sp, #0x14]
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldr r0, [sp, #0x20]
    mla r3, lr, ip, r3
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x30]
    ldr r1, [sp, #0x24]
    ldr lr, [sp, #0x10]
    ldr ip, [sp, #0x30]
    add r0, sp, #0x34
    mla r3, ip, lr, r3
    ldr ip, [sp, #0x2c]
    add r1, r1, #0xc
    adds lr, ip, #0x800
    adc r3, r3, #0x0
    mov ip, lr, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    add r2, r10, r9, lsl #0x2
    add r11, r11, ip
    bl func_0202c700
    ldr r1, [sp, #0x34]
    ldr r0, [sp, #0x1c]
    ldr r2, [sp, #0x38]
    rsb r1, r1, #0x0
    str r1, [r6, #0x0]
    rsb r1, r8, #0x0
    mov r1, r1, lsl #0x10
    rsb r0, r0, #0x0
    str r2, [r6, #0x0]
    mov r1, r1, asr #0x10
    str r0, [r6, #0x0]
    mov r0, r11, lsl #0x8
    mov r2, r1, lsl #0x10
    rsb r1, r7, #0x0
    mov r0, r0, asr #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r1, r1, asr #0x10
    mov r0, r8, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    str r3, [r5, #0x0]
    orr r0, r1, r0, lsr #0x10
    str r0, [r4, #0x0]
    mov r0, r7, lsl #0x10
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    orr r1, r0, r2, lsr #0x10
    mov r0, #0x0
    str r0, [r4, #0x0]
    ldr r0, =data_020dba5c
    ldr r7, [sp, #0x18]
    ldr r2, [r0, #0x0]
    add r8, r7, #0x1
    ldr r7, [sp, #0xc]
    ldrb r2, [r2, #0xc]
    cmp r8, r7
    mov r7, #0x1000
    mov r2, r7, lsl r2
    mov r2, r2, lsl #0x8
    mov r2, r2, asr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    orr r2, r3, r2, lsl #0x10
    str r2, [r5, #0x0]
    str r1, [r4, #0x0]
    mov r1, #0x0
    add r0, r10, r9, lsl #0x2
    str r1, [r4, #0x0]
    str r8, [sp, #0x18]
    ldr r8, [r10, r9, lsl #0x2]
    ldr r7, [r0, #0x8]
    add r9, r9, #0x3
    blo L_020504f8
L_020507d0:
    ldr r0, =0x4000504
    mov r3, #0x0
    ldr r2, =data_020dba38
    str r3, [r0, #0x0]
    ldr r1, =data_020dba39
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    add sp, sp, #0x40
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
