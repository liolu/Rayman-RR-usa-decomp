#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_020752a8();
extern void func_02075388();
extern char data_020bd594[];
extern char data_020be594[];
extern char data_020de754[];
extern char data_020de755[];
extern char data_020de770[];
extern char data_020de780[];
// clang-format off
asm void func_02075cb4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r8, r2
    mov r10, r0
    mov r6, r3
    mov r0, r8
    mov r9, r1
    ldr r7, [sp, #0x34]
    bl func_02003cfc
    str r0, [sp, #0x8]
    cmp r6, #0x0
    moveq r0, #0x0
    streq r0, [sp, #0x4]
    beq L_02075cf8
    mov r0, r6
    bl func_02003cfc
    str r0, [sp, #0x4]
L_02075cf8:
    ldr r0, [sp, #0x30]
    cmp r0, #0x1
    bne L_02075d28
    ldr r2, =data_020be594
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0x4]
    add r0, r1, r0
    ldrb r1, [r2, #0x90]
    add r0, r0, #0x1
    mul r0, r1, r0
    add r0, r0, #0x1
    add r10, r10, r0
L_02075d28:
    ldr r4, =data_020be594
    cmp r6, #0x0
    ldrb r1, [r4, #0x90]
    sub r10, r10, r1
    beq L_02075de4
    ldr r0, [sp, #0x4]
    subs r5, r0, #0x1
    bmi L_02075dac
    ldr r11, =data_020de780
L_02075d4c:
    ldr r1, [r11, #0x0]
    ldrsb r2, [r6, r5]
    ldrb r0, [r1, #0x3]
    add r3, r1, #0x3
    sub r1, r2, #0x2f
    add r2, r0, #0x1
    swpb r2, r2, [r3]
    add r1, r1, #0x7
    ldr r2, =data_020de754
    ldrb r2, [r2, #0x0]
    sub r2, r9, r2
    add r2, r2, #0x2
    str r2, [sp, #0x0]
    ldr r2, =data_020de770
    ldrb ip, [r2, #0x0]
    ldr r2, =data_020de755
    ldrb r3, [r2, #0x0]
    add r2, ip, #0x1
    sub r3, r10, r3
    bl func_02075388
    ldrb r0, [r4, #0x90]
    subs r5, r5, #0x1
    sub r10, r10, r0
    bpl L_02075d4c
L_02075dac:
    ldr r0, =data_020de780
    mov r2, r10
    ldr r1, [r0, #0x0]
    mov r3, r9
    ldrb r0, [r1, #0x3]
    add r5, r1, #0x3
    mov r1, #0x7
    add r4, r0, #0x1
    swpb r4, r4, [r5]
    bl func_020752a8
    ldr r0, =data_020be594
    ldrb r0, [r0, #0x90]
    sub r10, r10, r0
    b L_02075df0
L_02075de4:
    ldr r0, [sp, #0x30]
    cmp r0, #0x1
    subeq r10, r10, r1
L_02075df0:
    ldr r0, [sp, #0x8]
    subs r6, r0, #0x1
    bmi L_02075e94
    ldr r4, =data_020de780
    ldr r11, =data_020bd594
    ldr r5, =data_020be594
L_02075e08:
    ldrsb r1, [r8, r6]
    ldrb r0, [r5, #0x94]
    sub r1, r1, #0x2f
    tst r0, #0x2
    bne L_02075e24
    cmp r7, #0x0
    bne L_02075e4c
L_02075e24:
    ldr r3, [r4, #0x0]
    mov r2, r10
    add r1, r1, #0x7
    ldrb r0, [r3, #0x3]
    add ip, r3, #0x3
    mov r3, r9
    add lr, r0, #0x1
    swpb lr, lr, [ip]
    bl func_020752a8
    b L_02075e84
L_02075e4c:
    ldr r2, [r4, #0x0]
    add r1, r1, #0x7
    ldrb r0, [r2, #0x3]
    add r3, r2, #0x3
    add r2, r0, #0x1
    swpb r2, r2, [r3]
    ldrb r2, [r11, #0x454]
    sub r2, r9, r2, asr #0x1
    str r2, [sp, #0x0]
    ldr r2, =data_020de770
    ldrb r3, [r11, #0x453]
    ldrb r2, [r2, #0x0]
    sub r3, r10, r3, asr #0x1
    bl func_02075388
L_02075e84:
    ldrb r0, [r5, #0x90]
    subs r6, r6, #0x1
    sub r10, r10, r0
    bpl L_02075e08
L_02075e94:
    ldr r1, [sp, #0x8]
    ldr r0, [sp, #0x4]
    add r0, r1, r0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
