#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02066430(void) {
    add ip, r0, #0x170
    mov r3, #0x6
L_02066438:
    ldrb r0, [r1, #0x0]
    ldrb r2, [r1, #0x1]
    add r1, r1, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r2, [ip]
    add ip, ip, #0x1
    bne L_02066438
    bx lr
}
// clang-format on
