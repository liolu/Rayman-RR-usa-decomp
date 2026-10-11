#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_02084450();
// clang-format off
asm void func_02097b80(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r5, r0
    mov r6, r2
    bl func_02084450
    mov r4, r0
    add r3, sp, #0xc
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_02084450
    mov r4, r0
    add r3, sp, #0x18
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_02084450
    mov r4, r0
    ldr r0, [r6, #0xc]
    add r1, sp, #0x18
    cmp r0, #0x8
    ldreq r5, [r6, #0x0]
    ldrne r0, [r6, #0x0]
    movne r5, r0, lsl #0xc
    add r0, sp, #0xc
    bl VEC_DotProduct
    mvn r2, #0x0
    mov r1, r2, lsl #0xd
    umull r7, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r7, r7, #0x800
    adc r0, r3, #0x0
    mov r1, r7, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    smull r3, ip, r1, r3
    adds lr, r3, #0x800
    smull r7, r3, r1, r0
    adc r0, ip, #0x0
    adds ip, r7, #0x800
    ldr r2, [sp, #0x20]
    mov lr, lr, lsr #0xc
    smull r7, r2, r1, r2
    adc r3, r3, #0x0
    adds r7, r7, #0x800
    adc r1, r2, #0x0
    mov r2, r7, lsr #0xc
    mov ip, ip, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    ldr r7, [sp, #0xc]
    orr lr, lr, r0, lsl #0x14
    add r0, lr, r7
    ldr r7, [sp, #0x10]
    smull r0, lr, r5, r0
    adds r0, r0, #0x800
    ldr r3, [sp, #0x14]
    orr r2, r2, r1, lsl #0x14
    add r1, r2, r3
    add r7, ip, r7
    smull ip, r3, r5, r7
    smull r2, r1, r5, r1
    adc r5, lr, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r5, lsl #0x14
    adds r5, ip, #0x800
    str r0, [sp, #0x0]
    adc r0, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r3, [sp, #0x4]
    add r5, sp, #0x0
    mov r3, r6
    str r1, [sp, #0x8]
    mov r2, #0x6
L_02097cd4:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02097cd4
    mov r1, #0x15
    mov r0, r4
    str r1, [r6, #0xc]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
