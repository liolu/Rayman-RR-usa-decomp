#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020782f4();
// clang-format off
asm void func_0207a0f0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r0, [r5, #0x68]
    mov r4, #0x0
    cmp r0, #0x0
    ble L_0207a124
L_0207a108:
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x18]
    bl func_020782f4
    ldrb r0, [r5, #0x68]
    add r4, r4, #0x1
    cmp r4, r0
    blt L_0207a108
L_0207a124:
    add r1, r5, #0x68
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
