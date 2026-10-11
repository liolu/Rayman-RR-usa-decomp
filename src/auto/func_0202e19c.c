#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202e19c(void) {
    stmfd sp!, {r3, lr}
    add lr, r0, #0x4
    mov ip, #0x6
L_0202e1a8:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [lr]
    add lr, lr, #0x1
    swpb r2, r3, [lr]
    add lr, lr, #0x1
    bne L_0202e1a8
    ldr r1, [r0, #0x0]
    cmp r1, #0x1
    moveq r1, #0x2
    streq r1, [r0, #0x0]
    ldmfd sp!, {r3, pc}
}
// clang-format on
