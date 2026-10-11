#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dfd90[];
// clang-format off
asm void func_0207aa78(void) {
    ldr r0, =data_020dfd90
    mov r2, #0x0
    str r2, [r0, #0x0]
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
