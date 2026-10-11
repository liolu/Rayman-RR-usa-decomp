#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015a8();
extern void func_020481fc();
extern void func_020482d0();
extern char data_020bd030[];
extern char data_020bea58[];
extern char data_020e3a4c[];
// clang-format off
asm void func_0207c930(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [sp, #0x28]
    mov r11, r1
    mov r9, r2
    mov r8, r3
    ldr r7, [sp, #0x34]
    ldr r6, [sp, #0x38]
    bl func_020482d0
    mvn r1, #0x0
    cmp r0, r1
    beq L_0207c990
    bl func_020481fc
    tst r0, #0x8
    beq L_0207c990
    ldr r0, [sp, #0x2c]
    bl func_020482d0
    mvn r1, #0x0
    cmp r0, r1
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_020481fc
    and r0, r0, #0x4
    cmp r0, #0x4
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207c990:
    sub r0, r7, #0x7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0x1
    bhi L_0207ca9c
    ldr r1, =data_020bea58
    mov r0, #0x0
    ldr r2, [r1, #0x4]
    ldr r1, [r1, #0x0]
    cmp r2, #0x0
    ble L_0207ca9c
L_0207c9c4:
    ldrsh r3, [r1, #0x2e]
    cmp r3, r7
    ldreq r3, [r1, #0x24]
    cmpeq r3, r6
    bne L_0207ca8c
    ldr r3, [r1, #0x0]
    subs r3, r3, r10
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0x10]
    ldr r3, [r9, #0x0]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0x14]
    ldr r3, [r9, #0x4]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0x18]
    ldr r3, [r9, #0x8]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0x4]
    ldr r3, [r8, #0x0]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0x8]
    ldr r3, [r8, #0x4]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r4, [r1, #0xc]
    ldr r3, [r8, #0x8]
    subs r3, r4, r3
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207ca8c
    ldr r0, [r1, #0x28]
    orr r0, r0, #0x2
    str r0, [r1, #0x28]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207ca8c:
    add r0, r0, #0x1
    cmp r0, r2
    add r1, r1, #0x68
    blt L_0207c9c4
L_0207ca9c:
    ldr r1, =data_020bea58
    mov r5, #0x0
    ldmia r1, {r0, r1}
    mov r4, r0
    cmp r1, #0x0
    ble L_0207cb98
L_0207cab4:
    ldr r2, [r4, #0x0]
    subs r3, r10, r2
    rsbmi r3, r3, #0x0
    cmp r3, #0x10
    bge L_0207cb2c
    ldr r3, [r8, #0x0]
    ldr r2, [r4, #0x4]
    cmp r3, r2
    bge L_0207cb88
    mov r2, #0x68
    mla r0, r1, r2, r0
    cmp r4, r0
    add r2, r4, #0x68
    mov r1, #0x0
    bhs L_0207cb00
L_0207caf0:
    cmp r2, r0
    add r1, r1, #0x1
    add r2, r2, #0x68
    blo L_0207caf0
L_0207cb00:
    ldr r0, =data_020e3a4c
    cmp r2, r0
    subeq r1, r1, #0x1
    cmp r1, #0x0
    beq L_0207cb98
    mov r0, #0x68
    mul r2, r1, r0
    mov r1, r4
    add r0, r4, #0x68
    bl func_020015a8
    b L_0207cb98
L_0207cb2c:
    cmp r10, r2
    bge L_0207cb88
    mov r2, #0x68
    mla r0, r1, r2, r0
    cmp r4, r0
    add r2, r4, #0x68
    mov r1, #0x0
    bhs L_0207cb5c
L_0207cb4c:
    cmp r2, r0
    add r1, r1, #0x1
    add r2, r2, #0x68
    blo L_0207cb4c
L_0207cb5c:
    ldr r0, =data_020e3a4c
    cmp r2, r0
    subeq r1, r1, #0x1
    cmp r1, #0x0
    beq L_0207cb98
    mov r0, #0x68
    mul r2, r1, r0
    mov r1, r4
    add r0, r4, #0x68
    bl func_020015a8
    b L_0207cb98
L_0207cb88:
    add r5, r5, #0x1
    cmp r5, r1
    add r4, r4, #0x68
    blt L_0207cab4
L_0207cb98:
    ldr r0, =data_020bd030
    ldr r0, [r0, #0x0]
    cmp r5, r0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r10, [r4, #0x0]
    add r3, r4, #0x30
    mov r2, #0x6
L_0207cbb4:
    ldrb r0, [r11, #0x0]
    ldrb r1, [r11, #0x1]
    add r11, r11, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0207cbb4
    add r3, r4, #0x10
    mov r2, #0x6
L_0207cbe0:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0207cbe0
    add r3, r4, #0x4
    mov r2, #0x6
L_0207cc0c:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0207cc0c
    ldr r3, [sp, #0x40]
    add r5, r4, #0x3c
    mov r2, #0x6
L_0207cc3c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0207cc3c
    ldr r3, [sp, #0x48]
    add r5, r4, #0x48
    mov r2, #0x6
L_0207cc6c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0207cc6c
    ldr r1, [sp, #0x28]
    ldr r0, [sp, #0x2c]
    str r1, [r4, #0x1c]
    ldrsh r1, [sp, #0x30]
    str r0, [r4, #0x20]
    ldr r0, [sp, #0x44]
    strh r1, [r4, #0x2c]
    strh r7, [r4, #0x2e]
    str r0, [r4, #0x54]
    ldrsh r0, [sp, #0x3c]
    str r6, [r4, #0x24]
    ldr r1, =data_020bea58
    str r0, [r4, #0x28]
    ldr r0, =data_020bd030
    ldr r2, [r1, #0x4]
    ldr r0, [r0, #0x0]
    cmp r2, r0
    addne r0, r2, #0x1
    strne r0, [r1, #0x4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
