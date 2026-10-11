#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020413b4();
extern void func_0204141c();
extern void func_02041da8();
extern void func_02087220();
extern void func_020872fc();
// clang-format off
asm void func_02087184(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, r1
    mov r1, r4
    mov r0, #0x2
    bl func_020413b4
    cmp r0, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    cmp r5, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, pc}
    mov r1, r4
    mov r2, r5
    mov r0, #0x2
    mov r3, #0x6
    bl func_0204141c
    mov r4, r0
    ldrh r0, [r4, #0x4]
    add r1, r5, #0x8
    swpb r0, r0, [r1]
    ldrh r1, [r4, #0x4]
    cmp r1, #0x0
    beq L_020871f4
    ldrh r0, [r4, #0x2]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02087220
    str r0, [r5, #0x0]
L_020871f4:
    ldrh r0, [r4, #0x0]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_0208720c
    bl func_020872fc
    str r0, [r5, #0x4]
L_0208720c:
    mov r0, r4
    bl func_02041da8
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
