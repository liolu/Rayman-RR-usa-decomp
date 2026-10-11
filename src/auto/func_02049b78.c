#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a3b8();
extern void func_0200a4bc();
extern void func_0200a6a8();
extern void func_020413b4();
extern void func_0204141c();
extern void func_02041da8();
extern void func_02049ff4();
extern void func_0204a024();
extern void func_0204a038();
extern void func_0204a05c();
extern void func_0204a080();
extern void func_0204a168();
extern void func_0204af34();
// clang-format off
asm void func_02049b78(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x54
    mov r4, r0
    mov r1, r4
    mov r0, #0x10
    bl func_020413b4
    str r0, [sp, #0x0]
    cmp r0, #0x0
    bne L_02049f88
    add r0, sp, #0x0
    mov r1, #0x1
    bl func_02049ff4
    ldr r2, [sp, #0x0]
    mov r1, r4
    mov r0, #0x10
    mov r3, #0x68
    bl func_0204141c
    mov r4, r0
    ldr r1, [r4, #0x20]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x44]
    ldr r1, [r4, #0x24]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x48]
    ldr r1, [r4, #0x28]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x4c]
    ldr r0, =0x45800000
    ldr r1, [r4, #0x2c]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x50]
    ldr r0, [sp, #0x0]
    add r1, sp, #0x44
    bl func_0204a038
    ldrh r0, [r4, #0x66]
    tst r0, #0x8000
    beq L_02049c38
    ldr r0, [sp, #0x0]
    mov r1, #0x1
    bl func_0204a024
    b L_02049c44
L_02049c38:
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    bl func_0204a024
L_02049c44:
    ldr r1, [r4, #0x0]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    ldr r1, [sp, #0x0]
    str r0, [r1, #0x24]
    ldr r1, [r4, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    ldr r1, [sp, #0x0]
    str r0, [r1, #0x20]
    ldr r1, [r4, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    mov r5, r0
    ldr r0, =0x45800000
    ldr r1, [r4, #0x8]
    bl func_0200a4bc
    bl func_0200a3b8
    mov r1, r5
    mov r2, r0
    ldr r0, [sp, #0x0]
    bl func_0204a168
    ldr r0, =0x45800000
    ldr r1, [r4, #0x10]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x34]
    ldr r0, =0x45800000
    ldr r1, [r4, #0x14]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x38]
    ldr r0, =0x45800000
    ldr r1, [r4, #0x18]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x3c]
    ldr r0, =0x45800000
    ldr r1, [r4, #0x1c]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x40]
    ldr r0, [sp, #0x0]
    add r1, sp, #0x34
    bl func_0204a05c
    ldr r1, [r4, #0x34]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x28]
    ldr r1, [r4, #0x38]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x2c]
    mov r0, #0x0
    ldr r1, [r4, #0x3c]
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x30]
    ldr r5, [sp, #0x0]
    add r0, sp, #0x28
    add r3, r5, #0x2c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x0
    ldr r1, [r4, #0x40]
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x1c]
    mov r0, #0x0
    ldr r1, [r4, #0x44]
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    ldr r1, [r4, #0x48]
    str r0, [sp, #0x20]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    add r1, sp, #0x1c
    str r0, [sp, #0x24]
    add r3, r5, #0x44
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x4c]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x10]
    ldr r1, [r4, #0x50]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x14]
    ldr r1, [r4, #0x54]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x18]
    add r0, sp, #0x10
    add r3, r5, #0x38
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x58]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x4]
    ldr r1, [r4, #0x5c]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x8]
    ldr r1, [r4, #0x60]
    mov r0, #0x0
    bl func_0200a6a8
    mov r1, r0
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0xc]
    add r0, sp, #0x4
    add r3, r5, #0x50
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrh r0, [r4, #0x66]
    and r0, r0, #0xf
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02049f54
L_02049edc:
    b L_02049f54
    b L_02049ef8
    b L_02049f08
    b L_02049f18
    b L_02049f28
    b L_02049f38
    b L_02049f48
L_02049ef8:
    add r1, r5, #0x2
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02049f54
L_02049f08:
    add r1, r5, #0x2
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_02049f54
L_02049f18:
    add r1, r5, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_02049f54
L_02049f28:
    add r1, r5, #0x2
    mov r0, #0x4
    swpb r0, r0, [r1]
    b L_02049f54
L_02049f38:
    add r1, r5, #0x2
    mov r0, #0x5
    swpb r0, r0, [r1]
    b L_02049f54
L_02049f48:
    add r1, r5, #0x2
    mov r0, #0x6
    swpb r0, r0, [r1]
L_02049f54:
    ldrh r0, [r4, #0x64]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02049f80
    bl func_0204af34
    mov r5, r0
    ldr r0, [sp, #0x0]
    mov r1, r5
    bl func_0204a080
    mov r0, r5
    bl func_02041da8
L_02049f80:
    mov r0, r4
    bl func_02041da8
L_02049f88:
    ldr r0, [sp, #0x0]
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
