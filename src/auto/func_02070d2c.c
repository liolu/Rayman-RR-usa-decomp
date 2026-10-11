#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206edfc();
// clang-format off
asm void func_02070d2c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrh r0, [r4, #0x18]
    bl func_0206edfc
    ldrh r1, [r0, #0x0]
    add r2, r4, #0x2
    add r3, r4, #0x3
    strh r1, [r4, #0x0]
    ldrh r1, [r0, #0x2]
    add ip, r4, #0x1a
    swpb r1, r1, [r2]
    ldrh r1, [r0, #0x4]
    swpb r1, r1, [r3]
    ldrh r1, [r0, #0x6]
    swpb r1, r1, [ip]
    ldr r1, [r0, #0xc]
    cmp r1, #0x0
    ldreq r1, [r0, #0x10]
    cmpeq r1, #0x0
    ldreq r1, [r0, #0x14]
    cmpeq r1, #0x0
    beq L_02070db8
    add lr, r4, #0x8
    add ip, r0, #0xc
    mov r3, #0x6
L_02070d90:
    ldrb r1, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r2, [lr]
    add lr, lr, #0x1
    bne L_02070d90
    b L_02070e1c
L_02070db8:
    add r2, r4, #0x8
    mov r1, #0x0
    swpb r3, r1, [r2]
    add ip, r2, #0x1
    swpb r3, r1, [ip]
    add ip, r2, #0x2
    swpb r3, r1, [ip]
    add ip, r2, #0x3
    swpb r3, r1, [ip]
    add ip, r2, #0x4
    swpb r3, r1, [ip]
    add ip, r2, #0x5
    swpb r3, r1, [ip]
    add ip, r2, #0x6
    swpb r3, r1, [ip]
    add ip, r2, #0x7
    swpb r3, r1, [ip]
    add ip, r2, #0x8
    swpb r3, r1, [ip]
    add ip, r2, #0x9
    swpb r3, r1, [ip]
    add ip, r2, #0xa
    swpb r3, r1, [ip]
    add r2, r2, #0xb
    swpb r1, r1, [r2]
L_02070e1c:
    ldrb r1, [r4, #0x1a]
    cmp r1, #0x0
    moveq r1, #0x0
    ldrne r1, =0xcccccccc
    str r1, [r4, #0x4]
    ldrh r0, [r0, #0x8]
    cmp r0, #0x0
    moveq r0, #0x0
    ldrne r0, =0xcccccccc
    str r0, [r4, #0x14]
    ldmfd sp!, {r4, pc}
}
// clang-format on
