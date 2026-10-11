#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_02082758(void) {
    ldr r3, [r0, #0x10]
    ldr r2, =data_020e39e8
    ldrb r0, [r3, #0x4e]
    ldr r1, =data_020e39e9
    swpb r0, r0, [r2]
    ldrb r0, [r3, #0x4f]
    swpb r0, r0, [r1]
    ldr r0, [r3, #0x48]
    bx lr
}
// clang-format on
