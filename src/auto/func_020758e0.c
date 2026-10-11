#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dc19c[];
// clang-format off
asm void func_020758e0(void) {
    stmfd sp!, {r3, lr}
    ldrb lr, [r0, #0x3]
    add r2, r0, #0x3
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov ip, #0x1
    ldrb r1, [r0, #0x1]
    cmp r1, #0x1
    ble L_02075930
L_02075904:
    add r2, r0, ip
    ldrb r1, [r2, #0x2]
    ldrb r3, [r2, #0x3]
    add r2, r2, #0x3
    add r1, lr, r1
    swpb r1, r1, [r2]
    add ip, ip, #0x1
    ldrb r1, [r0, #0x1]
    mov lr, r3
    cmp ip, r1
    blt L_02075904
L_02075930:
    sub r1, r1, #0x1
    add r1, r0, r1
    ldrb r2, [r1, #0x3]
    ldr r1, =data_020dc19c
    str r2, [r0, #0x10]
    ldr r1, [r1, #0x74]
    str r1, [r0, #0x14]
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
}
// clang-format on
