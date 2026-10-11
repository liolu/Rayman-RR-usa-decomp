#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02029828(void) {
    add ip, r0, #0x48
    mov r3, #0x6
L_02029830:
    ldrb r0, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r1]
    add r1, r1, #0x1
    swpb r0, r2, [r1]
    add r1, r1, #0x1
    bne L_02029830
    bx lr
}
// clang-format on
