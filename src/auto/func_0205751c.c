#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205703c();
extern char data_020dc098[];
extern char data_020dc09c[];
// clang-format off
asm void func_0205751c(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x14
    bl func_0205703c
    str r4, [r0, #0x10]
    ldr r1, [r4, #0x4]
    ldr r1, [r1, #0x4]
    str r1, [r0, #0xc]
    ldr r2, [r0, #0x0]
    cmp r2, #0x0
    ldrne r1, [r0, #0x4]
    strne r1, [r2, #0x4]
    ldr r2, [r0, #0x4]
    cmp r2, #0x0
    ldrne r1, [r0, #0x0]
    strne r1, [r2, #0x0]
    ldr r2, [r0, #0x8]
    cmp r2, #0x0
    beq L_020575a0
    ldr r1, [r2, #0x8]
    sub r1, r1, #0x1
    str r1, [r2, #0x8]
    ldr r2, [r0, #0x8]
    ldr r1, [r2, #0x0]
    cmp r1, r0
    ldreq r1, [r0, #0x0]
    streq r1, [r2, #0x0]
    ldr r2, [r0, #0x8]
    ldr r1, [r2, #0x4]
    cmp r1, r0
    ldreq r1, [r0, #0x4]
    streq r1, [r2, #0x4]
L_020575a0:
    mov r2, #0x0
    str r2, [r0, #0x0]
    str r2, [r0, #0x4]
    str r2, [r0, #0x8]
    str r2, [r0, #0x0]
    ldr r1, =data_020dc098
    ldr r2, =data_020dc09c
    ldr r3, [r1, #0x8]
    str r3, [r0, #0x4]
    str r2, [r0, #0x8]
    ldr r2, [r1, #0x4]
    cmp r2, #0x0
    streq r0, [r1, #0x4]
    ldrne r1, [r1, #0x8]
    strne r0, [r1, #0x0]
    ldr r1, =data_020dc098
    str r0, [r1, #0x8]
    ldr r0, [r1, #0xc]
    add r0, r0, #0x1
    str r0, [r1, #0xc]
    ldr r1, [r4, #0x4]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, pc}
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
