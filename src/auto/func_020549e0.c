#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205497c();
extern void func_02056e60();
extern void func_02056e80();
// clang-format off
asm void func_020549e0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r6, r0
    str r1, [sp, #0x0]
    mov r5, #0x0
    bl func_02056e60
    movs r4, r0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r0, [r6, #0x38]
    mov r10, r5
    cmp r0, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02054a0c:
    mov r0, r6
    mov r1, r10
    bl func_02056e80
    ldr r1, [sp, #0x0]
    cmp r1, r0
    bne L_02055170
    ldr r1, [r6, #0xc]
    mov r0, r10, lsl #0x1
    ldrsh r0, [r1, r0]
    cmp r0, #0x9
    addls pc, pc, r0, lsl #0x2
    b L_02055170
L_02054a3c:
    b L_02055170
    b L_02054a64
    b L_02055170
    b L_02054ba0
    b L_02055170
    b L_02054c4c
    b L_02054d3c
    b L_02054e50
    b L_02054f48
    b L_0205505c
L_02054a64:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_02054b04
    ldrsh r0, [r7, #0x4]
    cmp r0, #0x0
    beq L_02054b04
    ldr r0, [r7, #0x8]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054a9c:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054a9c
    ldr r0, [r7, #0x8]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054adc:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054adc
    mov r5, #0x1
L_02054b04:
    ldrsh r0, [r7, #0x4]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r9, r8
L_02054b18:
    ldr r0, [r7, #0x8]
    ldr r2, [r6, #0x0]
    ldrsh r11, [r0, r9]
    mov r3, #0xc
    mov r0, r4
    smlabb r2, r11, r3, r2
    add r1, r4, #0xc
    bl func_0205497c
    ldr r3, [r7, #0x8]
    ldr r2, [r6, #0x0]
    add r3, r3, r9
    ldrsh r11, [r3, #0x2]
    mov r3, #0xc
    mov r0, r4
    smlabb r2, r11, r3, r2
    add r1, r4, #0xc
    bl func_0205497c
    ldr r3, [r7, #0x8]
    ldr r2, [r6, #0x0]
    add r3, r3, r9
    ldrsh r11, [r3, #0x4]
    mov r3, #0xc
    mov r0, r4
    smlabb r2, r11, r3, r2
    add r1, r4, #0xc
    bl func_0205497c
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0x4]
    add r9, r9, #0x6
    mov r8, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02054b18
    b L_02055170
L_02054ba0:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r0, [r0, r10, lsl #0x2]
    bne L_02054c2c
    ldrsh r2, [r0, #0xe]
    ldr r3, [r6, #0x0]
    mov r1, #0xc
    smlabb r7, r2, r1, r3
    mov r5, r4
    mov r3, #0x6
L_02054bc8:
    ldrb r1, [r7, #0x0]
    ldrb r2, [r7, #0x1]
    add r7, r7, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_02054bc8
    ldrsh r2, [r0, #0xe]
    ldr r3, [r6, #0x0]
    mov r1, #0xc
    smlabb r7, r2, r1, r3
    add r5, r4, #0xc
    mov r3, #0x6
L_02054c04:
    ldrb r1, [r7, #0x0]
    ldrb r2, [r7, #0x1]
    add r7, r7, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_02054c04
    mov r5, #0x1
L_02054c2c:
    ldrsh r1, [r0, #0xe]
    ldr r2, [r6, #0x0]
    mov r0, #0xc
    smlabb r2, r1, r0, r2
    mov r0, r4
    add r1, r4, #0xc
    bl func_0205497c
    b L_02055170
L_02054c4c:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_02054cec
    ldrsh r0, [r7, #0xc]
    cmp r0, #0x0
    beq L_02054cec
    ldr r0, [r7, #0x4]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054c84:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054c84
    ldr r0, [r7, #0x4]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054cc4:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054cc4
    mov r5, #0x1
L_02054cec:
    ldrsh r0, [r7, #0xc]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r9, #0xc
L_02054d00:
    ldr r1, [r7, #0x4]
    mov r0, r8, lsl #0x1
    ldrsh r1, [r1, r0]
    ldr r2, [r6, #0x0]
    mov r0, r4
    smlabb r2, r1, r9, r2
    add r1, r4, #0xc
    bl func_0205497c
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0xc]
    mov r8, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02054d00
    b L_02055170
L_02054d3c:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_02054ddc
    ldrsh r0, [r7, #0x10]
    cmp r0, #0x0
    beq L_02054ddc
    ldr r0, [r7, #0x4]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054d74:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054d74
    ldr r0, [r7, #0x4]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054db4:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054db4
    mov r5, #0x1
L_02054ddc:
    ldrsh r0, [r7, #0x10]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r11, #0xc
    mov r9, r11
L_02054df4:
    ldr r1, [r7, #0x4]
    mov r0, r8, lsl #0x2
    ldrsh r1, [r1, r0]
    ldr r2, [r6, #0x0]
    mov r0, r4
    smlabb r2, r1, r11, r2
    add r1, r4, #0xc
    bl func_0205497c
    ldr r0, [r7, #0x4]
    ldr r2, [r6, #0x0]
    add r0, r0, r8, lsl #0x2
    ldrsh r3, [r0, #0x2]
    mov r0, r4
    add r1, r4, #0xc
    smlabb r2, r3, r9, r2
    bl func_0205497c
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0x10]
    mov r8, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02054df4
    b L_02055170
L_02054e50:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_02054ef0
    ldrsh r0, [r7, #0x4]
    cmp r0, #0x0
    beq L_02054ef0
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x8]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054e88:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054e88
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x8]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054ec8:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054ec8
    mov r5, #0x1
L_02054ef0:
    ldrsh r0, [r7, #0x4]
    mov r9, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r8, r9
    mov r11, #0xc
L_02054f08:
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    add r0, r0, r8
    ldrsh r3, [r0, #0x8]
    mov r0, r4
    add r1, r4, #0xc
    smlabb r2, r3, r11, r2
    bl func_0205497c
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0x4]
    add r8, r8, #0xc
    mov r9, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02054f08
    b L_02055170
L_02054f48:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_02054fe8
    ldrsh r0, [r7, #0x4]
    cmp r0, #0x0
    beq L_02054fe8
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054f80:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054f80
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02054fc0:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02054fc0
    mov r5, #0x1
L_02054fe8:
    ldrsh r0, [r7, #0x4]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r11, #0xc
    mov r9, r11
L_02055000:
    ldr r1, [r7, #0x0]
    mov r0, r8, lsl #0x3
    ldrsh r1, [r1, r0]
    ldr r2, [r6, #0x0]
    mov r0, r4
    smlabb r2, r1, r11, r2
    add r1, r4, #0xc
    bl func_0205497c
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    add r0, r0, r8, lsl #0x3
    ldrsh r3, [r0, #0x2]
    mov r0, r4
    add r1, r4, #0xc
    smlabb r2, r3, r9, r2
    bl func_0205497c
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0x4]
    mov r8, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02055000
    b L_02055170
L_0205505c:
    ldr r0, [r6, #0x10]
    cmp r5, #0x0
    ldr r7, [r0, r10, lsl #0x2]
    bne L_020550fc
    ldrsh r0, [r7, #0x4]
    cmp r0, #0x0
    beq L_020550fc
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    mov r3, r4
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_02055094:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02055094
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r1, [r0, #0x0]
    mov r0, #0xc
    add r3, r4, #0xc
    smlabb r5, r1, r0, r2
    mov r2, #0x6
L_020550d4:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020550d4
    mov r5, #0x1
L_020550fc:
    ldrsh r0, [r7, #0x4]
    mov r9, #0x0
    cmp r0, #0x0
    ble L_02055170
    mov r8, r9
L_02055110:
    ldr r0, [r7, #0x0]
    ldr r2, [r6, #0x0]
    ldrsh r11, [r0, r8]
    mov r3, #0xc
    mov r0, r4
    smlabb r2, r11, r3, r2
    add r1, r4, #0xc
    bl func_0205497c
    ldr r1, [r7, #0x0]
    ldr r11, [r6, #0x0]
    add r1, r1, r8
    ldrsh r3, [r1, #0x2]
    mov r2, #0xc
    mov r0, r4
    smlabb r2, r3, r2, r11
    add r1, r4, #0xc
    bl func_0205497c
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r7, #0x4]
    add r8, r8, #0xc
    mov r9, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02055110
L_02055170:
    ldrsh r1, [r6, #0x38]
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    mov r10, r0, asr #0x10
    bgt L_02054a0c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
