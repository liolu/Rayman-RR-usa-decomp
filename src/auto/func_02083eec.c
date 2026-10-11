#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02083eec(void) {
    stmfd sp!, {r4, lr}
    ldr r4, [r1, #0x0]
    mov lr, r2
    mov ip, #0x6
L_02083efc:
    ldrb r0, [r4, #0x0]
    ldrb r3, [r4, #0x1]
    add r4, r4, #0x2
    subs ip, ip, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r3, [lr]
    add lr, lr, #0x1
    bne L_02083efc
    mov r0, #0x15
    str r0, [r2, #0xc]
    add r0, r1, #0x8
    ldmfd sp!, {r4, pc}
}
// clang-format on
