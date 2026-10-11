#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
// clang-format off
asm void func_02030fcc(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r7, r0
    cmp r7, #0x0
    mov r6, r1
    mov r5, r2
    mov r4, #0x0
    addle sp, sp, #0xc
    ldmlefd sp!, {r4, r5, r6, r7, pc}
L_02030ff0:
    ldrsh r0, [r6, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_02031150
    ldr r1, [r6, #0x0]
    cmp r1, #0x1000
    ble L_020310e0
    mov r1, #0x1000
    str r1, [r6, #0x0]
    add r0, sp, #0x0
    add r1, r6, #0x3c
    bl func_01ff84a0
    ldr r2, [r6, #0x54]
    ldr r1, [sp, #0x0]
    ldr r0, [sp, #0x4]
    smull r3, r1, r2, r1
    adds r2, r3, #0x800
    adc r1, r1, #0x0
    mov ip, r2, lsr #0xc
    orr ip, ip, r1, lsl #0x14
    str ip, [sp, #0x0]
    ldr r2, [r6, #0x54]
    ldr r1, [sp, #0x8]
    smull r3, r0, r2, r0
    adds r2, r3, #0x800
    adc r0, r0, #0x0
    mov r3, r2, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [sp, #0x4]
    ldr r2, [r6, #0x54]
    add r0, sp, #0x0
    smull lr, r1, r2, r1
    adds r2, lr, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x8]
    ldr lr, [r6, #0x48]
    add r1, r6, #0x10
    add ip, ip, lr
    str ip, [sp, #0x0]
    ldr lr, [r6, #0x4c]
    mov ip, #0x6
    add r3, r3, lr
    str r3, [sp, #0x4]
    ldr r3, [r6, #0x50]
    add r2, r2, r3
    str r2, [sp, #0x8]
L_020310b8:
    ldrb r2, [r0, #0x0]
    ldrb r3, [r0, #0x1]
    add r0, r0, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [r1]
    add r1, r1, #0x1
    swpb r2, r3, [r1]
    add r1, r1, #0x1
    bne L_020310b8
    b L_02031150
L_020310e0:
    cmp r1, #0x0
    blt L_02031150
    ldr r0, [r5, #0x0]
    rsb r1, r1, #0x1000
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x30]
    ldr r1, [r6, #0x0]
    ldr r0, [r5, #0x4]
    rsb r1, r1, #0x1000
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x34]
    ldr r1, [r6, #0x0]
    ldr r0, [r5, #0x8]
    rsb r1, r1, #0x1000
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x38]
L_02031150:
    add r4, r4, #0x1
    cmp r4, r7
    add r6, r6, #0x68
    blt L_02030ff0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
