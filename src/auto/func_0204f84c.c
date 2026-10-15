#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _fdiv();
extern void func_0200a42c();
extern void func_0202c700();
extern void func_0204d0b8();
extern char data_020dba38[];
extern char data_020dba39[];
extern char data_020dba58[];
extern char data_020dba5c[];
extern char data_020dba6c[];
extern char data_020e4f30[];
// clang-format off
asm void func_0204f84c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x84
    str r1, [sp, #0x60]
    ldr r1, [sp, #0xb4]
    str r2, [sp, #0xc]
    ldr r2, [r1, #0x64]
    ldr r6, =data_020dba38
    ldr r2, [r2, #0x0]
    mov r7, #0x1
    str r3, [sp, #0x10]
    swpb r3, r7, [r6]
    ldr r5, =data_020dba39
    str r2, [sp, #0x18]
    swpb r3, r7, [r5]
    ldr r4, =data_020dba58
    mov r2, #0x0
    swpb r3, r2, [r4]
    mov r4, r0
    str r7, [sp, #0x0]
    str r7, [sp, #0x4]
    str r7, [sp, #0x8]
    mov r3, r2
    ldr r5, [sp, #0xa8]
    ldr r7, [sp, #0xb0]
    bl func_0204d0b8
    ldr r1, =data_020dba6c
    ldr r2, =data_020e4f30
    ldr r6, [r1, #0x50]
    str r4, [r2, #0x0]
    add r2, r6, #0x1
    ldr r0, =0x1f2080
    ldr r3, =0x40004a4
    orr r0, r0, r6, lsl #0x18
    str r0, [r3, #0x0]
    cmp r2, #0x3f
    str r2, [r1, #0x50]
    movgt r0, #0x0
    strgt r0, [r1, #0x50]
    mov r0, #0x1
    ldr r4, =0x4000440
    str r0, [sp, #0x14]
    str r0, [r4, #0x0]
    mov r1, #0x0
    sub r0, r5, #0x1
    str r0, [sp, #0x1c]
    str r1, [r4, #0x14]
    mov r0, #0x3
    str r0, [r4, #0xc0]
    ldr r0, [sp, #0x1c]
    cmp r0, #0x1
    bls L_0204ff48
    ldr r6, [sp, #0xac]
    mov r5, r6, asr #0x1f
L_0204f920:
    mov r0, #0x0
    str r0, [r4, #0x14]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x10]
    mul r2, r1, r0
    mov r0, #0xc
    mul r1, r2, r0
    ldr r0, [sp, #0xc]
    add r8, r0, r1
    ldr r1, [r0, r1]
    mov r0, r1, asr #0x1f
    umull r3, r2, r6, r1
    mla r2, r6, r0, r2
    mla r2, r5, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r3, r1, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [sp, #0x78]
    ldr r1, [r8, #0x4]
    mov r0, r1, asr #0x1f
    umull r9, r2, r6, r1
    mla r2, r6, r0, r2
    mla r2, r5, r1, r2
    mov r0, #0x800
    adds r1, r9, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [sp, #0x7c]
    ldr r1, [r8, #0x8]
    mov r0, r1, asr #0x1f
    umull r10, r9, r6, r1
    mla r9, r6, r0, r9
    mla r9, r5, r1, r9
    mov r0, #0x800
    adds r1, r10, r0
    mov r0, #0x0
    adc r0, r9, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x80]
    ldr r0, [r7, #0x18]
    ldr r9, [r7, #0x0]
    smull r11, r10, r0, r1
    mov r0, #0x800
    adds r11, r11, r0
    mov r0, #0x0
    adc r0, r10, r0
    mov r11, r11, lsr #0xc
    orr r11, r11, r0, lsl #0x14
    smull ip, r10, r9, r3
    mov r0, #0x800
    adds r9, ip, r0
    mov r0, #0x0
    adc r0, r10, r0
    mov r10, r9, lsr #0xc
    ldr ip, [r7, #0xc]
    orr r10, r10, r0, lsl #0x14
    smull r9, r0, ip, r2
    adds r9, r9, #0x800
    adc r0, r0, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    add r0, r10, r9
    add r0, r11, r0
    str r0, [sp, #0x6c]
    str r0, [sp, #0x20]
    ldr r0, [r7, #0x1c]
    mov ip, #0x0
    smull r11, r10, r0, r1
    mov r0, #0x800
    adds r11, r11, r0
    mov r0, ip
    ldr r9, [r7, #0x4]
    adc r0, r10, r0
    mov r11, r11, lsr #0xc
    orr r11, r11, r0, lsl #0x14
    smull ip, r10, r9, r3
    mov r0, #0x800
    adds r9, ip, r0
    mov r0, #0x0
    adc r0, r10, r0
    mov r10, r9, lsr #0xc
    ldr ip, [r7, #0x10]
    orr r10, r10, r0, lsl #0x14
    smull r9, r0, ip, r2
    adds r9, r9, #0x800
    adc r0, r0, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    add r0, r10, r9
    add r0, r11, r0
    str r0, [sp, #0x70]
    ldr ip, [r7, #0x20]
    ldr r9, [r7, #0x8]
    smull r11, r10, ip, r1
    adds r11, r11, #0x800
    smull r3, r1, r9, r3
    adc r10, r10, #0x0
    mov r9, r11, lsr #0xc
    orr r9, r9, r10, lsl #0x14
    adds r10, r3, #0x800
    adc r3, r1, #0x0
    mov r1, r10, lsr #0xc
    orr r1, r1, r3, lsl #0x14
    ldr r3, [r7, #0x14]
    smull r11, r10, r3, r2
    adds r3, r11, #0x800
    adc r2, r10, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r1, r1, r3
    add r1, r9, r1
    ldr r2, [sp, #0x60]
    str r1, [sp, #0x74]
    ldr r3, [r2, #0x0]
    ldr r2, [sp, #0x20]
    add r2, r3, r2
    str r2, [sp, #0x78]
    ldr r2, [sp, #0x60]
    ldr r2, [r2, #0x4]
    add r0, r2, r0
    str r0, [sp, #0x7c]
    ldr r0, [sp, #0x60]
    ldr r0, [r0, #0x8]
    add r0, r0, r1
    str r0, [sp, #0x80]
    ldr r1, [sp, #0x18]
    add r0, sp, #0x6c
    add r1, r1, #0xc
    add r2, sp, #0x78
    bl func_0202c700
    ldr r0, [sp, #0x74]
    ldr r1, [sp, #0x70]
    rsb r2, r0, #0x0
    ldr r0, [sp, #0x6c]
    rsb r0, r0, #0x0
    str r0, [r4, #0x30]
    str r1, [r4, #0x30]
    str r2, [r4, #0x30]
    mov r0, #0x0
    str r0, [r4, #0x48]
    str r0, [r4, #0x4c]
    str r0, [r4, #0x4c]
    ldr r0, [sp, #0x6c]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    ldr r0, [sp, #0x70]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    ldr r0, [sp, #0x74]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    mov r0, #0x0
    str r0, [r4, #0x14]
    ldr r1, [r8, #0xc]
    mov r0, r1, asr #0x1f
    umull r3, r2, r6, r1
    mla r2, r6, r0, r2
    mla r2, r5, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r10, r1, lsr #0xc
    orr r10, r10, r0, lsl #0x14
    str r10, [sp, #0x78]
    ldr r1, [r8, #0x10]
    mov r0, r10, asr #0x1f
    str r0, [sp, #0x28]
    mov r0, r1, asr #0x1f
    umull r3, r2, r6, r1
    mla r2, r6, r0, r2
    mla r2, r5, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r9, r1, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    str r9, [sp, #0x7c]
    ldr r1, [r8, #0x14]
    mov r0, r9, asr #0x1f
    str r0, [sp, #0x24]
    mov r0, r1, asr #0x1f
    umull r3, r2, r6, r1
    mla r2, r6, r0, r2
    mla r2, r5, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r8, r1, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    str r8, [sp, #0x80]
    mov r0, r8, asr #0x1f
    str r0, [sp, #0x2c]
    ldr r0, [r7, #0x18]
    ldr r2, [r7, #0x0]
    smull r3, r1, r0, r8
    mov r0, #0x800
    adds r3, r3, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r11, r3, r2, r10
    mov r0, #0x800
    adds r11, r11, r0
    mov r0, #0x0
    adc r2, r3, r0
    mov r0, r11, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    ldr r2, [r7, #0xc]
    smull r11, r3, r2, r9
    adds r11, r11, #0x800
    adc r2, r3, #0x0
    mov r3, r11, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    add r0, r1, r0
    str r0, [sp, #0x30]
    str r0, [sp, #0x6c]
    ldr ip, [r7, #0x1c]
    ldr r3, [sp, #0x2c]
    ldr r0, [r7, #0x4]
    umull r11, lr, ip, r8
    str r0, [sp, #0x40]
    mov r0, ip, asr #0x1f
    str r0, [sp, #0x3c]
    mla lr, ip, r3, lr
    ldr r3, [sp, #0x3c]
    ldr r0, [sp, #0x40]
    mla lr, r3, r8, lr
    adds r3, r11, #0x800
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x44]
    ldr r0, [r7, #0x10]
    adc r11, lr, #0x0
    str r0, [sp, #0x48]
    mov r3, r3, lsr #0xc
    orr r3, r3, r11, lsl #0x14
    str r3, [sp, #0x38]
    ldr r3, [sp, #0x40]
    ldr r1, [sp, #0x48]
    umull lr, ip, r3, r10
    mov r11, r3
    ldr r3, [sp, #0x28]
    mov r1, r1, asr #0x1f
    mla ip, r11, r3, ip
    ldr r3, [sp, #0x44]
    str r1, [sp, #0x4c]
    mla ip, r3, r10, ip
    adds r3, lr, #0x800
    adc r11, ip, #0x0
    mov lr, r3, lsr #0xc
    ldr ip, [sp, #0x48]
    orr lr, lr, r11, lsl #0x14
    umull r11, r3, ip, r9
    str r11, [sp, #0x64]
    ldr r11, [sp, #0x24]
    ldr r1, [sp, #0x18]
    mla r3, ip, r11, r3
    ldr r11, [sp, #0x4c]
    add r0, sp, #0x6c
    mla r3, r11, r9, r3
    ldr r11, [sp, #0x64]
    add r1, r1, #0xc
    adds ip, r11, #0x800
    adc r3, r3, #0x0
    mov r11, ip, lsr #0xc
    orr r11, r11, r3, lsl #0x14
    ldr r3, [sp, #0x38]
    add r11, lr, r11
    add r3, r3, r11
    str r3, [sp, #0x70]
    str r3, [sp, #0x34]
    ldr r11, [r7, #0x20]
    ldr r3, [r7, #0x8]
    umull lr, ip, r11, r8
    str r3, [sp, #0x54]
    mov r3, r11, asr #0x1f
    str r3, [sp, #0x50]
    ldr r3, [sp, #0x54]
    add r2, sp, #0x78
    mov r3, r3, asr #0x1f
    str r3, [sp, #0x58]
    ldr r3, [r7, #0x14]
    str r3, [sp, #0x5c]
    ldr r3, [sp, #0x2c]
    mla ip, r11, r3, ip
    ldr r3, [sp, #0x50]
    mla ip, r3, r8, ip
    adds r8, lr, #0x800
    adc r3, ip, #0x0
    mov lr, r8, lsr #0xc
    orr lr, lr, r3, lsl #0x14
    ldr r3, [sp, #0x5c]
    mov r3, r3, asr #0x1f
    str r3, [sp, #0x68]
    ldr r3, [sp, #0x54]
    umull ip, r11, r3, r10
    mov r8, r3
    ldr r3, [sp, #0x28]
    mla r11, r8, r3, r11
    ldr r3, [sp, #0x58]
    adds r8, ip, #0x800
    mla r11, r3, r10, r11
    adc r3, r11, #0x0
    mov ip, r8, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    ldr r3, [sp, #0x5c]
    umull r11, r10, r3, r9
    mov r8, r3
    ldr r3, [sp, #0x24]
    mla r10, r8, r3, r10
    ldr r3, [sp, #0x68]
    adds r8, r11, #0x800
    mla r10, r3, r9, r10
    adc r3, r10, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r3, lsl #0x14
    add r3, ip, r8
    add r3, lr, r3
    ldr r8, [sp, #0x60]
    str r3, [sp, #0x74]
    ldr r9, [r8, #0x0]
    ldr r8, [sp, #0x30]
    add r8, r9, r8
    str r8, [sp, #0x78]
    ldr r8, [sp, #0x60]
    ldr r9, [r8, #0x4]
    ldr r8, [sp, #0x34]
    add r8, r9, r8
    str r8, [sp, #0x7c]
    ldr r8, [sp, #0x60]
    ldr r8, [r8, #0x8]
    add r3, r8, r3
    str r3, [sp, #0x80]
    bl func_0202c700
    ldr r0, [sp, #0x74]
    ldr r1, [sp, #0x70]
    rsb r2, r0, #0x0
    ldr r0, [sp, #0x6c]
    rsb r0, r0, #0x0
    str r0, [r4, #0x30]
    str r1, [r4, #0x30]
    ldr r0, =data_020dba5c
    str r2, [r4, #0x30]
    ldr r0, [r0, #0x0]
    ldrb r1, [r0, #0xd]
    ldrb r2, [r0, #0xc]
    mov r0, #0x1000
    mov r0, r0, lsl r1
    mov r0, r0, lsl #0x8
    mov r0, r0, asr #0x10
    mov r1, r0, lsl #0x10
    mov r0, #0x1000
    mov r0, r0, lsl r2
    mov r0, r0, lsl #0x8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    orr r0, r0, r1, lsr #0x10
    str r0, [r4, #0x48]
    mov r0, #0x0
    str r0, [r4, #0x4c]
    str r0, [r4, #0x4c]
    ldr r0, [sp, #0x6c]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    ldr r0, [sp, #0x70]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    ldr r0, [sp, #0x74]
    bl func_0200a42c
    ldr r1, =0x45800000
    bl _fdiv
    ldr r0, [sp, #0x14]
    add r1, r0, #0x1
    ldr r0, [sp, #0x1c]
    str r1, [sp, #0x14]
    cmp r1, r0
    blo L_0204f920
L_0204ff48:
    ldr r0, =0x4000504
    mov r3, #0x0
    ldr r2, =data_020dba38
    str r3, [r0, #0x0]
    ldr r1, =data_020dba39
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    add sp, sp, #0x84
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
