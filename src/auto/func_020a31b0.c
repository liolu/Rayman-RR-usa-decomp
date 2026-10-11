#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern char data_020c049c[];
// clang-format off
asm void func_020a31b0(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    add r2, sp, #0x0
    bl func_02084450
    ldr r1, =data_020c049c
    ldr r3, [sp, #0x0]
    add r2, r1, #0x4
    swpb r1, r3, [r2]
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
