#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020be0d0[];
// clang-format off
asm void func_02075730(void) {
    ldr r2, =data_020be0d0
    add r2, r2, r0, lsl #0x2
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
