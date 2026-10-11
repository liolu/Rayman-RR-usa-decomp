#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014910();
extern void func_02017a68();
extern void func_0204a284();
extern char data_020bca48[];
extern char data_020dba6c[];
extern char data_020e4f30[];
extern char data_020e4f34[];
// clang-format off
asm void func_0204e9f4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r9, [r3, #0x64]
    ldr r7, [r3, #0x1c]
    ldr r5, [r9, #0x38]
    ldr r4, [r9, #0x4]
    rsb r5, r5, #0x0
    add r4, r4, #0x3
    smull r6, r4, r5, r4
    adds r6, r6, #0x800
    mov r5, r0
    mov r11, r6, lsr #0xc
    adc r4, r4, #0x0
    orr r11, r11, r4, lsl #0x14
    ldr r0, [r9, #0x4c]
    ldr ip, [r9, #0x50]
    smull r0, r8, r11, r0
    adds r10, r0, #0x80000
    str r2, [sp, #0x0]
    adc r2, r8, #0x0
    ldr r6, [r3, #0x14]
    mov r4, r1
    smull r3, r1, r11, ip
    mov r11, r10, lsr #0x14
    orr r11, r11, r2, lsl #0xc
    adds r2, r3, #0x80000
    ldr r0, [r5, #0x0]
    adc r1, r1, #0x0
    mov r10, r2, lsr #0x14
    orr r10, r10, r1, lsl #0xc
    mov r1, r7, lsl #0xc
    str r1, [sp, #0xc]
    smull r2, r1, r0, r1
    adds r0, r2, #0x800
    mov r8, r7, lsr #0x1
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    mov r1, #0x64000
    mov r7, r6, lsr #0x1
    bl func_02014910
    sub r0, r0, r8, lsl #0xc
    mov r0, r0, asr #0xc
    ldr r1, [r5, #0x4]
    mov r6, r6, lsl #0xc
    str r0, [sp, #0x8]
    smull r2, r0, r1, r6
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    mov r1, #0x64000
    bl func_02014910
    rsb r0, r0, r7, lsl #0xc
    mov r0, r0, asr #0xc
    str r0, [sp, #0x4]
    ldr r2, [r4, #0x0]
    ldr r0, [sp, #0xc]
    mov r1, #0x64000
    smull r3, r0, r2, r0
    adds r3, r3, #0x800
    adc r2, r0, #0x0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl func_02014910
    sub r0, r0, r8, lsl #0xc
    mov r5, r0, asr #0xc
    ldr r0, [r4, #0x4]
    mov r1, #0x64000
    smull r3, r2, r0, r6
    adds r0, r3, #0x800
    adc r2, r2, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl func_02014910
    ldr r6, =data_020dba6c
    ldr r2, [r9, #0x4]
    add r4, r6, #0x3
    mov r1, #0x0
    ldr r8, =data_020e4f30
    swpb r3, r1, [r4]
    str r1, [r8, #0x0]
    add r4, r6, #0x2
    swpb r3, r1, [r4]
    add r4, r6, #0x1
    swpb r3, r1, [r4]
    rsb r6, r0, r7, lsl #0xc
    mvn r0, #0x2
    ldr r3, =data_020e4f34
    sub r7, r0, r2
    swpb r0, r1, [r3]
    mov r6, r6, asr #0xc
    bl func_0204a284
    ldr r0, [sp, #0x0]
    ldr r1, =data_020bca48
    mov r4, r0, asr #0xf
    mov r2, #0x1
    swpb r0, r2, [r1]
    cmp r4, #0x1
    movlt r4, r2
    cmp r4, #0x1f
    mov r0, #0x0
    movgt r4, #0x1f
    bl func_02017a68
    ldr r3, =0x30080c0
    ldr r0, =0x4000454
    mov r1, #0x0
    str r1, [r0, #0x0]
    str r1, [r0, #0x1c]
    str r1, [r0, #0x1c]
    str r7, [r0, #0x1c]
    ldr r2, [sp, #0x4]
    str r11, [r0, #0x18]
    mov r7, r2, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r8, r7, asr #0x10
    mov r2, r2, lsl #0x10
    mov r7, r2, asr #0x10
    mov r7, r7, lsl #0x10
    mov r6, r6, lsl #0x10
    mov r2, r8, lsl #0x10
    mov r8, r6, asr #0x10
    mov r6, r5, lsl #0x10
    mov r5, r8, lsl #0x10
    orr r3, r3, r4, lsl #0x10
    mov r6, r6, asr #0x10
    str r10, [r0, #0x18]
    mov r8, #0x1000
    str r8, [r0, #0x18]
    str r1, [r0, #0x54]
    str r3, [r0, #0x50]
    mov r3, #0x1
    str r3, [r0, #0xac]
    mov r6, r6, lsl #0x10
    mov r8, r2, lsr #0x10
    mov r7, r7, lsr #0x10
    str r1, [r0, #0x2c]
    orr r2, r7, r8, lsl #0x10
    str r2, [r0, #0x38]
    mov r4, r5, lsr #0x10
    mov r3, r6, lsr #0x10
    str r1, [r0, #0x38]
    orr r2, r7, r4, lsl #0x10
    str r2, [r0, #0x40]
    orr r2, r3, r4, lsl #0x10
    str r2, [r0, #0x40]
    orr r2, r3, r8, lsl #0x10
    str r2, [r0, #0x40]
    str r1, [r0, #0xb0]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
