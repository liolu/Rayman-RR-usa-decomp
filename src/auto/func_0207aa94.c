#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dfd90[];
// clang-format off
asm void func_0207aa94(void) {
    stmfd sp!, {r3, lr}
    cmp r1, #0x0
    bne L_0207aac0
    ldr r1, =data_020dfd90
    add r2, r0, #0x1
    ldrb r1, [r1, #0x4]
    swpb r1, r1, [r0]
    ldrb r1, [r0, #0x0]
    rsb r1, r1, #0x20
    swpb r1, r1, [r2]
    b L_0207aae4
L_0207aac0:
    ldr lr, =data_020dfd90
    add r3, r0, #0x1
    ldrb r2, [lr, #0x4]
    add ip, lr, #0x4
    swpb r2, r2, [r0]
    swpb r2, r1, [r3]
    ldrb r2, [lr, #0x4]
    add r1, r2, r1
    swpb r1, r1, [ip]
L_0207aae4:
    ldrb r1, [r0, #0x0]
    add r2, r0, #0x3
    add r3, r0, #0x2
    swpb r1, r1, [r2]
    ldrb r1, [r0, #0x3]
    swpb r1, r1, [r3]
    ldmfd sp!, {r3, pc}
}
// clang-format on
