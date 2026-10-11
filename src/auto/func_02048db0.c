#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02048ee4();
extern char data_020d0c00[];
extern char data_020d0c0c[];
extern char data_020d0c18[];
extern char data_020d0c19[];
extern char data_020d0c1c[];
extern char data_020d0c28[];
// clang-format off
asm void func_02048db0(void) {
    stmfd sp!, {r4, lr}
    bl func_02048ee4
    ldr r1, =data_020d0c1c
    mov r0, #0x1000
    mov lr, #0x1
    str r0, [r1, #0x0]
    mov r4, #0x0
    str r4, [r1, #0x4]
    ldr r0, =data_020d0c28
    str r4, [r1, #0x8]
    str lr, [r0, #0x0]
    str r4, [r0, #0x4]
    ldr r3, =data_020d0c19
    str r4, [r0, #0x8]
    ldr r2, =data_020d0c18
    ldr ip, =0x4cc
    ldr r1, =data_020d0c0c
    swpb r0, r4, [r3]
    str ip, [r1, #0x0]
    swpb r0, r4, [r2]
    str ip, [r1, #0x4]
    ldr r0, =data_020d0c00
    str ip, [r1, #0x8]
    add r2, lr, #0x198
    str r2, [r0, #0x0]
    str r2, [r0, #0x4]
    str r2, [r0, #0x8]
    mov r0, #0x3
    str r0, [r1, #0x8]
    ldmfd sp!, {r4, pc}
}
// clang-format on
