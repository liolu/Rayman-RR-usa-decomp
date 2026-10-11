#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020671d0();
extern void func_020671f4();
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd280[];
// clang-format off
asm void func_02066aac(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, r1
    bne L_02066af8
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xe
    bl func_0207ad9c
L_02066af8:
    ldr r0, [r5, #0x14]
    cmp r0, #0x0
    bne L_02066b3c
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xf
    bl func_0207ad9c
L_02066b3c:
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_02066bd8
L_02066b48:
    b L_02066b68
    b L_02066b60
    b L_02066ba8
    b L_02066b68
    b L_02066ba8
    b L_02066bd8
L_02066b60:
    ldr r0, [r5, #0x14]
    bl func_020671f4
L_02066b68:
    ldr r0, [r5, #0x14]
    bl func_020671d0
    ldr r0, [r5, #0x14]
    mov r2, #0x0
    add r1, r0, #0x65
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x30]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x34]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x38]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x3c]
    ldmfd sp!, {r3, r4, r5, pc}
L_02066ba8:
    ldr r0, [r5, #0x14]
    mov r2, #0x0
    add r1, r0, #0x65
    swpb r0, r2, [r1]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x30]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x34]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x38]
    ldr r0, [r5, #0x14]
    str r2, [r0, #0x3c]
L_02066bd8:
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
