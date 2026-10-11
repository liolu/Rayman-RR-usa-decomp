#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_02093608();
extern char data_020c0404[];
extern char data_020dc19c[];
extern char data_020e39e4[];
extern char data_020e4bd8[];
extern char data_020e4bdc[];
extern char data_020e4bec[];
extern char data_020e4bf8[];
extern char data_020e4c04[];
// clang-format off
asm void func_02097970(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r7, r2
    mov r5, #0x0
    bl func_02084450
    ldr r2, =data_020e4c04
    ldr r3, [r7, #0x0]
    ldr r4, [r2, #0x0]
    mov r1, r0
    cmp r4, r3
    ldreq r3, [r2, #0x4]
    ldreq r0, [r7, #0x4]
    cmpeq r3, r0
    ldreq r2, [r2, #0x8]
    ldreq r0, [r7, #0x8]
    cmpeq r2, r0
    beq L_020979ec
    ldr r5, =data_020e4c04
    mov r4, r7
    mov r3, #0x6
L_020979c4:
    ldrb r0, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r2, [r5]
    add r5, r5, #0x1
    bne L_020979c4
    mov r5, #0x1
L_020979ec:
    mov r0, r8
    mov r2, r7
    bl func_02084450
    ldr r2, =data_020e4bf8
    ldr r3, [r7, #0x0]
    ldr r4, [r2, #0x0]
    mov r1, r0
    cmp r4, r3
    ldreq r3, [r2, #0x4]
    ldreq r0, [r7, #0x4]
    cmpeq r3, r0
    ldreq r2, [r2, #0x8]
    ldreq r0, [r7, #0x8]
    cmpeq r2, r0
    beq L_02097a5c
    ldr r5, =data_020e4bf8
    mov r4, r7
    mov r3, #0x6
L_02097a34:
    ldrb r0, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r2, [r5]
    add r5, r5, #0x1
    bne L_02097a34
    mov r5, #0x1
L_02097a5c:
    mov r0, r8
    mov r2, r7
    bl func_02084450
    mov r1, r0
    mov r0, r8
    mov r2, r7
    ldr r4, [r7, #0x0]
    bl func_02084450
    mov r6, r0
    cmp r5, #0x0
    ldr r3, [r7, #0x0]
    bne L_02097ab0
    ldr r1, =data_020e4bd8
    ldr r0, =data_020dc19c
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x74]
    cmp r1, r0
    ldreq r0, =data_020c0404
    ldreq r0, [r0, #0x0]
    cmpeq r0, r4
    beq L_02097b10
L_02097ab0:
    ldr r0, =data_020e4bf8
    ldr ip, =data_020dc19c
    ldr lr, =data_020e39e4
    ldr r5, =data_020c0404
    add r9, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    ldr r9, [ip, #0x74]
    ldr r2, =data_020e4bd8
    ldr r1, =data_020e4bdc
    mov ip, #0x0
    mov r0, r8
    str r3, [lr, #0x0]
    str r9, [r2, #0x0]
    str ip, [r1, #0x0]
    str r4, [r5, #0x0]
    bl func_02093608
    add r0, sp, #0x0
    ldr r3, =data_020e4bf8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_020e39e4
    mov r1, #0x0
    str r1, [r0, #0x0]
L_02097b10:
    ldr r0, =data_020c0404
    mov r1, #0x40
    ldr r4, =data_020e4bec
    mov r3, r7
    str r1, [r0, #0x4]
    mov r2, #0x6
L_02097b28:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02097b28
    mov r1, #0x15
    mov r0, r6
    str r1, [r7, #0xc]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
