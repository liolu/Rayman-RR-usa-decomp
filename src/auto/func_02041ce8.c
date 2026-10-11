#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02041da8();
extern void func_02041e50();
extern char data_020cf9ac[];
extern char data_020cfa74[];
// clang-format off
asm void func_02041ce8(void) {
    stmfd sp!, {r3, lr}
    ldr r2, =data_020cf9ac
    ldrb r0, [r2, #0x11]
    add r1, r2, #0x11
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x0]
    cmp r0, #0x0
    beq L_02041d1c
    bl func_02041da8
    ldr r0, =data_020cf9ac
    mov r1, #0x0
    str r1, [r0, #0x0]
L_02041d1c:
    bl func_02041e50
    ldr r0, =data_020cfa74
    ldr r0, [r0, #0x0]
    bl func_02041da8
    ldr r0, =data_020cf9ac
    ldr r1, =data_020cfa74
    mov r2, #0x0
    ldr r0, [r0, #0x8]
    str r2, [r1, #0x0]
    bl func_02041da8
    ldr r0, =data_020cf9ac
    mov r1, #0x0
    str r1, [r0, #0x8]
    ldmfd sp!, {r3, pc}
}
// clang-format on
