#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0207c1bc(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r3
    mov lr, r0
    mov r6, #0x6
L_0207c1cc:
    ldrb r5, [r7, #0x0]
    ldrb r4, [r7, #0x1]
    add r7, r7, #0x2
    subs r6, r6, #0x1
    swpb ip, r5, [lr]
    add lr, lr, #0x1
    swpb ip, r4, [lr]
    add lr, lr, #0x1
    bne L_0207c1cc
    mov r6, r3
    mov r5, r1
    mov lr, #0x6
L_0207c1fc:
    ldrb ip, [r6, #0x0]
    ldrb r4, [r6, #0x1]
    add r6, r6, #0x2
    subs lr, lr, #0x1
    swpb ip, ip, [r5]
    add r5, r5, #0x1
    swpb ip, r4, [r5]
    add r5, r5, #0x1
    bne L_0207c1fc
    cmp r2, #0x0
    mov ip, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, pc}
L_0207c22c:
    ldr lr, [r3, #0x0]
    ldr r4, [r0, #0x0]
    add ip, ip, #0x1
    cmp lr, r4
    strlt lr, [r0, #0x0]
    ldr lr, [r3, #0x0]
    ldr r4, [r1, #0x0]
    cmp lr, r4
    strgt lr, [r1, #0x0]
    ldr lr, [r3, #0x4]
    ldr r4, [r0, #0x4]
    cmp lr, r4
    strlt lr, [r0, #0x4]
    ldr lr, [r3, #0x4]
    ldr r4, [r1, #0x4]
    cmp lr, r4
    strgt lr, [r1, #0x4]
    ldr lr, [r3, #0x8]
    ldr r4, [r0, #0x8]
    cmp lr, r4
    strlt lr, [r0, #0x8]
    ldr r4, [r3, #0x8]
    ldr lr, [r1, #0x8]
    add r3, r3, #0xc
    cmp r4, lr
    strgt r4, [r1, #0x8]
    cmp ip, r2
    blt L_0207c22c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
