#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027bb8();
extern void func_020b5394();
extern char data_020c57b4[];
extern char data_020c57d0[];
// clang-format off
asm void func_02027aa8(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020c57b4
    mov r4, r0
    ldr r3, [r2, #0x10]
    ldr r1, [r3, #0x38]
    ldr r0, [r3, #0x30]
    sub r0, r1, r0
    str r0, [r3, #0x38]
    ldr r1, [r2, #0x10]
    ldr r0, [r1, #0x38]
    add r1, r1, #0x3c
    mov r0, r0, asr #0xc
    swpb r0, r0, [r1]
    ldr r2, [r2, #0x10]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    ldreq r0, [r2, #0x34]
    moveq r0, r0, asr #0xc
    rsbeq r0, r0, r0, lsl #0x7
    beq L_02027b04
    ldrb r1, [r2, #0x3c]
    ldrb r0, [r2, #0x3d]
    smulbb r0, r1, r0
L_02027b04:
    ldr r1, =data_020c57b4
    strh r0, [r2, #0x3e]
    ldr r1, [r1, #0x10]
    ldr r0, =data_020c57d0
    ldrsh r1, [r1, #0x3e]
    mov r2, #0x0
    mov r1, r1, asr #0x7
    bl func_020b5394
    ldr r0, =data_020c57b4
    ldr r0, [r0, #0x10]
    ldr r0, [r0, #0x4c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    mov r0, r4
    bl func_02027bb8
    ldmfd sp!, {r4, pc}
}
// clang-format on
