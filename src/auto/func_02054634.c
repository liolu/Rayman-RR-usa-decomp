#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02054634(void) {
    stmfd sp!, {r4, lr}
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    mov r4, r0
    mov lr, #0x6
L_02054648:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs lr, lr, #0x1
    swpb r3, r3, [r4]
    add r4, r4, #0x1
    swpb r3, ip, [r4]
    add r4, r4, #0x1
    bne L_02054648
    str r2, [r0, #0xc]
    ldmfd sp!, {r4, pc}
}
// clang-format on
