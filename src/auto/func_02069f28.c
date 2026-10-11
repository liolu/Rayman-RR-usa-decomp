#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b94();
extern void func_0205703c();
extern char data_020dd834[];
// clang-format off
asm void func_02069f28(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #0x14
    bl func_0205703c
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    bl func_02026b94
    str r0, [r4, #0xc]
    str r5, [r4, #0x10]
    ldr r1, [r4, #0x0]
    cmp r1, #0x0
    ldrne r0, [r4, #0x4]
    strne r0, [r1, #0x4]
    ldr r1, [r4, #0x4]
    cmp r1, #0x0
    ldrne r0, [r4, #0x0]
    strne r0, [r1, #0x0]
    ldr r1, [r4, #0x8]
    cmp r1, #0x0
    beq L_02069fb8
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r4, #0x8]
    ldr r0, [r1, #0x0]
    cmp r0, r4
    ldreq r0, [r4, #0x0]
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0x8]
    ldr r0, [r1, #0x4]
    cmp r0, r4
    ldreq r0, [r4, #0x4]
    streq r0, [r1, #0x4]
L_02069fb8:
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    ldr r1, =data_020dd834
    str r0, [r4, #0x0]
    ldr r0, [r1, #0x4]
    mov r2, #0x1
    stmib r4, {r0, r1}
    ldr r0, [r1, #0x0]
    cmp r0, #0x0
    streq r4, [r1, #0x0]
    ldrne r0, [r1, #0x4]
    strne r4, [r0, #0x0]
    ldr r0, =data_020dd834
    str r4, [r0, #0x4]
    ldr r1, [r0, #0x8]
    add r1, r1, #0x1
    str r1, [r0, #0x8]
    ldr r0, [r5, #0x24]
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
