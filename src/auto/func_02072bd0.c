#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020de0b4[];
// clang-format off
asm void func_02072bd0(void) {
    ldr r1, =data_020de0b4
    add r1, r1, #0x47
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
