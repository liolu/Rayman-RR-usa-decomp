#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd004[];
extern char data_020bd008[];
// clang-format off
asm void func_02054794(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    cmp r4, #0x5
    bls L_020547ec
    cmp r4, #0xff
    beq L_020547ec
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    ldr r1, =data_020bd008
    str r0, [sp, #0x8]
    ldr r0, =data_020bd004
    str r1, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x4
    mov r2, #0x0
    mov r3, #0x2
    bl func_0207ad9c
L_020547ec:
    ldr r0, =data_020bd004
    add r1, r0, #0x1
    swpb r0, r4, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, pc}
}
// clang-format on
