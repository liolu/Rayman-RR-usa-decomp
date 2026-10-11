#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205703c();
extern void func_0205725c();
extern char data_020dc19c[];
extern char data_020dc3cc[];
// clang-format off
asm void func_0205726c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #0x10
    bl func_0205703c
    mov r4, r0
    mov r2, #0x0
    str r2, [r4, #0x4]
    str r2, [r4, #0x8]
    mov r1, r5
    str r2, [r4, #0xc]
    bl func_0205725c
    ldr r1, [r4, #0x4]
    cmp r1, #0x0
    ldrne r0, [r4, #0x8]
    strne r0, [r1, #0x8]
    ldr r1, [r4, #0x8]
    cmp r1, #0x0
    ldrne r0, [r4, #0x4]
    strne r0, [r1, #0x4]
    ldr r1, [r4, #0xc]
    cmp r1, #0x0
    beq L_020572f8
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r4, #0xc]
    ldr r0, [r1, #0x0]
    cmp r0, r4
    ldreq r0, [r4, #0x4]
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0xc]
    ldr r0, [r1, #0x4]
    cmp r0, r4
    ldreq r0, [r4, #0x8]
    streq r0, [r1, #0x4]
L_020572f8:
    mov r1, #0x0
    str r1, [r4, #0x4]
    str r1, [r4, #0x8]
    str r1, [r4, #0xc]
    str r1, [r4, #0x4]
    ldr r0, =data_020dc19c
    ldr r1, =data_020dc3cc
    ldr r2, [r0, #0x234]
    str r2, [r4, #0x8]
    str r1, [r4, #0xc]
    ldr r1, [r0, #0x230]
    cmp r1, #0x0
    streq r4, [r0, #0x230]
    ldrne r0, [r0, #0x234]
    strne r4, [r0, #0x4]
    ldr r0, =data_020dc19c
    str r4, [r0, #0x234]
    ldr r1, [r0, #0x238]
    add r1, r1, #0x1
    str r1, [r0, #0x238]
    ldr r0, [r5, #0x4]
    ldr r1, [r0, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x40
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
