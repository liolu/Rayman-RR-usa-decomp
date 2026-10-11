#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern char data_020bc544[];
extern char data_020becb8[];
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_020853c0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r6, r0
    ldr r0, [r6, #0x0]
    mov r5, r1
    ldr r0, [r0, #0x4]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_020854e4
    mov r0, #0x18
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085440
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_02085440:
    str r6, [r4, #0x0]
    ldr r0, [r6, #0x0]
    cmp r5, #0x0
    ldr r0, [r0, #0x8]
    str r0, [r4, #0x14]
    beq L_020854b8
    mov r0, #0x50
    bl func_02082918
    ldr r1, =data_020bc544
    mov r5, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_020854c0
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
    b L_020854c0
L_020854b8:
    mov r5, #0x0
    b L_020854e0
L_020854c0:
    ldr r0, =data_020e39e8
    add r1, r5, #0x4e
    ldrb r0, [r0, #0x0]
    ldr r3, =data_020e39e9
    add r2, r5, #0x4f
    swpb r0, r0, [r1]
    ldrb r0, [r3, #0x0]
    swpb r0, r0, [r2]
L_020854e0:
    str r5, [r4, #0x10]
L_020854e4:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
