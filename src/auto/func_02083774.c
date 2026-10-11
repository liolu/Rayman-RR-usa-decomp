#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02083774(void) {
    mov ip, #0x6
L_02083778:
    ldrb r1, [r2, #0x0]
    ldrb r3, [r2, #0x1]
    add r2, r2, #0x2
    subs ip, ip, #0x1
    swpb r1, r1, [r0]
    add r0, r0, #0x1
    swpb r1, r3, [r0]
    add r0, r0, #0x1
    bne L_02083778
    mov r0, #0x1
    bx lr
}
// clang-format on
