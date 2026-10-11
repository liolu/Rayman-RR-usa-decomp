#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202d434();
extern void func_0202dc64();
extern void func_0202e19c();
// clang-format off
asm void func_0203f230(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r5, r0
    ldr r4, [r5, #0x200]
    cmp r4, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    add r1, sp, #0x8
    add r2, sp, #0x4
    add r3, sp, #0x0
    add r0, r5, #0xdc
    bl func_0202dc64
    mov r1, #0x0
    mov r0, #0x1000
    ldr r3, [sp, #0x0]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    ldr r2, [r3, #0x0]
    ldr r1, [r5, #0x1fc]
    ldmib r3, {r0, r3}
    smull r2, r6, r1, r2
    adds lr, r2, #0x800
    smull r2, r7, r1, r0
    adc r0, r6, #0x0
    adds ip, r2, #0x800
    mov r2, lr, lsr #0xc
    smull r3, r6, r1, r3
    adc lr, r7, #0x0
    adds r7, r3, #0x800
    mov r3, ip, lsr #0xc
    adc r1, r6, #0x0
    mov ip, r7, lsr #0xc
    orr r3, r3, lr, lsl #0x14
    add r7, sp, #0x18
    orr r2, r2, r0, lsl #0x14
    orr ip, ip, r1, lsl #0x14
    add r6, r5, #0xe0
    mov lr, #0x6
L_0203f2cc:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs lr, lr, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0203f2cc
    ldr r0, [r5, #0xe0]
    add r1, sp, #0xc
    sub r0, r0, r2
    str r0, [r5, #0xe0]
    ldr r2, [r5, #0xe4]
    add r0, r5, #0xdc
    sub r2, r2, r3
    str r2, [r5, #0xe4]
    ldr r3, [r5, #0xe8]
    rsb r2, r4, #0x0
    sub r3, r3, ip
    str r3, [r5, #0xe8]
    bl func_0202d434
    add r1, sp, #0x18
    add r0, r5, #0xdc
    bl func_0202e19c
    mov r0, #0x0
    str r0, [r5, #0x200]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
