#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_01ff87ec();
extern void func_0202dc18();
extern void func_020359b8();
extern char data_020bc548[];
// clang-format off
asm void func_020350e4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    ldr r4, [r2, #0x0]
    ldr r0, [r3, #0x0]
    ldr r5, [sp, #0x34]
    sub r0, r4, r0
    str r0, [r5, #0x0]
    ldr r4, [r2, #0x4]
    ldr r0, [r3, #0x4]
    ldr r6, [sp, #0x30]
    sub r0, r4, r0
    str r0, [r5, #0x4]
    ldr r0, [r3, #0x8]
    ldr r2, [r2, #0x8]
    ldr r4, [sp, #0x38]
    sub r0, r2, r0
    add ip, sp, #0x0
    mov r7, r1
    mov r3, r5
    str r0, [r5, #0x8]
    mov r2, #0x6
L_02035138:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02035138
    ldr r2, [r5, #0x0]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203518c
    ldr r2, [r5, #0x4]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203518c:
    cmp r1, #0x0
    beq L_020351a8
    ldr r1, [r5, #0x8]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_020351a8:
    tst r0, #0xff
    bne L_020351bc
    mov r0, r5
    mov r1, r5
    bl func_01ff84a0
L_020351bc:
    add r0, sp, #0x0
    mov r2, r4
    mov r1, r0
    bl func_020359b8
    add r0, sp, #0x0
    bl func_01ff8668
    ldr r1, =data_020bc548
    ldr r1, [r1, #0x4]
    cmp r0, r1
    bge L_020351f8
    ldr r0, [r7, #0x24]
    add r1, sp, #0xc
    add r2, sp, #0x0
    mov r3, r4
    bl func_0202dc18
L_020351f8:
    ldr r1, [r4, #0x8]
    ldmib r5, {r0, r2}
    ldr r3, [r4, #0x4]
    bl func_01ff87ec
    str r0, [r6, #0x0]
    ldr r0, [r5, #0x8]
    ldr r1, [r4, #0x0]
    ldr r2, [r5, #0x0]
    ldr r3, [r4, #0x8]
    bl func_01ff87ec
    str r0, [r6, #0x4]
    ldr r1, [r4, #0x4]
    ldmia r5, {r0, r2}
    ldr r3, [r4, #0x0]
    bl func_01ff87ec
    str r0, [r6, #0x8]
    ldr r0, [r6, #0x0]
    cmp r0, #0x0
    ldreq r0, [r6, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r6, #0x8]
    cmpeq r0, #0x0
    bne L_020352a8
    ldr r0, [r7, #0x24]
    add r1, sp, #0xc
    add r2, sp, #0x0
    mov r3, r4
    bl func_0202dc18
    ldr r1, [r4, #0x8]
    ldmib r5, {r0, r2}
    ldr r3, [r4, #0x4]
    bl func_01ff87ec
    str r0, [r6, #0x0]
    ldr r0, [r5, #0x8]
    ldr r1, [r4, #0x0]
    ldr r2, [r5, #0x0]
    ldr r3, [r4, #0x8]
    bl func_01ff87ec
    str r0, [r6, #0x4]
    ldr r1, [r4, #0x4]
    ldr r3, [r4, #0x0]
    ldmia r5, {r0, r2}
    bl func_01ff87ec
    str r0, [r6, #0x8]
L_020352a8:
    mov r0, r6
    mov r1, r6
    bl func_01ff84a0
    ldr r1, [r5, #0x8]
    ldmib r6, {r0, r2}
    ldr r3, [r5, #0x4]
    bl func_01ff87ec
    str r0, [r4, #0x0]
    ldr r0, [r6, #0x8]
    ldr r1, [r5, #0x0]
    ldr r2, [r6, #0x0]
    ldr r3, [r5, #0x8]
    bl func_01ff87ec
    str r0, [r4, #0x4]
    ldmia r6, {r0, r2}
    ldr r1, [r5, #0x4]
    ldr r3, [r5, #0x0]
    bl func_01ff87ec
    str r0, [r4, #0x8]
    mov r0, r4
    mov r1, r4
    bl func_01ff84a0
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
