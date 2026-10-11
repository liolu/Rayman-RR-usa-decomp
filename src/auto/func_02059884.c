#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_0202a89c();
extern void func_02059600();
extern void func_02059b9c();
extern void func_02061720();
extern void func_02066e84();
extern void func_02066e90();
extern void func_02066e9c();
extern void func_02066ea8();
extern void func_02066eb4();
// clang-format off
asm void func_02059884(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    mov r11, r1
    mov r1, r10
    mov r0, #0x1
    mov r9, r2
    mov r8, r3
    bl func_02061720
    ldr r1, [r10, #0x4]
    ldr r3, [r8, #0x4]
    ldr r1, [r1, #0x14]
    ldr r2, [r9, #0x4]
    str r1, [sp, #0x8]
    sub r1, r3, r2
    str r1, [sp, #0x24]
    ldr r2, [r8, #0x8]
    ldr r1, [r9, #0x8]
    mov r5, r0
    sub r0, r2, r1
    str r0, [sp, #0x28]
    ldr r1, [r8, #0xc]
    ldr r0, [r9, #0xc]
    sub r0, r1, r0
    str r0, [sp, #0x2c]
    ldr r0, [r10, #0x30]
    and r0, r0, #0x10
    tst r0, #0xff
    beq L_020599a0
    ldr r0, [r10, #0x34]
    add r6, sp, #0xc
    mov r4, r0
    mov r3, #0xc
L_02059908:
    ldrb r1, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r6]
    add r6, r6, #0x1
    swpb r1, r2, [r6]
    add r6, r6, #0x1
    bne L_02059908
    ldr r2, [sp, #0x24]
    cmp r2, #0x0
    ldrle r1, [r0, #0x0]
    addle r1, r1, r2
    strle r1, [r0, #0x0]
    ble L_02059950
    ldr r1, [r0, #0xc]
    add r1, r1, r2
    str r1, [r0, #0xc]
L_02059950:
    ldr r2, [sp, #0x28]
    cmp r2, #0x0
    ldrle r1, [r0, #0x4]
    addle r1, r1, r2
    strle r1, [r0, #0x4]
    ble L_02059974
    ldr r1, [r0, #0x10]
    add r1, r1, r2
    str r1, [r0, #0x10]
L_02059974:
    ldr r2, [sp, #0x2c]
    cmp r2, #0x0
    ble L_02059990
    ldr r1, [r0, #0x14]
    add r1, r1, r2
    str r1, [r0, #0x14]
    b L_020599c0
L_02059990:
    ldr r1, [r0, #0x8]
    add r1, r1, r2
    str r1, [r0, #0x8]
    b L_020599c0
L_020599a0:
    ldr r4, [r10, #0x34]
    add r0, sp, #0x24
    ldr r1, [r4, #0xc]
    str r1, [sp, #0x4]
    bl func_01ff8668
    ldr r1, [r4, #0xc]
    add r0, r1, r0
    str r0, [r4, #0xc]
L_020599c0:
    ldr r0, [sp, #0x8]
    bl func_02066e90
    cmp r0, #0x0
    beq L_020599f0
    ldr r0, [sp, #0x8]
    bl func_02066e9c
    cmp r0, #0x0
    beq L_020599f0
    ldr r0, [sp, #0x8]
    bl func_02066ea8
    cmp r0, #0x0
    bne L_02059aa8
L_020599f0:
    ldr r0, [r11, #0x4]
    mov r4, #0x0
    ldr r6, [r0, #0x0]
    cmp r6, #0x0
    beq L_02059a34
L_02059a04:
    ldr r2, [r6, #0x0]
    cmp r10, r2
    beq L_02059a24
    mov r0, r10
    mov r1, r5
    mov r3, r9
    str r8, [sp, #0x0]
    bl func_02059600
L_02059a24:
    ldr r6, [r6, #0x4]
    add r4, r4, #0x1
    cmp r6, #0x0
    bne L_02059a04
L_02059a34:
    ldr r0, [sp, #0x8]
    bl func_02066eb4
    cmp r0, #0x0
    bne L_02059aa8
    ldr r0, [r11, #0x4]
    ldr r6, [r0, #0x2c]
    ldr r4, [r0, #0x28]
    cmp r6, #0x0
    ble L_02059aa8
L_02059a58:
    ldr r0, [r4, #0x0]
    ldr r0, [r0, #0x4]
    ldr r7, [r0, #0x0]
    cmp r7, #0x0
    beq L_02059a98
L_02059a6c:
    ldr r2, [r7, #0x0]
    cmp r10, r2
    beq L_02059a8c
    mov r0, r10
    mov r1, r5
    mov r3, r9
    str r8, [sp, #0x0]
    bl func_02059600
L_02059a8c:
    ldr r7, [r7, #0x4]
    cmp r7, #0x0
    bne L_02059a6c
L_02059a98:
    sub r6, r6, #0x1
    cmp r6, #0x0
    add r4, r4, #0x4
    bgt L_02059a58
L_02059aa8:
    ldr r0, [sp, #0x8]
    bl func_02066e84
    cmp r0, #0x0
    bne L_02059b40
    mov r0, r11
    bl func_0202a89c
    cmp r0, #0x0
    bne L_02059b40
    mov r0, r10
    mov r1, r11
    mov r2, r5
    mov r3, r9
    str r8, [sp, #0x0]
    bl func_02059b9c
    ldr r0, [sp, #0x8]
    bl func_02066eb4
    cmp r0, #0x0
    bne L_02059b40
    ldr r0, [r11, #0x4]
    ldr r6, [r0, #0x2c]
    ldr r7, [r0, #0x28]
    cmp r6, #0x0
    ble L_02059b40
L_02059b04:
    ldr r4, [r7, #0x0]
    mov r0, r4
    bl func_0202a89c
    cmp r0, #0x0
    bne L_02059b30
    mov r0, r10
    mov r1, r4
    mov r2, r5
    mov r3, r9
    str r8, [sp, #0x0]
    bl func_02059b9c
L_02059b30:
    sub r6, r6, #0x1
    cmp r6, #0x0
    add r7, r7, #0x4
    bgt L_02059b04
L_02059b40:
    ldr r0, [r10, #0x30]
    and r0, r0, #0x10
    tst r0, #0xff
    beq L_02059b88
    ldr r4, [r10, #0x34]
    add r3, sp, #0xc
    mov r2, #0xc
L_02059b5c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02059b5c
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02059b88:
    ldr r1, [r10, #0x34]
    ldr r0, [sp, #0x4]
    str r0, [r1, #0xc]
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
