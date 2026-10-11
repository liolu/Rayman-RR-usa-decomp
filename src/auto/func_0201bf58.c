#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206b46c();
extern char data_020c3e8c[];
extern char data_020c3e8e[];
extern char data_020c3e90[];
extern char data_020c3f10[];
extern char data_020c49d4[];
extern char data_020c49dc[];
// clang-format off
asm void func_0201bf58(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    cmp r0, #0x0
    beq L_0201bfe0
    ldr r0, =data_020c3e8c
    ldrsh r9, [r0, #0x0]
    cmp r9, #0x0
    beq L_0201bfcc
    cmp r9, #0x0
    mov r6, #0x0
    ble L_0201bfc0
    ldr r0, =data_020c49d4
    ldr r7, =data_020c49dc
    ldrb r8, [r0, #0x0]
    ldr r3, =data_020c3f10
    ldr r2, =data_020c3e90
    ldr r1, =data_020c3e8e
L_0201bf98:
    ldrsh r5, [r1, #0x0]
    ldr r0, [r3, r6, lsl #0x2]
    add r6, r6, #0x1
    add r4, r5, #0x1
    strh r4, [r1, #0x0]
    str r0, [r2, r5, lsl #0x2]
    swpb r0, r8, [r7]
    cmp r6, r9
    add r7, r7, #0x1
    blt L_0201bf98
L_0201bfc0:
    ldr r0, =data_020c3e8c
    mov r1, #0x0
    strh r1, [r0, #0x0]
L_0201bfcc:
    ldr r1, =data_020c49d4
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0201bfe0:
    ldr r9, =data_020c49d4
    ldr r8, =data_020c3e8e
    ldrb r1, [r9, #0x0]
    ldrsh r0, [r8, #0x0]
    sub r1, r1, #0x1
    cmp r0, #0x0
    swpb r0, r1, [r9]
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r7, =data_020c3e8c
    mov r0, #0x0
    strh r0, [r7, #0x0]
    ldr r4, =data_020c49dc
    ldr r6, =data_020c3e90
    ldr r5, =data_020c3f10
    b L_0201c058
L_0201c01c:
    add r0, r6, r2, lsl #0x2
    ldr r0, [r0, #-0x4]
    bl func_0206b46c
    cmp r0, #0x0
    beq L_0201c04c
    ldrsh r0, [r8, #0x0]
    ldrsh r2, [r7, #0x0]
    add r0, r6, r0, lsl #0x2
    ldr r0, [r0, #-0x4]
    add r1, r2, #0x1
    strh r1, [r7, #0x0]
    str r0, [r5, r2, lsl #0x2]
L_0201c04c:
    ldrsh r0, [r8, #0x0]
    sub r0, r0, #0x1
    strh r0, [r8, #0x0]
L_0201c058:
    ldrsh r2, [r8, #0x0]
    cmp r2, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r4, r2
    ldrb r1, [r0, #-0x1]
    ldrb r0, [r9, #0x0]
    cmp r1, r0
    beq L_0201c01c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
