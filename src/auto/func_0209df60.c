#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015a8();
extern void func_02003cfc();
extern void func_0204113c();
extern void func_02041540();
extern void func_02041ce8();
extern void func_0206b810();
extern void func_02084450();
extern void func_02088a04();
extern char data_020dc19c[];
// clang-format off
asm void func_0209df60(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r8, r1
    ldr r4, [r8, #-0x8]
    mov r5, #0x0
    add r2, sp, #0x0
    mov r9, r0
    mov r7, r5
    bl func_02084450
    mov r8, r0
    cmp r4, #0x97
    bne L_0209dfc0
    add r0, sp, #0x0
    bl func_02088a04
    movs r5, r0
    beq L_0209dfac
    bl func_02003cfc
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
L_0209dfac:
    add r2, sp, #0x0
    mov r0, r9
    mov r1, r8
    bl func_02084450
    mov r8, r0
L_0209dfc0:
    ldr r0, [sp, #0x0]
    cmp r4, #0x97
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    beq L_0209e00c
    cmp r4, #0x98
    bne L_0209e060
    ldr r0, =data_020dc19c
    add r0, r0, #0x7c
    add r1, r0, #0xc00
    swpb r0, r6, [r1]
    bl func_02041540
    mvn r0, #0x0
    bl func_0204113c
    ldr r0, =data_020dc19c
    ldrb r0, [r0, #0xc7c]
    bl func_0206b810
    bl func_02041ce8
    b L_0209e060
L_0209e00c:
    cmp r6, #0x0
    blt L_0209e060
    cmp r6, r7
    bge L_0209e060
    add r2, sp, #0x0
    mov r0, r9
    mov r1, r8
    bl func_02084450
    ldr r1, [sp, #0x0]
    mov r8, r0
    mov r0, r1, lsl #0x10
    cmp r4, #0x97
    mov r4, r0, asr #0x10
    add r5, r5, r6
    bne L_0209e05c
    sub r2, r7, r6
    mov r1, r5
    add r0, r5, #0x1
    add r2, r2, #0x2
    bl func_020015a8
L_0209e05c:
    swpb r0, r4, [r5]
L_0209e060:
    mov r0, r8
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
