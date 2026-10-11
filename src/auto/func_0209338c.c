#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_0202c700();
extern void func_0202e1e0();
// clang-format off
asm void func_0209338c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    mov r3, #0x0
    sub r2, r3, #0x1000
    mov r5, r0
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    add r0, sp, #0xc
    str r3, [sp, #0x14]
    mov r4, r1
    ldr r1, [r5, #0x24]
    mov r2, r0
    bl func_0202c700
    ldr r0, [r5, #0x24]
    add r1, sp, #0x0
    bl func_0202e1e0
    ldr ip, [sp, #0xc]
    ldr r3, [sp, #0x0]
    ldr r2, [sp, #0x10]
    sub lr, ip, r3
    ldr r1, [sp, #0x4]
    ldr r3, [sp, #0x14]
    sub ip, r2, r1
    ldr r2, [sp, #0x8]
    add r0, sp, #0xc
    sub r2, r3, r2
    mov r1, r0
    str lr, [sp, #0xc]
    str ip, [sp, #0x10]
    str r2, [sp, #0x14]
    bl func_01ff84a0
    add ip, sp, #0xc
    mov r3, r4
    mov r2, #0x6
L_02093414:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093414
    mov r0, #0x15
    str r0, [r4, #0xc]
    mov r0, #0x1
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
