#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c3e8c[];
extern char data_020c3e8e[];
extern char data_020c3f10[];
extern char data_020c49d4[];
// clang-format off
asm void func_0201bdf8(void) {
    ldr r0, =data_020c3e8c
    mov r1, #0x0
    ldrsh ip, [r0, #0x0]
    cmp ip, #0x0
    ble L_0201be34
    ldr r3, =data_020c3f10
L_0201be10:
    ldr r2, [r3, r1, lsl #0x2]
    add r0, r1, #0x1
    ldr r1, [r2, #0x30]
    mov r0, r0, lsl #0x10
    bic r1, r1, #0x21
    str r1, [r2, #0x30]
    cmp ip, r0, asr #0x10
    mov r1, r0, asr #0x10
    bgt L_0201be10
L_0201be34:
    ldr r2, =data_020c49d4
    mov ip, #0x0
    ldr r3, =data_020c3e8c
    ldr r1, =data_020c3e8e
    swpb r0, ip, [r2]
    strh ip, [r3, #0x0]
    strh ip, [r1, #0x0]
    bx lr
}
// clang-format on
