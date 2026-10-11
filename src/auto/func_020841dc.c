#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e39f0[];
// clang-format off
asm void func_020841dc(void) {
    ldr r1, =data_020e39f0
    add r1, r1, #0x8
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
