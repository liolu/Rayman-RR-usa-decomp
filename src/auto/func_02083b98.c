#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020824d4();
extern void func_02082558();
extern void func_020825bc();
extern void func_02082758();
extern void func_0208446c();
extern char data_020e39f0[];
extern char data_020e3a01[];
extern char data_020e3a04[];
// clang-format off
asm void func_02083b98(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r6, =data_020e39f0
    mov r7, r1
    ldr r5, [r7, #0x0]
    ldr r4, [r6, #0x4]
    add r3, r6, #0x1
    str r7, [r6, #0x4]
    ldrb r1, [r6, #0x1]
    ldr r6, =data_020e3a01
    ldr ip, =data_020e3a04
    add r1, r1, #0x1
    swpb r1, r1, [r3]
    mov r8, r0
    ldrb r1, [r6, #0x0]
    ldr r0, [ip, #0x0]
    mov r6, r2
    bl func_020824d4
    mov r1, r0
    cmp r1, #0x1
    blo L_02083bfc
    ldr r1, [r5, #0x0]
    ldr r0, [r5, #0x4]
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    b L_02083c28
L_02083bfc:
    ldr r0, =data_020e3a04
    ldr r0, [r0, #0x0]
    bl func_02082758
    ldr r1, =data_020e39f0
    ldr r1, [r1, #0x4]
    cmp r0, r1
    beq L_02083c28
    ldr r1, [r5, #0x0]
    ldr r0, [r5, #0x4]
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
L_02083c28:
    ldr r1, [r5, #0x4]
    mov r0, r8
    ldr r1, [r1, #0x0]
    mov r2, r6
    bl func_0208446c
    ldr r2, =data_020e39f0
    ldr r0, [r6, #0x0]
    ldrb r1, [r2, #0x1]
    and r8, r0, #0xff
    and r0, r8, #0x10
    sub r3, r1, #0x1
    add r1, r2, #0x1
    cmp r0, #0x10
    swpb r0, r3, [r1]
    bne L_02083c8c
    ldmia r5, {r0, r1}
    ldr r3, [r0, #0x0]
    mov r0, #0x0
    str r3, [r1, #0x0]
    str r0, [r6, #0x0]
    mov r0, #0x14
    str r0, [r6, #0xc]
    str r4, [r2, #0x4]
    add r0, r7, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02083c8c:
    and r0, r8, #0x8
    cmp r0, #0x8
    bne L_02083cb0
    ldmia r5, {r0, r1}
    ldr r3, [r0, #0x0]
    add r0, r7, #0x8
    str r3, [r1, #0x0]
    str r4, [r2, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02083cb0:
    ldr r0, =data_020e3a01
    ldr r2, =data_020e3a04
    ldrb r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    bl func_020824d4
    mov r1, r0
    cmp r1, #0x1
    bhs L_02083d20
    ldr r0, =data_020e3a04
    ldr r0, [r0, #0x0]
    bl func_02082758
    ldrb r1, [r0, #0x7]
    cmp r1, #0x27
    beq L_02083d18
    ldr r2, [r5, #0x4]
    ldr r1, =data_020e3a04
    str r0, [r2, #0x0]
    ldr r0, [r1, #0x0]
    bl func_020825bc
    ldr r0, =data_020e3a01
    ldr r3, =data_020e3a04
    ldr r2, =data_020e39f0
    ldrb r1, [r0, #0x0]
    ldr r0, [r3, #0x0]
    ldr r2, [r2, #0x4]
    bl func_02082558
L_02083d18:
    ldr r0, =data_020e39f0
    str r4, [r0, #0x4]
L_02083d20:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
