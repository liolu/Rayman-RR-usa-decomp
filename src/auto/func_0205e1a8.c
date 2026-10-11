#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026844();
extern void func_0202c664();
extern void func_02058200();
extern char data_020dc19c[];
extern char data_020dc3e4[];
extern char data_020dc448[];
extern char data_020dcee8[];
// clang-format off
asm void func_0205e1a8(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020dc3e4
    bl func_0202c664
    ldr r0, =data_020dc448
    bl func_0202c664
    ldr r0, =data_020dc19c
    mov r2, #0x0
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    ldr r0, =data_020dcee8
    ldr r0, [r0, #0x0]
    bl func_02026844
    mov r0, #0x8
    bl func_02058200
    ldmfd sp!, {r3, pc}
}
// clang-format on
