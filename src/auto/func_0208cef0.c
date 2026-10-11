#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern char data_020dc19c[];
// clang-format off
asm void func_0208cef0(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    add r2, sp, #0x0
    bl func_02084450
    ldr r1, =data_020dc19c
    ldr r3, [sp, #0x0]
    add r2, r1, #0xc80
    swpb r1, r3, [r2]
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
