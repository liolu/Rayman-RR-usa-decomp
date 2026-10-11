#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c57b4[];
// clang-format off
asm void func_02027368(void) {
    ldr r3, =data_020c57b4
    mov r0, #0x0
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x0]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x4]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x8]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0xc]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x10]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x14]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x18]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x1c]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x20]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x24]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x28]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x2c]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x30]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x38]
    ldr r1, [r3, #0x10]
    add r2, r1, #0x3c
    swpb r1, r0, [r2]
    ldr r1, [r3, #0x10]
    add r2, r1, #0x3d
    swpb r1, r0, [r2]
    ldr r1, [r3, #0x10]
    strh r0, [r1, #0x3e]
    ldr r1, [r3, #0x10]
    strh r0, [r1, #0x40]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x4c]
    ldr r1, [r3, #0x10]
    str r0, [r1, #0x50]
    bx lr
}
// clang-format on
