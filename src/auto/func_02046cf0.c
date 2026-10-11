#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020473a4();
extern void func_02072aa0();
extern void func_02072bd0();
extern char data_020bbfbc[];
// clang-format off
asm void func_02046cf0(void) {
    stmfd sp!, {r3, lr}
    mov r0, #0x0
    bl func_020473a4
    mov r1, #0x0
    mov r2, r1
    bl func_02072aa0
    mov r0, #0x1
    bl func_020473a4
    mov r1, #0x1
    mov r2, r1
    bl func_02072aa0
    mov r0, #0x2
    bl func_020473a4
    mov r1, #0x2
    mov r2, r1
    bl func_02072aa0
    mov r0, #0x3
    bl func_02072bd0
    ldr r1, =data_020bbfbc
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
