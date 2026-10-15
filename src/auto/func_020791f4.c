#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern void _fdiv();
extern void func_0200a42c();
extern void _s32_div_f();
extern void func_02078294();
extern void func_02078594();
extern void func_0207ab0c();
extern void func_0207ab28();
extern char data_020dfe24[];
// clang-format off
asm void func_020791f4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldr r0, [r6, #0x4]
    ldr r4, [r6, #0x14]
    cmp r0, #0x0
    ldr r5, [r6, #0xc]
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0xa8]
    mov r0, #0x1
    str r1, [r6, #0xa4]
    add r1, r6, #0x69
    mov r2, #0x0
    str r0, [r4, #0xac]
    swpb r0, r2, [r1]
    str r2, [r6, #0x9c]
    ldrsh r0, [r5, #0x4]
    bl func_0200a42c
    ldrsh r2, [r4, #0x0]
    ldrsb r1, [r4, #0xc1]
    mov r7, r0
    mov r0, r2, lsl r1
    bl func_0200a42c
    mov r1, r0
    mov r0, r7
    bl _fdiv
    str r0, [r4, #0x60]
    ldr r0, [r4, #0xb8]
    cmp r0, #0x0
    movne r0, #0x1
    ldmnefd sp!, {r3, r4, r5, r6, r7, pc}
    ldrsh r1, [r5, #0x4]
    ldrsb r0, [r4, #0xc1]
    mov r0, r1, asr r0
    strh r0, [r4, #0x14]
    ldrsh r0, [r5, #0x4]
    ldrsh r1, [r4, #0x4]
    bl _s32_div_f
    ldrsh r0, [r4, #0x14]
    cmp r1, #0x0
    addeq r0, r0, #0x1
    addne r0, r0, #0x2
    strh r0, [r4, #0x14]
    ldrsh r1, [r5, #0x6]
    ldrsb r0, [r4, #0xc2]
    mov r0, r1, asr r0
    strh r0, [r4, #0x16]
    ldrsh r0, [r5, #0x6]
    ldrsh r1, [r4, #0x6]
    bl _s32_div_f
    ldrsh r0, [r4, #0x16]
    cmp r1, #0x0
    addeq r0, r0, #0x1
    addne r0, r0, #0x2
    strh r0, [r4, #0x16]
    ldrsh r2, [r4, #0x14]
    ldrsh r1, [r4, #0x16]
    ldrsb r0, [r4, #0xc3]
    smulbb r1, r2, r1
    mov r0, r1, lsl r0
    add r0, r0, #0x20
    strh r0, [r6, #0x70]
    ldrsh r0, [r6, #0x70]
    rsbs r0, r0, #0x7000
    str r0, [r6, #0x6c]
    movmi r0, #0x0
    strmi r0, [r6, #0x6c]
    ldr r1, [r6, #0x6c]
    ldr r0, =data_020dfe24
    bl func_0207ab0c
    ldrsh r1, [r4, #0x10]
    ldrsh r0, [r4, #0x16]
    cmp r1, r0, lsl #0x1
    movle r0, #0x0
    movgt r0, #0x1
    str r0, [r4, #0xb4]
    ldrsh r1, [r4, #0x10]
    ldrsh r0, [r4, #0x16]
    cmp r1, r0
    movle r0, #0x1
    movgt r0, #0x0
    str r0, [r4, #0xb0]
    ldr r0, [r4, #0xb0]
    cmp r0, #0x0
    movne r0, #0x0
    strne r0, [r4, #0xb4]
    ldr r0, [r4, #0xb4]
    cmp r0, #0x0
    movne r0, #0x0
    strne r0, [r4, #0xb0]
    ldrsh r1, [r4, #0x14]
    mov r0, r4
    strh r1, [r4, #0xe]
    bl func_02078594
    ldrsh r2, [r4, #0x16]
    ldrsh r1, [r4, #0x14]
    mvn r0, #0x0
    smulbb r1, r2, r1
    strh r1, [r4, #0x2e]
    strh r0, [r4, #0x2c]
    ldrsh r0, [r4, #0x2e]
    mov r0, r0, lsl #0x1
    bl func_02078294
    str r0, [r4, #0x28]
    ldrsh r1, [r4, #0x12]
    mov r2, #0x20
    bl memset
    ldr r1, [r4, #0x28]
    ldr r0, =data_020dfe24
    mov r2, #0x20
    bl func_0207ab28
    strh r0, [r4, #0x30]
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
