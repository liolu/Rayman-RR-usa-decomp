#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201b024();
extern void func_0204705c();
extern void func_02048d3c();
extern void func_0204aa8c();
extern void func_0204aa90();
extern void func_0204f094();
extern void func_0204f2cc();
extern void func_02050d24();
extern void func_020526f4();
extern void func_020537e8();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_020a69dc();
extern char data_020bd280[];
extern char data_020dc19c[];
extern char data_020dc264[];
extern char data_020dc29c[];
extern char data_020dc2d8[];
extern char data_020de098[];
// clang-format off
asm void func_020728b0(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    mov r4, r0
    bl func_0204aa8c
    ldr r0, =data_020dc29c
    ldr r2, =data_020dc2d8
    ldrsh r1, [r0, #0x38]
    add r3, sp, #0x10
    mov r0, #0x0
    bl func_020526f4
    cmp r0, #0x0
    bne L_02072918
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0x2a
    bl func_0207ad9c
L_02072918:
    ldr r1, =data_020dc29c
    ldr r0, =data_020dc19c
    ldrsh r1, [r1, #0x38]
    ldr r2, [r0, #0x204]
    mov r0, #0x0
    bl func_02048d3c
    ldr r0, =data_020dc2d8
    mov r1, #0x0
    bl func_020537e8
    cmp r4, #0x0
    beq L_0207294c
    ldr r0, =data_020dc2d8
    bl func_0204f094
L_0207294c:
    ldr r1, =data_020de098
    mov r0, #0x1
    cmp r4, #0x0
    swpb r0, r0, [r1]
    beq L_02072970
    ldr r1, =data_020dc19c
    ldr r0, =data_020dc2d8
    ldr r1, [r1, #0x68]
    bl func_0201b024
L_02072970:
    ldr r2, =data_020de098
    mov r1, #0x0
    ldr r0, =data_020dc2d8
    swpb r1, r1, [r2]
    bl func_020a69dc
    cmp r4, #0x0
    beq L_020729a4
    mov r0, #0x0
    bl func_0204705c
    cmp r0, #0x0
    bne L_020729a4
    ldr r0, =data_020dc2d8
    bl func_02050d24
L_020729a4:
    cmp r4, #0x0
    beq L_020729b4
    ldr r0, =data_020dc264
    bl func_0204f2cc
L_020729b4:
    ldr r1, =data_020de098
    mov r0, #0x1
    cmp r4, #0x0
    swpb r0, r0, [r1]
    beq L_020729d0
    ldr r0, =data_020dc2d8
    bl func_0204aa90
L_020729d0:
    ldr r1, =data_020de098
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
