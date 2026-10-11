#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_020359b8();
extern void func_02035a48();
// clang-format off
asm void func_02033090(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x34
    add ip, sp, #0x1c
    mov r5, r1
    mov r4, #0x6
L_020330a4:
    ldrb r1, [r2, #0x0]
    ldrb r3, [r2, #0x1]
    add r2, r2, #0x2
    subs r4, r4, #0x1
    swpb r1, r1, [ip]
    add ip, ip, #0x1
    swpb r1, r3, [ip]
    add ip, ip, #0x1
    bne L_020330a4
    add r4, sp, #0x28
    mov r3, #0x6
L_020330d0:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r4]
    add r4, r4, #0x1
    swpb r1, r2, [r4]
    add r4, r4, #0x1
    bne L_020330d0
    add r0, sp, #0x28
    add r1, sp, #0x1c
    bl VEC_DotProduct
    cmp r0, #0x0
    add r0, sp, #0x28
    add r1, sp, #0x1c
    blt L_02033118
    bl VEC_DotProduct
    b L_02033120
L_02033118:
    bl VEC_DotProduct
    rsb r0, r0, #0x0
L_02033120:
    cmp r0, #0x10
    movlt r4, #0x0
    blt L_020331e4
    add r0, sp, #0x10
    add r1, sp, #0x28
    add r2, sp, #0x1c
    bl func_020359b8
    ldr r2, [sp, #0x10]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203316c
    ldr r2, [sp, #0x14]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203316c:
    cmp r1, #0x0
    beq L_02033188
    ldr r1, [sp, #0x18]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02033188:
    tst r0, #0xff
    bne L_020331e0
    add r0, sp, #0x28
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x10
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x0
    add r1, sp, #0x28
    add r2, sp, #0x10
    bl func_02035a48
    add r0, sp, #0x0
    add r1, sp, #0x28
    add r2, sp, #0x1c
    ldr r4, [sp, #0x0]
    bl func_02035a48
    ldr r1, [sp, #0x0]
    ldr r0, =0x1922
    cmp r1, r0
    rsbgt r4, r4, #0x0
    b L_020331e4
L_020331e0:
    mov r4, #0x0
L_020331e4:
    add r3, sp, #0x28
    mov r2, #0x6
L_020331ec:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020331ec
    add r0, sp, #0x28
    add r1, sp, #0x1c
    bl VEC_DotProduct
    cmp r0, #0x0
    moveq r5, #0x0
    beq L_020332e0
    add r0, sp, #0x10
    add r1, sp, #0x28
    add r2, sp, #0x1c
    bl func_020359b8
    ldr r2, [sp, #0x10]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_02033268
    ldr r2, [sp, #0x14]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_02033268:
    cmp r1, #0x0
    beq L_02033284
    ldr r1, [sp, #0x18]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02033284:
    tst r0, #0xff
    bne L_020332dc
    add r0, sp, #0x28
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x10
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x0
    add r1, sp, #0x28
    add r2, sp, #0x10
    bl func_02035a48
    add r0, sp, #0x0
    add r1, sp, #0x28
    add r2, sp, #0x1c
    ldr r5, [sp, #0x0]
    bl func_02035a48
    ldr r1, [sp, #0x0]
    ldr r0, =0x1922
    cmp r1, r0
    rsbgt r5, r5, #0x0
    b L_020332e0
L_020332dc:
    mov r5, #0x0
L_020332e0:
    sub r0, r5, r4
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
