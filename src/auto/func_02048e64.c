#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020d0c18[];
// clang-format off
asm void func_02048e64(void) {
    ldr r1, =data_020d0c18
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
