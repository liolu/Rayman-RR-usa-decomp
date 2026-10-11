#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206511c();
extern void func_02066e6c();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_0209c83c(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    mov r5, r1
    ldr r4, [r5, #-0x8]
    mov r6, r0
    mov r0, r4
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    cmp r4, #0x3b
    beq L_0209c8c8
    cmp r4, #0x3c
    beq L_0209c880
    cmp r4, #0x96
    beq L_0209c90c
    b L_0209c93c
L_0209c880:
    add r2, sp, #0x4
    mov r0, r6
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x10]
    mov r5, r0
    cmp r1, #0x8
    ldreq r0, [sp, #0x4]
    moveq r1, r0, asr #0xc
    ldr r0, [sp, #0x0]
    ldrne r1, [sp, #0x4]
    ldr r0, [r0, #0x4]
    and r1, r1, #0xff
    ldr r0, [r0, #0x14]
    bl func_02066e6c
    add sp, sp, #0x14
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209c8c8:
    add r2, sp, #0x4
    mov r0, r6
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x10]
    mov r4, r0
    cmp r1, #0x8
    ldreq r0, [sp, #0x4]
    moveq r1, r0, asr #0xc
    ldr r0, [sp, #0x0]
    ldrne r1, [sp, #0x4]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    bl func_0206511c
    add sp, sp, #0x14
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209c90c:
    add r2, sp, #0x4
    mov r0, r6
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x0]
    ldr r3, [sp, #0x4]
    ldr r1, [r1, #0x4]
    add sp, sp, #0x14
    ldr r1, [r1, #0xc]
    add r2, r1, #0x8
    swpb r1, r3, [r2]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209c93c:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
