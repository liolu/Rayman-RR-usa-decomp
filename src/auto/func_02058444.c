#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dc19c[];
// clang-format off
asm void func_02058444(void) {
    ldr r0, =data_020dc19c
    mov r2, #0x0
    add r1, r0, #0x22
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
