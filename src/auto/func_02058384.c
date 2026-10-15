#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void strcpy();
extern void strchr();
extern void func_020582c4();
extern char data_020dc19c[];
extern char data_020dc1a0[];
// clang-format off
asm void func_02058384(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r1, r0
    ldr r0, =data_020dc1a0
    bl strcpy
    ldr r0, =data_020dc1a0
    mov r1, #0x24
    bl strchr
    movs r4, r0
    ldreq r0, =data_020dc19c
    mov r1, #0x0
    streq r1, [r0, #0x310]
    ldmeqfd sp!, {r3, r4, r5, pc}
    swpb r1, r1, [r4]
    add r0, r4, #0x1
    bl func_020582c4
    mov r5, r0
    add r0, r4, #0x1
    mov r1, #0x24
    bl strchr
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_020583e4
    add r0, r0, #0x1
    bl func_020582c4
L_020583e4:
    mov r2, r5, lsl #0x10
    mov r0, r0, lsl #0x10
    ldr r1, =data_020dc19c
    add r0, r2, r0, lsr #0x10
    str r0, [r1, #0x310]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
