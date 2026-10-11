#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff88fc();
extern void func_01ff8968();
extern void func_01ff8a2c();
extern void func_01ff8a84();
extern void func_01ff8ae8();
extern void func_01ff8b24();
// clang-format off
asm void func_02035bec(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x3c
    ldr r5, [r1, #0x0]
    mov r3, #0x800
    mov r4, r5, asr #0x1f
    mov r4, r4, lsl #0x14
    adds r6, r3, r5, lsl #0x14
    orr r4, r4, r5, lsr #0xc
    adc r4, r4, #0x0
    mov r5, r6, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    str r5, [sp, #0x18]
    ldr r4, [r1, #0x4]
    mov r5, r2
    mov r2, r4, asr #0x1f
    mov r2, r2, lsl #0x14
    adds r6, r3, r4, lsl #0x14
    orr r2, r2, r4, lsr #0xc
    adc r2, r2, #0x0
    mov r4, r6, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    str r4, [sp, #0x1c]
    ldr r2, [r1, #0x8]
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0x14
    adds r4, r3, r2, lsl #0x14
    orr r1, r1, r2, lsr #0xc
    adc r1, r1, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x20]
    ldr r2, [r0, #0x4]
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0x14
    adds r4, r3, r2, lsl #0x14
    orr r1, r1, r2, lsr #0xc
    adc r1, r1, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x0]
    ldr r2, [r0, #0x8]
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0x14
    orr r1, r1, r2, lsr #0xc
    adds r2, r3, r2, lsl #0x14
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x4]
    ldr r2, [r0, #0xc]
    adds r1, r3, r2, lsl #0x14
    mov r3, r1, lsr #0xc
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0x14
    orr r1, r1, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r3, r3, r1, lsl #0x14
    str r3, [sp, #0x8]
    ldr r6, [r0, #0x0]
    mov r0, r6
    bl func_01ff8b24
    mov r4, r0
    mov r0, r6
    bl func_01ff8ae8
    mov r6, r0
    add r0, sp, #0x30
    add r1, sp, #0x0
    add r2, sp, #0x18
    bl func_01ff8968
    add r0, sp, #0x30
    mov r1, r6
    mov r2, r0
    bl func_01ff8a2c
    add r0, sp, #0x0
    add r1, sp, #0x18
    bl func_01ff8a84
    rsb r1, r4, #0x100000
    bl func_01ff88fc
    mov ip, r0
    add r0, sp, #0x0
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, ip
    mov r0, r3
    mov r2, r3
    bl func_01ff8a2c
    add r0, sp, #0x18
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r4
    mov r0, r3
    mov r2, r3
    bl func_01ff8a2c
    ldr lr, [sp, #0xc]
    ldr r2, [sp, #0x24]
    ldr r0, [sp, #0x30]
    add r2, lr, r2
    add r0, r2, r0
    add r0, r0, #0x80
    mov r2, r0, asr #0x8
    ldr ip, [sp, #0x10]
    ldr r1, [sp, #0x28]
    ldr r0, [sp, #0x34]
    add r1, ip, r1
    add r0, r1, r0
    add r0, r0, #0x80
    mov r1, r0, asr #0x8
    str r2, [sp, #0xc]
    ldr r4, [sp, #0x14]
    ldr r3, [sp, #0x2c]
    ldr r0, [sp, #0x38]
    add r3, r4, r3
    add r0, r3, r0
    add r0, r0, #0x80
    mov r0, r0, asr #0x8
    add r4, sp, #0xc
    mov r3, r5
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r2, #0x6
L_02035dd4:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02035dd4
    mov r0, r5
    add sp, sp, #0x3c
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
