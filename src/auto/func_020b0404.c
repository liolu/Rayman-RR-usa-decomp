#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204e9f4();
extern void func_020520c0();
extern void func_0206bb60();
extern void func_020b0684();
extern void func_020b09dc();
extern char data_020dbad4[];
extern char data_020dbad5[];
extern char data_020dbaf4[];
extern char data_020dc19c[];
extern char data_020e4f10[];
extern char data_020e4f78[];
// clang-format off
asm void func_020b0404(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    ldr r3, =data_020dbad4
    mov r4, #0x1
    swpb r1, r4, [r3]
    ldr r2, =data_020dbad5
    mov r7, #0xc8000
    swpb r1, r4, [r2]
    ldr r5, =data_020e4f78
    ldr r8, =data_020e4f10
    mov r6, r0
    mov r4, #0x0
    mov r11, r7
L_020b0438:
    ldr r0, [r5, #0x10]
    cmp r0, #0x0
    ldrne r0, [r5, #0x0]
    cmpne r0, #0x0
    beq L_020b0580
    bl func_0206bb60
    cmp r4, #0xf
    blt L_020b0468
    ldr r0, =data_020dc19c
    ldrb r0, [r0, #0xc7e]
    cmp r0, #0x0
    bne L_020b0580
L_020b0468:
    ldrb r3, [r5, #0x1a]
    tst r3, #0x1
    beq L_020b04c4
    ldr ip, [r8, #0x1c]
    mov r9, #0x0
    umull r1, r0, ip, r7
    mla r0, ip, r9, r0
    mov r10, ip, asr #0x1f
    adds r9, r1, #0x800
    mla r0, r10, r7, r0
    ldr r2, [r5, #0x10]
    adc r0, r0, #0x0
    mov r1, r9, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r2, r2, r1
    cmp r2, #0xff000
    ble L_020b04bc
    bic r0, r3, #0x1
    add r1, r5, #0x1a
    swpb r0, r0, [r1]
    mov r2, #0xff000
L_020b04bc:
    str r2, [r5, #0x10]
    b L_020b0518
L_020b04c4:
    tst r3, #0x2
    beq L_020b0518
    ldr ip, [r8, #0x1c]
    mov r9, #0x0
    umull r1, r0, ip, r11
    mla r0, ip, r9, r0
    mov r10, ip, asr #0x1f
    adds r9, r1, #0x800
    mla r0, r10, r11, r0
    ldr r2, [r5, #0x10]
    adc r0, r0, #0x0
    mov r1, r9, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r2, r2, r1
    cmp r2, #0x0
    bgt L_020b0514
    bic r0, r3, #0x1
    add r1, r5, #0x1a
    swpb r0, r0, [r1]
    mov r2, #0x0
L_020b0514:
    str r2, [r5, #0x10]
L_020b0518:
    ldrb r0, [r5, #0x1a]
    tst r0, #0x8
    beq L_020b0574
    mov r0, r5
    add r1, sp, #0xc
    add r2, sp, #0x0
    bl func_020b0684
    ldr lr, [r5, #0x10]
    ldr r2, =0xb33
    mov ip, lr, asr #0x1f
    umull r10, r9, lr, r2
    mov r2, #0x0
    mla r9, lr, r2, r9
    ldr r2, =0xb33
    adds r10, r10, #0x800
    mla r9, ip, r2, r9
    adc r9, r9, #0x0
    mov r2, r10, lsr #0xc
    add r0, sp, #0xc
    add r1, sp, #0x0
    mov r3, r6
    orr r2, r2, r9, lsl #0x14
    bl func_0204e9f4
L_020b0574:
    mov r0, r6
    mov r1, r5
    bl func_020b09dc
L_020b0580:
    add r5, r5, #0x1c
    add r4, r4, #0x1
    cmp r4, #0x32
    blt L_020b0438
    ldr r1, =data_020dbaf4
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_020520c0
    ldr r1, =data_020dbad4
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
