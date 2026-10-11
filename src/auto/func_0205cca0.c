#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201b100();
extern void func_020281e0();
extern void func_02041bf4();
extern void func_02041c3c();
extern void func_02041ce8();
extern void func_02049b18();
extern void func_02052b4c();
extern void func_02053160();
extern void func_02058000();
extern void func_02059164();
extern void func_02059184();
extern void func_0205a948();
extern void func_0205cb94();
extern void func_0205d624();
extern void func_0205e6ec();
extern void func_020618f4();
extern void func_02062470();
extern void func_02062528();
extern void func_020625cc();
extern void func_0206a0e4();
extern void func_0206d040();
extern void func_0207394c();
extern void func_02082980();
extern char data_020bbfb8[];
extern char data_020dc188[];
extern char data_020dc19c[];
// clang-format off
asm void func_0205cca0(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020dc19c
    mov r1, #0x0
    str r1, [r0, #0x60]
    mov r1, #0xff
    str r1, [r0, #0x64]
    bl func_0207394c
    ldr r1, =data_020dc19c
    ldr r2, =data_020bbfb8
    add r1, r1, #0x7c
    add r1, r1, #0xc00
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x0]
    cmp r0, #0x0
    bne L_0205ccf8
    bl func_0205a948
    mov r1, r0
    mov r0, #0x1
    bl func_02052b4c
    mov r0, #0x1
    mov r1, #0x2
    bl func_02053160
L_0205ccf8:
    ldr r0, =data_020dc19c
    mov r2, #0x0
    str r2, [r0, #0x20c]
    str r2, [r0, #0x210]
    str r2, [r0, #0x214]
    str r2, [r0, #0x224]
    str r2, [r0, #0x228]
    str r2, [r0, #0x22c]
    str r2, [r0, #0x230]
    str r2, [r0, #0x234]
    str r2, [r0, #0x238]
    str r2, [r0, #0xc84]
    str r2, [r0, #0xc88]
    ldr r1, =data_020dc188
    str r2, [r0, #0xc8c]
    swpb r0, r2, [r1]
    bl func_02059164
    bl func_0205cb94
    bl func_02049b18
    bl func_02059184
    bl func_02062470
    mov r0, #0x1
    bl func_02082980
    bl func_0206d040
    bl func_0205d624
    bl func_0206a0e4
    bl func_020618f4
    mov r0, #0x0
    bl func_020281e0
    bl func_0201b100
    bl func_02058000
    bl func_0205e6ec
    bl func_020625cc
    bl func_02062528
    bl func_02041c3c
    bl func_02041bf4
    bl func_02041ce8
    ldmfd sp!, {r3, pc}
}
// clang-format on
