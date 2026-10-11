#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035608();
// clang-format off
asm void func_02067628(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    ldmfd sp!, {r4, pc}
L_0206763c:
    b L_02067654
    b L_02067654
    b L_02067654
    b L_02067654
    b L_02067654
    ldmfd sp!, {r4, pc}
L_02067654:
    ldr r0, [r4, #0x8]
    ldr r0, [r0, #0x0]
    bl func_02035608
    ldr r0, [r4, #0x8]
    mov r2, #0x7
    ldr r3, [r0, #0x4]
    mov r1, #0x0
L_02067670:
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    subs r2, r2, #0x1
    bne L_02067670
    ldmfd sp!, {r4, pc}
}
// clang-format on
