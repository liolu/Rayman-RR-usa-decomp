#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020172c8();
extern void func_02077fc4();
extern char data_020be730[];
extern char data_020de6a0[];
extern char data_020de760[];
extern char data_020de764[];
// clang-format off
asm void func_02074c40(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_020de764
    mov r4, r0
    ldr r2, [r1, #0x0]
    ldr r0, =data_020be730
    add r1, r4, #0x1
    mov r3, #0x1
    bl func_02077fc4
    ldr r1, =data_020de6a0
    ldr r3, =data_020de764
    ldr r1, [r1, #0x30]
    mov r2, r0
    ldr ip, =data_020de760
    ldr r0, [r3, #0x0]
    mov r1, r1, lsl #0x5
    str r2, [ip, #0x0]
    bl func_020172c8
    ldr r3, =data_020de6a0
    ldr r2, =data_020de760
    ldr ip, [r3, #0x30]
    mov r0, #0x1
    add r1, ip, #0x1
    str r1, [r3, #0x30]
    swpb r1, ip, [r4]
    ldr r4, [r3, #0x34]
    ldr r1, [r2, #0x0]
    add r1, r4, r1
    str r1, [r3, #0x34]
    ldmfd sp!, {r4, pc}
}
// clang-format on
