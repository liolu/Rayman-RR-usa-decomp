#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020d0c1c[];
// clang-format off
asm void func_02048eb0(void) {
    ldr ip, =data_020d0c1c
    mov r3, #0x6
L_02048eb8:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    bne L_02048eb8
    bx lr
}
// clang-format on
