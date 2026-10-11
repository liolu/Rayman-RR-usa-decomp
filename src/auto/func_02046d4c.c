#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ab84();
extern char data_020bc8fc[];
extern char data_020d00d4[];
// clang-format off
asm void func_02046d4c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020d00d4
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    movne r0, #0x0
    ldmnefd sp!, {r3, pc}
    ldr r0, =data_020bc8fc
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_02046d80
    bl func_0207ab84
    ldr r1, =data_020bc8fc
    swpb r0, r0, [r1]
L_02046d80:
    ldr r0, =data_020d00d4
    mov r1, #0x1
    strh r1, [r0, #0x0]
    mov r0, #0x0
    ldmfd sp!, {r3, pc}
}
// clang-format on
