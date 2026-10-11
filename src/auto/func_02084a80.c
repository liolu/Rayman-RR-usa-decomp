#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084cc4();
extern void func_02084ea0();
// clang-format off
asm void func_02084a80(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x78
    mov r5, #0x0
    mov r6, r1
    mov r1, r5
    mov r4, r0
    mov r9, r5
    bl func_02084cc4
    cmp r0, #0x0
    beq L_02084af0
    add r7, sp, #0x0
L_02084aac:
    ldr r1, [r0, #0x4]
    ldr r1, [r1, #0xc]
    cmp r1, #0x0
    beq L_02084ad4
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x0]
    cmp r1, r6
    addeq r1, r9, #0x1
    streq r0, [r7, r9, lsl #0x2]
    andeq r9, r1, #0xff
L_02084ad4:
    add r0, r5, #0x1
    and r5, r0, #0xff
    mov r0, r4
    mov r1, r5
    bl func_02084cc4
    cmp r0, #0x0
    bne L_02084aac
L_02084af0:
    mov r8, #0x0
    cmp r9, #0x0
    addls sp, sp, #0x78
    swpb r0, r8, [r4]
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r6, #0xe
    mov r5, r8
    add r7, sp, #0x0
L_02084b10:
    ldrb r1, [r4, #0x0]
    ldrb r0, [r4, #0x1]
    ldr r2, [r7, r8, lsl #0x2]
    cmp r1, r0
    bhs L_02084b38
    add r0, r1, #0x1
    swpb r0, r0, [r4]
    add r0, r4, r1, lsl #0x2
    str r2, [r0, #0x4]
    b L_02084b44
L_02084b38:
    mov r0, r6
    mov r1, r5
    bl func_02084ea0
L_02084b44:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, r9
    blo L_02084b10
    add sp, sp, #0x78
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
