#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015a8();
extern char data_020cfa90[];
extern char data_020cfa94[];
extern char data_020cfa9a[];
// clang-format off
asm void func_02042188(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_020cfa90
    mov r5, r0
    ldr r0, [r2, #0x1e0]
    sub r0, r0, #0x1
    cmp r5, r0
    bne L_020422a0
    mov r0, #0xc
    mla r3, r5, r0, r2
    mov r1, #0x0
    swpb r4, r1, [r3]
    add ip, r3, #0x1
    swpb r4, r1, [ip]
    add ip, r3, #0x2
    swpb r4, r1, [ip]
    add ip, r3, #0x3
    swpb r4, r1, [ip]
    add ip, r3, #0x4
    swpb r4, r1, [ip]
    add ip, r3, #0x5
    swpb r4, r1, [ip]
    add ip, r3, #0x6
    swpb r4, r1, [ip]
    add ip, r3, #0x7
    swpb r4, r1, [ip]
    add ip, r3, #0x8
    swpb r4, r1, [ip]
    add ip, r3, #0x9
    swpb r4, r1, [ip]
    add ip, r3, #0xa
    swpb r4, r1, [ip]
    add r4, r3, #0xb
    swpb r3, r1, [r4]
    sub r3, r5, #0x1
    mul r4, r3, r0
    ldr r5, [r2, #0x1e0]
    ldr r0, =data_020cfa9a
    sub r3, r5, #0x1
    str r3, [r2, #0x1e0]
    ldrsh r0, [r0, r4]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, pc}
    add r0, r2, r4
    swpb r3, r1, [r0]
    add r4, r0, #0x1
    swpb r3, r1, [r4]
    add r4, r0, #0x2
    swpb r3, r1, [r4]
    add r4, r0, #0x3
    swpb r3, r1, [r4]
    add r4, r0, #0x4
    swpb r3, r1, [r4]
    add r4, r0, #0x5
    swpb r3, r1, [r4]
    add r4, r0, #0x6
    swpb r3, r1, [r4]
    add r4, r0, #0x7
    swpb r3, r1, [r4]
    add r4, r0, #0x8
    swpb r3, r1, [r4]
    add r4, r0, #0x9
    swpb r3, r1, [r4]
    add r4, r0, #0xa
    swpb r3, r1, [r4]
    add r3, r0, #0xb
    swpb r0, r1, [r3]
    ldr r0, [r2, #0x1e0]
    sub r0, r0, #0x1
    str r0, [r2, #0x1e0]
    ldmfd sp!, {r4, r5, r6, pc}
L_020422a0:
    add r0, r5, #0x1
    mov r3, #0xc
    mul r4, r0, r3
    ldr r0, =data_020cfa9a
    ldrsh r0, [r0, r4]
    cmp r0, #0x0
    bne L_020422f8
    mul r0, r5, r3
    ldr r6, =data_020cfa94
    add lr, r5, #0x2
    ldr ip, [r6, r4]
    mla r1, lr, r3, r2
    str ip, [r6, r0]
    ldr ip, [r2, #0x1e0]
    add r0, r2, r4
    sub ip, ip, lr
    mul r2, ip, r3
    bl func_020015a8
    ldr r0, =data_020cfa90
    ldr r1, [r0, #0x1e0]
    sub r1, r1, #0x1
    str r1, [r0, #0x1e0]
L_020422f8:
    sub r0, r5, #0x1
    mov r2, #0xc
    mul lr, r0, r2
    ldr r0, =data_020cfa9a
    ldrsh r0, [r0, lr]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, pc}
    mul r0, r5, r2
    ldr ip, =data_020cfa94
    ldr r1, =data_020cfa90
    ldr r3, [ip, r0]
    add r0, r1, r0
    str r3, [ip, lr]
    ldr r3, [r1, #0x1e0]
    add r1, r1, r4
    sub r3, r3, r5
    sub r3, r3, #0x1
    mul r2, r3, r2
    bl func_020015a8
    ldr r0, =data_020cfa90
    ldr r1, [r0, #0x1e0]
    sub r1, r1, #0x1
    str r1, [r0, #0x1e0]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
