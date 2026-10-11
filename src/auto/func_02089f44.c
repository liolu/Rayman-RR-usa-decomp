#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_02014910();
extern void func_02067910();
extern void func_0208d150();
extern void func_0208d1f0();
extern void func_0208d3e8();
extern char data_020dd7a4[];
// clang-format off
asm void func_02089f44(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    ldr r1, [r5, #0xc]
    ldrh r0, [r1, #0x72]
    tst r0, #0x80
    beq L_02089f88
    ldr r0, [r1, #0x38]
    add sp, sp, #0x28
    str r0, [r5, #0xc4]
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x44]
    str r0, [r5, #0xc8]
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x50]
    str r0, [r5, #0xcc]
    ldmfd sp!, {r4, r5, r6, pc}
L_02089f88:
    tst r0, #0x2000
    bne L_02089f9c
    ldr r0, [r1, #0x68]
    cmp r0, #0x0
    bne L_02089fb4
L_02089f9c:
    ldr r0, [r1, #0x38]
    str r0, [r5, #0xc4]
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x44]
    str r0, [r5, #0xc8]
    b L_0208a224
L_02089fb4:
    ldrh r0, [r1, #0x70]
    mov r4, #0x0
    tst r0, #0x1
    bne L_0208a05c
    ldr r2, [r5, #0x2c]
    ldr r1, [r5, #0x20]
    add r0, sp, #0x1c
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    ldr r2, [r5, #0x30]
    ldr r1, [r5, #0x24]
    sub r1, r2, r1
    str r1, [sp, #0x20]
    ldr r2, [r5, #0x34]
    ldr r1, [r5, #0x28]
    sub r1, r2, r1
    str r1, [sp, #0x24]
    bl func_01ff8668
    ldr r1, =data_020dd7a4
    ldr r2, [r1, #0x4c]
    ldr r1, [r1, #0x50]
    smull r3, r2, r0, r2
    adds r3, r3, #0x800
    adc r0, r2, #0x0
    mov r4, r3, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    cmp r4, r1
    movgt r4, r1
    add r1, sp, #0x1c
    mov r0, r5
    bl func_0208d150
    add r0, sp, #0x1c
    bl func_01ff8668
    ldr r1, =data_020dd7a4
    ldr r1, [r1, #0x54]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    movlt r4, r1
L_0208a05c:
    str r4, [r5, #0xc4]
    ldr r0, [r5, #0xc]
    ldrh r0, [r0, #0x70]
    tst r0, #0x4
    bne L_0208a220
    ldr r2, [r5, #0x50]
    ldr r1, [r5, #0x20]
    mov r0, #0x0
    subs r4, r2, r1
    str r4, [sp, #0x1c]
    ldr r2, [r5, #0x54]
    ldr r1, [r5, #0x24]
    sub r3, r2, r1
    str r3, [sp, #0x20]
    ldr r2, [r5, #0x58]
    ldr r1, [r5, #0x28]
    cmpeq r3, #0x0
    sub r1, r2, r1
    str r1, [sp, #0x24]
    cmpeq r1, #0x0
    beq L_0208a12c
    cmp r4, #0x0
    ldreq r0, [sp, #0x20]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x24]
    cmpeq r0, #0x0
    beq L_0208a0d4
    add r0, sp, #0x1c
    mov r1, r0
    bl func_01ff84a0
L_0208a0d4:
    ldr r1, [r5, #0x50]
    ldr r0, [r5, #0x2c]
    subs r0, r1, r0
    str r0, [sp, #0x10]
    ldr r1, [r5, #0x54]
    ldr r0, [r5, #0x30]
    sub r2, r1, r0
    str r2, [sp, #0x14]
    ldr r1, [r5, #0x58]
    ldr r0, [r5, #0x34]
    cmpeq r2, #0x0
    sub r0, r1, r0
    str r0, [sp, #0x18]
    cmpeq r0, #0x0
    beq L_0208a11c
    add r0, sp, #0x10
    mov r1, r0
    bl func_01ff84a0
L_0208a11c:
    add r0, sp, #0x1c
    add r1, sp, #0x10
    mov r2, #0x0
    bl func_0208d3e8
L_0208a12c:
    ldr r1, =data_020dd7a4
    ldr r2, [r1, #0x58]
    ldr r1, [r1, #0x5c]
    smull r3, r2, r0, r2
    adds r3, r3, #0x800
    adc r0, r2, #0x0
    mov r4, r3, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    ldr r0, [r5, #0xc]
    cmp r4, r1
    movgt r4, r1
    ldr r0, [r0, #0x68]
    add r1, sp, #0x0
    bl func_0208d1f0
    ldr r0, =data_020dd7a4
    ldr r2, [sp, #0x0]
    ldr r0, [r0, #0x60]
    smull r1, r0, r2, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    ldr r1, [r5, #0xc]
    movlt r4, r2
    ldr r1, [r1, #0x18]
    add r0, sp, #0x1c
    str r1, [sp, #0x0]
    ldr r2, [r5, #0x50]
    ldr r1, [r5, #0x20]
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    ldr r2, [r5, #0x54]
    ldr r1, [r5, #0x24]
    sub r1, r2, r1
    str r1, [sp, #0x20]
    ldr r2, [r5, #0x58]
    ldr r1, [r5, #0x28]
    sub r1, r2, r1
    str r1, [sp, #0x24]
    bl func_01ff8668
    ldr r1, [sp, #0x0]
    sub r1, r1, r0
    str r1, [sp, #0x0]
    cmp r1, #0x1000
    ble L_0208a1f4
    mov r0, r4
    bl func_02014910
    mov r4, r0
    b L_0208a220
L_0208a1f4:
    mov r0, #0x1000
    rsb r0, r0, #0x0
    cmp r1, r0
    bge L_0208a220
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    smull r1, r0, r4, r1
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
L_0208a220:
    str r4, [r5, #0xc8]
L_0208a224:
    ldr r0, [r5, #0x8]
    ldrb r0, [r0, #0x75]
    tst r0, #0x1000
    bne L_0208a244
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x68]
    cmp r0, #0x0
    bne L_0208a258
L_0208a244:
    ldr r0, [r5, #0xc]
    add sp, sp, #0x28
    ldr r0, [r0, #0x50]
    str r0, [r5, #0xcc]
    ldmfd sp!, {r4, r5, r6, pc}
L_0208a258:
    mov r3, #0x0
    str r3, [sp, #0x4]
    str r3, [sp, #0x8]
    str r3, [sp, #0xc]
    ldr r0, [r5, #0xc]
    ldrh r0, [r0, #0x70]
    tst r0, #0x10
    bne L_0208a304
    ldr r0, [r5, #0x1c]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    bl func_02067910
    add r4, sp, #0x1c
    add r3, r0, #0x10
    mov r2, #0x6
L_0208a294:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208a294
    ldr r2, [r5, #0xa0]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x20]
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    ldr r2, [r5, #0xa4]
    ldr r1, [sp, #0x24]
    sub r0, r2, r0
    str r0, [sp, #0x20]
    ldr r2, [r5, #0xa8]
    add r0, sp, #0x1c
    sub r1, r2, r1
    str r1, [sp, #0x24]
    bl func_01ff8668
    add r4, sp, #0x4
    add r1, sp, #0x1c
    mov r3, r0
    ldmia r1, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
L_0208a304:
    ldr r0, =data_020dd7a4
    ldr r1, [r0, #0x64]
    ldr r0, [r0, #0x68]
    smull r2, r1, r3, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r4, r2, lsr #0xc
    orr r4, r4, r1, lsl #0x14
    cmp r4, r0
    movgt r4, r0
    add r1, sp, #0x1c
    mov r0, r5
    bl func_0208d150
    ldr r1, =data_020dd7a4
    add r0, sp, #0x1c
    ldr r6, [r1, #0x6c]
    bl func_01ff8668
    smull r2, r1, r0, r6
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    bge L_0208a388
    ldr r1, =data_020dd7a4
    add r0, sp, #0x1c
    ldr r4, [r1, #0x6c]
    bl func_01ff8668
    smull r2, r1, r0, r4
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r4, r2, lsr #0xc
    orr r4, r4, r0, lsl #0x14
L_0208a388:
    str r4, [r5, #0xcc]
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0xc]
    cmpeq r0, #0x0
    addeq sp, sp, #0x28
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r1, [r5, #0x0]
    ldr r0, [r1, #0x130]
    cmp r0, #0x0
    ldreq r0, [r1, #0x134]
    cmpeq r0, #0x0
    ldreq r0, [r1, #0x138]
    cmpeq r0, #0x0
    addeq sp, sp, #0x28
    ldmeqfd sp!, {r4, r5, r6, pc}
    add r0, sp, #0x4
    add r1, r1, #0x130
    bl VEC_DotProduct
    ldr r1, =0xfffff19a
    cmp r0, r1
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #0xc]
    mov r1, #0x28000
    str r1, [r0, #0x58]
    ldr r0, [r5, #0xc]
    str r1, [r0, #0x54]
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
