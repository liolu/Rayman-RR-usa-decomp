#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c8a4();
extern void func_0202cb6c();
// clang-format off
asm void func_0203f970(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r7, r0
    ldr r4, [r7, #0xe0]
    ldr r0, [r7, #0x7c]
    mov r6, r1
    sub r0, r4, r0
    str r0, [sp, #0x18]
    ldr r1, [r7, #0xe4]
    ldr r0, [r7, #0x80]
    mov r5, r2
    sub r0, r1, r0
    str r0, [sp, #0x1c]
    ldr r1, [r7, #0xe8]
    ldr r0, [r7, #0x84]
    mov r4, r3
    sub r0, r1, r0
    str r0, [sp, #0x20]
    ldr r0, [r7, #0xc]
    tst r0, #0x800
    beq L_0203f9dc
    mov r0, r4
    mov r1, r5
    bl func_0202cb6c
    ldr r0, [r7, #0xc]
    bic r0, r0, #0x800
    str r0, [r7, #0xc]
L_0203f9dc:
    add r0, sp, #0x18
    mov r1, r4
    mov r2, r0
    bl func_0202c8a4
    add r4, sp, #0x0
    add r3, r7, #0x190
    mov r2, #0x6
L_0203f9f8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203f9f8
    ldr r0, [sp, #0x0]
    ldr r2, [sp, #0x4]
    smull r0, r4, r6, r0
    adds ip, r0, #0x800
    smull r2, r3, r6, r2
    adc r4, r4, #0x0
    mov ip, ip, lsr #0xc
    orr ip, ip, r4, lsl #0x14
    adds lr, r2, #0x800
    ldr r1, [sp, #0x8]
    adc r4, r3, #0x0
    mov r3, lr, lsr #0xc
    orr r3, r3, r4, lsl #0x14
    smull r2, r1, r6, r1
    adds r2, r2, #0x800
    ldr lr, [sp, #0x18]
    adc r1, r1, #0x0
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    add r0, sp, #0x18
    add r4, sp, #0xc
    ldmia r0, {r0, r1, r2}
    str ip, [sp, #0x0]
    stmia r4, {r0, r1, r2}
    cmp lr, #0x0
    movge r0, lr
    ldr r2, [sp, #0x0]
    rsblt r0, lr, #0x0
    str r3, [sp, #0x4]
    str r6, [sp, #0x8]
    cmp r0, r2
    ble L_0203facc
    cmp lr, #0x0
    moveq r0, #0x0
    beq L_0203fab4
    mov r0, #0x1000
    cmp lr, #0x0
    rsble r0, r0, #0x0
L_0203fab4:
    smull r1, r0, r2, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0xc]
L_0203facc:
    ldr r0, [sp, #0x1c]
    ldr r2, [sp, #0x4]
    cmp r0, #0x0
    movge r1, r0
    rsblt r1, r0, #0x0
    cmp r1, r2
    ble L_0203fb18
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0203fb00
    cmp r0, #0x0
    mov r0, #0x1000
    rsble r0, r0, #0x0
L_0203fb00:
    smull r1, r0, r2, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x10]
L_0203fb18:
    ldr r0, [sp, #0x20]
    ldr r2, [sp, #0x8]
    cmp r0, #0x0
    movge r1, r0
    rsblt r1, r0, #0x0
    cmp r1, r2
    ble L_0203fb64
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0203fb4c
    cmp r0, #0x0
    mov r0, #0x1000
    rsble r0, r0, #0x0
L_0203fb4c:
    smull r1, r0, r2, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x14]
L_0203fb64:
    add r0, sp, #0xc
    mov r1, r5
    mov r2, r0
    bl func_0202c8a4
    ldr r1, [r7, #0x7c]
    ldr r0, [sp, #0xc]
    add r0, r1, r0
    str r0, [r7, #0xe0]
    ldr r1, [r7, #0x80]
    ldr r0, [sp, #0x10]
    add r0, r1, r0
    str r0, [r7, #0xe4]
    ldr r1, [r7, #0x84]
    ldr r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r7, #0xe8]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
