#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
// clang-format off
asm void func_02084d08(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    mov r10, r0
    ldrb r0, [r10, #0x0]
    add r5, r10, #0x4
    mov r9, r1
    add r0, r5, r0, lsl #0x2
    str r2, [sp, #0x0]
    mov r7, r3
    cmp r5, r0
    mov r6, #0x0
    add r8, sp, #0x14
    bhs L_02084d84
    mov r4, r5
    add r11, sp, #0x4
L_02084d44:
    ldr r0, [r5, #0x0]
    mov r1, r7
    mov r2, r11
    bl func_02084450
    ldr r1, [sp, #0x10]
    mov r3, r0
    cmp r1, #0x8
    ldreq r0, [sp, #0x4]
    add r5, r5, #0x4
    ldrne r0, [sp, #0x4]
    movne r0, r0, lsl #0xc
    str r0, [r8], #0x4
    ldrb r0, [r10, #0x0]
    add r0, r4, r0, lsl #0x2
    cmp r5, r0
    blo L_02084d44
L_02084d84:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    add r0, sp, #0x14
    bne L_02084e10
    mov r2, #0x80000000
    mov r1, #0x0
    b L_02084df4
L_02084da0:
    mov r7, r1
    cmp r1, r4
    bhs L_02084dcc
L_02084dac:
    ldr r5, [r0, r7, lsl #0x2]
    cmp r5, r2
    movgt r2, r5
    add r5, r7, #0x1
    movgt r6, r7
    and r7, r5, #0xff
    cmp r7, r4
    blo L_02084dac
L_02084dcc:
    ldr r4, [r0, r1, lsl #0x2]
    add r8, r10, r6, lsl #0x2
    str r4, [r0, r6, lsl #0x2]
    add r5, r10, r1, lsl #0x2
    ldr r7, [r8, #0x4]
    ldr r4, [r5, #0x4]
    add r1, r1, #0x1
    str r4, [r8, #0x4]
    str r7, [r5, #0x4]
    and r1, r1, #0xff
L_02084df4:
    ldrb r4, [r10, #0x0]
    sub r5, r4, #0x1
    cmp r1, r5
    bge L_02084e88
    cmp r1, r9
    blo L_02084da0
    b L_02084e88
L_02084e10:
    mvn r1, #0x80000000
    mov r2, #0x0
    b L_02084e70
L_02084e1c:
    mov r7, r2
    cmp r2, r4
    bhs L_02084e48
L_02084e28:
    ldr r5, [r0, r7, lsl #0x2]
    cmp r5, r1
    movlt r1, r5
    add r5, r7, #0x1
    movlt r6, r7
    and r7, r5, #0xff
    cmp r7, r4
    blo L_02084e28
L_02084e48:
    ldr r4, [r0, r2, lsl #0x2]
    add r8, r10, r6, lsl #0x2
    str r4, [r0, r6, lsl #0x2]
    add r5, r10, r2, lsl #0x2
    ldr r7, [r8, #0x4]
    ldr r4, [r5, #0x4]
    add r2, r2, #0x1
    str r4, [r8, #0x4]
    str r7, [r5, #0x4]
    and r2, r2, #0xff
L_02084e70:
    ldrb r4, [r10, #0x0]
    sub r5, r4, #0x1
    cmp r2, r5
    bge L_02084e88
    cmp r2, r9
    blo L_02084e1c
L_02084e88:
    cmp r4, r9
    movls r9, r4
    swpb r0, r9, [r10]
    mov r0, r3
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
