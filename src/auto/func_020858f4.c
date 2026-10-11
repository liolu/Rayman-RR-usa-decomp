#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_02003d18();
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern char data_020bc544[];
extern char data_020becb8[];
// clang-format off
asm void func_020858f4(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r4, r1
    mov r5, r0
    mov r0, r4
    bl func_02003cfc
    add r0, r0, #0x1
    bl func_02082918
    ldr r1, =data_020bc544
    str r0, [r5, #0x0]
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085968
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
L_02085968:
    ldr r0, [r5, #0x0]
    mov r1, r4
    bl func_02003d18
    add r1, r5, #0x7
    mov r0, #0x14
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
