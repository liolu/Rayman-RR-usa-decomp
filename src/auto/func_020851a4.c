#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern char data_020bc544[];
extern char data_020becb8[];
// clang-format off
asm void func_020851a4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, #0x0
    beq L_02085288
    mov r0, r5, lsl #0x3
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085214
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_02085214:
    cmp r5, #0x0
    mov r2, #0x0
    bls L_02085288
    mov r0, r2
L_02085224:
    add r1, r4, r2, lsl #0x3
    swpb r3, r0, [r1]
    add ip, r1, #0x1
    swpb r3, r0, [ip]
    add ip, r1, #0x2
    swpb r3, r0, [ip]
    add ip, r1, #0x3
    swpb r3, r0, [ip]
    add ip, r1, #0x4
    swpb r3, r0, [ip]
    add ip, r1, #0x5
    swpb r3, r0, [ip]
    add ip, r1, #0x6
    swpb r3, r0, [ip]
    add lr, r1, #0x7
    swpb r3, r0, [lr]
    add r6, r2, #0x1
    swpb r3, r0, [ip]
    mov r3, r6, lsl #0x10
    str r0, [r4, r2, lsl #0x3]
    swpb r2, r0, [lr]
    cmp r5, r3, lsr #0x10
    strh r0, [r1, #0x4]
    mov r2, r3, lsr #0x10
    bhi L_02085224
L_02085288:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
