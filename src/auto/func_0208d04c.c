#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202d964();
extern void func_0202e1e0();
extern void func_020350e4();
extern void func_02067900();
extern void func_02067910();
extern void func_02088e08();
// clang-format off
asm void func_0208d04c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x3c
    mov r9, r0
    ldr r3, [r9, #0x4]
    mov r8, r1
    ldr r4, [r3, #0x8]
    mov r7, r2
    bl func_02088e08
    mov r6, r0
    mov r0, r4
    bl func_02067910
    mov r5, r0
    ldr r0, [r9, #0x24]
    add r1, sp, #0xc
    bl func_0202e1e0
    add r3, sp, #0x18
    mov r2, #0x6
L_0208d090:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208d090
    mov r0, r4
    bl func_02067900
    add r2, sp, #0x30
    str r2, [sp, #0x0]
    add r1, sp, #0x24
    str r1, [sp, #0x4]
    add r4, sp, #0x18
    add r2, sp, #0xc
    mov r1, r9
    mov r3, r8
    str r4, [sp, #0x8]
    bl func_020350e4
    ldr r0, [r9, #0x20]
    add r1, sp, #0x30
    add r2, sp, #0x24
    mov r3, r4
    bl func_0202d964
    ldr r0, [r9, #0x24]
    add r1, sp, #0x30
    add r2, sp, #0x24
    mov r3, r4
    bl func_0202d964
    add r3, r5, #0x10
    mov r2, #0x6
L_0208d114:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208d114
    mov r0, #0x0
    str r0, [r6, #0x130]
    str r0, [r6, #0x134]
    str r0, [r6, #0x138]
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
