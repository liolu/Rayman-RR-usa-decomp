#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082cfc();
extern void func_02082dec();
extern void func_02082e38();
extern void func_02082ec8();
extern char data_020bd280[];
// clang-format off
asm void func_020654c8(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, r1
    bne L_02065514
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
L_02065514:
    ldr r0, [r5, #0xc]
    cmp r0, #0x0
    bne L_02065558
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
L_02065558:
    ldr r0, [r5, #0xc]
    ldr r1, =0xcdcdcdcd
    mov r2, #0x0
    str r1, [r0, #0x4]
    ldr r0, [r5, #0xc]
    cmp r4, #0x5
    add r1, r0, #0x8
    swpb r0, r2, [r1]
    addls pc, pc, r4, lsl #0x2
    b L_020655fc
L_02065580:
    b L_020655b0
    b L_020655b0
    b L_02065598
    b L_02065598
    b L_02065598
    b L_020655fc
L_02065598:
    ldr r0, [r5, #0xc]
    mov r1, r4
    ldr r0, [r0, #0x0]
    bl func_02082ec8
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
L_020655b0:
    ldr r0, [r5, #0x4]
    ldrb r0, [r0, #0x25]
    tst r0, #0x8
    ldr r0, [r5, #0xc]
    movne r2, #0x1
    tst r2, #0xff
    ldr r0, [r0, #0x0]
    bne L_020655ec
    bl func_02082e38
    ldr r1, [r5, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    b L_020655f0
L_020655ec:
    bl func_02082dec
L_020655f0:
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x0]
    bl func_02082cfc
L_020655fc:
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
