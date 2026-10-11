#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020329a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r4, [r0, #0x17c]
    ldr r2, [r0, #0x178]
    smull r5, r4, r1, r4
    cmp r2, #0x1000
    movne r2, #0x1
    moveq r2, #0x0
    adds r1, r5, #0x800
    ldr r3, [r0, #0x19c]
    adc r4, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r4, lsl #0x14
    smull r4, r3, r1, r3
    adds r5, r4, #0x800
    adc r4, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r4, lsl #0x14
    str r3, [sp, #0x0]
    ldr r4, [r0, #0x1a0]
    and ip, r2, #0xff
    smull r4, r2, r1, r4
    adds r5, r4, #0x800
    adc r4, r2, #0x0
    mov r2, r5, lsr #0xc
    orr r2, r2, r4, lsl #0x14
    str r2, [sp, #0x4]
    ldr r4, [r0, #0x1a4]
    mov lr, #0x0
    smull r5, r4, r1, r4
    adds r1, r5, #0x800
    adc r4, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r4, lsl #0x14
    cmp ip, #0x0
    str r1, [sp, #0x8]
    mov ip, #0x800
    beq L_02032a90
    ldr r4, [r0, #0x18c]
    smull r5, r3, r4, r3
    adds r4, r5, ip
    adc r3, r3, lr
    mov r4, r4, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    str r4, [sp, #0x0]
    ldr r3, [r0, #0x18c]
    smull r4, r2, r3, r2
    adds r3, r4, ip
    adc r2, r2, lr
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [sp, #0x4]
    ldr r2, [r0, #0x18c]
    smull r3, r1, r2, r1
    adds r2, r3, ip
    adc r1, r1, lr
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x8]
L_02032a90:
    ldr r2, [sp, #0x0]
    ldr r1, [r0, #0x6c]
    ldr r3, [sp, #0x4]
    add r1, r2, r1
    str r1, [sp, #0x0]
    ldr r1, [r0, #0x70]
    ldr r2, [sp, #0x8]
    add r1, r3, r1
    str r1, [sp, #0x4]
    ldr r1, [r0, #0x74]
    add r3, sp, #0x0
    add r1, r2, r1
    str r1, [sp, #0x8]
    add ip, r0, #0x1cc
    mov r2, #0x6
L_02032acc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02032acc
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
