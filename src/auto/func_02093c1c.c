#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020542d4();
extern void func_02054414();
extern void func_020559e0();
extern void func_020606a0();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02093c1c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x34
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r7, r0
    mov r0, r6
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x8
    mov r1, r7
    bl func_0209c740
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r5
    bl func_02084450
    mov r5, r0
    cmp r6, #0x6f
    ldr r0, [sp, #0x24]
    beq L_02093c74
    cmp r6, #0x70
    beq L_02093c94
    b L_02093cb4
L_02093c74:
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r1, r0, lsr #0x10
    mov r0, #0x1
    bl func_020606a0
    mov r6, r0
    b L_02093ccc
L_02093c94:
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r1, r0, lsr #0x10
    mov r0, #0x0
    bl func_020606a0
    mov r6, r0
    b L_02093ccc
L_02093cb4:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    add sp, sp, #0x34
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_02093ccc:
    cmp r6, #0x0
    beq L_02093da0
    ldr r0, [r6, #0xc]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x7
    beq L_02093cf0
    cmp r0, #0x8
    beq L_02093d10
    b L_02093d8c
L_02093cf0:
    mov r1, #0x0
    mov r0, r6
    mov r2, r1
    bl func_020542d4
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02093db0
L_02093d10:
    add ip, sp, #0x6
    mov r1, #0x0
    add r3, sp, #0x4
    mov r0, r6
    mov r2, r1
    str ip, [sp, #0x0]
    bl func_02054414
    ldrsh r2, [sp, #0x4]
    add r1, sp, #0x18
    mov r0, r6
    bl func_020559e0
    ldrsh r2, [sp, #0x6]
    add r1, sp, #0xc
    mov r0, r6
    bl func_020559e0
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0xc]
    subs r2, r1, r0
    rsbmi r2, r2, #0x0
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x10]
    str r2, [sp, #0x18]
    subs r2, r1, r0
    rsbmi r2, r2, #0x0
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x14]
    str r2, [sp, #0x1c]
    subs r0, r1, r0
    rsbmi r0, r0, #0x0
    str r0, [sp, #0x20]
    b L_02093db0
L_02093d8c:
    mov r0, #0x0
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
    b L_02093db0
L_02093da0:
    mov r0, #0x0
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
L_02093db0:
    add ip, sp, #0x18
    mov r3, r4
    mov r2, #0x6
L_02093dbc:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093dbc
    mov r1, #0x15
    mov r0, r5
    str r1, [r4, #0xc]
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
