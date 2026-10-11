#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02032e54(void) {
    stmfd sp!, {r4, r5, r6, lr}
    add r1, r0, #0x7c
    ldr ip, [r0, #0xe0]
    ldr r2, [r0, #0x7c]
    ldr r6, [r0, #0xe4]
    ldmib r1, {r3, r4}
    sub r3, r6, r3
    ldr r5, [r0, #0xe8]
    sub r2, ip, r2
    sub ip, r5, r4
    add r6, r0, #0xe0
    mov r5, #0x6
L_02032e84:
    ldrb lr, [r6, #0x0]
    ldrb r4, [r6, #0x1]
    add r6, r6, #0x2
    subs r5, r5, #0x1
    swpb lr, lr, [r1]
    add r1, r1, #0x1
    swpb lr, r4, [r1]
    add r1, r1, #0x1
    bne L_02032e84
    ldr r1, [r0, #0xe0]
    add r1, r1, r2
    str r1, [r0, #0xe0]
    ldr r1, [r0, #0xe4]
    add r1, r1, r3
    str r1, [r0, #0xe4]
    ldr r1, [r0, #0xe8]
    add r1, r1, ip
    str r1, [r0, #0xe8]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
