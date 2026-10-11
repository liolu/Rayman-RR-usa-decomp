#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02037554(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r2, [r0, #0xc]
    tst r2, #0x80
    addne sp, sp, #0xc
    ldmnefd sp!, {r3, r4, pc}
    ldr r2, [r0, #0x8]
    add ip, sp, #0x0
    orr r2, r2, #0x80000000
    str r2, [r0, #0x8]
    ldr r3, [r1, #0x0]
    ldr r2, [r0, #0xe0]
    add lr, r0, #0x6c
    sub r2, r3, r2
    str r2, [sp, #0x0]
    ldr r4, [r1, #0x4]
    ldr r2, [r0, #0xe4]
    mov r3, #0x6
    sub r2, r4, r2
    str r2, [sp, #0x4]
    ldr r2, [r1, #0x8]
    ldr r1, [r0, #0xe8]
    sub r1, r2, r1
    str r1, [sp, #0x8]
L_020375b4:
    ldrb r1, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r2, [lr]
    add lr, lr, #0x1
    bne L_020375b4
    mov r1, #0x0
    str r1, [r0, #0x3c]
    str r1, [r0, #0x40]
    str r1, [r0, #0x44]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
