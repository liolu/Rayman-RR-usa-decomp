#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void FX_Div();
extern void func_0207d158();
extern char data_020be9e0[];
extern char data_020be9ec[];
extern char data_020be9f8[];
extern char data_020bea04[];
extern char data_020bea10[];
extern char data_020bea1c[];
// clang-format off
asm void func_0207d7f0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r7, [sp, #0x28]
    mov r8, r3
    str r1, [sp, #0x0]
    mov r9, r2
    mov r1, r8
    mov r2, r7
    ldr r6, [sp, #0x2c]
    ldr r5, [sp, #0x30]
    ldr r4, [sp, #0x34]
    mov r10, r0
    bl func_0207d158
    movs r11, r0
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x0]
    mov r1, r8
    mov r2, r7
    bl func_0207d158
    tst r11, r0
    movne r0, #0x0
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    tst r11, #0x1
    beq L_0207d938
    ldr r2, [r8, #0x0]
    ldr r0, [r10, #0x0]
    ldr r1, [r9, #0x0]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r0, [r8, #0x0]
    mov r1, #0x0
    str r0, [r5, #0x0]
    ldr r3, [r9, #0x4]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x4]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x4]
    ldr r3, [r9, #0x8]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x8]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x8]
    ldr r2, [r5, #0x4]
    ldr r0, [r8, #0x4]
    cmp r2, r0
    blt L_0207d8fc
    ldr r0, [r7, #0x4]
    cmp r2, r0
    bgt L_0207d8fc
    ldr r2, [r5, #0x8]
    ldr r0, [r8, #0x8]
    cmp r2, r0
    blt L_0207d8fc
    ldr r0, [r7, #0x8]
    cmp r2, r0
    movle r1, #0x1
L_0207d8fc:
    cmp r1, #0x0
    beq L_0207d938
    ldr r3, =data_020be9e0
    mov r2, #0x6
L_0207d90c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207d90c
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207d938:
    tst r11, #0x2
    beq L_0207da28
    ldr r2, [r7, #0x0]
    ldr r0, [r10, #0x0]
    ldr r1, [r9, #0x0]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r0, [r7, #0x0]
    mov r1, #0x0
    str r0, [r5, #0x0]
    ldr r3, [r9, #0x4]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x4]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x4]
    ldr r3, [r9, #0x8]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x8]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x8]
    ldr r2, [r5, #0x4]
    ldr r0, [r8, #0x4]
    cmp r2, r0
    blt L_0207d9ec
    ldr r0, [r7, #0x4]
    cmp r2, r0
    bgt L_0207d9ec
    ldr r2, [r5, #0x8]
    ldr r0, [r8, #0x8]
    cmp r2, r0
    blt L_0207d9ec
    ldr r0, [r7, #0x8]
    cmp r2, r0
    movle r1, #0x1
L_0207d9ec:
    cmp r1, #0x0
    beq L_0207da28
    ldr r3, =data_020be9ec
    mov r2, #0x6
L_0207d9fc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207d9fc
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207da28:
    tst r11, #0x4
    beq L_0207db14
    ldr r2, [r8, #0x4]
    ldr r0, [r10, #0x4]
    ldr r1, [r9, #0x4]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r1, [r9, #0x0]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    ldr r2, [r10, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r5, #0x0]
    ldr r0, [r8, #0x4]
    mov r1, #0x0
    str r0, [r5, #0x4]
    ldr r3, [r9, #0x8]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x8]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x8]
    ldr r2, [r5, #0x0]
    ldr r0, [r8, #0x0]
    cmp r2, r0
    blt L_0207dad8
    ldr r0, [r7, #0x0]
    cmp r2, r0
    bgt L_0207dad8
    ldr r2, [r5, #0x8]
    ldr r0, [r8, #0x8]
    cmp r2, r0
    blt L_0207dad8
    ldr r0, [r7, #0x8]
    cmp r2, r0
    movle r1, #0x1
L_0207dad8:
    cmp r1, #0x0
    beq L_0207db14
    ldr r3, =data_020be9f8
    mov r2, #0x6
L_0207dae8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207dae8
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207db14:
    tst r11, #0x8
    beq L_0207dc00
    ldr r2, [r7, #0x4]
    ldr r0, [r10, #0x4]
    ldr r1, [r9, #0x4]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r1, [r9, #0x0]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    ldr r2, [r10, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r5, #0x0]
    ldr r0, [r7, #0x4]
    mov r1, #0x0
    str r0, [r5, #0x4]
    ldr r3, [r9, #0x8]
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x8]
    smull ip, r2, r3, r2
    adds r3, ip, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r5, #0x8]
    ldr r2, [r5, #0x0]
    ldr r0, [r8, #0x0]
    cmp r2, r0
    blt L_0207dbc4
    ldr r0, [r7, #0x0]
    cmp r2, r0
    bgt L_0207dbc4
    ldr r2, [r5, #0x8]
    ldr r0, [r8, #0x8]
    cmp r2, r0
    blt L_0207dbc4
    ldr r0, [r7, #0x8]
    cmp r2, r0
    movle r1, #0x1
L_0207dbc4:
    cmp r1, #0x0
    beq L_0207dc00
    ldr r3, =data_020bea04
    mov r2, #0x6
L_0207dbd4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207dbd4
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207dc00:
    tst r11, #0x10
    beq L_0207dcec
    ldr r2, [r8, #0x8]
    ldr r0, [r10, #0x8]
    ldr r1, [r9, #0x8]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r1, [r9, #0x0]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    ldr r2, [r10, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r5, #0x0]
    ldr r2, [r9, #0x4]
    ldr r1, [r6, #0x0]
    ldr r0, [r10, #0x4]
    smull r3, r1, r2, r1
    adds r2, r3, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [r5, #0x4]
    ldr r1, [r8, #0x8]
    mov r0, #0x0
    str r1, [r5, #0x8]
    ldr r2, [r5, #0x0]
    ldr r1, [r8, #0x0]
    cmp r2, r1
    blt L_0207dcb0
    ldr r1, [r7, #0x0]
    cmp r2, r1
    bgt L_0207dcb0
    ldr r2, [r5, #0x4]
    ldr r1, [r8, #0x4]
    cmp r2, r1
    blt L_0207dcb0
    ldr r1, [r7, #0x4]
    cmp r2, r1
    movle r0, #0x1
L_0207dcb0:
    cmp r0, #0x0
    beq L_0207dcec
    ldr r3, =data_020bea10
    mov r2, #0x6
L_0207dcc0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207dcc0
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207dcec:
    tst r11, #0x20
    beq L_0207ddd8
    ldr r2, [r7, #0x8]
    ldr r0, [r10, #0x8]
    ldr r1, [r9, #0x8]
    sub r0, r2, r0
    bl FX_Div
    str r0, [r6, #0x0]
    ldr r1, [r9, #0x0]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    ldr r2, [r10, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r5, #0x0]
    ldr r1, [r9, #0x4]
    ldr r0, [r6, #0x0]
    ldr r3, [r10, #0x4]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [r5, #0x4]
    ldr r0, [r7, #0x8]
    mov r2, #0x0
    str r0, [r5, #0x8]
    ldr r1, [r5, #0x0]
    ldr r0, [r8, #0x0]
    cmp r1, r0
    blt L_0207dd9c
    ldr r0, [r7, #0x0]
    cmp r1, r0
    bgt L_0207dd9c
    ldr r1, [r5, #0x4]
    ldr r0, [r8, #0x4]
    cmp r1, r0
    blt L_0207dd9c
    ldr r0, [r7, #0x4]
    cmp r1, r0
    movle r2, #0x1
L_0207dd9c:
    cmp r2, #0x0
    beq L_0207ddd8
    ldr r3, =data_020bea1c
    mov r2, #0x6
L_0207ddac:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0207ddac
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207ddd8:
    mov r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
