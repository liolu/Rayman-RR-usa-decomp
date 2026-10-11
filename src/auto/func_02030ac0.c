#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ad9c();
extern char data_020bc544[];
extern char data_020cf6bc[];
extern char data_020cf6c8[];
extern char data_020cf6cc[];
// clang-format off
asm void func_02030ac0(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    ldr ip, =data_020cf6bc
    ldr lr, =data_020cf6c8
    swpb r3, r0, [ip]
    add ip, ip, #0x1
    swpb r3, r1, [ip]
    cmp r1, #0xff
    ldr r3, [lr, #0x0]
    add r3, r3, r2, lsl #0x3
    add ip, r3, #0x1
    swpb r3, r1, [ip]
    ldr r3, [lr, #0x0]
    add ip, r3, r2, lsl #0x3
    swpb r3, r0, [ip]
    beq L_02030b20
    ldr ip, =data_020cf6cc
    ldr r3, [lr, #0x0]
    ldr ip, [ip, r0, lsl #0x2]
    add r0, r3, r2, lsl #0x3
    add r1, ip, r1, lsl #0x4
    str r1, [r0, #0x4]
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
L_02030b20:
    ldr r0, [lr, #0x0]
    mov r3, #0x0
    add r0, r0, r2, lsl #0x3
    str r3, [r0, #0x4]
    sub r0, r3, #0x1
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r0, =data_020bc544
    str r3, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r2, r3
    mov r0, #0x1d
    mov r3, #0x18
    bl func_0207ad9c
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
