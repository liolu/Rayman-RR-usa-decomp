#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c4b90[];
extern char data_020c4b94[];
extern char data_020c4b98[];
extern char data_020c4b9c[];
extern char data_020c4ba0[];
// clang-format off
asm void func_02020e28(void) {
    stmfd sp!, {r4, r5, r6, lr}
    cmp r0, #0x0
    cmpne r1, #0x0
    bne L_02020e68
    ldr r4, =data_020c4ba0
    mov r5, #0x0
    ldr r3, =data_020c4b9c
    ldr r2, =data_020c4b98
    ldr r1, =data_020c4b94
    ldr r0, =data_020c4b90
    str r5, [r4, #0x0]
    str r5, [r3, #0x0]
    str r5, [r2, #0x0]
    str r5, [r1, #0x0]
    str r5, [r0, #0x0]
    ldmfd sp!, {r4, r5, r6, pc}
L_02020e68:
    mov r2, r1, lsr #0x4
    sub r2, r2, #0x1
    add r6, r0, r2, lsl #0x4
    sub r3, r6, r0
    mov r2, r3, asr #0x3
    add r2, r3, r2, lsr #0x1c
    ldr r5, =data_020c4ba0
    ldr r4, =data_020c4b9c
    ldr lr, =data_020c4b98
    ldr ip, =data_020c4b94
    ldr r3, =data_020c4b90
    mov r2, r2, asr #0x4
    str r0, [r5, #0x0]
    str r0, [r4, #0x0]
    str r6, [lr, #0x0]
    str r1, [ip, #0x0]
    str r2, [r3, #0x0]
    str r2, [r0, #0x0]
    ldr r0, [r4, #0x0]
    ldr r3, =0xffff
    mov r2, #0x0
    str r3, [r0, #0x4]
    ldr r0, [r4, #0x0]
    add r1, r0, #0x8
    swpb r0, r2, [r1]
    ldr r0, [lr, #0x0]
    str r3, [r0, #0x0]
    ldr r0, [lr, #0x0]
    str r2, [r0, #0x4]
    ldr r0, [lr, #0x0]
    add r1, r0, #0x8
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
