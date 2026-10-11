#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dba78[];
// clang-format off
asm void func_0204c748(void) {
    ldr r2, =data_020dba78
    sub r0, r1, #0x1
    swpb r0, r0, [r2]
    bx lr
}
// clang-format on
