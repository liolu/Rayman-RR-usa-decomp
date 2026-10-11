#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020db984[];
extern char data_020db988[];
// clang-format off
asm void func_0204a908(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_020db984
    mov lr, #0x0
    ldr ip, [r1, #0x0]
    cmp ip, #0x0
    ldmlefd sp!, {r3, pc}
    ldr r3, =data_020db988
L_0204a924:
    ldr r1, [r3, lr, lsl #0x2]
    add lr, lr, #0x1
    add r2, r1, #0x1
    cmp lr, ip
    swpb r1, r0, [r2]
    blt L_0204a924
    ldmfd sp!, {r3, pc}
}
// clang-format on
