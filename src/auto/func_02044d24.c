#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02046154();
extern char data_020cfc82[];
// clang-format off
asm void func_02044d24(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, =data_020cfc82
    mov r4, #0x2
    mov r6, #0x1
L_02044d34:
    ldrb r0, [r5, #0x1]
    add r0, r0, #0xfd
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02044d60
    sub r0, r4, #0x2
    mov r0, r0, lsl #0x10
    add r2, r5, #0x1
    mov r0, r0, asr #0x10
    swpb r1, r6, [r2]
    bl func_02046154
L_02044d60:
    add r4, r4, #0x1
    cmp r4, #0x11
    add r5, r5, #0x1
    bls L_02044d34
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
