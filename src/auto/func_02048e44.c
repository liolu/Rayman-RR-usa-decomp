#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020d0c19[];
// clang-format off
asm void func_02048e44(void) {
    ldr r1, =data_020d0c19
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
