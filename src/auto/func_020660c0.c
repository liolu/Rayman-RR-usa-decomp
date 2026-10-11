#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020660c0(void) {
    mov ip, #0x6
L_020660c4:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    swpb r2, r3, [r0]
    add r0, r0, #0x1
    bne L_020660c4
    bx lr
}
// clang-format on
