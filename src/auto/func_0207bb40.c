#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0201a588();
extern void func_0201a62c();
extern void func_0205488c();
extern void func_020559fc();
extern void func_02055ed4();
extern void func_020563d8();
extern void func_02056400();
extern void func_0207b03c();
extern void func_0207b77c();
extern void func_0207c38c();
extern char data_020dfe50[];
extern char data_020dfe64[];
extern char data_020dfe68[];
extern char data_020dfe6c[];
extern char data_020dfe6e[];
extern char data_020dfe70[];
extern char data_020dfe72[];
extern char data_020dfe74[];
extern char data_020dfe76[];
// clang-format off
asm void func_0207bb40(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r9, =data_020dfe76
    ldr r8, =data_020dfe74
    ldr r7, =data_020dfe72
    ldr r6, =data_020dfe70
    mov r10, #0x0
    ldr r5, =data_020dfe6e
    ldr lr, =data_020dfe6c
    ldr ip, =data_020dfe68
    ldr r11, =data_020dfe64
    mov r4, r0
    strh r1, [r9, #0x0]
    strh r2, [r8, #0x0]
    strh r3, [r7, #0x0]
    strh r10, [r6, #0x0]
    strh r10, [r5, #0x0]
    strh r10, [lr, #0x0]
    str r10, [ip, #0x0]
    str r10, [r11, #0x0]
    bl func_020563d8
    mov r0, r4
    bl func_02056400
    ldr r0, [r4, #0x14]
    cmp r0, #0x0
    bne L_0207bca0
    ldrsh r0, [r4, #0x38]
    cmp r0, #0x0
    beq L_0207bca0
    mov r0, #0x24
    bl func_0201a588
    mov r5, r0
    str r0, [r4, #0x14]
    mov r0, r4
    mov r1, r5
    bl func_0207b03c
    mov r0, r8
    ldrsh r1, [r5, #0x4]
    ldrsh r0, [r0, #0x0]
    cmp r1, r0
    bge L_0207bc08
    add r0, r4, #0x14
    bl func_0201a62c
    mov r1, r10
    mov r0, r4
    str r1, [r4, #0x14]
    bl func_020559fc
    mov r0, r4
    bl func_02055ed4
    mov r0, r10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207bc08:
    ldr r1, [r4, #0x14]
    mov r0, #0x24
    str r1, [sp, #0x0]
    bl func_0205488c
    str r0, [r4, #0x14]
    ldr r0, =data_020dfe68
    ldr r1, [sp, #0x0]
    ldr r3, [r0, #0x0]
    mov r2, #0x24
    add r3, r3, #0x24
    str r3, [r0, #0x0]
    ldr r0, [r4, #0x14]
    bl func_02001588
    ldr r5, [r4, #0x14]
    add r0, sp, #0x0
    bl func_0201a62c
    mov r2, r4
    add r0, r5, #0xc
    add r1, r5, #0x18
    bl func_0207c38c
    ldrsh r0, [r5, #0x4]
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1
    mov r0, r0, lsl #0x1
    bl func_0201a588
    ldr r1, =data_020dfe50
    mov r2, r10
    str r0, [r1, #0x0]
    swpb r1, r2, [r0]
    mov r0, r4
    add r1, r5, #0xc
    add r2, r5, #0x18
    bl func_0207b77c
    str r0, [r5, #0x0]
    ldr r0, =data_020dfe50
    bl func_0201a62c
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207bca0:
    mov r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
