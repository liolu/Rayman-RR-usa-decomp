#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9b0();
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bd364[];
extern char data_020cf6cc[];
extern char data_020dd85c[];
// clang-format off
asm void func_0206b54c(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r1, =data_020bd364
    mov r4, r0
    ldrb r0, [r1, #0x0]
    cmp r0, #0xff
    bne L_0206b574
    bl func_0207ab84
    ldr r1, =data_020bd364
    swpb r0, r0, [r1]
L_0206b574:
    ldr r0, =data_020bd364
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x1
    bl func_02030be4
    ldr r0, =data_020bd364
    ldr r3, =0x2710
    ldrb r1, [r0, #0x0]
    mov r0, #0x4
    mov r2, #0xc
    str r3, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =data_020cf6cc
    str r2, [sp, #0x8]
    ldr r2, [r0, r1, lsl #0x2]
    mov r3, r4
    mov r0, #0x0
    bl func_0202f9b0
    ldr r0, =data_020dd85c
    str r4, [r0, #0x0]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
