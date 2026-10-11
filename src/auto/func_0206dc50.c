#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ad34();
extern void func_0205e9e0();
extern void func_0205ea18();
extern void func_0205ea20();
extern void func_0205ea28();
extern void func_0205ea78();
extern void func_0206bf70();
extern void func_0206c94c();
extern char data_020dc19c[];
// clang-format off
asm void func_0206dc50(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [r10, #0x4]
    mov r9, r1
    ldr r4, [r0, #0x0]
    mov r11, r3
    ldr r0, [r4, #0x8]
    cmp r9, r0
    cmpeq r2, #0x0
    moveq r0, #0x1
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x94]
    mov r1, r9
    bl func_0205ea28
    movs r6, r0
    bne L_0206dcc4
    ldr r0, [r4, #0x94]
    mov r1, r9
    bl func_0205ea78
    cmp r0, #0x0
    movne r0, #0x0
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x94]
    ldrb r0, [r0, #0x1e]
    cmp r0, #0x1
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, r9
    b L_0206dccc
L_0206dcc4:
    bl func_0205ea18
    mov r5, r0
L_0206dccc:
    mov r0, r10
    bl func_0206bf70
    cmp r6, #0x0
    beq L_0206dd84
    mov r0, r6
    bl func_0205ea20
    cmp r0, #0x1
    bne L_0206dd84
    ldr r1, [r5, #0x0]
    ldrh r2, [r4, #0x80]
    ldrh r7, [r1, #0x0]
    ldr r0, [r4, #0x4]
    ldr r1, [r0, #0x0]
    mul r0, r2, r7
    ldrh r1, [r1, #0x0]
    str r1, [sp, #0x0]
    bl func_0200ad34
    mov r6, r0
    ldr r0, =data_020dc19c
    cmp r6, r7
    ldr r2, [r4, #0xc0]
    ldr r8, [r0, #0x74]
    ldr r1, [sp, #0x0]
    sub r2, r8, r2
    mul r0, r2, r7
    subhs r6, r7, #0x1
    bl func_0200ad34
    sub r1, r8, r0
    mov r0, r6, lsl #0x10
    str r1, [r4, #0xc0]
    mov r0, r0, lsr #0x10
    strh r0, [r4, #0x98]
    strh r0, [r4, #0xcc]
    mov r0, r5
    ldr r7, [r4, #0xc0]
    bl func_0205e9e0
    mov r2, #0x3e8
    mov r1, r0
    mul r0, r6, r2
    bl func_0200ad34
    add r0, r7, r0
    str r0, [r4, #0xc8]
    add r1, r4, #0xcf
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0206dda4
L_0206dd84:
    mov r2, #0x0
    str r2, [r4, #0xc4]
    ldr r0, =data_020dc19c
    strh r2, [r4, #0x80]
    ldr r0, [r0, #0x74]
    add r1, r4, #0xcf
    str r0, [r4, #0xc8]
    swpb r0, r2, [r1]
L_0206dda4:
    ldr r0, =0xffff
    add r1, r4, #0xdb
    strh r0, [r4, #0xd8]
    ldr r0, [r4, #0x4]
    mov r3, #0x1
    str r0, [r4, #0x90]
    str r5, [r4, #0x94]
    str r9, [r4, #0x8]
    swpb r0, r3, [r1]
    ldr r1, [r5, #0x0]
    ldrh r0, [r4, #0x98]
    ldrh r1, [r1, #0x0]
    add r4, r4, #0x9b
    mov r2, r11
    cmp r1, r0
    movne r3, #0x0
    swpb r3, r3, [r4]
    mov r0, r10
    mov r1, #0x0
    bl func_0206c94c
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
