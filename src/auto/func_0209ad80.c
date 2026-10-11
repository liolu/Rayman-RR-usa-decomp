#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02008998();
extern void func_02084450();
extern void func_02088a04();
extern char data_020de0d4[];
// clang-format off
asm void func_0209ad80(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    str r2, [sp, #0x0]
    add r2, sp, #0x10
    mov r6, r0
    bl func_02084450
    mov r5, r0
    add r0, sp, #0x10
    bl func_02088a04
    mov r4, r0
    add r2, sp, #0x10
    mov r0, r6
    mov r1, r5
    bl func_02084450
    ldr r2, [sp, #0x10]
    mov r1, r0
    sub r7, r2, #0x1
    mov r0, r6
    add r2, sp, #0x10
    bl func_02084450
    str r0, [sp, #0x4]
    ldrsb r0, [r4, #0x0]
    ldr r8, [sp, #0x10]
    add r1, r4, #0x1
    cmp r0, #0x2f
    bne L_0209ae00
L_0209ade8:
    ldrsb r0, [r1], #0x1
    cmp r0, #0x3a
    bne L_0209ade8
    ldrsb r0, [r1], #0x1
    cmp r0, #0x2f
    beq L_0209ade8
L_0209ae00:
    sub r5, r1, #0x1
    ldrb r0, [r1, #-0x1]
    ldrb r4, [r5, #0x1]
    add r11, sp, #0xc
    add r1, r11, #0x1
    swpb r0, r0, [r11]
    add r2, r11, #0x2
    swpb r0, r4, [r1]
    add r3, sp, #0xf
    ldrb r0, [r5, #0x2]
    mov r9, #0x0
    add r1, sp, #0xb
    swpb r0, r0, [r2]
    cmp r8, #0x0
    swpb r0, r9, [r3]
    swpb r0, r9, [r1]
    ble L_0209ae98
    add r6, sp, #0x8
    ldr r10, =data_020de0d4
    add r4, r6, #0x1
    add r5, r6, #0x2
L_0209ae54:
    ldrb r0, [r10, #0x0]
    ldrb r1, [r10, #0x1]
    cmp r9, r7
    swpb r0, r0, [r6]
    swpb r0, r1, [r4]
    ldrb r0, [r10, #0x2]
    swpb r0, r0, [r5]
    beq L_0209ae88
    mov r0, r6
    mov r1, r11
    bl func_02008998
    cmp r0, #0x0
    beq L_0209ae98
L_0209ae88:
    add r9, r9, #0x1
    cmp r9, r8
    add r10, r10, #0xa
    blt L_0209ae54
L_0209ae98:
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldr r1, [sp, #0x0]
    mov r2, #0x6
    ldr r0, [sp, #0x4]
    str r2, [r1, #0xc]
    add sp, sp, #0x20
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
