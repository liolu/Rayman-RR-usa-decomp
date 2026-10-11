#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201b190();
extern void func_0201b250();
extern void func_0201c42c();
extern void func_0202c664();
extern void func_0202e19c();
extern void func_0204a8cc();
extern void func_0204a8f4();
extern void func_0204e520();
extern char data_020c706c[];
extern char data_020c70bc[];
extern char data_020c70c0[];
extern char data_020c70c4[];
extern char data_020c7104[];
extern char data_020c7130[];
extern char data_020c7518[];
// clang-format off
asm void func_0202837c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r3
    bl func_0204a8f4
    mov r4, r0
    mov r0, #0xff000
    bl func_0204a8cc
    ldr r1, =data_020c70c0
    ldr r0, =data_020c70c4
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    bl func_0201b190
    ldr r0, =data_020c70bc
    ldr r2, =data_020c7130
    ldrsh r1, [r0, #0x0]
    mov r0, #0x64
    smlabb r0, r1, r0, r2
    bl func_0202c664
    ldr r0, =data_020c7104
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02028448
    ldr r0, =data_020c70bc
    ldr r3, =data_020c7130
    ldrsh r5, [r0, #0x0]
    ldr r2, =data_020c7518
    mov r0, #0x64
    mov r1, #0xc
    mla r0, r5, r0, r3
    mla r1, r5, r1, r2
    bl func_0202e19c
    ldr r0, =data_020c70bc
    ldr r2, =data_020c7130
    ldrsh r1, [r0, #0x0]
    mov r0, #0x64
    smlabb r0, r1, r0, r2
    bl func_0201b250
    ldr r1, =data_020c706c
    ldr r0, =0xf7fc4000
    ldrsb r5, [r1, #0x0]
    orr r2, r6, r0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x18]
    mov r0, r7
    bic r2, r2, #0x8
    mov r3, #0x0
    bl func_0204e520
    ldr r1, =data_020c706c
    swpb r0, r5, [r1]
    bl func_0201c42c
L_02028448:
    mov r0, r4
    bl func_0204a8cc
    bl func_0201c42c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
