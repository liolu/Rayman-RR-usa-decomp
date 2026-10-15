#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void FX_Div();
extern void func_0204a8cc();
extern void func_02050f00();
extern void func_02051858();
extern void func_020b0134();
extern void func_020b0404();
extern char data_020dba6d[];
extern char data_020dba6e[];
extern char data_020dba6f[];
extern char data_020dc19c[];
extern char data_020e4f10[];
extern char data_020e54f0[];
extern char data_020e5940[];
// clang-format off
asm void func_020a69dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, =data_020dba6f
    mov r6, #0x0
    ldr r5, =data_020e4f10
    ldr r3, =data_020dba6e
    ldr r2, =data_020dba6d
    swpb r1, r6, [r4]
    swpb r1, r6, [r3]
    swpb r1, r6, [r2]
    str r6, [r5, #0x20]
    add r2, r5, #0x24
    swpb r1, r6, [r2]
    mov r10, r0
    bl func_02051858
    ldr r0, =data_020dc19c
    ldrb r0, [r0, #0xc7e]
    cmp r0, #0x0
    beq L_020a6a38
    mov r0, r5
    mov r2, #0x1
    add r1, r0, #0x34
    swpb r0, r2, [r1]
L_020a6a38:
    mov r8, #0x0
    ldr r9, =data_020e54f0
    ldr r5, =data_020dc19c
    mov r4, r8
    mov r11, #0x800
L_020a6a4c:
    ldrb r0, [r5, #0xc7e]
    cmp r0, #0x0
    bne L_020a6a60
    cmp r8, #0x6
    blt L_020a6a70
L_020a6a60:
    cmp r0, #0x0
    beq L_020a6bc8
    cmp r8, #0x6
    blt L_020a6bc8
L_020a6a70:
    ldr r0, [r9, #0x1c]
    cmp r0, #0x0
    ble L_020a6bc8
    ldr r2, [r9, #0x0]
    ldr r1, [r9, #0xc]
    ldmib r9, {r0, r3}
    sub r3, r3, r2
    sub r2, r1, r0
    cmp r3, r2
    ldr r0, [r9, #0x18]
    mov r1, #0x64000
    ble L_020a6b38
    smull r3, r2, r0, r3
    adds r0, r3, r11
    adc r2, r2, r4
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl FX_Div
    mov r7, r0
    ldr r0, [r9, #0x1c]
    ldr r6, [r9, #0x0]
    bl func_0204a8cc
    ldr r1, [r9, #0xc]
    mov r0, r10
    str r1, [sp, #0x0]
    ldr r1, [r9, #0x20]
    add r3, r6, r7
    add r1, r1, #0x1
    str r1, [sp, #0x4]
    ldr r1, [r9, #0x14]
    str r1, [sp, #0x8]
    ldmia r9, {r1, r2}
    bl func_02050f00
    ldr r0, [r9, #0x18]
    cmp r0, #0x64000
    bge L_020a6bc8
    ldr r2, [r9, #0xc]
    mov r0, r10
    add r2, r2, #0x3e8
    str r2, [sp, #0x0]
    ldr r2, [r9, #0x20]
    add r1, r6, r7
    add r2, r2, #0x1
    str r2, [sp, #0x4]
    ldr r2, [r9, #0x10]
    str r2, [sp, #0x8]
    ldmib r9, {r2, r3}
    add r2, r2, #0x3e8
    bl func_02050f00
    b L_020a6bc8
L_020a6b38:
    smull r3, r2, r0, r2
    mov r0, #0x800
    adds r3, r3, r0
    mov r0, #0x0
    adc r2, r2, r0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    bl FX_Div
    ldr r1, [r9, #0xc]
    sub r6, r1, r0
    ldr r0, [r9, #0x1c]
    bl func_0204a8cc
    ldr r1, [r9, #0xc]
    mov r0, r10
    str r1, [sp, #0x0]
    ldr r1, [r9, #0x20]
    mov r2, r6
    add r1, r1, #0x1
    str r1, [sp, #0x4]
    ldr r1, [r9, #0x14]
    str r1, [sp, #0x8]
    ldr r1, [r9, #0x0]
    ldr r3, [r9, #0x8]
    bl func_02050f00
    ldr r0, [r9, #0x18]
    cmp r0, #0x64000
    bge L_020a6bc8
    str r6, [sp, #0x0]
    ldr r1, [r9, #0x20]
    mov r0, r10
    add r1, r1, #0x1
    str r1, [sp, #0x4]
    ldr r1, [r9, #0x10]
    str r1, [sp, #0x8]
    ldmia r9, {r1, r2, r3}
    bl func_02050f00
L_020a6bc8:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r9, r9, #0x24
    blt L_020a6a4c
    ldr r6, =data_020e5940
    mov r4, #0x0
    mov r5, #0x22
L_020a6be4:
    ldr r0, [r6, #0x14]
    cmp r0, #0x0
    ble L_020a6c14
    add r4, r4, #0x1
    bl func_0204a8cc
    ldr r1, [r6, #0xc]
    mov r0, r10
    stmia sp, {r1, r4}
    ldr r1, [r6, #0x10]
    str r1, [sp, #0x8]
    ldmia r6, {r1, r2, r3}
    bl func_02050f00
L_020a6c14:
    sub r6, r6, #0x18
    subs r5, r5, #0x1
    bpl L_020a6be4
    ldr r0, =data_020e4f10
    ldr r0, [r0, #0x30]
    cmp r0, #0x28
    ble L_020a6c38
    mov r0, r10
    bl func_020b0134
L_020a6c38:
    mov r0, r10
    bl func_020b0404
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
