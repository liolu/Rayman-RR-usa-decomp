#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020148f4();
extern void func_020713b0();
extern char data_020dd8a0[];
extern char data_020dd8a4[];
// clang-format off
asm void func_0206e188(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r0, [r0, #0x4]
    mov r6, r1
    ldr r4, [r0, #0x0]
    ldr r0, [r4, #0x4]
    ldr r5, [r0, #0x0]
    cmp r5, #0x0
    beq L_0206e33c
    ldrh r1, [r4, #0x80]
    mov r0, r5
    mov r7, #0x1
    bl func_020713b0
    cmp r0, #0x0
    beq L_0206e1f0
    ldr r8, =data_020dd8a4
    mov r3, #0x6
L_0206e1c8:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r8]
    add r8, r8, #0x1
    swpb r1, r2, [r8]
    add r8, r8, #0x1
    bne L_0206e1c8
    b L_0206e204
L_0206e1f0:
    ldr r0, =data_020dd8a0
    mov r1, #0x0
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    str r1, [r0, #0xc]
L_0206e204:
    ldrh r0, [r4, #0x80]
    add r6, r6, #0x1
    cmp r6, r0
    bge L_0206e274
    ldr r8, =data_020dd8a0
L_0206e218:
    mov r1, r6, lsl #0x10
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl func_020713b0
    cmp r0, #0x0
    beq L_0206e260
    ldr r2, [r8, #0x4]
    ldr r1, [r0, #0x0]
    add r1, r2, r1
    str r1, [r8, #0x4]
    ldr r2, [r8, #0x8]
    ldr r1, [r0, #0x4]
    add r1, r2, r1
    str r1, [r8, #0x8]
    ldr r1, [r8, #0xc]
    ldr r0, [r0, #0x8]
    add r0, r1, r0
    str r0, [r8, #0xc]
L_0206e260:
    ldrh r0, [r4, #0x80]
    add r6, r6, #0x1
    add r7, r7, #0x1
    cmp r6, r0
    blt L_0206e218
L_0206e274:
    mov r0, r7, lsl #0xc
    bl func_020148f4
    ldr r5, =data_020dd8a0
    ldr r1, [r5, #0x4]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r3, r2, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    str r3, [r5, #0x4]
    ldr r1, [r5, #0x8]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r5, #0x8]
    ldr r1, [r5, #0xc]
    smull r6, r1, r0, r1
    adds r6, r6, #0x800
    adc r0, r1, #0x0
    mov r1, r6, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r5, #0xc]
    ldrb r6, [r4, #0xda]
    ldr r0, =data_020dd8a4
    mov r6, r6, lsl #0xc
    smull r7, r3, r6, r3
    adds r6, r7, #0x800
    adc r3, r3, #0x0
    mov r6, r6, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r5, #0x4]
    ldrb r3, [r4, #0xda]
    mov r3, r3, lsl #0xc
    smull r6, r2, r3, r2
    adds r3, r6, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r5, #0x8]
    ldrb r2, [r4, #0xda]
    mov r2, r2, lsl #0xc
    smull r3, r1, r2, r1
    adds r2, r3, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_0206e33c:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
