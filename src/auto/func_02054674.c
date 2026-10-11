#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02030be4();
extern void func_0207ab84();
extern char data_020bd004[];
extern char data_020dbfb8[];
// clang-format off
asm void func_02054674(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bd004
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_02054694
    bl func_0207ab84
    ldr r1, =data_020bd004
    swpb r0, r0, [r1]
L_02054694:
    ldr r0, =data_020bd004
    ldr r2, =0x186a0
    ldrb r0, [r0, #0x0]
    mov r1, #0x5
    bl func_02030be4
    ldr r1, =data_020dbfb8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
