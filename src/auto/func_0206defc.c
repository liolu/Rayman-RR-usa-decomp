#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _s32_div_f();
extern void func_0202c480();
extern void func_0205e9e0();
extern void func_020650d4();
extern void func_0206c94c();
extern char data_020dc19c[];
extern char data_020ddcec[];
// clang-format off
asm void func_0206defc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r2, [r8, #0x4]
    mov r0, #0x8000
    ldr r4, [r2, #0x0]
    mov r7, r1
    ldr r1, [r4, #0x4]
    ldrb r6, [r4, #0xda]
    ldr r1, [r1, #0x0]
    rsb r0, r0, #0x0
    mov r5, r6
    cmp r7, r0
    ldrh r1, [r1, #0x0]
    bne L_0206df54
    ldr r0, =data_020ddcec
    sub r2, r1, #0x1
    ldr r0, [r0, #0x0]
    mov r1, #0x0
    bl func_0202c480
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    b L_0206df70
L_0206df54:
    cmp r7, #0x0
    movlt r7, #0x0
    blt L_0206df70
    cmp r7, r1
    subge r0, r1, #0x1
    movge r0, r0, lsl #0x10
    movge r7, r0, asr #0x10
L_0206df70:
    strh r7, [r4, #0x98]
    sub r0, r7, #0x1
    strh r0, [r4, #0xcc]
    add r1, r4, #0xdb
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x9b
    ldr r0, [r4, #0x4]
    mov r2, #0x0
    str r0, [r4, #0x94]
    swpb r0, r2, [r1]
    add r1, r4, #0x9a
    cmp r6, #0x0
    swpb r0, r2, [r1]
    bne L_0206dfc4
    ldr r0, [r4, #0x4]
    bl func_0205e9e0
    and r5, r0, #0xff
    mov r0, r4
    mov r1, r5
    bl func_020650d4
L_0206dfc4:
    mov r0, #0x3e8
    mul r0, r7, r0
    mov r1, r5
    bl _s32_div_f
    ldr r2, =data_020dc19c
    mov r1, r5
    ldr r2, [r2, #0x74]
    sub r2, r2, r0
    mov r0, #0x3e8
    str r2, [r4, #0xc0]
    bl _s32_div_f
    ldr r2, =data_020dc19c
    mov r1, #0x0
    ldr r3, [r2, #0x74]
    mov r2, r1
    sub r3, r3, r0
    mov r0, r8
    str r3, [r4, #0xc8]
    bl func_0206c94c
    mov r0, r4
    mov r1, r6
    bl func_020650d4
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
