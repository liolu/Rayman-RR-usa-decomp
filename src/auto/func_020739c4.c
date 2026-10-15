#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern void _s32_div_f();
extern void func_0200de10();
extern void func_0200fa2c();
extern void func_0200fca4();
extern void func_0201027c();
extern void func_02010294();
extern void func_02010890();
extern void func_020746fc();
extern char data_020bd568[];
extern char data_020de26c[];
extern char data_020de290[];
extern char data_020de650[];
extern char data_020de654[];
extern char data_020de658[];
extern char data_020de680[];
extern char data_020de681[];
extern char func_020739c0[];
// clang-format off
asm void func_020739c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r0, #0x0
    sub r1, r0, #0x1
    mov r2, #0x400
    bl func_0200de10
    ldr r1, =data_020de654
    str r0, [r1, #0x0]
    bl func_0200fca4
    bl func_02010890
    mov r0, #0x1
    bl func_02010294
    mov r0, #0x2
    bl func_0201027c
    ldr r0, =data_020de654
    ldr r1, =data_020de658
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    str r2, [r1, #0x0]
    str r0, [r1, #0x4]
    mov r2, #0x400
    ldr r0, =0x82e80
    str r2, [r1, #0x8]
    str r0, [r1, #0xc]
    mov r4, #0x1
    ldr r2, =func_020739c0
    str r4, [r1, #0x10]
    ldr r0, =data_020bd568
    str r2, [r1, #0x14]
    ldrb r5, [r0, #0x0]
    ldr r2, =data_020de680
    mov r0, #0x80
    cmp r5, #0x1
    swpb r1, r0, [r2]
    blt L_02073a74
    mov r1, r5
    ldr r6, =data_020de681
    bl _s32_div_f
L_02073a58:
    ldrb r1, [r6, #-0x1]
    add r4, r4, #0x1
    cmp r4, r5
    add r1, r1, r0
    swpb r1, r1, [r6]
    add r6, r6, #0x1
    ble L_02073a58
L_02073a74:
    ldr r2, =data_020de26c
    mov r1, #0x0
    strh r1, [r2, #0x2]
    ldr r0, =data_020bd568
    strh r1, [r2, #0x4]
    ldrsh r2, [r0, #0x4]
    ldr r0, =data_020de290
    add r2, r2, r2, lsl #0x2
    bl memset
    ldr r3, =data_020de290
    mov r5, #0x80
    ldrb r0, [r3, #0x0]
    add r1, r3, #0x1
    ldr r2, =data_020de26c
    orr r0, r0, #0x1
    swpb r0, r0, [r3]
    mov r4, #0x0
    swpb r0, r5, [r1]
    add r1, r3, #0x2
    str r4, [r2, #0x8]
    swpb r0, r5, [r1]
    bl func_020746fc
    bl func_0200fa2c
    ldr r1, =data_020de650
    str r0, [r1, #0x0]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
