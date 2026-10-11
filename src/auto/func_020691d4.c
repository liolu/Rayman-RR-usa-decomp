#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02085de4();
// clang-format off
asm void func_020691d4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    movs r6, r0
    mov r5, r1
    mov r4, r2
    cmpne r5, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x0]
    cmp r0, #0x0
    beq L_020691fc
    bl func_02085de4
L_020691fc:
    str r5, [r6, #0x0]
    mov r0, #0x0
    str r0, [r6, #0x4]
    add r1, r6, #0x8
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
