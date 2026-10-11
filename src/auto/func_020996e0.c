#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202e3cc();
extern void func_02084450();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_020996e0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x34
    mov r5, r1
    mov r6, r0
    ldr r0, [r5, #-0x8]
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_02084450
    ldr r1, [sp, #0x0]
    mov r5, r0
    ldr r0, [r1, #0x24]
    add r1, sp, #0x10
    bl func_0202e3cc
    add r6, sp, #0x4
    mov r3, r4
    mov r2, #0x6
L_02099738:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r6]
    add r6, r6, #0x1
    bne L_02099738
    ldr r3, [sp, #0x28]
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x4]
    smull r2, ip, r3, r2
    adds lr, r2, #0x800
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x8]
    smull r6, r7, r1, r0
    adc r0, ip, #0x0
    adds ip, r6, #0x800
    mov r1, lr, lsr #0xc
    smull r6, r2, r3, r2
    adc r7, r7, #0x0
    adds r3, r6, #0x800
    mov r6, ip, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x0]
    ldr r3, [sp, #0x2c]
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x4]
    smull r2, ip, r3, r2
    adds lr, r2, #0x800
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x8]
    smull r6, r7, r1, r0
    adc r0, ip, #0x0
    adds ip, r6, #0x800
    mov r1, lr, lsr #0xc
    smull r6, r2, r3, r2
    adc r7, r7, #0x0
    adds r3, r6, #0x800
    mov r6, ip, lsr #0xc
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r6, r6, r7, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r3
    add r0, r1, r0
    str r0, [r4, #0x4]
    ldr r1, [sp, #0x30]
    ldr r0, [sp, #0xc]
    ldr r3, [sp, #0x18]
    ldr r2, [sp, #0x4]
    smull r0, r6, r1, r0
    adds r7, r0, #0x800
    ldr r1, [sp, #0x24]
    ldr r0, [sp, #0x8]
    smull lr, ip, r3, r2
    smull r3, r2, r1, r0
    adc r1, r6, #0x0
    mov r0, r7, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    adds lr, lr, #0x800
    adc r1, ip, #0x0
    mov ip, lr, lsr #0xc
    orr ip, ip, r1, lsl #0x14
    adds r3, r3, #0x800
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, ip, r2
    add r1, r0, r1
    mov r0, r5
    str r1, [r4, #0x8]
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
