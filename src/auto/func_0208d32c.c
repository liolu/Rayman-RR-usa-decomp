#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
// clang-format off
asm void func_0208d32c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r1
    mov r6, r2
    mov r5, r0
    mov r0, r4
    mov r1, r6
    bl VEC_DotProduct
    cmp r0, #0x0
    beq L_0208d3bc
    ldmia r6, {r1, r3}
    smull r3, r7, r0, r3
    ldr r2, [r6, #0x8]
    adds ip, r3, #0x800
    smull r3, r6, r0, r2
    adc r2, r7, #0x0
    adds r7, r3, #0x800
    mov r3, ip, lsr #0xc
    smull r1, ip, r0, r1
    adc r0, r6, #0x0
    adds lr, r1, #0x800
    mov r1, r7, lsr #0xc
    adc ip, ip, #0x0
    mov lr, lr, lsr #0xc
    ldr r6, [r4, #0x0]
    orr lr, lr, ip, lsl #0x14
    sub r6, r6, lr
    str r6, [r5, #0x0]
    ldr ip, [r4, #0x4]
    orr r3, r3, r2, lsl #0x14
    sub r2, ip, r3
    str r2, [r5, #0x4]
    ldr r2, [r4, #0x8]
    orr r1, r1, r0, lsl #0x14
    sub r0, r2, r1
    str r0, [r5, #0x8]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0208d3bc:
    mov r2, #0x6
L_0208d3c0:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0208d3c0
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
