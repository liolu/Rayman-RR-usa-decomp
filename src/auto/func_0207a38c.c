#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _fdiv();
extern void func_0200a42c();
extern void func_0202e1e0();
extern void func_02078504();
extern char data_020dfccc[];
// clang-format off
asm void func_0207a38c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x4
    mov r10, r0
    add r4, r10, #0x69
    mov r9, #0x0
    swpb r0, r9, [r4]
    ldrb r0, [r10, #0x68]
    cmp r0, #0x0
    addle sp, sp, #0x4
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r6, =0x45800000
    ldr r5, =data_020dfccc
L_0207a3bc:
    add r0, r10, r9, lsl #0x2
    ldr r8, [r0, #0x18]
    ldrb r0, [r8, #0x0]
    tst r0, #0x1
    beq L_0207a468
    tst r0, #0x2
    bne L_0207a3e8
    ldr r0, [r8, #0xc]
    add r1, r8, #0x10
    ldr r0, [r0, #0x24]
    bl func_0202e1e0
L_0207a3e8:
    ldr r0, [r10, #0x14]
    ldrb r0, [r0, #0xc0]
    cmp r0, #0x0
    ldr r0, [r8, #0x10]
    bne L_0207a420
    bl func_0200a42c
    mov r1, r6
    bl _fdiv
    mov r7, r0
    ldr r0, [r8, #0x14]
    bl func_0200a42c
    mov r1, r6
    bl _fdiv
    b L_0207a440
L_0207a420:
    bl func_0200a42c
    mov r1, r6
    bl _fdiv
    mov r7, r0
    ldr r0, [r8, #0x18]
    bl func_0200a42c
    mov r1, r6
    bl _fdiv
L_0207a440:
    add r3, r8, #0x8
    mov r2, r0
    str r3, [sp, #0x0]
    mov r0, r5
    mov r1, r7
    add r3, r8, #0x4
    bl func_02078504
    ldrb r0, [r4, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r4]
L_0207a468:
    ldrb r0, [r10, #0x68]
    add r9, r9, #0x1
    cmp r9, r0
    blt L_0207a3bc
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
