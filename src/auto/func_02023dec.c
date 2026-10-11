#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02021ec4();
extern void func_02022094();
extern void func_0202210c();
extern void func_020222e4();
extern void func_02023ad0();
extern void func_02023b58();
extern void func_02023d4c();
extern char data_020c56c0[];
extern char data_020c56c4[];
extern char func_02023bfc[];
// clang-format off
asm void func_02023dec(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x6c
    ldr r5, =data_020c56c4
    mov r7, r2
    mov r0, r5
    mov r1, r7
    ldr r6, [sp, #0x98]
    bl func_02023d4c
    mov r0, r5
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02023e48
    ldr r1, [sp, #0x84]
    ldr r0, [r5, #0xc]
    cmp r1, r0
    ldreq r0, [r5, #0x8]
    cmpeq r0, #0x0
    addeq sp, sp, #0x6c
    moveq r0, r5
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    addeq sp, sp, #0x10
    bxeq lr
L_02023e48:
    ldr r0, =data_020c56c0
    mov r1, #0x1
    str r1, [r0, #0x0]
    ldr r0, [r7, #0x24]
    add r4, sp, #0x24
    sub r0, r0, #0x2
    mov r2, r0, lsl #0x3
    mov r0, r4
    mov r1, r7
    add r2, r2, #0x48
    bl func_02001588
    ldr r0, [r5, #0x0]
    add r1, sp, #0x84
    cmp r0, #0x0
    mov r0, r5
    beq L_02023f04
    ldr r1, [r1, #0x0]
    bl func_02023ad0
    ldr r0, [r5, #0x1c]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_02023eac
    cmp r0, #0x1
    beq L_02023ed8
    b L_02023fa0
L_02023eac:
    ldr r0, [r5, #0x28]
    ldr r1, [r5, #0x48]
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    bl func_020222e4
    mov r1, r0
    ldr r0, [r5, #0x24]
    str r1, [sp, #0x10]
    str r1, [sp, #0x1c]
    bl func_0202210c
    b L_02023fa0
L_02023ed8:
    ldr r0, [r5, #0x28]
    ldr r1, [r5, #0x48]
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    bl func_020222e4
    mov r1, r0
    ldr r0, [r5, #0x24]
    str r1, [sp, #0xc]
    str r1, [sp, #0x14]
    bl func_02022094
    b L_02023fa0
L_02023f04:
    ldr r1, [r1, #0x0]
    bl func_02023b58
    ldr r2, [sp, #0x90]
    ldr r1, [sp, #0x94]
    str r2, [r5, #0x3c]
    str r1, [r5, #0x40]
    ldr r0, [sp, #0x84]
    str r6, [r5, #0x44]
    ldrb r3, [r4, #0x4]
    ldrb r0, [r0, #0xc]
    add r2, r4, #0x4
    mov r1, r4
    smulbb r0, r3, r0
    mov r0, r0, asr #0x7
    swpb r0, r0, [r2]
    mov r2, #0x1
    ldr r3, [r4, #0x20]
    ldr r0, [r5, #0x1c]
    orr r3, r3, #0x4
    str r3, [r4, #0x20]
    ldr r0, [r0, #0x0]
    bl func_020222e4
    ldr r1, [r5, #0x28]
    str r0, [sp, #0x8]
    str r0, [sp, #0x20]
    ldr r0, [r1, #0x0]
    mov r1, r4
    mov r2, #0x1
    bl func_020222e4
    mov r1, r0
    add r0, sp, #0x20
    ldr r2, =func_02023bfc
    ldr r0, [r0, #0x0]
    mov r3, r5
    str r4, [sp, #0x0]
    str r1, [sp, #0x4]
    str r1, [sp, #0x18]
    bl func_02021ec4
    str r0, [r5, #0x24]
L_02023fa0:
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    bne L_02023fd0
    ldr r1, [r5, #0x24]
    mvn r0, #0x0
    cmp r1, r0
    moveq r0, #0x0
    streq r0, [r6, #0x0]
    beq L_02023fd0
    mov r0, #0x1
    str r0, [r5, #0x0]
    str r0, [r6, #0x0]
L_02023fd0:
    ldr r1, [r5, #0x0]
    ldr r0, =data_020c56c0
    mov r2, #0x0
    cmp r1, #0x0
    subeq r5, r2, #0x1
    str r2, [r0, #0x0]
    mov r0, r5
    add sp, sp, #0x6c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
