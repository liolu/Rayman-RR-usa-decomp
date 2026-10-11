#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e4f78[];
// clang-format off
asm void func_020b0138(void) {
    mov r3, #0x0
    ldr ip, =data_020e4f78
    mov r2, r3
L_020b0144:
    str r2, [ip, #0x0]
    str r2, [ip, #0x10]
    add r1, ip, #0x18
    swpb r0, r2, [r1]
    add r1, ip, #0x19
    swpb r0, r2, [r1]
    add r1, ip, #0x1a
    swpb r0, r2, [r1]
    add r3, r3, #0x1
    str r2, [ip, #0x14]
    cmp r3, #0x32
    add ip, ip, #0x1c
    blt L_020b0144
    bx lr
}
// clang-format on
