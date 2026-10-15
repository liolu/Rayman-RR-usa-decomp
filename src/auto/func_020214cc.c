#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _fdiv();
extern void func_0200a474();
extern char data_020c49fc[];
extern char data_020c4a50[];
extern char data_020c4a54[];
extern char data_020c4a58[];
// clang-format off
asm void func_020214cc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x0]
    mov r4, r1
    str r0, [r4, #0x0]
    ldr r0, [r5, #0x4]
    add r1, r4, #0xc
    str r0, [r4, #0x4]
    ldrb r0, [r5, #0x12]
    mov r2, #0x0
    swpb r0, r0, [r1]
    str r2, [r4, #0x10]
    str r2, [r4, #0x18]
    ldrb r0, [r5, #0x14]
    bic r0, r0, #0x20
    str r0, [r4, #0x14]
    ldr r0, [r5, #0x24]
    str r0, [r4, #0x2c]
    ldr r0, [r5, #0x18]
    str r0, [r4, #0x1c]
    ldr r0, [r5, #0x1c]
    str r0, [r4, #0x20]
    ldrh r0, [r5, #0x16]
    bl func_0200a474
    ldr r1, =data_020c49fc
    mov r6, r0
    ldr r0, [r1, #0x1c]
    bl func_0200a474
    mov r1, r0
    mov r0, r6
    bl _fdiv
    str r0, [r4, #0x24]
    ldr r1, =data_020c4a50
    ldr r2, [r5, #0x20]
    ldr r6, [r1, #0x0]
    mov r0, r2, lsl #0x10
    mov r2, r2, asr #0x10
    cmp r6, #0x0
    mov r3, r0, lsr #0x10
    mov r1, #0x0
    bls L_02021594
    ldr r0, =data_020c4a54
    ldr r5, [r0, #0x0]
L_02021578:
    ldr r0, [r5, r1, lsl #0x4]
    cmp r2, r0
    moveq r2, r1
    beq L_02021594
    add r1, r1, #0x1
    cmp r1, r6
    blo L_02021578
L_02021594:
    cmp r1, r6
    moveq r0, #0x0
    streq r0, [r4, #0x28]
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r0, =data_020c4a58
    ldr r0, [r0, #0x0]
    ldr r1, [r0, r2, lsl #0x2]
    ldr r0, [r1, #0x0]
    cmp r0, r3
    movlo r0, #0x0
    strlo r0, [r4, #0x28]
    ldmlofd sp!, {r4, r5, r6, pc}
    add r1, r1, #0x4
    mov r0, #0x14
    mla r0, r3, r0, r1
    str r0, [r4, #0x28]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
