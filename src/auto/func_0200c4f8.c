#include "m2c.h"

/* Tail call with the target in r1: a register the compiler never uses. */
extern void func_0200c61c();
// clang-format off
asm void func_0200c4f8(void) {
    ldr r1, =func_0200c61c
    bx r1
}
// clang-format on
