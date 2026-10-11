#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dce94[];
// clang-format off
asm void func_02057024(void) {
    ldr r1, =data_020dce94
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
