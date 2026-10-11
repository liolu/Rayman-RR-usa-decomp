#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202032c();
extern char data_020c4b78[];
extern char data_020c4b90[];
extern char data_020c4b98[];
extern char data_020c4b9c[];
extern char data_020c4ba0[];
// clang-format off
asm void func_02020f04(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, =data_020c4b90
    mov r2, r0, lsr #0x4
    ldr r0, [r1, #0x0]
    sub r4, r2, #0x1
    cmp r0, r4
    cmpne r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    cmp r4, r0
    bls L_02020fa4
    ldr r0, =data_020c4b98
    ldr r1, =data_020c4b9c
    ldr r3, [r0, #0x0]
    ldr r5, [r1, #0x0]
    ldr r1, [r3, #0x4]
    add r0, r5, r4, lsl #0x4
    add r2, r5, r1, lsl #0x4
    ldrb r1, [r2, #0x8]
    tst r1, #0x1
    moveq r3, r2
    sub r2, r0, r5
    mov r1, r2, asr #0x3
    add r1, r2, r1, lsr #0x1c
    mov r2, r1, asr #0x4
    str r2, [r3, #0x0]
    ldr r1, =data_020c4b9c
    ldr r2, =0xffff
    ldr r1, [r1, #0x0]
    sub r3, r3, r1
    mov r1, r3, asr #0x3
    add r1, r3, r1, lsr #0x1c
    mov r1, r1, asr #0x4
    str r1, [r0, #0x4]
    str r2, [r0, #0x0]
    add r2, r0, #0x8
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r1, =data_020c4b98
    str r0, [r1, #0x0]
    b L_0202111c
L_02020fa4:
    ldr r0, =data_020c4b98
    ldr r1, =data_020c4b9c
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x4]
    add r5, r1, r4, lsl #0x4
    adds r6, r1, r0, lsl #0x4
    beq L_02021098
L_02020fc4:
    cmp r6, r5
    bhs L_02020ff0
    ldrb r0, [r6, #0x8]
    tst r0, #0x1
    beq L_02021098
    ldr r1, [r6, #0x0]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_02020ff0
    cmp r1, r4
    blo L_02021098
L_02020ff0:
    ldrb r0, [r6, #0x8]
    tst r0, #0x1
    beq L_02021070
    ldr r0, =data_020c4b78
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02021090
    ldr r1, =data_020c4ba0
    ldr r3, [r1, #0x0]
    add r1, r6, #0x10
L_02021018:
    ldr r2, [r0, #0x20]
    ldr r2, [r2, #0x0]
    add r2, r3, r2
    cmp r2, r1
    bne L_02021060
    ldr r2, [r6, #0x4]
    ldr r1, =0xffff
    cmp r2, r1
    moveq r6, #0x0
    beq L_0202104c
    ldr r1, =data_020c4b9c
    ldr r1, [r1, #0x0]
    add r6, r1, r2, lsl #0x4
L_0202104c:
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x8
    str r1, [r0, #0x0]
    bl func_0202032c
    b L_02021090
L_02021060:
    ldr r0, [r0, #0x2c]
    cmp r0, #0x0
    bne L_02021018
    b L_02021090
L_02021070:
    ldr r1, [r6, #0x4]
    ldr r0, =0xffff
    cmp r1, r0
    moveq r6, #0x0
    beq L_02021090
    ldr r0, =data_020c4b9c
    ldr r0, [r0, #0x0]
    add r6, r0, r1, lsl #0x4
L_02021090:
    cmp r6, #0x0
    bne L_02020fc4
L_02021098:
    ldrb r0, [r6, #0x8]
    tst r0, #0x1
    bne L_020210cc
    ldr r1, [r6, #0x4]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_020210cc
    ldr r0, =data_020c4b9c
    ldr r0, [r0, #0x0]
    add r1, r0, r1, lsl #0x4
    ldrb r0, [r1, #0x8]
    tst r0, #0x1
    moveq r6, r1
L_020210cc:
    ldr r2, =data_020c4b9c
    ldr r3, =0xffff
    ldr r0, [r2, #0x0]
    add r1, r5, #0x8
    sub ip, r5, r0
    mov r0, ip, asr #0x3
    add r0, ip, r0, lsr #0x1c
    mov r0, r0, asr #0x4
    str r0, [r6, #0x0]
    ldr r0, [r2, #0x0]
    mov r2, #0x0
    sub r6, r6, r0
    mov r0, r6, asr #0x3
    add r0, r6, r0, lsr #0x1c
    mov r0, r0, asr #0x4
    str r0, [r5, #0x4]
    str r3, [r5, #0x0]
    swpb r0, r2, [r1]
    ldr r0, =data_020c4b98
    str r5, [r0, #0x0]
L_0202111c:
    ldr r0, =data_020c4b90
    str r4, [r0, #0x0]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
