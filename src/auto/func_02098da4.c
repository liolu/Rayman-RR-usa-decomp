#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020821f4();
extern void func_02084450();
// clang-format off
asm void func_02098da4(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r2
    bl func_02084450
    mov r5, r0
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    beq L_02098e18
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_02098de0
    mov r1, r4
    bl func_020821f4
    mov r0, #0x15
    str r0, [r4, #0xc]
    b L_02098e30
L_02098de0:
    mov ip, r4
    mov r3, #0x6
L_02098de8:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    bne L_02098de8
    mov r0, #0x15
    str r0, [r4, #0xc]
    b L_02098e30
L_02098e18:
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    mov r0, #0x15
    str r0, [r4, #0xc]
L_02098e30:
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
