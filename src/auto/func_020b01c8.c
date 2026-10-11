#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e4f78[];
// clang-format off
asm void func_020b01c8(void) {
    stmfd sp!, {r4, lr}
    cmp r0, #0x32
    ldmgefd sp!, {r4, pc}
    mov ip, #0x1c
    mul lr, r0, ip
    ldr r4, =data_020e4f78
    mov ip, #0x0
    add r0, r4, lr
    str r2, [r4, lr]
    str r3, [r0, #0x10]
    add r3, r0, #0x18
    swpb r2, ip, [r3]
    add lr, r0, #0x4
    mov ip, #0x6
L_020b0200:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [lr]
    add lr, lr, #0x1
    swpb r2, r3, [lr]
    add lr, lr, #0x1
    bne L_020b0200
    add r2, r0, #0x19
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0x1a
    swpb r1, r3, [r2]
    str r3, [r0, #0x14]
    ldmfd sp!, {r4, pc}
}
// clang-format on
