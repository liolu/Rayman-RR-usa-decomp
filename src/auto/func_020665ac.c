#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
// clang-format off
asm void func_020665ac(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r0, r5, #0x78
    add r1, r5, #0x84
    mov r2, #0x54
    bl func_02001588
    add r3, r5, #0xcc
    mov r2, #0x6
L_020665d0:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020665d0
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
