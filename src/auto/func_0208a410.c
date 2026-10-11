#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_0208fcd8();
extern char data_020dd7a4[];
// clang-format off
asm void func_0208a410(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldrsb r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_0208a5d0
    ldr r0, =data_020dd7a4
    ldrsh r0, [r0, #0x7c]
    tst r0, #0x8
    bne L_0208a5d0
    ldr r0, [r4, #0x8]
    ldr r1, [r4, #0x2c]
    ldr r0, [r0, #0x1c]
    subs r0, r1, r0
    str r0, [sp, #0xc]
    ldr r0, [r4, #0x8]
    ldr r1, [r4, #0x30]
    ldr r0, [r0, #0x20]
    sub r1, r1, r0
    str r1, [sp, #0x10]
    ldr r0, [r4, #0x8]
    ldr r2, [r4, #0x34]
    ldr r0, [r0, #0x24]
    cmpeq r1, #0x0
    sub r0, r2, r0
    str r0, [sp, #0x14]
    ldr r2, [r4, #0x8]
    ldr r3, [r4, #0x50]
    ldr r2, [r2, #0x1c]
    cmpeq r0, #0x0
    sub r2, r3, r2
    str r2, [sp, #0x0]
    ldr r2, [r4, #0x8]
    ldr r3, [r4, #0x54]
    ldr r2, [r2, #0x20]
    sub r2, r3, r2
    str r2, [sp, #0x4]
    ldr r2, [r4, #0x8]
    ldr r3, [r4, #0x58]
    ldr r2, [r2, #0x24]
    sub r2, r3, r2
    str r2, [sp, #0x8]
    beq L_0208a598
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ldreq r0, [sp, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    beq L_0208a598
    add r0, sp, #0x0
    mov r1, r0
    bl func_01ff84a0
    ldr r5, [sp, #0x0]
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl VEC_DotProduct
    smull r2, r1, r0, r5
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r5, [sp, #0x4]
    add r0, sp, #0xc
    add r1, sp, #0x0
    str r2, [sp, #0xc]
    bl VEC_DotProduct
    smull r2, r1, r0, r5
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r5, [sp, #0x8]
    add r0, sp, #0xc
    add r1, sp, #0x0
    str r2, [sp, #0x10]
    bl VEC_DotProduct
    smull r2, r1, r0, r5
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r3, r2, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [sp, #0x14]
    ldr r0, [r4, #0x8]
    ldr r2, [sp, #0xc]
    ldr r0, [r0, #0x1c]
    ldr r1, [sp, #0x10]
    add r0, r2, r0
    str r0, [sp, #0xc]
    ldr r0, [r4, #0x8]
    ldr r0, [r0, #0x20]
    add r0, r1, r0
    str r0, [sp, #0x10]
    ldr r0, [r4, #0x8]
    ldr r0, [r0, #0x24]
    add r0, r3, r0
    str r0, [sp, #0x14]
    b L_0208a604
L_0208a598:
    ldr r0, [r4, #0x8]
    add ip, sp, #0xc
    add r3, r0, #0x1c
    mov r2, #0x6
L_0208a5a8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208a5a8
    b L_0208a604
L_0208a5d0:
    ldr r0, [r4, #0x8]
    add ip, sp, #0xc
    add r3, r0, #0x1c
    mov r2, #0x6
L_0208a5e0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208a5e0
L_0208a604:
    ldr r1, [sp, #0xc]
    ldr r0, [r4, #0x20]
    add r3, sp, #0xc
    sub r0, r1, r0
    str r0, [r4, #0xac]
    ldr r1, [sp, #0x10]
    ldr r0, [r4, #0x24]
    add ip, r4, #0x2c
    sub r0, r1, r0
    str r0, [r4, #0xb0]
    ldr r1, [sp, #0x14]
    ldr r0, [r4, #0x28]
    mov r2, #0x6
    sub r0, r1, r0
    str r0, [r4, #0xb4]
L_0208a640:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208a640
    add r1, sp, #0xc
    mov r0, r4
    bl func_0208fcd8
    ldr r0, [r4, #0x8]
    add r3, r4, #0x2c
    add r4, r0, #0x1c
    mov r2, #0x6
L_0208a680:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208a680
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
