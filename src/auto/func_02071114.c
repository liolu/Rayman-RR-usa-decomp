#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void FX_Div();
extern void func_0206f4d0();
extern void func_02070438();
extern void func_02070b7c();
extern void func_02070e4c();
extern char data_020de070[];
extern char data_020de074[];
extern char data_020de078[];
extern char data_020de07c[];
extern char data_020de080[];
extern char data_020de084[];
// clang-format off
asm void func_02071114(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r5, r1
    mov r4, r2
    mov r10, r3
    ldr r9, [sp, #0x3c]
    bl func_02070e4c
    ldrb r0, [r5, #0x12]
    cmp r0, #0x0
    beq L_0207114c
    ldrb r0, [sp, #0x38]
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0207114c:
    add r1, r5, #0x12
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r1, r10
    ldrh r0, [r4, #0x18]
    bl func_02070b7c
    mov r1, r10
    bl func_0206f4d0
    mov r4, r0
    ldrh r0, [r4, #0x16]
    ldr r1, =data_020de080
    ldrh r5, [r4, #0x2c]
    sub r0, r10, r0
    mov r0, r0, lsl #0x10
    ldr r6, [r1, #0x0]
    add r5, r5, r0, lsr #0x10
    mov r1, #0xa
    mla r1, r5, r1, r6
    ldr r2, =data_020de07c
    mov r0, r0, lsr #0x10
    ldrh r3, [r4, #0xc]
    str r0, [sp, #0xc]
    ldrh r0, [r1, #0x8]
    ldrh r5, [r4, #0x2e]
    ldr r2, [r2, #0x0]
    cmp r3, #0x0
    str r0, [sp, #0x8]
    add r5, r2, r5, lsl #0x4
    mov r6, #0x0
    addls sp, sp, #0x10
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020711c8:
    ldrh r1, [r5, #0x2]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_02071370
    mov r0, #0x14
    mla r0, r1, r0, r9
    ldrb r0, [r0, #0x10]
    cmp r0, #0x0
    bne L_02071370
    ldr r0, =data_020de078
    ldrh r3, [r5, #0x6]
    ldr r7, [r0, #0x0]
    ldr r0, =data_020de074
    ldr r2, [r5, #0x8]
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x8]
    add r0, r3, r0
    add r11, r7, r0, lsl #0x1
    mov r0, r2, lsl #0x1
    ldr r2, =data_020de070
    ldr r3, [r2, #0x0]
    ldr r2, [sp, #0xc]
    add r2, r1, r2, lsl #0x1
    ldrh r7, [r0, r2]
    mov r2, #0x24
    mla r8, r7, r2, r3
    ldrh r2, [r8, #0x12]
    tst r2, #0x80
    beq L_02071280
    tst r2, #0x200
    moveq r7, r8
    moveq r0, #0x0
    beq L_020712ac
    ldrh ip, [r1, r0]
    mov r0, #0x24
    ldrh r1, [r4, #0xe]
    mla r7, ip, r0, r3
    ldrh r3, [r7, #0x10]
    ldrh r2, [r8, #0x10]
    add r1, r1, r3
    sub r0, r10, r2
    sub r1, r1, r2
    mov r0, r0, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Div
    b L_020712ac
L_02071280:
    add r7, r8, #0x24
    ldrh r1, [r7, #0x10]
    ldrh r0, [r8, #0x10]
    cmp r1, r0
    moveq r0, #0x0
    beq L_020712ac
    sub r1, r1, r0
    sub r0, r10, r0
    mov r0, r0, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Div
L_020712ac:
    ldrsh r1, [r8, #0x22]
    cmp r1, #0x0
    cmpne r0, #0x0
    beq L_0207131c
    ldrsh r2, [r7, #0x22]
    mov r1, r2, asr #0x1f
    mov r3, r1, lsl #0x1
    mov r1, #0x800
    orr r3, r3, r2, lsr #0x1f
    adds r2, r1, r2, lsl #0x1
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    smull ip, r1, r0, r2
    rsb r3, r2, #0x1000
    adds r2, ip, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    smull r2, r1, r0, r1
    mov r0, #0x800
    mov ip, #0x0
    adds r2, r2, r0
    mov r0, ip
    adc r1, r1, r0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
L_0207131c:
    ldr r1, =data_020de084
    ldrh r2, [r11, #0x0]
    ldr r3, [r1, #0x0]
    mov r1, r2, lsl #0x2
    ldrh r2, [r3, r1]
    ldr r1, =0xffff
    mov r3, #0x14
    cmp r2, r1
    andne r1, r2, #0x800
    andne r1, r1, #0xff
    moveq r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r1, r7
    ldrh r7, [r5, #0x2]
    mov r0, r8
    mov r2, r5
    mul r3, r7, r3
    ldr r3, [r9, r3]
    ldr r3, [r3, #0x20]
    bl func_02070438
L_02071370:
    add r5, r5, #0x10
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
    ldrh r1, [r4, #0xc]
    cmp r1, r0, lsr #0x10
    bhi L_020711c8
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
