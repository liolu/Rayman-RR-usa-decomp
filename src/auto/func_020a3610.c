#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_0205f92c();
extern void func_0206b3c4();
extern void func_02084450();
extern void func_02088a04();
// clang-format off
asm void func_020a3610(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    add r2, sp, #0x0
    mov r8, r0
    ldr r6, [r1, #-0x8]
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x0
    mov r0, r8
    ldr r4, [sp, #0x0]
    bl func_02084450
    mov r5, r0
    add r0, sp, #0x0
    bl func_02088a04
    mov r7, r0
    mov r1, r5
    mov r0, r8
    add r2, sp, #0x0
    bl func_02084450
    ldr r3, [sp, #0x0]
    mov r1, r0
    mov r0, r8
    add r2, sp, #0x0
    and r5, r3, #0xff
    bl func_02084450
    mov r9, r0
    ldr r0, [sp, #0x0]
    cmp r6, #0x110
    and r6, r0, #0xff
    bne L_020a36fc
    cmp r7, #0x0
    beq L_020a36fc
    mov r0, r7
    mov r8, #0x0
    bl func_02003cfc
    ldrsb r1, [r7, #0x0]
    add r8, r8, #0x1
    cmp r1, #0x2f
    bne L_020a36cc
L_020a36ac:
    ldrsb r1, [r7, r8]
    add r8, r8, #0x1
    cmp r1, #0x3a
    bne L_020a36ac
    ldrsb r1, [r7, r8]
    add r8, r8, #0x1
    cmp r1, #0x2f
    beq L_020a36ac
L_020a36cc:
    add r1, r5, r8
    sub r1, r1, #0x1
    cmp r1, r0
    subgt r0, r0, #0x1
    addgt r1, r7, r0
    addle r1, r7, r1
    swpb r0, r6, [r1]
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    mov r1, r5
    mov r2, r6
    bl func_0205f92c
L_020a36fc:
    mov r0, r9
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
