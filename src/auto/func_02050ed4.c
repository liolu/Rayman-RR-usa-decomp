#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020bca48[];
extern char data_020dba6c[];
// clang-format off
asm void func_02050ed4(void) {
    ldr r0, =data_020dba6c
    ldrsb r0, [r0, #0x7]
    cmp r0, #0x0
    bxne lr
    ldr r0, =data_020bca48
    mov r2, #0x0
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
