#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_0206625c();
extern void func_02089088();
extern void func_02089b48();
extern void func_0208d61c();
// clang-format off
asm void func_0208fd90(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    mov r7, r0
    ldr r0, [r7, #0x8]
    mov r3, #0x0
    add r2, r0, #0x76
    swpb r0, r3, [r2]
    mov r6, r1
    ldr r0, [r7, #0x8]
    bl func_0206625c
    ldr r5, [r7, #0xc]
    ldr r2, [r7, #0x10]
    add r1, sp, #0x10
    mov r0, r7
    str r2, [r7, #0xc]
    bl func_02089088
    ldr r2, [r6, #0x0]
    ldr r1, [r7, #0x50]
    add r0, sp, #0x1c
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    ldr r2, [r6, #0x4]
    ldr r1, [r7, #0x54]
    sub r1, r2, r1
    str r1, [sp, #0x20]
    ldr r2, [r6, #0x8]
    ldr r1, [r7, #0x58]
    sub r1, r2, r1
    str r1, [sp, #0x24]
    bl func_01ff8668
    add r1, sp, #0xc
    mov r4, r0
    str r1, [sp, #0x0]
    add r0, r7, #0xb8
    str r0, [sp, #0x4]
    ldr r0, [r7, #0xc]
    add r1, sp, #0x10
    add r2, sp, #0x1c
    add r3, sp, #0x8
    bl func_0208d61c
    ldr r0, [r7, #0xc]
    mov r2, #0x1
    str r4, [r0, #0x18]
    ldr r1, [r7, #0xc]
    mov r0, r7
    str r4, [r1, #0x1c]
    ldr r3, [sp, #0x8]
    ldr r1, [r7, #0xc]
    str r3, [r1, #0x28]
    ldr r3, [sp, #0xc]
    ldr r1, [r7, #0xc]
    str r3, [r1, #0x30]
    str r5, [r7, #0xc]
    ldr r1, [r7, #0x8]
    str r2, [r1, #0x60]
    ldr r2, [r7, #0x8]
    ldrb r1, [r2, #0x75]
    add r2, r2, #0x75
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    ldr r2, [r7, #0x10]
    ldr r1, [r7, #0xc]
    ldr r2, [r2, #0x28]
    str r2, [r1, #0x28]
    ldr r2, [r7, #0x10]
    ldr r1, [r7, #0xc]
    ldr r2, [r2, #0x30]
    str r2, [r1, #0x30]
    ldr r2, [r7, #0x10]
    ldr r1, [r7, #0xc]
    ldr r2, [r2, #0x18]
    str r2, [r1, #0x18]
    ldr r2, [r7, #0x10]
    ldr r1, [r7, #0xc]
    ldr r2, [r2, #0x1c]
    str r2, [r1, #0x1c]
    bl func_02089b48
    ldr r0, [r7, #0x8]
    add r3, r7, #0x20
    add r4, r0, #0x10
    mov r2, #0x6
L_0208fed4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208fed4
    ldr r0, [r7, #0x8]
    mov r2, #0x6
    add r3, r0, #0x1c
L_0208ff04:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208ff04
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
