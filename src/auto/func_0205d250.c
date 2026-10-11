#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
// clang-format off
asm void func_0205d250(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {pc}
    bl func_02067900
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {pc}
    add ip, sp, #0x0
    add r3, r0, #0x3c
    mov r2, #0x6
L_0205d290:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0205d290
    ldr r0, [sp, #0x8]
    mov r0, r0, lsl #0x4
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
