#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204217c();
extern char data_020cf6c0[];
extern char data_020cf6c8[];
extern char data_020cf6cc[];
// clang-format off
asm void func_02030b78(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r5, lsl #0x3
    mov r0, r4
    bl func_0204217c
    ldr r1, =data_020cf6c8
    str r0, [r1, #0x0]
    mov r0, r4
    bl func_0204217c
    ldr r2, =data_020cf6c0
    mov r3, #0x1
    add r1, r2, #0x1
    str r0, [r2, #0x4]
    swpb r0, r5, [r1]
    mov ip, #0x0
    swpb r0, r3, [r2]
    ldr r1, =data_020cf6cc
    mov r2, ip
L_02030bc0:
    add r0, ip, #0x1
    str r2, [r1, ip, lsl #0x2]
    and ip, r0, #0xff
    cmp ip, #0xf
    blo L_02030bc0
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
