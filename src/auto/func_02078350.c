#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02078450();
extern void func_02079524();
extern void func_02079550();
extern void func_0207a970();
extern char data_020dfbf4[];
extern char data_020dfca0[];
extern char data_020dfcac[];
extern char data_020dfccc[];
// clang-format off
asm void func_02078350(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r3, #0x1
    ldr r2, =data_020dfca0
    str r3, [r4, #0x8]
    ldr r5, =data_020dfcac
    str r2, [r4, #0x10]
    ldr r2, =data_020dfccc
    str r5, [r4, #0xc]
    str r2, [r4, #0x14]
    add ip, r4, #0x78
    swpb r2, r3, [ip]
    ldr r2, =data_020dfbf4
    mov lr, #0x7000
    ldrb r5, [r2, #0x78]
    mov r2, #0x0
    add ip, r4, #0x68
    add r5, r0, r5, lsl #0x2
    ldr r5, [r5, #0x18]
    str r5, [r4, #0x74]
    str lr, [r4, #0x6c]
    str r3, [r4, #0x0]
    str r2, [r4, #0x90]
    swpb r3, r2, [ip]
    bl func_02078450
    mov r0, #0x60
    str r0, [sp, #0x0]
    ldr r0, [r4, #0xc]
    mov r1, #0x78
    mov r2, #0x30
    mov r3, #0x80
    bl func_02079524
    mov r1, #0x0
    ldr r0, [r4, #0x10]
    mov r2, r1
    bl func_02079550
    ldr r3, [r4, #0xc]
    ldr r2, =0x4001040
    ldrsh r1, [r3, #0x0]
    ldrsh r0, [r3, #0x4]
    ldrsh lr, [r3, #0x2]
    ldrsh r3, [r3, #0x6]
    add r0, r1, r0
    mov r1, r1, lsl #0x8
    add ip, lr, r3
    and r1, r1, #0xff00
    and r0, r0, #0xff
    orr r3, r1, r0
    mov r0, lr, lsl #0x8
    and r1, r0, #0xff00
    and r0, ip, #0xff
    strh r3, [r2, #0x0]
    orr r1, r1, r0
    mov r0, #0x8
    strh r1, [r2, #0x4]
    bl func_0207a970
    add r1, r4, #0x79
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
