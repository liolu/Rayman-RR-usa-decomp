#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02098d5c(void) {
    stmfd sp!, {r4, lr}
    ldr r0, [r0, #0x24]
    mov lr, r2
    add r4, r0, #0x4
    mov ip, #0x6
L_02098d70:
    ldrb r0, [r4, #0x0]
    ldrb r3, [r4, #0x1]
    add r4, r4, #0x2
    subs ip, ip, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r3, [lr]
    add lr, lr, #0x1
    bne L_02098d70
    mov r3, #0x15
    mov r0, r1
    str r3, [r2, #0xc]
    ldmfd sp!, {r4, pc}
}
// clang-format on
