#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201bdd0();
extern void func_0203284c();
extern void func_02067928();
// clang-format off
asm void func_0203d914(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r4, r1
    ldr r6, [r4, #0x24]
    mov r5, r0
    mov r0, r6
    bl func_0201bdd0
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mov r0, r6
    bl func_0203284c
    bl func_02067928
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r1, [r0, #0xc]
    tst r1, #0x4000
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r3, [r0, #0x168]
    mov r1, #0x0
    ldr r2, [r3, #0x4]
    add ip, sp, #0x0
    orr r2, r2, #0x80
    str r2, [r3, #0x4]
    ldr r0, [r0, #0x168]
    mov r3, #0x6
    str r1, [r0, #0x80]
    ldr r1, [r4, #0x4]
    add lr, r0, #0x84
    rsb r1, r1, #0x0
    str r1, [sp, #0x0]
    ldr r1, [r4, #0x8]
    rsb r1, r1, #0x0
    str r1, [sp, #0x4]
    ldr r1, [r4, #0xc]
    rsb r1, r1, #0x0
    str r1, [sp, #0x8]
L_0203d9b0:
    ldrb r1, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r2, [lr]
    add lr, lr, #0x1
    bne L_0203d9b0
    add lr, r0, #0x90
    add ip, r4, #0x10
    mov r3, #0x6
L_0203d9e0:
    ldrb r1, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r2, [lr]
    add lr, lr, #0x1
    bne L_0203d9e0
    str r5, [r0, #0xa4]
    ldr r1, [r4, #0x1c]
    str r1, [r0, #0xa0]
    ldr r1, [r4, #0x20]
    str r1, [r0, #0x9c]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
