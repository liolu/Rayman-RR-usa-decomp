#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020bca48[];
extern char data_020dba6c[];
// clang-format off
asm void func_02051758(void) {
    stmfd sp!, {r3, lr}
    ldr ip, =data_020dba6c
    ldr r3, =data_020bca48
    add r2, ip, #0xd
    mov lr, #0x1
    swpb r1, lr, [r2]
    add r2, ip, #0xe
    swpb r1, lr, [r2]
    add r1, r3, #0x5
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
