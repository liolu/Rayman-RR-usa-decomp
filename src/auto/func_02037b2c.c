#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff8404();
extern void func_01ff87ec();
extern void func_0202dc64();
extern void func_02067900();
// clang-format off
asm void func_02037b2c(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x24
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r3, r4, pc}
    bl func_02067900
    mov r4, r0
    ldr r0, [r4, #0xc]
    tst r0, #0x4
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r3, r4, pc}
    tst r0, #0x4000
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r3, r4, pc}
    add r1, sp, #0x8
    add r2, sp, #0x4
    add r3, sp, #0x0
    add r0, r4, #0x78
    bl func_0202dc64
    ldr r4, [r4, #0x168]
    add ip, sp, #0x18
    add r3, r4, #0x124
    mov r2, #0x6
L_02037b90:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02037b90
    ldr r1, [sp, #0x4]
    add r0, sp, #0x18
    bl VEC_DotProduct
    ldr r3, [sp, #0x4]
    ldr r0, [sp, #0x1c]
    ldr r1, [r3, #0x8]
    ldr r2, [sp, #0x20]
    ldr r3, [r3, #0x4]
    bl func_01ff87ec
    ldr r3, [sp, #0x4]
    ldr r0, [sp, #0x20]
    ldr r1, [r3, #0x0]
    ldr r2, [sp, #0x18]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    ldr r2, [sp, #0x4]
    ldr r0, [sp, #0x18]
    ldr r1, [r2, #0x4]
    ldr r3, [r2, #0x0]
    ldr r2, [sp, #0x1c]
    bl func_01ff87ec
    cmp r0, #0x0
    add r0, sp, #0x18
    ble L_02037c20
    ldr r1, [sp, #0x4]
    bl func_01ff8404
    b L_02037c2c
L_02037c20:
    ldr r1, [sp, #0x4]
    bl func_01ff8404
    rsb r0, r0, #0x0
L_02037c2c:
    mov r2, #0x0
    mov r1, #0x1000
    str r2, [sp, #0xc]
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    str r0, [r4, #0x120]
    add r3, sp, #0xc
    add r4, r4, #0x124
    mov r2, #0x6
L_02037c50:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02037c50
    add sp, sp, #0x24
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
