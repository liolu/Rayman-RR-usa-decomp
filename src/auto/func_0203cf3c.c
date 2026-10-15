#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_01ff87ec();
extern void func_01ff8878();
extern void func_01ff88b4();
extern void func_02001588();
extern void FX_Div();
extern void func_0202dc64();
extern void func_020317f8();
extern void func_02031c40();
extern void func_0203d378();
extern void func_0203da20();
extern void func_0203e080();
extern char data_020bc554[];
// clang-format off
asm void func_0203cf3c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xfc
    add r4, sp, #0x34
    mov r7, r0
    mov r6, r1
    mov r11, r2
    add r5, sp, #0x98
    mov r0, r4
    add r1, r7, #0xdc
    mov r2, #0x64
    bl func_02001588
    mov r0, r5
    add r1, r7, #0xdc
    mov r2, #0x64
    bl func_02001588
    ldr r2, [r7, #0xe0]
    ldr r1, [r7, #0x7c]
    add r0, r7, #0xdc
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    ldr r3, [r7, #0xe4]
    ldr r2, [r7, #0x80]
    add r1, sp, #0x14
    sub r2, r3, r2
    str r2, [sp, #0x20]
    ldr r8, [r7, #0xe8]
    ldr r3, [r7, #0x84]
    add r2, sp, #0x10
    sub r3, r8, r3
    str r3, [sp, #0x24]
    add r3, sp, #0xc
    bl func_0202dc64
    add r0, sp, #0x1c
    bl func_01ff8668
    mov r9, r0
    ldr r0, =0x10c1
    bl func_01ff8878
    mov r8, r0
    ldr r0, =0x10c1
    bl func_01ff88b4
    mov r1, r0
    mov r0, r8
    bl FX_Div
    smull r2, r1, r0, r9
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r10, r2, lsr #0xc
    orr r10, r10, r0, lsl #0x14
    mov r0, #0x800
    cmp r10, #0x800
    movlt r10, r0
    ldr r9, [sp, #0xc]
    ldr r0, [r9, #0x0]
    smull r1, r0, r10, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r8, r1, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    str r8, [sp, #0x28]
    ldr r1, [r9, #0x4]
    add r0, sp, #0x18
    smull r2, r1, r10, r1
    adds r2, r2, #0x800
    mov lr, r2, lsr #0xc
    adc r1, r1, #0x0
    orr lr, lr, r1, lsl #0x14
    str lr, [sp, #0x2c]
    ldr r1, [r9, #0x8]
    mov r2, r7
    smull r3, r1, r10, r1
    adds r3, r3, #0x800
    mov ip, r3, lsr #0xc
    adc r1, r1, #0x0
    orr ip, ip, r1, lsl #0x14
    str ip, [sp, #0x30]
    ldr r1, [r7, #0xe0]
    mov r3, r6
    add r1, r1, r8
    str r1, [r4, #0x4]
    ldr r1, [r7, #0xe4]
    add r1, r1, lr
    str r1, [r4, #0x8]
    ldr r1, [r7, #0xe8]
    add r1, r1, ip
    str r1, [r4, #0xc]
    ldr r1, [r9, #0x0]
    smull r8, r1, r10, r1
    adds r8, r8, #0x800
    adc r1, r1, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r1, lsl #0x14
    str r8, [sp, #0x28]
    ldr r1, [r9, #0x4]
    smull r1, ip, r10, r1
    adds r1, r1, #0x800
    adc ip, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    str r1, [sp, #0x2c]
    ldr r9, [r9, #0x8]
    smull ip, r9, r10, r9
    adds ip, ip, #0x800
    adc r10, r9, #0x0
    mov r9, ip, lsr #0xc
    orr r9, r9, r10, lsl #0x14
    str r9, [sp, #0x30]
    ldr r10, [r7, #0xe0]
    sub r8, r10, r8
    str r8, [r5, #0x4]
    ldr r8, [r7, #0xe4]
    sub r1, r8, r1
    str r1, [r5, #0x8]
    ldr r1, [r7, #0xe8]
    sub r1, r1, r9
    str r1, [r5, #0xc]
    stmia sp, {r4, r5}
    mov r1, #0x1
    str r1, [sp, #0x8]
    ldr r1, =data_020bc554
    ldr r1, [r1, #0x0]
    bl func_0203d378
    cmp r0, #0x0
    beq L_0203d35c
    ldr r2, [sp, #0x18]
    ldr r0, =data_020bc554
    str r2, [sp, #0x0]
    ldr r3, [r0, #0x0]
    add r0, sp, #0x28
    mov r1, r7
    bl func_0203e080
    ldr r1, [r5, #0x4]
    ldr r0, [sp, #0x28]
    mov r4, #0x0
    add r0, r1, r0
    str r0, [r7, #0xe0]
    ldr r2, [r5, #0x8]
    ldr r1, [sp, #0x2c]
    ldr r0, =data_020bc554
    add r1, r2, r1
    str r1, [r7, #0xe4]
    ldr r2, [r5, #0xc]
    ldr r1, [sp, #0x30]
    mov r3, r4
    add r1, r2, r1
    str r1, [r7, #0xe8]
    ldr r5, [r0, #0x0]
    ldr r8, [sp, #0x18]
    mov r0, r4
    mov r1, #0x1
    b L_0203d1b4
L_0203d194:
    ldrsh r2, [r5, #0x2e]
    add r3, r3, #0x1
    cmp r2, #0x63
    movne r2, r1
    moveq r2, r0
    tst r2, #0xff
    movne r4, r5
    add r5, r5, #0x68
L_0203d1b4:
    cmp r3, r8
    bge L_0203d1c4
    cmp r4, #0x0
    beq L_0203d194
L_0203d1c4:
    add r1, sp, #0x14
    add r2, sp, #0x10
    add r3, sp, #0xc
    add r0, r7, #0xdc
    bl func_0202dc64
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [r3, #0x8]
    ldr r3, [r3, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x10]
    mov r5, r0
    ldr r3, [sp, #0xc]
    ldr r0, [r1, #0x8]
    ldr r2, [r1, #0x0]
    ldr r1, [r3, #0x0]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    mov r8, r0
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [r0, #0x4]
    ldr r3, [r0, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    add r3, r4, #0x4
    ldr r4, [sp, #0xc]
    mov r9, r0
    mov r2, #0x6
L_0203d23c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203d23c
    ldr r2, [sp, #0xc]
    mov r1, r9
    mov r3, r8
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x10]
    mov r1, r5
    str r0, [r2, #0x0]
    ldr r2, [sp, #0xc]
    mov r3, r9
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r2, [sp, #0x10]
    mov r1, r8
    str r0, [r2, #0x4]
    ldr r2, [sp, #0xc]
    mov r3, r5
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x10]
    str r0, [r1, #0x8]
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [r0, #0x8]
    ldr r3, [r0, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x14]
    str r0, [r1, #0x0]
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [r0, #0x0]
    ldr r3, [r0, #0x8]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r1, [sp, #0x14]
    str r0, [r1, #0x4]
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [r0, #0x4]
    ldr r3, [r0, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x14]
    add r1, r7, #0xdc
    str r0, [r2, #0x8]
    mov r0, r7
    bl func_02031c40
    ldr r2, [sp, #0x18]
    mov r1, r6
    sub r3, r2, #0x1
    str r3, [sp, #0x0]
    ldr r3, =data_020bc554
    mov r0, r7
    ldr r3, [r3, #0x0]
    bl func_0203da20
    mov r0, r7
    mov r1, r11
    bl func_020317f8
    add sp, sp, #0xfc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203d35c:
    mov r0, r7
    mov r1, r11
    bl func_020317f8
    add sp, sp, #0xfc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
