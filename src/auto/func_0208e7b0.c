#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208fc30();
extern char data_020e3b34[];
// clang-format off
asm void func_0208e7b0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x88
    mov r5, r0
    ldr r4, [r5, #0x50]
    ldr r2, [r1, #0x0]
    add r3, sp, #0x84
    add r2, r4, r2
    str r2, [sp, #0x0]
    ldr r4, [r5, #0x54]
    ldr r2, [r1, #0x4]
    add r6, sp, #0xc
    add r2, r4, r2
    str r2, [sp, #0x4]
    ldr r2, [r1, #0x8]
    ldr r4, [r5, #0x58]
    add r1, sp, #0x0
    add r2, r4, r2
    str r2, [sp, #0x8]
    ldr r4, [r5, #0xc]
    ldr r2, [r4, #0x68]
    str r2, [sp, #0x74]
    ldr r2, [r5, #0xc]
    ldr r2, [r2, #0x6c]
    str r2, [sp, #0x78]
    ldr r2, [r5, #0xc]
    ldrsb r2, [r2, #0x78]
    swpb r2, r2, [r3]
    str r6, [r5, #0xc]
    bl func_0208fc30
    str r4, [r5, #0xc]
    ldr r0, =data_020e3b34
    ldr r2, [sp, #0x34]
    ldr r1, [r0, #0x28]
    ldr r0, =0x3244
    cmp r1, r0
    rsbgt r1, r1, r0, lsl #0x1
    ldr r0, =0x3244
    cmp r2, r0
    rsbgt r2, r2, r0, lsl #0x1
    subs r2, r1, r2
    rsbmi r2, r2, #0x0
    mov r0, #0x64000
    umull r4, r3, r2, r0
    mov r1, #0x0
    mla r3, r2, r1, r3
    mov r2, r2, asr #0x1f
    mla r3, r2, r0, r3
    adds r4, r4, #0x800
    mov r0, #0x800
    adc r3, r3, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    sub r0, r0, #0x1800
    and r3, r4, r0
    mov r0, #0x28
    umull r5, r4, r3, r0
    mla r4, r3, r1, r4
    mov r1, r3, asr #0x1f
    mla r4, r1, r0, r4
    ldr r2, =data_020e3b34
    adds r5, r5, #0x800
    ldr r3, [r2, #0x30]
    ldr r1, =0x3244
    adc r2, r4, #0x0
    mov r0, r5, lsr #0xc
    cmp r3, r1
    orr r0, r0, r2, lsl #0x14
    rsbgt r3, r3, r1, lsl #0x1
    ldr r2, [sp, #0x3c]
    ldr r1, =0x3244
    cmp r2, r1
    ldrgt r1, =0xffff9b78
    addgt r2, r2, r1
    subs r3, r3, r2
    rsbmi r3, r3, #0x0
    mov r1, #0x64000
    umull r5, r4, r3, r1
    mov r2, #0x0
    mla r4, r3, r2, r4
    mov r3, r3, asr #0x1f
    mla r4, r3, r1, r4
    adds r5, r5, #0x800
    mov r1, #0x800
    adc r4, r4, #0x0
    mov r5, r5, lsr #0xc
    ldr r3, =data_020e3b34
    orr r5, r5, r4, lsl #0x14
    sub r1, r1, #0x1800
    and r5, r5, r1
    ldr r1, =0x199
    mov r4, r5, asr #0x1f
    umull ip, r6, r5, r1
    mla r6, r5, r2, r6
    mla r6, r4, r1, r6
    adds r5, ip, #0x800
    ldr r3, [r3, #0x18]
    ldr r2, [sp, #0x24]
    adc r4, r6, #0x0
    mov r1, r5, lsr #0xc
    orr r1, r1, r4, lsl #0x14
    subs r4, r3, r2
    rsbmi r4, r4, #0x0
    mov r2, #0x64000
    umull ip, r5, r4, r2
    mov r3, #0x0
    mla r5, r4, r3, r5
    mov r4, r4, asr #0x1f
    mla r5, r4, r2, r5
    adds ip, ip, #0x800
    mov r2, #0x800
    adc r4, r5, #0x0
    mov r5, ip, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    sub r2, r2, #0x1800
    and r4, r5, r2
    mov r2, #0x28
    umull ip, r5, r4, r2
    mla r5, r4, r3, r5
    mov r4, r4, asr #0x1f
    mla r5, r4, r2, r5
    adds ip, ip, #0x800
    adc r2, r5, #0x0
    mov r5, ip, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    ldr r2, =0x199
    mov r4, r5, asr #0x1f
    umull lr, ip, r5, r2
    mla ip, r5, r3, ip
    add r6, r0, r1
    adds r1, lr, #0x800
    mla ip, r4, r2, ip
    adc r0, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r1
    add sp, sp, #0x88
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
