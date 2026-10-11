#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020414ac();
extern void func_02041da8();
extern void func_0205703c();
extern char data_020dc19c[];
extern char data_020dd844[];
// clang-format off
asm void func_0206b5fc(void) {
    stmfd sp!, {r4, lr}
    mov r0, #0x84
    mov r1, #0x0
    mov r2, #0x2
    bl func_020414ac
    mov r4, r0
    ldr r0, =data_020dc19c
    ldrh r2, [r4, #0x0]
    ldr r1, =data_020dd844
    add r0, r0, #0x7d
    strh r2, [r1, #0x8]
    mov r2, #0x0
    str r2, [r1, #0xc]
    ldrh r3, [r4, #0x0]
    add r1, r0, #0xc00
    mov r2, #0x28
    swpb r0, r3, [r1]
    ldrh r1, [r4, #0x0]
    mul r0, r1, r2
    bl func_0205703c
    ldr r2, =data_020dc19c
    ldr r1, =data_020dd844
    str r0, [r2, #0x240]
    mvn r2, #0x0
    mov r0, r4
    str r2, [r1, #0x14]
    bl func_02041da8
    ldmfd sp!, {r4, pc}
}
// clang-format on
