#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a6988();
extern void func_020a69b4();
extern void func_020b0138();
extern char data_020c04cc[];
extern char data_020dba75[];
extern char data_020e4f10[];
// clang-format off
asm void func_020a5f88(void) {
    stmfd sp!, {r3, lr}
    ldr r2, =data_020e4f10
    mov r3, #0x0
    str r3, [r2, #0x0]
    add r1, r2, #0x10
    swpb r0, r3, [r1]
    ldr r0, =data_020c04cc
    str r3, [r2, #0x18]
    str r3, [r2, #0x28]
    mov r1, #0x1
    str r1, [r0, #0x0]
    str r3, [r2, #0x8]
    str r3, [r2, #0x2c]
    add r1, r2, #0x12
    swpb r0, r3, [r1]
    ldr r1, =data_020dba75
    str r3, [r2, #0x30]
    swpb r0, r3, [r1]
    bl func_020a6988
    bl func_020a69b4
    bl func_020b0138
    ldmfd sp!, {r3, pc}
}
// clang-format on
