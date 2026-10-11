#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e39ed[];
// clang-format off
asm void func_020828f0(void) {
    ldr r1, =data_020e39ed
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
