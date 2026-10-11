#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02082480(void) {
    ldr r1, [r1, #0x4]
    ldr r1, [r1, #0xc]
    ldr r3, [r1, #0x0]
    ldrb r1, [r3, #0x10]
    cmp r1, #0x0
    ldrne r1, [r3, #0x4]
    ldreq r1, [r3, #0x8]
    ldr r3, [r1, #0x10]
    mov r1, #0xc
    mla ip, r0, r1, r3
    mov r3, #0x6
L_020824ac:
    ldrb r0, [r2, #0x0]
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_020824ac
    bx lr
}
// clang-format on
