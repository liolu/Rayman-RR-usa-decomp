#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
// clang-format off
asm void func_0209ab34(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x70
    ldr r3, [r1, #-0x8]
    mov r5, r0
    mov r4, r2
    cmp r3, #0x38
    beq L_0209ab5c
    cmp r3, #0x39
    beq L_0209ac70
    b L_0209ad44
L_0209ab5c:
    mov r2, #0x0
    add r3, r4, #0x3
    str r2, [r4, #0x0]
    swpb r2, r2, [r3]
    add r2, sp, #0x20
    bl func_02084450
    ldr r2, [sp, #0x2c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x20]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x20]
    cmp r0, #0x64
    movgt r0, #0x64
    bgt L_0209aba0
    cmp r0, #0x0
    movlt r0, #0x0
L_0209aba0:
    swpb r0, r0, [r4]
    add r2, sp, #0x10
    mov r0, r5
    bl func_02084450
    ldr r2, [sp, #0x1c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x10]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x10]
    cmp r0, #0x64
    movgt r0, #0x64
    bgt L_0209abdc
    cmp r0, #0x0
    movlt r0, #0x0
L_0209abdc:
    add r2, r4, #0x1
    swpb r0, r0, [r2]
    add r2, sp, #0x0
    mov r0, r5
    bl func_02084450
    ldr r2, [sp, #0xc]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x0]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x0]
    cmp r0, #0x64
    movgt r0, #0x64
    bgt L_0209ac1c
    cmp r0, #0x0
    movlt r0, #0x0
L_0209ac1c:
    add r2, r4, #0x2
    swpb r0, r0, [r2]
    mov r3, #0x27
    add r2, sp, #0x60
    mov r0, r5
    str r3, [r4, #0xc]
    bl func_02084450
    ldr r1, [sp, #0x6c]
    cmp r1, #0x8
    ldreq r1, [sp, #0x60]
    moveq r1, r1, asr #0xc
    ldrne r1, [sp, #0x60]
    cmp r1, #0x64
    movgt r1, #0x64
    bgt L_0209ac60
    cmp r1, #0x0
    movlt r1, #0x0
L_0209ac60:
    add r2, r4, #0x3
    swpb r1, r1, [r2]
    add sp, sp, #0x70
    ldmfd sp!, {r3, r4, r5, pc}
L_0209ac70:
    mov r2, #0x0
    add r3, r4, #0x3
    str r2, [r4, #0x0]
    swpb r2, r2, [r3]
    add r2, sp, #0x50
    bl func_02084450
    ldr r2, [sp, #0x5c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x50]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x50]
    cmp r0, #0x64
    movgt r0, #0x64
    bgt L_0209acb4
    cmp r0, #0x0
    movlt r0, #0x0
L_0209acb4:
    swpb r0, r0, [r4]
    add r2, sp, #0x40
    mov r0, r5
    bl func_02084450
    ldr r2, [sp, #0x4c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x40]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x40]
    cmp r0, #0x64
    movgt r0, #0x64
    bgt L_0209acf0
    cmp r0, #0x0
    movlt r0, #0x0
L_0209acf0:
    add r2, r4, #0x1
    swpb r0, r0, [r2]
    add r2, sp, #0x30
    mov r0, r5
    bl func_02084450
    ldr r1, [sp, #0x3c]
    cmp r1, #0x8
    ldreq r1, [sp, #0x30]
    moveq r1, r1, asr #0xc
    ldrne r1, [sp, #0x30]
    cmp r1, #0x64
    movgt r1, #0x64
    bgt L_0209ad2c
    cmp r1, #0x0
    movlt r1, #0x0
L_0209ad2c:
    add r2, r4, #0x2
    swpb r1, r1, [r2]
    add sp, sp, #0x70
    mov r1, #0x27
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, pc}
L_0209ad44:
    mov r0, #0x0
    str r0, [r4, #0x0]
    mov r2, #0x6
    mov r0, r1
    str r2, [r4, #0xc]
    add sp, sp, #0x70
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
