#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
extern void func_02084ea0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_0209811c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r7, r0
    mov r0, r6
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r7
    bl func_0209c740
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    bne L_02098170
    mov r0, #0x0
    str r0, [r4, #0x0]
    mov r1, #0x8
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02098170:
    bl func_02067900
    cmp r6, #0x94
    beq L_02098188
    cmp r6, #0x96
    beq L_020981a0
    b L_020981e0
L_02098188:
    ldr r0, [r0, #0x10]
    mov r1, #0x8
    str r0, [r4, #0x0]
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_020981a0:
    mov r3, r4
    add ip, r0, #0x54
    mov r2, #0x6
L_020981ac:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020981ac
    mov r1, #0x15
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_020981e0:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
