#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern char data_020de0d3[];
extern char data_020de0d4[];
extern char data_020e4c41[];
// clang-format off
asm void func_020a33c0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    add r2, sp, #0x0
    ldr r4, [r1, #-0x8]
    bl func_02084450
    ldr r2, =0x113
    mov r1, r0
    cmp r4, r2
    ldr r2, [sp, #0x0]
    bne L_020a3448
    sub r3, r2, #0x1
    mov r0, #0xa
    mul r4, r3, r0
    ldr r0, =data_020de0d4
    ldr r3, =data_020e4c41
    add r0, r0, r4
    add r4, r3, r4
    mov lr, #0x4
L_020a3408:
    ldrb r3, [r4, #0x0]
    ldrb ip, [r4, #0x1]
    add r4, r4, #0x2
    subs lr, lr, #0x1
    swpb r3, r3, [r0]
    add r0, r0, #0x1
    swpb r3, ip, [r0]
    add r0, r0, #0x1
    bne L_020a3408
    ldr ip, =data_020de0d3
    mov r3, #0xa
    ldrb lr, [r4, #0x0]
    mla r3, r2, r3, ip
    swpb r2, lr, [r0]
    mov r0, #0x0
    swpb r0, r0, [r3]
L_020a3448:
    mov r0, r1
    add sp, sp, #0x10
    ldmfd sp!, {r4, pc}
}
// clang-format on
