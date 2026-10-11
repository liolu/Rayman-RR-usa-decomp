#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9b0();
extern char data_020bbfe8[];
extern char data_020c3e84[];
extern char data_020cf6cc[];
// clang-format off
asm void func_0201a490(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r1, =data_020bbfe8
    mov r3, r0
    ldrb r1, [r1, #0x0]
    ldr r2, =0x186a0
    mov r0, #0x1
    str r2, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r0, #0x0
    ldr r2, =data_020cf6cc
    str r0, [sp, #0x8]
    ldr r2, [r2, r1, lsl #0x2]
    bl func_0202f9b0
    ldr r1, =data_020c3e84
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
