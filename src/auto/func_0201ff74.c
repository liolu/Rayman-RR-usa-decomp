#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c4b9c[];
extern char data_020c4ba0[];
// clang-format off
asm void func_0201ff74(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r2, [r0, #0x1c]
    ldr r0, =data_020c4ba0
    ldr r3, [r2, #0x28]
    ldr r2, =data_020c4b9c
    ldr r4, [r3, #0x4]
    ldr r3, [r0, #0x0]
    sub r1, r1, #0x10
    add r4, r4, #0xf
    ldr r0, [r2, #0x0]
    ldr r2, [r3, r1]
    add r1, r3, r1
    add r5, r0, r2, lsl #0x4
    bic r3, r4, #0xf
    sub r2, r5, r1
    sub r2, r2, r3
    cmp r2, #0x20
    bls L_02020008
    mov r2, r3, lsr #0x4
    add lr, r2, #0x1
    add r4, r1, lr, lsl #0x4
    sub r3, r4, r0
    mov r2, r3, asr #0x3
    add r2, r3, r2, lsr #0x1c
    mov ip, r2, asr #0x4
    str ip, [r5, #0x4]
    sub r2, r1, r0
    mov r0, r2, asr #0x3
    ldr r3, [r1, #0x0]
    add r0, r2, r0, lsr #0x1c
    str r3, [r1, lr, lsl #0x4]
    mov r0, r0, asr #0x4
    str r0, [r4, #0x4]
    str ip, [r1, #0x0]
    add r2, r4, #0x8
    mov r0, #0x0
    swpb r0, r0, [r2]
L_02020008:
    add r1, r1, #0x8
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
