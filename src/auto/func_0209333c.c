#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0209333c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, [r0, #0x24]
    mov ip, r1
    add lr, r0, #0x4
    mov r3, #0x6
L_02093350:
    ldrb r0, [lr, #0x0]
    ldrb r2, [lr, #0x1]
    add lr, lr, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r2, [ip]
    add ip, ip, #0x1
    bne L_02093350
    mov r0, #0x15
    str r0, [r1, #0xc]
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
}
// clang-format on
