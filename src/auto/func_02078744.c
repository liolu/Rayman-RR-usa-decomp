#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02077f80();
extern void func_0207ab5c();
extern char data_020dfe24[];
// clang-format off
asm void func_02078744(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0x34]
    ldr r4, [r5, #0x38]
    add r0, r0, r1, lsl #0x3
    add r3, r0, #0x3
    swpb r1, r2, [r3]
    mov r1, #0xc
    ldr r3, [r5, #0xb4]
    mla r4, r2, r1, r4
    cmp r3, #0x0
    beq L_02078790
    add r1, r4, #0x9
    mov r0, #0xff
    swpb r0, r0, [r1]
    add r1, r4, #0x8
    ldrb r0, [r4, #0x9]
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
L_02078790:
    ldrb ip, [r0, #0x2]
    ldrb r3, [r0, #0x1]
    ldrsb r2, [r5, #0xc3]
    ldr r1, [r4, #0x0]
    sub r3, ip, r3
    add r3, r3, #0x1
    mov r3, r3, lsl r2
    ldr r2, [r0, #0x4]
    add r0, r5, #0x64
    bl func_02077f80
    ldr r0, [r5, #0xb0]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #0x4]
    ldrsh r3, [r5, #0x10]
    ldrsb r0, [r5, #0xc3]
    ldrh r1, [r1, #0x0]
    ldr r2, [r4, #0x0]
    mov r3, r3, lsl r0
    ldr r0, =data_020dfe24
    bl func_0207ab5c
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
