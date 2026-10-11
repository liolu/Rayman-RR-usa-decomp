#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd280[];
// clang-format off
asm void func_0206b21c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, r1
    bne L_0206b268
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
L_0206b268:
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_0206b2ac
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
L_0206b2ac:
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0206b2e4
L_0206b2b8:
    b L_0206b2e4
    b L_0206b2d0
    b L_0206b2d0
    b L_0206b2d0
    b L_0206b2d0
    b L_0206b2d0
L_0206b2d0:
    ldr r1, [r5, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
L_0206b2e4:
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
