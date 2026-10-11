#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02046e44();
extern void func_02047bfc();
extern void func_02048048();
extern void func_02048120();
extern char data_020d02ec[];
// clang-format off
asm void func_0204807c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02046e44
    ldr r1, =data_020d02ec
    mov r4, r0
    ldr r0, [r1, #0x0]
    cmp r0, #0x0
    beq L_02048114
    cmp r0, #0x3
    beq L_02048100
    cmp r0, #0x4
    bne L_02048110
    ldrh r0, [r4, #0x0]
    cmp r0, #0x0
    beq L_020480f0
    bl func_02047bfc
    mov r2, #0x0
    swpb r0, r2, [r4]
    add r1, r4, #0x1
    swpb r0, r2, [r1]
    add r1, r4, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0x3
    swpb r0, r2, [r1]
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    add r1, r4, #0x5
    swpb r0, r2, [r1]
    b L_02048114
L_020480f0:
    mov r0, r5
    bl func_02048048
    mov r4, r0
    b L_02048114
L_02048100:
    mov r0, #0x4
    str r0, [r1, #0x0]
    bl func_02048120
    b L_02048114
L_02048110:
    mov r4, #0x0
L_02048114:
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
