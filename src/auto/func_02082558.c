#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f4();
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_02082558(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, [r0, #0x10]
    ldrb r3, [r0, #0x4c]
    cmp r3, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    ldr r3, =data_020e39e8
    add ip, r0, #0x4e
    ldrb r3, [r3, #0x0]
    ldr r4, =data_020e39e9
    add lr, r0, #0x4f
    swpb r3, r3, [ip]
    add ip, r0, #0x4c
    ldrb r3, [r4, #0x0]
    mov r5, #0x1
    add r4, r0, #0x4d
    swpb r3, r3, [lr]
    swpb r3, r5, [ip]
    str r2, [r0, #0x48]
    swpb r1, r1, [r4]
    mov r1, #0x0
    mov r2, #0x48
    bl func_020015f4
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
