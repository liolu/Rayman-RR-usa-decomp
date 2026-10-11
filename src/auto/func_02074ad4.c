#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020413b4();
extern void func_020414ac();
extern void func_02041da8();
extern void func_02062160();
extern void func_02062634();
extern void func_020747f0();
extern void func_02087184();
// clang-format off
asm void func_02074ad4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r1, r4
    mov r0, #0xa6
    bl func_020413b4
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, pc}
    bl func_020747f0
    mov r5, r0
    mov r1, r4
    mov r0, #0xa6
    mov r2, #0x16
    bl func_020414ac
    mov r4, r0
    ldrh r0, [r4, #0x0]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074b24
    bl func_02062634
    str r0, [r5, #0x0]
L_02074b24:
    ldrh r0, [r4, #0x6]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074b40
    mov r1, #0x0
    bl func_02087184
    str r0, [r5, #0xc]
L_02074b40:
    ldrh r0, [r4, #0x8]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074b5c
    mov r1, #0x0
    bl func_02087184
    str r0, [r5, #0x10]
L_02074b5c:
    ldrh r0, [r4, #0xa]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074b78
    mov r1, #0x0
    bl func_02087184
    str r0, [r5, #0x14]
L_02074b78:
    ldrh r0, [r4, #0xc]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074b94
    mov r1, #0x0
    bl func_02087184
    str r0, [r5, #0x18]
L_02074b94:
    ldrh r0, [r4, #0x2]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074bb0
    mov r1, #0x0
    bl func_02062160
    str r0, [r5, #0x8]
L_02074bb0:
    ldrh r0, [r4, #0x4]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02074bcc
    mov r1, #0x0
    bl func_02062160
    str r0, [r5, #0x4]
L_02074bcc:
    ldrb r0, [r4, #0xe]
    add r1, r5, #0x1c
    add r2, r5, #0x1d
    swpb r0, r0, [r1]
    add r3, r5, #0x1e
    ldrb r0, [r4, #0xf]
    add ip, r5, #0x1f
    add lr, r5, #0x20
    swpb r0, r0, [r2]
    add r2, r5, #0x21
    ldrb r1, [r4, #0x10]
    add r6, r5, #0x22
    mov r0, r4
    swpb r1, r1, [r3]
    add r3, r5, #0x23
    ldrb r1, [r4, #0x11]
    swpb r1, r1, [ip]
    ldrb r1, [r4, #0x12]
    swpb r1, r1, [lr]
    ldrb r1, [r4, #0x13]
    swpb r1, r1, [r2]
    ldrb r1, [r4, #0x14]
    swpb r1, r1, [r6]
    ldrsb r1, [r4, #0x15]
    swpb r1, r1, [r3]
    bl func_02041da8
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
