#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202c164(void) {
    stmfd sp!, {r3, lr}
    mul lr, r1, r2
    cmp lr, #0x0
    mov ip, #0x0
    ldmlefd sp!, {r3, pc}
L_0202c178:
    ldr r2, [r3, #0x0]
    add ip, ip, #0x1
    add r1, r2, #0x1
    str r1, [r3, #0x0]
    ldrsb r1, [r2, #0x0]
    cmp ip, lr
    swpb r1, r1, [r0]
    add r0, r0, #0x1
    blt L_0202c178
    ldmfd sp!, {r3, pc}
}
// clang-format on
