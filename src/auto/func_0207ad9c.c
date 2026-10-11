#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200eb98();
extern void func_0207af08();
extern void func_0207af0c();
extern void r0();
extern char data_020be8dc[];
extern char data_020be8f0[];
extern char data_020be960[];
extern char data_020be98c[];
extern char data_020be990[];
extern char data_020be9a0[];
extern char data_020be9a4[];
extern char data_020be9b4[];
extern char data_020be9b8[];
extern char data_020be9c8[];
extern char data_020be9cc[];
extern char data_020be9dc[];
extern char data_020dfe30[];
extern char data_020dfe38[];
// clang-format off
asm void func_0207ad9c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r1
    mov r6, r3
    mov r9, r0
    mov r7, r2
    ldr r5, [sp, #0x2c]
    mov r3, #0x0
    ldr r1, =data_020dfe38
    b L_0207adc8
L_0207adc0:
    add r0, r3, #0x1
    and r3, r0, #0xff
L_0207adc8:
    cmp r3, #0x3
    bhs L_0207adec
    mov r2, r3, lsl #0x3
    ldrh r0, [r1, r2]
    cmp r0, #0x0
    addne r0, r1, r2
    ldrne r0, [r0, #0x4]
    cmpne r7, r0
    bne L_0207adc0
L_0207adec:
    cmp r3, #0x3
    ldrlo r0, =data_020dfe38
    movhs r4, #0x0
    addlo r4, r0, r3, lsl #0x3
    cmp r4, #0x0
    bne L_0207ae2c
    ldr r0, =data_020be8dc
    ldr r1, =data_020be8f0
    bl func_0207af08
    ldr r0, =data_020dfe30
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0207ae24
    blx r0
L_0207ae24:
    bl func_0200eb98
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0207ae2c:
    ldrh r0, [r4, #0x0]
    cmp r0, #0x0
    beq L_0207ae44
    ldr r0, =data_020be960
    ldr r1, =data_020be98c
    bl func_0207af08
L_0207ae44:
    strh r6, [r4, #0x0]
    add r1, r4, #0x2
    swpb r0, r8, [r1]
    str r7, [r4, #0x4]
    ldrh r0, [r4, #0x0]
    cmp r0, r9
    bhs L_0207aea4
    cmp r5, #0x0
    bne L_0207ae78
    ldr r0, =data_020be990
    ldr r1, =data_020be9a0
    bl func_0207af08
    b L_0207ae88
L_0207ae78:
    ldr r0, =data_020be9a4
    ldr r1, =data_020be9b4
    mov r2, r5
    bl func_0207af0c
L_0207ae88:
    ldr r0, =data_020dfe30
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0207ae9c
    blx r0
L_0207ae9c:
    bl func_0200eb98
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0207aea4:
    cmp r5, #0x0
    bne L_0207aebc
    ldr r0, =data_020be9b8
    ldr r1, =data_020be9c8
    bl func_0207af08
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0207aebc:
    ldr r0, =data_020be9cc
    ldr r1, =data_020be9dc
    mov r2, r5
    bl func_0207af0c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
