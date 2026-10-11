#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02085de4();
// clang-format off
asm void func_0206919c(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    ldmeqfd sp!, {r4, pc}
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    beq L_020691b8
    bl func_02085de4
L_020691b8:
    mov r2, #0x0
    str r2, [r4, #0x0]
    sub r0, r2, #0x1
    str r0, [r4, #0x4]
    add r1, r4, #0x8
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
