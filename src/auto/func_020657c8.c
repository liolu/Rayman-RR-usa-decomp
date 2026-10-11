#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065a5c();
extern void func_02065a6c();
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd280[];
// clang-format off
asm void func_020657c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    movs r4, r0
    bne L_02065810
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xe
    bl func_0207ad9c
L_02065810:
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    beq L_02065854
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xd
    bl func_0207ad9c
L_02065854:
    bl func_02065a5c
    str r0, [r4, #0x10]
    bl func_02065a6c
    ldr r1, [r4, #0x10]
    str r0, [r1, #0x0]
    bl func_02065a6c
    ldr r1, [r4, #0x10]
    str r0, [r1, #0x4]
    bl func_02065a6c
    ldr r1, [r4, #0x10]
    str r0, [r1, #0x8]
    bl func_02065a6c
    ldr r1, [r4, #0x10]
    mov r2, #0x0
    str r0, [r1, #0xc]
    ldr r0, [r4, #0x10]
    mov r6, #0x6000
    ldr r0, [r0, #0x0]
    mov lr, #0x2000
    str r2, [r0, #0x0]
    ldr r0, [r4, #0x10]
    mov ip, #0xa000
    ldr r0, [r0, #0x0]
    mov r1, #0xc8000
    str r2, [r0, #0x4]
    ldr r3, [r4, #0x10]
    mov r0, #0x1000
    ldr r3, [r3, #0x0]
    ldr r5, =0x323d
    str r2, [r3, #0x8]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0xc]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x10]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x14]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r6, [r3, #0x18]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r6, [r3, #0x1c]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str lr, [r3, #0x20]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str ip, [r3, #0x24]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x28]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x2c]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x30]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x34]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r1, [r3, #0x38]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r0, [r3, #0x3c]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x40]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r5, [r3, #0x44]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r0, [r3, #0x48]
    ldr r3, [r4, #0x10]
    ldr r3, [r3, #0x0]
    str r2, [r3, #0x4c]
    ldr r3, [r4, #0x10]
    mov ip, #0x80000000
    ldr r3, [r3, #0x0]
    mov lr, #0x1800
    str r1, [r3, #0x50]
    ldr r3, [r4, #0x10]
    sub r1, ip, #0x1
    ldr r5, [r3, #0x0]
    sub r3, ip, #0x80000001
    str r0, [r5, #0x54]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str r2, [r0, #0x58]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str lr, [r0, #0x5c]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str ip, [r0, #0x60]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x64]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str r2, [r0, #0x68]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str r2, [r0, #0x6c]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    strh r2, [r0, #0x70]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    strh r2, [r0, #0x72]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    str r2, [r0, #0x74]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    add r1, r0, #0x78
    swpb r0, r3, [r1]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x0]
    add r1, r0, #0x79
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
