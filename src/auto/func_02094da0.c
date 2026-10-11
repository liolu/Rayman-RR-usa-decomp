#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c700();
extern void func_0202cb6c();
extern void func_0202dde8();
extern void func_0202e620();
extern void func_0202e804();
extern void func_02060240();
extern void func_020602fc();
extern void func_020606a0();
extern void func_02061a60();
extern void func_02094c5c();
// clang-format off
asm void func_02094da0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x98
    mov r10, r0
    mov r8, r2
    mov r9, r1
    mov r0, r8
    mov r1, r10
    str r3, [sp, #0x0]
    ldr r7, [sp, #0xc0]
    mov r11, #0x0
    bl func_02061a60
    mov r6, r0
    cmp r6, #0x0
    mov r5, r11
    ble L_02094fe0
L_02094ddc:
    mov r1, r5, lsl #0x10
    mov r0, r8
    mov r2, r10
    mov r1, r1, lsr #0x10
    bl func_020606a0
    movs r4, r0
    beq L_02094fd4
    mov r1, r9
    bl func_020602fc
    cmp r0, #0x0
    beq L_02094fd4
    mov r0, r10
    mov r1, r8
    and r2, r5, #0xff
    bl func_02060240
    cmp r0, #0x0
    beq L_02094fd4
    mov r0, r4
    mov r1, r7
    bl func_02094c5c
    movs r11, r0
    beq L_02094fd4
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_02094e54
    ldr r1, [r10, #0x24]
    mov r0, r7
    mov r2, r7
    bl func_0202c700
    b L_02094fe0
L_02094e54:
    ldr r0, [r10, #0x24]
    ldr r1, [r0, #0x0]
    cmp r1, #0x3
    movls r1, #0x1
    movhi r1, #0x0
    tst r1, #0xff
    bne L_02094fe0
    add r1, sp, #0x10
    add r2, sp, #0x1c
    add r3, sp, #0x28
    bl func_0202dde8
    add r4, sp, #0x4
    mov r3, r7
    mov r2, #0x6
L_02094e8c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02094e8c
    ldr r3, [sp, #0x28]
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r0, [sp, #0x4]
    smull r4, r1, r3, r1
    adds r3, r4, #0x800
    ldr r5, [sp, #0x1c]
    ldr r4, [sp, #0x8]
    smull r6, r0, r2, r0
    adc r2, r1, #0x0
    adds r1, r6, #0x800
    mov r3, r3, lsr #0xc
    smull r6, r4, r5, r4
    adc r0, r0, #0x0
    adds r5, r6, #0x800
    mov r6, r1, lsr #0xc
    adc r1, r4, #0x0
    mov r4, r5, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    orr r4, r4, r1, lsl #0x14
    orr r3, r3, r2, lsl #0x14
    add r0, r6, r4
    add r0, r3, r0
    str r0, [r7, #0x0]
    ldr r3, [sp, #0x2c]
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x4]
    smull r2, r4, r3, r2
    adds r5, r2, #0x800
    ldr r3, [sp, #0x20]
    smull r2, r0, r1, r0
    adc r4, r4, #0x0
    mov r1, r5, lsr #0xc
    orr r1, r1, r4, lsl #0x14
    adds r4, r2, #0x800
    adc r2, r0, #0x0
    mov r0, r4, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    ldr r2, [sp, #0x8]
    smull r4, r2, r3, r2
    adds r3, r4, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    add r0, r1, r0
    str r0, [r7, #0x4]
    ldr r1, [sp, #0x30]
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x18]
    smull r3, r0, r1, r0
    adds r1, r3, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4]
    ldr r3, [sp, #0x24]
    smull r4, r0, r2, r0
    adds r4, r4, #0x800
    adc r2, r0, #0x0
    mov r0, r4, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    ldr r2, [sp, #0x8]
    smull r4, r2, r3, r2
    adds r3, r4, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    add r0, r1, r0
    str r0, [r7, #0x8]
    b L_02094fe0
L_02094fd4:
    add r5, r5, #0x1
    cmp r5, r6
    blt L_02094ddc
L_02094fe0:
    cmp r11, #0x0
    addne sp, sp, #0x98
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0x4]
    ldr r0, [r0, #0x0]
    ldr r4, [r0, #0xa4]
    cmp r4, #0x0
    addeq sp, sp, #0x98
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r11, #0x0
L_02095008:
    ldr r5, [r4, #0x0]
    cmp r5, #0x0
    beq L_020950c0
    ldr r0, [r5, #0x0]
    tst r0, #0x18
    beq L_020950c0
    ldr r0, [r5, #0x30]
    tst r0, #0x2
    bne L_020950c0
    ldr r0, [r5, #0x4]
    bl func_0202e620
    cmp r8, #0x2
    bne L_02095048
    bl func_0202e804
    mov r6, r0
    b L_0209504c
L_02095048:
    mov r6, r11
L_0209504c:
    cmp r6, #0x0
    beq L_020950c0
    mov r0, r6
    mov r1, r9
    bl func_020602fc
    cmp r0, #0x0
    beq L_020950c0
    mov r0, r6
    mov r1, r7
    bl func_02094c5c
    cmp r0, #0x0
    beq L_020950c0
    ldr r1, [r5, #0x24]
    mov r0, r7
    mov r2, r7
    bl func_0202c700
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0x98
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0x24]
    add r0, sp, #0x34
    bl func_0202cb6c
    add r1, sp, #0x34
    mov r0, r7
    mov r2, r7
    bl func_0202c700
    add sp, sp, #0x98
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020950c0:
    ldr r4, [r4, #0x8]
    cmp r4, #0x0
    bne L_02095008
    add sp, sp, #0x98
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
