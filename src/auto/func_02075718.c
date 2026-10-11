#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020bd8d0[];
// clang-format off
asm void func_02075718(void) {
    ldr r3, =data_020bd8d0
    mov r2, #0x24
    mla r2, r0, r2, r3
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
