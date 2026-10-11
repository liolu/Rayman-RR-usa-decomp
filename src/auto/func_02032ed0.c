#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_020359b8();
extern void func_02035a48();
// clang-format off
asm void func_02032ed0(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x34
    add r4, sp, #0x28
    mov lr, #0x6
L_02032ee0:
    ldrb r3, [r0, #0x0]
    ldrb ip, [r0, #0x1]
    add r0, r0, #0x2
    subs lr, lr, #0x1
    swpb r3, r3, [r4]
    add r4, r4, #0x1
    swpb r3, ip, [r4]
    add r4, r4, #0x1
    bne L_02032ee0
    add lr, sp, #0x1c
    mov ip, #0x6
L_02032f0c:
    ldrb r0, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs ip, ip, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r3, [lr]
    add lr, lr, #0x1
    bne L_02032f0c
    add ip, sp, #0x10
    mov r3, #0x6
L_02032f38:
    ldrb r0, [r2, #0x0]
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02032f38
    add r0, sp, #0x28
    add r2, sp, #0x10
    mov r1, r0
    bl func_020359b8
    ldr r2, [sp, #0x28]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_02032f9c
    ldr r2, [sp, #0x2c]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_02032f9c:
    cmp r1, #0x0
    beq L_02032fb8
    ldr r1, [sp, #0x30]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02032fb8:
    tst r0, #0xff
    bne L_02032fd0
    add r0, sp, #0x28
    mov r1, r0
    bl func_01ff84a0
    b L_02032fdc
L_02032fd0:
    add sp, sp, #0x34
    mov r0, #0x0
    ldmfd sp!, {r3, r4, pc}
L_02032fdc:
    add r0, sp, #0x1c
    add r2, sp, #0x10
    mov r1, r0
    bl func_020359b8
    ldr r2, [sp, #0x1c]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203301c
    ldr r2, [sp, #0x20]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203301c:
    cmp r1, #0x0
    beq L_02033038
    ldr r1, [sp, #0x24]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02033038:
    tst r0, #0xff
    bne L_02033050
    add r0, sp, #0x1c
    mov r1, r0
    bl func_01ff84a0
    b L_0203305c
L_02033050:
    add sp, sp, #0x34
    mov r0, #0x0
    ldmfd sp!, {r3, r4, pc}
L_0203305c:
    add r0, sp, #0x0
    add r1, sp, #0x28
    add r2, sp, #0x1c
    bl func_02035a48
    add r0, sp, #0x4
    add r1, sp, #0x10
    ldr r4, [sp, #0x0]
    bl VEC_DotProduct
    cmp r0, #0x0
    rsblt r4, r4, #0x0
    mov r0, r4
    add sp, sp, #0x34
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
