#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff8668();
extern void func_02014910();
extern void func_0202d434();
extern void func_0202dc64();
// clang-format off
asm void func_0203f01c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x3c
    mov r5, r0
    add r1, sp, #0x14
    add r2, sp, #0x10
    add r3, sp, #0xc
    add r0, r5, #0x78
    ldr r4, [r5, #0x1f8]
    bl func_0202dc64
    add r1, sp, #0x8
    add r2, sp, #0x4
    add r3, sp, #0x0
    add r0, r5, #0xdc
    bl func_0202dc64
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x4]
    bl VEC_DotProduct
    mov r6, r0
    add r0, r5, #0x3c
    bl func_01ff8668
    ldr r2, [r5, #0x1f4]
    mov r1, #0xa000
    smull r3, r2, r6, r2
    adds r3, r3, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    smull r2, r0, r3, r0
    adds r3, r2, #0x800
    adc r2, r0, #0x0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl func_02014910
    rsb r6, r4, #0x1000
    ldr r2, [r5, #0x200]
    smull r7, r6, r0, r6
    smull r4, r0, r2, r4
    adds r4, r4, #0x800
    adc r0, r0, #0x0
    mov ip, r4, lsr #0xc
    adds r4, r7, #0x800
    orr ip, ip, r0, lsl #0x14
    adc r0, r6, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r0, ip, r4
    subs r2, r0, r2
    addeq sp, sp, #0x3c
    mov r1, #0x0
    mov r3, #0x800
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    str r0, [r5, #0x200]
    mov r4, #0x1000
    ldr r0, [sp, #0x0]
    str r1, [sp, #0x24]
    str r4, [sp, #0x28]
    str r1, [sp, #0x2c]
    ldr r6, [r5, #0x1fc]
    ldr r4, [r0, #0x0]
    add lr, sp, #0x30
    smull r7, r4, r6, r4
    adds r6, r7, r3
    adc r4, r4, r1
    mov r6, r6, lsr #0xc
    orr r6, r6, r4, lsl #0x14
    str r6, [sp, #0x18]
    ldr r6, [r5, #0x1fc]
    ldr r4, [r0, #0x4]
    add ip, r5, #0xe0
    smull r7, r4, r6, r4
    adds r6, r7, r3
    adc r4, r4, r1
    mov r6, r6, lsr #0xc
    orr r6, r6, r4, lsl #0x14
    str r6, [sp, #0x1c]
    ldr r6, [r5, #0x1fc]
    ldr r0, [r0, #0x8]
    mov r4, #0x6
    smull r7, r0, r6, r0
    adds r3, r7, r3
    adc r0, r0, r1
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x20]
L_0203f16c:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r4, r4, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r1, [lr]
    add lr, lr, #0x1
    bne L_0203f16c
    add ip, sp, #0x18
    add r4, r5, #0xe0
    mov r3, #0x6
L_0203f19c:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203f19c
    add r1, sp, #0x24
    add r0, r5, #0xdc
    bl func_0202d434
    ldr r2, [r5, #0xe0]
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x1c]
    sub r3, r2, r0
    str r3, [sp, #0x24]
    ldr r2, [r5, #0xe4]
    ldr r0, [sp, #0x30]
    sub r1, r2, r1
    str r1, [sp, #0x28]
    ldr r2, [r5, #0xe8]
    ldr r1, [sp, #0x20]
    add r0, r0, r3
    sub r1, r2, r1
    str r1, [sp, #0x2c]
    str r0, [r5, #0xe0]
    ldr r1, [sp, #0x34]
    ldr r0, [sp, #0x28]
    add r0, r1, r0
    str r0, [r5, #0xe4]
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #0x2c]
    add r0, r1, r0
    str r0, [r5, #0xe8]
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
