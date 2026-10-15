#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_020825bc(void) {
    stmfd sp!, {r3, lr}
    ldr r0, [r0, #0x10]
    ldrb r1, [r0, #0x4c]
    cmp r1, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_020e39e8
    add r2, r0, #0x4e
    ldrb r1, [r1, #0x0]
    ldr lr, =data_020e39e9
    add r3, r0, #0x4f
    swpb r1, r1, [r2]
    add ip, r0, #0x4c
    ldrb r2, [lr, #0x0]
    mov r1, #0x0
    add lr, r0, #0x4d
    swpb r2, r2, [r3]
    mov r2, #0x48
    swpb r3, r1, [ip]
    str r1, [r0, #0x48]
    swpb r3, r1, [lr]
    bl memset
    ldmfd sp!, {r3, pc}
}
// clang-format on
