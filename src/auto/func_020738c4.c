#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020de1fc[];
// clang-format off
asm void func_020738c4(void) {
    ldr r1, =data_020de1fc
    add r1, r1, #0x4
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
