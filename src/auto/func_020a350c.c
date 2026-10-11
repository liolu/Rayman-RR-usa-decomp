#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_02003d18();
extern void func_02003e30();
extern void func_02084450();
extern void func_02088a04();
extern char data_020c04c8[];
// clang-format off
asm void func_020a350c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x110
    add r2, sp, #0x0
    mov r7, r0
    ldr r6, [r1, #-0x8]
    bl func_02084450
    mov r4, r0
    add r0, sp, #0x0
    bl func_02088a04
    mov r5, r0
    add r2, sp, #0x0
    mov r0, r7
    mov r1, r4
    bl func_02084450
    mov r4, r0
    add r0, sp, #0x0
    bl func_02088a04
    mov r1, r4
    mov r4, r0
    mov r0, r7
    add r2, sp, #0x0
    bl func_02084450
    mov r8, r0
    add r0, sp, #0x0
    bl func_02088a04
    ldr r1, =0x111
    mov r7, r0
    cmp r6, r1
    bne L_020a35fc
    bl func_02003cfc
    add r2, r7, r0
    mov r1, r5
    add r0, sp, #0x10
    ldrb r5, [r2, #0x1]
    bl func_02003d18
    add r0, sp, #0x10
    mov r1, r4
    bl func_02003e30
    add r0, sp, #0x10
    bl func_02003cfc
    cmp r0, r5
    blt L_020a35dc
    ldr r4, =data_020c04c8
    add r6, sp, #0x10
    ldrb r0, [r4, #0x0]
    ldrb r3, [r4, #0x1]
    add r1, r6, #0x1
    add r2, r6, #0x2
    swpb r0, r0, [r6]
    swpb r0, r3, [r1]
    ldrb r0, [r4, #0x2]
    swpb r0, r0, [r2]
L_020a35dc:
    add r1, sp, #0x10
    mov r0, r7
    bl func_02003d18
    mov r0, r7
    bl func_02003cfc
    add r0, r0, r7
    add r1, r0, #0x1
    swpb r0, r5, [r1]
L_020a35fc:
    mov r0, r8
    add sp, sp, #0x110
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
