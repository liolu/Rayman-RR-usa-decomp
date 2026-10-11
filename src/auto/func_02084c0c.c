#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020606ec();
extern void func_02084ea0();
extern char data_020e3a08[];
// clang-format off
asm void func_02084c0c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r0, #0x0
    swpb r0, r0, [r8]
    ldrh r4, [sp, #0x28]
    mov r0, r1
    ldrb r1, [r8, #0x1]
    add r5, sp, #0x8
    strh r1, [sp, #0x8]
    mov r1, r2
    str r5, [sp, #0x0]
    and r2, r3, #0xff
    ldr r3, =data_020e3a08
    str r4, [sp, #0x4]
    bl func_020606ec
    ldrh r0, [sp, #0x8]
    mov r7, #0x0
    cmp r0, #0x0
    addls sp, sp, #0xc
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r6, =data_020e3a08
    mov r5, #0xe
    mov r4, r7
L_02084c6c:
    ldrb r1, [r8, #0x0]
    ldrb r0, [r8, #0x1]
    ldr r2, [r6, r7, lsl #0x2]
    cmp r1, r0
    bhs L_02084c94
    add r0, r1, #0x1
    swpb r0, r0, [r8]
    add r0, r8, r1, lsl #0x2
    str r2, [r0, #0x4]
    b L_02084ca0
L_02084c94:
    mov r0, r5
    mov r1, r4
    bl func_02084ea0
L_02084ca0:
    ldrh r1, [sp, #0x8]
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, lsr #0x10
    mov r7, r0, lsr #0x10
    bhi L_02084c6c
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
