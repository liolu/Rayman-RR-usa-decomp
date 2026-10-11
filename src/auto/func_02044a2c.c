#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9ac();
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bc578[];
// clang-format off
asm void func_02044a2c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bc578
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_02044a4c
    bl func_0207ab84
    ldr r1, =data_020bc578
    swpb r0, r0, [r1]
L_02044a4c:
    ldr r0, =data_020bc578
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x1
    bl func_02030be4
    bl func_0202f9ac
    ldmfd sp!, {r3, pc}
}
// clang-format on
