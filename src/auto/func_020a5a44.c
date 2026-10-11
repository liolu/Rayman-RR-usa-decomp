#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e9a8();
extern void func_0205e9c0();
extern void func_0205e9c8();
extern void func_0205e9e8();
extern void func_0206b3c4();
extern void func_0206dc50();
extern void func_02074778();
extern void func_020747a8();
extern void func_020841dc();
extern void func_02084450();
extern void func_02084f6c();
extern void func_02088a04();
extern char data_020dc19c[];
extern char data_020e4c1c[];
// clang-format off
asm void func_020a5a44(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r3, [r1, #-0x8]
    ldr r2, =0x15e
    str r1, [sp, #0x0]
    cmp r3, r2
    beq L_020a5c10
    add r2, r2, #0x1
    cmp r3, r2
    bne L_020a5e20
    add r2, sp, #0xc
    bl func_02084450
    str r0, [sp, #0x0]
    add r0, sp, #0xc
    bl func_02088a04
    bl func_020747a8
    movs r4, r0
    beq L_020a5c04
    bl func_02074778
    cmp r0, #0x0
    ldrne r7, [r4, #0x0]
    cmpne r7, #0x0
    beq L_020a5c04
    mov r6, #0x0
    ldr r4, =data_020e4c1c
    mov r11, #0x1
    mov r5, r6
L_020a5ab0:
    ldrb r0, [r7, #0x28]
    cmp r0, #0x0
    beq L_020a5bf8
    ldr r0, [r7, #0x0]
    ldr r0, [r0, #0x4]
    bl func_0206b3c4
    mov r8, r0
    ldr r2, [r8, #0x4]
    ldr r1, [r7, #0x4]
    ldmia r2, {r9, r10}
    mov r2, r11
    mov r3, #0x0
    bl func_0206dc50
    ldr r1, [r9, #0xfc]
    ldrb r0, [r1, #0x29]
    cmp r0, #0x0
    bne L_020a5b08
    ldrb r0, [r1, #0x1c]
    cmp r0, #0x0
    ldrne r0, [r10, #0x20]
    bicne r0, r0, #0x10000
    strne r0, [r10, #0x20]
L_020a5b08:
    ldr r1, [r9, #0xfc]
    ldrb r0, [r1, #0x2a]
    cmp r0, #0x0
    bne L_020a5b2c
    ldrb r0, [r1, #0x1d]
    cmp r0, #0x0
    ldrne r0, [r10, #0x20]
    bicne r0, r0, #0x8000
    strne r0, [r10, #0x20]
L_020a5b2c:
    ldrb r0, [r7, #0x20]
    cmp r0, #0x0
    ldrne r1, [r7, #0x14]
    cmpne r1, #0x0
    beq L_020a5b90
    ldr r0, [r8, #0x4]
    mov r3, #0x1
    ldr r0, [r0, #0xc]
    ldr r2, [r0, #0x0]
    ldrb r0, [r2, #0x10]
    cmp r0, #0x0
    ldr r0, [r2, #0x4]
    moveq r3, #0x0
    ldr r2, [r0, #0x8]
    and r9, r3, #0xff
    cmp r2, r1
    beq L_020a5b90
    bl func_02084f6c
    cmp r0, #0x0
    beq L_020a5b90
    cmp r9, #0x0
    bne L_020a5b90
    mov r0, #0x8
    str r6, [r4, #0x44]
    bl func_020841dc
L_020a5b90:
    ldrb r0, [r7, #0x21]
    cmp r0, #0x0
    ldrne r0, [r7, #0x10]
    cmpne r0, #0x0
    beq L_020a5bf8
    ldr r0, [r8, #0x4]
    mov r2, #0x1
    ldr r0, [r0, #0xc]
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    cmp r0, #0x0
    ldr r0, [r1, #0x8]
    moveq r2, #0x0
    and r8, r2, #0xff
    ldr r1, [r7, #0x18]
    ldr r2, [r0, #0x8]
    cmp r2, r1
    beq L_020a5bf8
    bl func_02084f6c
    cmp r0, #0x0
    beq L_020a5bf8
    cmp r8, #0x0
    bne L_020a5bf8
    mov r0, #0x8
    str r5, [r4, #0x44]
    bl func_020841dc
L_020a5bf8:
    ldr r7, [r7, #0x2c]
    cmp r7, #0x0
    bne L_020a5ab0
L_020a5c04:
    ldr r0, [sp, #0x0]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020a5c10:
    add r2, sp, #0xc
    bl func_02084450
    str r0, [sp, #0x8]
    add r0, sp, #0xc
    bl func_02088a04
    bl func_020747a8
    str r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_020a5e14
    bl func_02074778
    cmp r0, #0x0
    bne L_020a5e14
    ldr r0, [sp, #0x4]
    mov r1, #0x0
    str r1, [r0, #0x1c]
    ldr r9, [r0, #0x0]
    cmp r9, #0x0
    beq L_020a5e04
    ldr r4, =data_020e4c1c
    mov r11, r1
    mvn r6, #0x0
    mov r5, #0x1
L_020a5c68:
    ldr r0, [r9, #0x0]
    ldr r0, [r0, #0x4]
    bl func_0206b3c4
    mov r10, r0
    ldr r0, [r10, #0x4]
    add r1, r9, #0x28
    ldr r3, [r0, #0x0]
    ldr r0, =data_020dc19c
    str r9, [r3, #0xfc]
    ldr r2, [r10, #0x4]
    ldr r0, [r0, #0x74]
    ldr r7, [r2, #0x4]
    str r0, [r3, #0xc0]
    str r6, [r3, #0xe4]
    swpb r0, r5, [r1]
    ldr r1, [r9, #0x4]
    ldr r0, [r9, #0x8]
    cmp r1, r0
    beq L_020a5cbc
    bl func_0205e9c0
    b L_020a5cc4
L_020a5cbc:
    mov r1, #0x0
    bl func_0205e9c0
L_020a5cc4:
    ldr r0, [r9, #0x8]
    ldrb r1, [r9, #0x22]
    bl func_0205e9c8
    ldr r0, [r9, #0x8]
    ldrsb r1, [r9, #0x23]
    bl func_0205e9e8
    ldr r0, [r9, #0x8]
    bl func_0205e9a8
    cmp r0, #0x0
    beq L_020a5d00
    ldr r1, [r9, #0x8]
    mov r0, r10
    mov r2, #0x1
    mov r3, #0x0
    bl func_0206dc50
L_020a5d00:
    ldrb r0, [r9, #0x1e]
    cmp r0, #0x0
    ldrne r1, [r9, #0xc]
    cmpne r1, #0x0
    beq L_020a5d64
    ldr r0, [r10, #0x4]
    ldr r0, [r0, #0xc]
    ldr r2, [r0, #0x0]
    ldrb r0, [r2, #0x10]
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    and r8, r0, #0xff
    ldr r0, [r2, #0x4]
    ldr r2, [r0, #0x8]
    cmp r2, r1
    beq L_020a5d64
    bl func_02084f6c
    cmp r0, #0x0
    beq L_020a5d64
    cmp r8, #0x0
    bne L_020a5d64
    mov r0, #0x8
    str r11, [r4, #0x44]
    bl func_020841dc
L_020a5d64:
    ldrb r0, [r9, #0x1f]
    cmp r0, #0x0
    ldrne r1, [r9, #0x10]
    cmpne r1, #0x0
    beq L_020a5dbc
    ldr r0, [r10, #0x4]
    ldr r0, [r0, #0xc]
    ldr r0, [r0, #0x0]
    ldrb r8, [r0, #0x10]
    ldr r0, [r0, #0x8]
    ldr r2, [r0, #0x8]
    cmp r2, r1
    beq L_020a5dbc
    bl func_02084f6c
    cmp r0, #0x0
    beq L_020a5dbc
    cmp r8, #0x0
    bne L_020a5dbc
    mov r0, #0x0
    str r0, [r4, #0x44]
    mov r0, #0x8
    bl func_020841dc
L_020a5dbc:
    ldr r0, [r7, #0x20]
    add r2, r9, #0x29
    and r1, r0, #0x10000
    swpb r1, r1, [r2]
    add r2, r9, #0x2a
    and r1, r0, #0x8000
    swpb r1, r1, [r2]
    ldrb r1, [r9, #0x1c]
    cmp r1, #0x0
    orrne r0, r0, #0x10000
    strne r0, [r7, #0x20]
    ldrb r1, [r9, #0x1d]
    cmp r1, #0x0
    orrne r0, r0, #0x8000
    strne r0, [r7, #0x20]
    ldr r9, [r9, #0x2c]
    cmp r9, #0x0
    bne L_020a5c68
L_020a5e04:
    ldr r0, [sp, #0x4]
    add r1, r0, #0x18
    mov r0, #0x1
    swpb r0, r0, [r1]
L_020a5e14:
    ldr r0, [sp, #0x8]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020a5e20:
    mov r0, r1
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
