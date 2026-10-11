#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e9e0();
extern void func_02060568();
extern void func_020650d4();
extern void func_0206529c();
extern void func_020652dc();
extern void func_0206e484();
// clang-format off
asm void func_0206e050(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0x4]
    mov r5, r1
    ldr r4, [r0, #0x0]
    ldr r0, [r4, #0x14]
    ldr r0, [r0, #0x10]
    cmp r0, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    add r1, r4, #0x9a
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xdb
    mov r0, #0x1
    swpb r0, r0, [r1]
    strh r2, [r4, #0x80]
    strh r2, [r4, #0xcc]
    str r5, [r4, #0x94]
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    beq L_0206e0b8
    ldrb r1, [r0, #0x3]
    mov r0, r4
    bl func_0206529c
    b L_0206e0c0
L_0206e0b8:
    mov r0, r4
    bl func_020652dc
L_0206e0c0:
    mov r0, r6
    str r5, [r4, #0x4]
    bl func_02060568
    mov r0, r5
    str r5, [r4, #0x8]
    bl func_0205e9e0
    mov r1, r0
    mov r0, r4
    and r1, r1, #0xff
    bl func_020650d4
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    beq L_0206e100
    mov r0, r6
    mov r1, #0x0
    bl func_0206e484
L_0206e100:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
