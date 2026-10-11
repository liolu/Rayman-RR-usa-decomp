#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_0208d56c();
extern void func_0208d704();
extern char data_020e3b2a[];
// clang-format off
asm void func_02089088(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r2, =data_020e3b2a
    mov r5, r0
    ldrsb r2, [r2, #0x0]
    mov r4, r1
    cmp r2, #0x0
    beq L_02089194
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r0, [r5, #0x8]
    add r1, sp, #0x0
    add r0, r0, #0x40
    mov r2, #0x10
    bl func_0208d56c
    cmp r0, #0x0
    beq L_02089128
    ldr r0, [r5, #0x8]
    mov r3, #0x0
    str r3, [r0, #0x40]
    ldr r0, [r5, #0x8]
    sub r1, r3, #0x1000
    str r1, [r0, #0x44]
    ldr r0, [r5, #0x8]
    mov r2, #0x6
    str r3, [r0, #0x48]
    ldr r0, [r5, #0x8]
    add r3, r0, #0x40
L_02089100:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02089100
    b L_02089138
L_02089128:
    ldr r1, [r5, #0x8]
    mov r0, r4
    add r1, r1, #0x40
    bl func_01ff84a0
L_02089138:
    ldr r0, [r5, #0x8]
    add r1, sp, #0x0
    add r0, r0, #0x4c
    mov r2, #0x10
    bl func_0208d56c
    cmp r0, #0x0
    beq L_0208917c
    ldr r0, [r5, #0x8]
    mov r2, #0x0
    str r2, [r0, #0x4c]
    ldr r0, [r5, #0x8]
    mov r1, #0x1000
    str r2, [r0, #0x50]
    ldr r0, [r5, #0x8]
    add sp, sp, #0xc
    str r1, [r0, #0x54]
    ldmfd sp!, {r4, r5, pc}
L_0208917c:
    ldr r1, [r5, #0x8]
    add r0, r5, #0xb8
    add r1, r1, #0x4c
    bl func_01ff84a0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
L_02089194:
    ldr r2, [r5, #0xc]
    ldr r2, [r2, #0x6c]
    cmp r2, #0x0
    beq L_020891f8
    ldr r3, [r5, #0x68]
    ldr r2, [r5, #0x50]
    mov r0, r4
    sub r2, r3, r2
    str r2, [r4, #0x0]
    ldr r3, [r5, #0x6c]
    ldr r2, [r5, #0x54]
    sub r2, r3, r2
    str r2, [r4, #0x4]
    ldr r3, [r5, #0x70]
    ldr r2, [r5, #0x58]
    sub r2, r3, r2
    str r2, [r4, #0x8]
    bl func_01ff84a0
    mov r0, #0x0
    str r0, [r5, #0xb8]
    str r0, [r5, #0xbc]
    mov r0, #0x1000
    add sp, sp, #0xc
    str r0, [r5, #0xc0]
    ldmfd sp!, {r4, r5, pc}
L_020891f8:
    add r2, r5, #0xb8
    bl func_0208d704
    mov r0, #0x0
    str r0, [r5, #0xb8]
    str r0, [r5, #0xbc]
    mov r0, #0x1000
    str r0, [r5, #0xc0]
    ldr r0, [r4, #0x0]
    rsb r0, r0, #0x0
    str r0, [r4, #0x0]
    ldr r0, [r4, #0x4]
    rsb r0, r0, #0x0
    str r0, [r4, #0x4]
    ldr r0, [r4, #0x8]
    rsb r0, r0, #0x0
    str r0, [r4, #0x8]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
