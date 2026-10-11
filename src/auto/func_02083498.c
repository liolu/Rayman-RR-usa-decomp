#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02083498(void) {
    stmfd sp!, {r3, lr}
    mov lr, r2
    mov ip, #0x6
L_020834a4:
    ldrb r1, [r0, #0x0]
    ldrb r3, [r0, #0x1]
    add r0, r0, #0x2
    subs ip, ip, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r3, [lr]
    add lr, lr, #0x1
    bne L_020834a4
    mov r0, #0x15
    str r0, [r2, #0xc]
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
}
// clang-format on
