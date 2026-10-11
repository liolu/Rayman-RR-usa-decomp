#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c75c4[];
// clang-format off
asm void func_0202b0e8(void) {
    ldr r1, =data_020c75c4
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
