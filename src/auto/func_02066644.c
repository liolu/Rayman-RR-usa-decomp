#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02066644(void) {
    stmfd sp!, {r4, lr}
    add r4, r0, #0x138
    add lr, r0, #0x13c
    mov ip, #0xe
L_02066654:
    ldrb r2, [lr, #0x0]
    ldrb r3, [lr, #0x1]
    add lr, lr, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [r4]
    add r4, r4, #0x1
    swpb r2, r3, [r4]
    add r4, r4, #0x1
    bne L_02066654
    str r1, [r0, #0x154]
    ldmfd sp!, {r4, pc}
}
// clang-format on
