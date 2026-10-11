#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c820();
extern void func_0202e1e0();
extern void func_0206b3c4();
extern void func_02084450();
extern void func_02088ab4();
extern void func_02088bec();
extern void func_02088d58();
extern void func_02088dc8();
extern void func_02088e34();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02098e38(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    mov r4, r1
    ldr r5, [r4, #-0x8]
    mov r6, r0
    mov r0, r5
    mov r7, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    cmp r5, #0x0
    beq L_02098e80
    cmp r5, #0x2
    beq L_02098ed4
    cmp r5, #0xd
    beq L_02098ff4
    b L_0209902c
L_02098e80:
    ldr r0, [sp, #0x0]
    add r1, sp, #0x1c
    ldr r0, [r0, #0x24]
    bl func_0202e1e0
    add r5, sp, #0x1c
    mov r3, r7
    mov r2, #0x6
L_02098e9c:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02098e9c
    mov r1, #0x15
    add sp, sp, #0x28
    mov r0, r4
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02098ed4:
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl func_02084450
    ldr r1, [r7, #0x0]
    mov r6, r0
    ldr r0, [r1, #0x4]
    bl func_0206b3c4
    mov r3, #0x0
    sub r2, r3, #0x1000
    mov r5, r0
    ldr r1, [sp, #0x0]
    str r3, [sp, #0x10]
    str r2, [sp, #0x14]
    str r3, [sp, #0x18]
    add r0, sp, #0x10
    ldr r1, [r1, #0x24]
    mov r2, r0
    bl func_0202c820
    add r0, sp, #0x10
    bl func_02088d58
    mov r2, r0
    ldr r1, =0x6488
    mov r0, #0x0
    bl func_02088e34
    mov r4, r0
    ldr r0, [sp, #0x0]
    add r1, sp, #0x10
    ldr r0, [r0, #0x24]
    bl func_0202e1e0
    ldr r0, [r5, #0x24]
    add r1, sp, #0x4
    bl func_0202e1e0
    ldr r2, [sp, #0x4]
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x8]
    sub r0, r2, r0
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0xc]
    sub r0, r1, r0
    ldr r1, [sp, #0x18]
    str r0, [sp, #0x8]
    sub r1, r2, r1
    add r0, sp, #0x4
    str r1, [sp, #0xc]
    bl func_02088d58
    mov r2, r0
    ldr r1, =0x6488
    mov r0, #0x0
    bl func_02088e34
    mov r1, r0
    mov r0, r4
    bl func_02088dc8
    ldr r1, =0x72977
    mov r2, #0x0
    umull ip, r5, r0, r1
    mla r5, r0, r2, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r1, r5
    mov ip, ip, lsr #0xc
    orr ip, ip, r5, lsl #0x14
    adds r4, ip, #0x1
    adc r1, r2, r5, asr #0xc
    mov r2, r4, lsr #0x1
    orr r2, r2, r1, lsl #0x1f
    mov r3, #0x8
    str r2, [r7, #0x0]
    add sp, sp, #0x28
    mov r0, r6
    str r3, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02098ff4:
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl func_02084450
    mov r4, r0
    ldr r0, [sp, #0x0]
    ldr r1, [r7, #0x0]
    bl func_02088ab4
    str r0, [r7, #0x0]
    mov r1, #0x8
    add sp, sp, #0x28
    mov r0, r4
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0209902c:
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl func_02084450
    ldr r1, [r7, #0x0]
    mov r4, r0
    ldr r0, [r1, #0x4]
    bl func_0206b3c4
    mov r1, r0
    cmp r5, #0xc
    addls pc, pc, r5, lsl #0x2
    b L_020990d0
L_0209905c:
    b L_020990d0
    b L_020990d0
    b L_020990d0
    b L_020990d0
    b L_02099090
    b L_02099098
    b L_020990a0
    b L_020990a8
    b L_020990b0
    b L_020990d0
    b L_020990b8
    b L_020990c0
    b L_020990c8
L_02099090:
    mov r2, #0x1
    b L_020990d4
L_02099098:
    mov r2, #0x2
    b L_020990d4
L_020990a0:
    mov r2, #0x4
    b L_020990d4
L_020990a8:
    mov r2, #0x3
    b L_020990d4
L_020990b0:
    mov r2, #0x5
    b L_020990d4
L_020990b8:
    mov r2, #0x82
    b L_020990d4
L_020990c0:
    mov r2, #0x84
    b L_020990d4
L_020990c8:
    mov r2, #0x83
    b L_020990d4
L_020990d0:
    mov r2, #0x0
L_020990d4:
    ldr r0, [sp, #0x0]
    bl func_02088bec
    str r0, [r7, #0x0]
    mov r1, #0x8
    mov r0, r4
    str r1, [r7, #0xc]
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
