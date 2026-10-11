#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0205488c();
extern void func_0207b1a4();
extern void func_0207b400();
extern void func_0207b5a4();
extern void func_0207b77c();
extern char data_020dfe50[];
extern char data_020dfe64[];
extern char data_020dfe68[];
extern char data_020dfe6c[];
extern char data_020dfe6e[];
extern char data_020dfe70[];
extern char data_020dfe72[];
extern char data_020dfe76[];
// clang-format off
asm void func_0207b77c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    ldr r3, =data_020dfe70
    mov r8, r0
    ldrsh r4, [r3, #0x0]
    mov r7, r1
    mov r0, #0x20
    add r1, r4, #0x1
    mov r6, r2
    strh r1, [r3, #0x0]
    bl func_0205488c
    mov r4, r0
    ldr r1, =data_020dfe68
    mov r5, r7
    ldr r0, [r1, #0x0]
    mov r3, r4
    add r0, r0, #0x20
    str r0, [r1, #0x0]
    mov r2, #0x6
L_0207b7c8:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0207b7c8
    mov r3, r6
    add r5, r4, #0xc
    mov r2, #0x6
L_0207b7f8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0207b7f8
    ldr r1, =data_020dfe6e
    add r3, sp, #0x8
    ldrsh r5, [r1, #0x0]
    mov r0, r8
    mov r2, r7
    add r5, r5, #0x1
    strh r5, [r1, #0x0]
    str r3, [sp, #0x0]
    ldr r1, [r8, #0x14]
    mov r3, r6
    bl func_0207b1a4
    ldr r1, =data_020dfe76
    mov r5, r0
    ldrsh r0, [r1, #0x0]
    cmp r5, r0
    ble L_0207ba90
    ldr r1, =data_020dfe70
    ldr r0, =data_020dfe72
    ldrsh r1, [r1, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r1, r0
    bge L_0207ba90
    mov r1, #0x0
    mov r0, #0x20
    str r1, [r4, #0x1c]
    bl func_0205488c
    str r0, [r4, #0x18]
    ldr r5, =data_020dfe68
    add r3, sp, #0xc
    ldr r1, [r5, #0x0]
    mov r0, r8
    add ip, r1, #0x20
    mov r1, r7
    mov r2, r6
    str ip, [r5, #0x0]
    bl func_0207b400
    add r1, sp, #0xc
    str r1, [sp, #0x0]
    mov r1, #0x0
    str r1, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r2, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r2, #0x0]
    str r1, [sp, #0x0]
    mov r0, #0x1
    str r0, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r2, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r2, #0x4]
    str r1, [sp, #0x0]
    mov r0, #0x2
    str r0, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r2, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r2, #0x8]
    str r1, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r1, [r4, #0x18]
    str r0, [r1, #0xc]
    add r5, sp, #0xc
    str r5, [sp, #0x0]
    mov r5, #0x4
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    str r5, [sp, #0x4]
    bl func_0207b5a4
    add r1, sp, #0x24
    add r2, sp, #0x18
    mov r0, r8
    bl func_0207b77c
    ldr r2, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r2, #0x10]
    str r1, [sp, #0x0]
    mov r1, #0x5
    str r1, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r2, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r2, #0x14]
    str r1, [sp, #0x0]
    mov r0, #0x6
    str r0, [sp, #0x4]
    add r0, sp, #0x24
    add r1, sp, #0x18
    mov r2, r7
    mov r3, r6
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r5, [r4, #0x18]
    add r1, sp, #0xc
    str r0, [r5, #0x18]
    str r1, [sp, #0x0]
    mov r0, #0x7
    str r0, [sp, #0x4]
    mov r2, r7
    mov r3, r6
    add r0, sp, #0x24
    add r1, sp, #0x18
    bl func_0207b5a4
    mov r0, r8
    add r1, sp, #0x24
    add r2, sp, #0x18
    bl func_0207b77c
    ldr r1, [r4, #0x18]
    str r0, [r1, #0x1c]
    b L_0207bb04
L_0207ba90:
    ldr r0, =data_020dfe6c
    mov r1, #0x0
    ldrsh r2, [r0, #0x0]
    cmp r5, #0x0
    add r2, r2, #0x1
    strh r2, [r0, #0x0]
    str r1, [r4, #0x18]
    streq r1, [r4, #0x1c]
    beq L_0207bb04
    ldrsh r0, [sp, #0x8]
    mov r1, r5, lsl #0x1
    add r6, r1, #0x1
    add r0, r0, r6
    bl func_0205488c
    str r0, [r4, #0x1c]
    ldrsh r2, [sp, #0x8]
    ldr r3, =data_020dfe68
    ldr r0, =data_020dfe64
    ldr r1, =data_020dfe50
    ldr r7, [r0, #0x0]
    ldr r8, [r3, #0x0]
    add r2, r2, r6
    add r6, r8, r2
    add r5, r7, r5
    str r6, [r3, #0x0]
    str r5, [r0, #0x0]
    ldr r0, [r4, #0x1c]
    ldr r1, [r1, #0x0]
    bl func_02001588
L_0207bb04:
    ldr r1, =data_020dfe70
    mov r0, r4
    ldrsh r2, [r1, #0x0]
    sub r2, r2, #0x1
    strh r2, [r1, #0x0]
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
