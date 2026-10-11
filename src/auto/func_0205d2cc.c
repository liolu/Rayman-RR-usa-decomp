#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_02067900();
// clang-format off
asm void func_0205d2cc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    movs r9, r2
    mov r1, #0x0
    moveq r6, #0x1
    mov r10, r0
    mov r8, r3
    ldr r7, [sp, #0x30]
    movne r6, r1
    add r5, sp, #0x0
    ldr r11, =0x1999
    mov r4, #0xc80000
    b L_0205d388
L_0205d300:
    ldr r0, [r10, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    moveq r0, #0x0
    streq r0, [r9, #0x0]
    beq L_0205d394
    bl func_02067900
    cmp r0, #0x0
    moveq r0, #0x0
    streq r0, [r9, #0x0]
    beq L_0205d394
    add r2, r0, #0x3c
    mov r1, r5
    mov r0, #0x6
L_0205d338:
    ldrb r3, [r2, #0x0]
    ldrb ip, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, ip, [r1]
    add r1, r1, #0x1
    bne L_0205d338
    mov r0, r5
    bl func_01ff8668
    mov r1, r0, lsl #0x4
    cmp r1, #0xc80000
    movgt r1, r4
    bgt L_0205d380
    ldr r0, =0x1999
    cmp r1, r0
    movlt r1, r11
L_0205d380:
    mov r0, r1, asr #0x7
    str r0, [r9, #0x0]
L_0205d388:
    cmp r6, #0x0
    cmpeq r1, #0x0
    beq L_0205d300
L_0205d394:
    cmp r7, #0x0
    mov r1, #0x0
    moveq r2, #0x1
    movne r2, r1
    mov r0, #0x10000
    b L_0205d3b4
L_0205d3ac:
    mov r1, r0
    str r0, [r7, #0x0]
L_0205d3b4:
    cmp r2, #0x0
    cmpeq r1, #0x0
    beq L_0205d3ac
    cmp r8, #0x0
    mov r1, #0x0
    moveq r2, #0x1
    movne r2, r1
    mov r0, #0x10000
    b L_0205d3e0
L_0205d3d8:
    mov r1, r0
    str r0, [r8, #0x0]
L_0205d3e0:
    cmp r2, #0x0
    cmpeq r1, #0x0
    beq L_0205d3d8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
