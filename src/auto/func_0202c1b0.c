#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9ac();
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bc538[];
extern char data_020c75c8[];
// clang-format off
asm void func_0202c1b0(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bc538
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_0202c1d0
    bl func_0207ab84
    ldr r1, =data_020bc538
    swpb r0, r0, [r1]
L_0202c1d0:
    ldr r0, =data_020bc538
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x1
    bl func_02030be4
    bl func_0202f9ac
    ldr r0, =data_020c75c8
    mov r1, #0x0
    str r1, [r0, #0xcc]
    ldmfd sp!, {r3, pc}
}
// clang-format on
