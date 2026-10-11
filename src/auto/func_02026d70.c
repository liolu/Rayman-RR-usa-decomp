#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d264();
extern char data_020c5740[];
extern char data_020c578c[];
// clang-format off
asm void func_02026d70(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020c5740
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    bne L_02026d98
    ldr r0, =data_020c578c
    mov r1, #0x0
    str r1, [r0, #0x0]
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
L_02026d98:
    mov r0, #0x0
    mov r1, #0x10
    bl func_0201d264
    mov ip, r0
    mov r3, #0x4
    mov r2, #0x0
L_02026db0:
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    subs r3, r3, #0x1
    bne L_02026db0
    mov r1, #0x0
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    str r1, [r0, #0xc]
    ldr r2, [r0, #0x4]
    cmp r2, #0x0
    ldrne r1, [r0, #0x8]
    strne r1, [r2, #0x8]
    ldr r2, [r0, #0x8]
    cmp r2, #0x0
    ldrne r1, [r0, #0x4]
    strne r1, [r2, #0x4]
    ldr r2, [r0, #0xc]
    cmp r2, #0x0
    beq L_02026e48
    ldr r1, [r2, #0x8]
    sub r1, r1, #0x1
    str r1, [r2, #0x8]
    ldr r2, [r0, #0xc]
    ldr r1, [r2, #0x0]
    cmp r1, r0
    ldreq r1, [r0, #0x4]
    streq r1, [r2, #0x0]
    ldr r2, [r0, #0xc]
    ldr r1, [r2, #0x4]
    cmp r1, r0
    ldreq r1, [r0, #0x8]
    streq r1, [r2, #0x4]
L_02026e48:
    mov r1, #0x0
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    str r1, [r0, #0xc]
    ldr r2, =data_020c578c
    str r1, [r0, #0x4]
    ldr r1, [r2, #0x4]
    mov r3, #0x7f
    str r1, [r0, #0x8]
    str r2, [r0, #0xc]
    ldr r1, [r2, #0x0]
    cmp r1, #0x0
    streq r0, [r2, #0x0]
    ldrne r1, [r2, #0x4]
    ldr r2, =data_020c578c
    strne r0, [r1, #0x4]
    str r0, [r2, #0x4]
    ldr ip, [r2, #0x8]
    ldr r1, =data_020c5740
    add ip, ip, #0x1
    str ip, [r2, #0x8]
    str r3, [r0, #0x0]
    ldr r2, [r1, #0x4]
    add r2, r2, #0x1
    str r2, [r1, #0x4]
    ldmfd sp!, {r3, pc}
}
// clang-format on
