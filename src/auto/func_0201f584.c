#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201f584(void) {
    ldr r2, [r0, #0x0]
    add r3, r1, #0xc
    str r2, [r1, #0x0]
    ldr r2, [r0, #0x4]
    mov ip, #0x0
    str r2, [r1, #0x4]
    ldrb r2, [r0, #0x12]
    swpb r2, r2, [r3]
    str ip, [r1, #0x10]
    ldr r2, [r0, #0x14]
    str r2, [r1, #0x14]
    tst r2, #0x40
    streq ip, [r1, #0x18]
    streq ip, [r1, #0x1c]
    streq ip, [r1, #0x20]
    beq L_0201f5dc
    ldr r2, [r0, #0x18]
    str r2, [r1, #0x18]
    ldr r2, [r0, #0x1c]
    str r2, [r1, #0x1c]
    ldr r2, [r0, #0x20]
    str r2, [r1, #0x20]
L_0201f5dc:
    ldr r2, [r0, #0x24]
    mov r0, #0x1
    str r2, [r1, #0x24]
    str r0, [r1, #0x10]
    bx lr
}
// clang-format on
