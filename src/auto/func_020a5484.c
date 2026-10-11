#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern char data_020e4c1c[];
// clang-format off
asm void func_020a5484(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    ldr r3, [r1, #-0x8]
    ldr r2, =0x14f
    cmp r3, r2
    bne L_020a54d4
    add r2, sp, #0x0
    bl func_02084450
    ldr r2, [sp, #0x0]
    mov r1, r0
    cmp r2, #0x0
    ldrne r0, =data_020e4c1c
    movne r3, #0x1
    ldreq r0, =data_020e4c1c
    moveq r3, #0x0
    add r2, r0, #0x48
    swpb r0, r3, [r2]
    add sp, sp, #0x10
    mov r0, r1
    ldmfd sp!, {r3, pc}
L_020a54d4:
    mov r0, r1
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
