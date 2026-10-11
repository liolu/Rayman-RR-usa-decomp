#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9ac();
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bbfe8[];
// clang-format off
asm void func_0201a44c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bbfe8
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_0201a46c
    bl func_0207ab84
    ldr r1, =data_020bbfe8
    swpb r0, r0, [r1]
L_0201a46c:
    ldr r0, =data_020bbfe8
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x2
    bl func_02030be4
    bl func_0202f9ac
    ldmfd sp!, {r3, pc}
}
// clang-format on
