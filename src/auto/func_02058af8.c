#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c49d8[];
extern char data_020dbfbc[];
extern char data_020dc19c[];
extern char func_0205939c[];
// clang-format off
asm void func_02058af8(void) {
    ldr r0, =data_020dbfbc
    ldr r1, =data_020dc19c
    ldr r2, [r0, #0x4]
    ldr r0, =data_020c49d8
    ldr ip, =func_0205939c
    add r1, r1, #0x314
    mov r3, #0x0
    str r2, [r0, #0x0]
    swpb r0, r3, [r1]
    bx ip
}
// clang-format on
