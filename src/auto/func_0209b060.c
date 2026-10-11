#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009f7c();
extern void func_0200a3b8();
extern void func_0200a474();
extern void func_0200a4bc();
extern char data_020dc19c[];
extern char data_020de148[];
// clang-format off
asm void func_0209b060(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020dc19c
    mov r5, r1
    ldr r0, [r0, #0xd4]
    mov r4, r2
    bl func_0200a474
    mov r1, r0
    ldr r0, =0x447a0000
    bl func_02009f7c
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    ldr r2, =data_020de148
    ldr r1, =data_020dc19c
    ldrh r2, [r2, #0x0]
    mov r2, r2, lsl #0xc
    smull r3, r0, r2, r0
    adds r2, r3, #0x800
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r0, [r1, #0xd0]
    str r2, [sp, #0x0]
    bl func_0200a474
    mov r1, r0
    ldr r0, =0x447a0000
    bl func_02009f7c
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    ldr r1, =data_020de148
    mov r2, #0x0
    ldrh r1, [r1, #0x2]
    str r2, [sp, #0x8]
    add ip, sp, #0x0
    mov r1, r1, lsl #0xc
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r3, r4
    str r1, [sp, #0x4]
    mov r2, #0x6
L_0209b11c:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0209b11c
    mov r1, #0x15
    mov r0, r5
    str r1, [r4, #0xc]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
