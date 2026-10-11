#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02082500();
extern void func_02082534();
extern void func_02082558();
extern void func_0208261c();
extern void func_02084ea0();
extern void func_020930e0();
extern void func_020930f0();
extern void r1();
extern void r2();
extern char data_020e39f0[];
extern char data_020e3a00[];
extern char data_020e3a01[];
extern char data_020e3a04[];
// clang-format off
asm void func_020842c8(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, =data_020e39f0
    mov r7, r0
    ldrb r0, [r3, #0x1]
    mov r5, r2
    mov r6, r1
    cmp r0, #0x0
    ldrne r2, [r3, #0x4]
    ldr r0, =data_020e3a01
    ldr r3, =data_020e3a04
    ldrb r1, [r0, #0x0]
    ldr r0, [r3, #0x0]
    moveq r2, r6
    bl func_02082500
    cmp r0, #0x1
    bhs L_0208438c
    ldrh r1, [r6, #0x4]
    ldr r0, [r6, #0x0]
    cmp r1, #0x0
    addne r6, r6, r1, lsl #0x3
    bne L_0208435c
    mov r3, r6
    add r6, r6, #0x8
    ldrb r2, [r6, #-0x2]
    b L_02084330
L_0208432c:
    add r6, r6, #0x8
L_02084330:
    ldrb r1, [r6, #0x6]
    cmp r1, r2
    bls L_02084348
    ldrb r1, [r6, #0x7]
    cmp r1, #0x8
    bne L_0208432c
L_02084348:
    sub r2, r6, r3
    mov r1, r2, asr #0x2
    add r1, r2, r1, lsr #0x1d
    mov r1, r1, asr #0x3
    strh r1, [r3, #0x4]
L_0208435c:
    bl func_020930f0
    mov r1, r0
    mov r0, r7
    blx r1
    str r0, [r5, #0x0]
    mov r0, #0x14
    str r0, [r5, #0xc]
    ldr r2, =data_020e3a00
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, r6
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0208438c:
    ldr r0, =data_020e3a01
    ldr r2, =data_020e3a04
    ldrb r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    bl func_0208261c
    ldr r0, =data_020e3a04
    ldr r0, [r0, #0x0]
    bl func_02082534
    cmp r0, #0x1
    bhs L_02084420
    ldr r0, =data_020e3a01
    ldr r2, =data_020e3a04
    ldrb r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    mov r2, r6
    bl func_02082558
    ldr r4, [r6, #0x0]
    ldr r2, =data_020e3a00
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_020930e0
    mov r2, r0
    mov r0, r7
    add r1, r6, #0x8
    blx r2
    mov r6, r0
    mov r0, r4
    bl func_020930f0
    mov r1, r0
    mov r0, r7
    blx r1
    str r0, [r5, #0x0]
    mov r1, #0x14
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02084420:
    mov r0, #0x18
    mov r1, #0x0
    bl func_02084ea0
    mov r0, #0x0
    str r0, [r5, #0x0]
    mov r1, #0x14
    str r1, [r5, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
