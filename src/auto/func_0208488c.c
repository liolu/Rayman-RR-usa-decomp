#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084ea0();
// clang-format off
asm void func_0208488c(void) {
    stmfd sp!, {r3, lr}
    ldrb r3, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    cmp r3, r2
    bhs L_020848b4
    add r2, r3, #0x1
    swpb r2, r2, [r0]
    add r0, r0, r3, lsl #0x2
    str r1, [r0, #0x4]
    ldmfd sp!, {r3, pc}
L_020848b4:
    mov r0, #0xe
    mov r1, #0x0
    bl func_02084ea0
    ldmfd sp!, {r3, pc}
}
// clang-format on
