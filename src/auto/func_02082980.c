#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_02082980(void) {
    ldr r2, =data_020e39e9
    mov r0, #0x20
    ldr r1, =data_020e39e8
    mov r3, #0x1
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
