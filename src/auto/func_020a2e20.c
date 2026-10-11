#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c049c[];
// clang-format off
asm void func_020a2e20(void) {
    ldr r2, =data_020c049c
    mvn ip, #0x31
    swpb r0, ip, [r2]
    add r1, r2, #0x1
    mov r3, #0x32
    swpb r0, r3, [r1]
    add r1, r2, #0x2
    swpb r0, ip, [r1]
    add r1, r2, #0x3
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
