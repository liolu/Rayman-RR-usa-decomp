#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dd719[];
// clang-format off
asm void func_020637ac(void) {
    ldr r1, =data_020dd719
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
