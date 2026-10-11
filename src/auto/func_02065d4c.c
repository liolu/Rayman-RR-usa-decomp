#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065e00();
extern void func_020661fc();
extern char data_020e3b2c[];
// clang-format off
asm void func_02065d4c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r3, #0x0
    str r3, [r4, #0x10]
    str r3, [r4, #0x14]
    str r3, [r4, #0x18]
    str r3, [r4, #0x1c]
    str r3, [r4, #0x20]
    str r3, [r4, #0x24]
    str r3, [r4, #0x28]
    str r3, [r4, #0x2c]
    str r3, [r4, #0x30]
    str r3, [r4, #0x34]
    str r3, [r4, #0x38]
    str r3, [r4, #0x3c]
    str r3, [r4, #0x40]
    str r3, [r4, #0x44]
    str r3, [r4, #0x48]
    str r3, [r4, #0x4c]
    str r3, [r4, #0x50]
    str r3, [r4, #0x54]
    str r3, [r4, #0x58]
    str r3, [r4, #0x5c]
    str r3, [r4, #0x60]
    str r3, [r4, #0x64]
    str r3, [r4, #0x68]
    str r3, [r4, #0x6c]
    str r3, [r4, #0x70]
    add r2, r4, #0x74
    swpb r1, r3, [r2]
    add r2, r4, #0x75
    swpb r1, r3, [r2]
    add r2, r4, #0x76
    swpb r1, r3, [r2]
    add r2, r4, #0x17c
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02065e00
    ldr r1, =data_020e3b2c
    mov r2, #0x0
    mov r0, r4
    str r2, [r1, #0x0]
    bl func_020661fc
    ldmfd sp!, {r4, pc}
}
// clang-format on
