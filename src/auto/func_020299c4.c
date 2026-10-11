#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_02014910();
// clang-format off
asm void func_020299c4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r2, #0x0
    ldr r5, [r0, #0x8]
    mov r0, r2
    sub r6, r0, #0x80000001
    str r2, [sp, #0x0]
    mov r10, r1
    mov r8, r2
    mov r9, r2
    mov r7, r6
    mov r11, r2
    str r0, [sp, #0x4]
    cmp r5, #0x0
    beq L_02029be0
L_02029a00:
    ldr r4, [r5, #0x4]
    add r2, sp, #0x8
    str r5, [sp, #0x0]
    add r1, r4, #0x48
    mov r0, #0x6
L_02029a14:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_02029a14
    add r2, sp, #0x14
    add r1, r4, #0x54
    mov r0, #0x6
L_02029a44:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_02029a44
    ldr r1, [r10, #0x0]
    ldr r0, [sp, #0x8]
    cmp r1, r0
    blt L_02029a84
    ldr r0, [sp, #0x14]
    cmp r1, r0
    ble L_02029a8c
L_02029a84:
    mov r0, #0x0
    b L_02029ad8
L_02029a8c:
    ldr r1, [r10, #0x4]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    blt L_02029aa8
    ldr r0, [sp, #0x18]
    cmp r1, r0
    ble L_02029ab0
L_02029aa8:
    mov r0, #0x0
    b L_02029ad8
L_02029ab0:
    ldr r1, [r10, #0x8]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    blt L_02029acc
    ldr r0, [sp, #0x1c]
    cmp r1, r0
    ble L_02029ad4
L_02029acc:
    mov r0, #0x0
    b L_02029ad8
L_02029ad4:
    mov r0, #0x1
L_02029ad8:
    cmp r0, #0x0
    beq L_02029bd4
    ldr r2, [r4, #0x48]
    ldr r0, [r4, #0x54]
    mov r1, #0x2000
    add r0, r2, r0
    str r0, [sp, #0x20]
    ldr r3, [r4, #0x4c]
    ldr r2, [r4, #0x58]
    add r2, r3, r2
    str r2, [sp, #0x24]
    ldr r3, [r4, #0x50]
    ldr r2, [r4, #0x5c]
    add r2, r3, r2
    str r2, [sp, #0x28]
    bl func_02014910
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x24]
    mov r1, #0x2000
    bl func_02014910
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x28]
    mov r1, #0x2000
    bl func_02014910
    str r0, [sp, #0x28]
    ldr r3, [sp, #0x20]
    ldr r1, [r10, #0x0]
    ldr r2, [sp, #0x24]
    sub r1, r3, r1
    str r1, [sp, #0x20]
    ldr r1, [r10, #0x4]
    sub r1, r2, r1
    str r1, [sp, #0x24]
    ldr r1, [r10, #0x8]
    sub r0, r0, r1
    str r0, [sp, #0x28]
    add r0, sp, #0x20
    bl func_01ff8668
    ldrb r1, [r4, #0x6c]
    cmp r1, #0x0
    ldrsb r1, [r4, #0x6f]
    bne L_02029bac
    cmp r1, r8
    ble L_02029b98
    mov r11, r5
    mov r6, r0
    mov r8, r1
    b L_02029bd4
L_02029b98:
    bne L_02029bd4
    cmp r0, r6
    movlt r11, r5
    movlt r6, r0
    b L_02029bd4
L_02029bac:
    cmp r1, r9
    ble L_02029bc4
    str r5, [sp, #0x4]
    mov r7, r0
    mov r9, r1
    b L_02029bd4
L_02029bc4:
    bne L_02029bd4
    cmp r0, r7
    strlt r5, [sp, #0x4]
    movlt r7, r0
L_02029bd4:
    ldr r5, [r5, #0x14]
    cmp r5, #0x0
    bne L_02029a00
L_02029be0:
    cmp r11, #0x0
    ldreq r11, [sp, #0x4]
    cmp r11, #0x0
    ldreq r11, [sp, #0x0]
    mov r0, r11
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
