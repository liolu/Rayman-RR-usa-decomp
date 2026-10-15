#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _dfix();
extern void _dfltu();
extern void _dmul();
extern void _s32_div_f();
extern void _ddiv();
extern char data_020dc19c[];
// clang-format off
asm void func_0207578c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldrb r0, [r5, #0x0]
    mov r4, r1
    tst r0, #0x1
    ldrb r0, [r5, #0x2]
    beq L_020757f8
    bl _dfltu
    ldr r2, =data_020dc19c
    ldr r3, [r5, #0x14]
    ldr r2, [r2, #0x74]
    mov r6, r0
    sub r0, r2, r3
    mov r7, r1
    bl _dfltu
    ldr r3, =0x408f4000
    mov r2, #0x0
    bl _ddiv
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dmul
    bl _dfix
    ldr r1, [r5, #0x10]
    bl _s32_div_f
    b L_0207586c
L_020757f8:
    bl _dfltu
    ldr r2, =data_020dc19c
    ldr r3, [r5, #0x14]
    ldr r2, [r2, #0x74]
    mov r6, r0
    sub r0, r2, r3
    mov r7, r1
    bl _dfltu
    ldr r3, =0x408f4000
    mov r2, #0x0
    bl _ddiv
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dmul
    bl _dfix
    mov r1, r0
    ldr r0, [r5, #0x10]
    cmp r1, r0
    blt L_0207586c
    ldrb r0, [r5, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r5]
    ldrb r1, [r5, #0x1]
    ldr r0, [r5, #0x10]
    str r0, [r4, #0x0]
    sub r0, r1, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0207586c:
    str r1, [r4, #0x0]
    ldrb r0, [r5, #0x1]
    subs r0, r0, #0x1
    ldmmifd sp!, {r3, r4, r5, r6, r7, pc}
L_0207587c:
    add r2, r5, r0
    ldrb r2, [r2, #0x3]
    cmp r1, r2
    ldmgefd sp!, {r3, r4, r5, r6, r7, pc}
    subs r0, r0, #0x1
    bpl L_0207587c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
