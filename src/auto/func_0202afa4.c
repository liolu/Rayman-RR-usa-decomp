#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f9ac();
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bc534[];
extern char data_020c75bc[];
// clang-format off
asm void func_0202afa4(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bc534
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_0202afc4
    bl func_0207ab84
    ldr r1, =data_020bc534
    swpb r0, r0, [r1]
L_0202afc4:
    ldr r0, =data_020bc534
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x2
    bl func_02030be4
    bl func_0202f9ac
    ldr r0, =data_020c75bc
    mov r1, #0x0
    str r1, [r0, #0x0]
    str r1, [r0, #0x4]
    ldmfd sp!, {r3, pc}
}
// clang-format on
