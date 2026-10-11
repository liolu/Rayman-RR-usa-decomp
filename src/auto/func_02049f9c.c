#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02049f9c(void) {
    add r2, r0, #0x2
    swpb r1, r1, [r2]
    mov r1, #0x1
    swpb r1, r1, [r0]
    ldr r1, =0xccc
    mov r2, #0x0
    str r1, [r0, #0x10]
    str r1, [r0, #0x14]
    str r1, [r0, #0x18]
    str r1, [r0, #0x1c]
    str r2, [r0, #0x4]
    str r2, [r0, #0x8]
    sub r1, r2, #0x1000
    str r1, [r0, #0xc]
    str r2, [r0, #0x24]
    str r2, [r0, #0x20]
    str r2, [r0, #0x74]
    str r2, [r0, #0x78]
    str r2, [r0, #0x7c]
    str r2, [r0, #0x80]
    bx lr
}
// clang-format on
