#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208f010();
extern void func_0208fd90();
extern char data_020dd7a4[];
// clang-format off
asm void func_0208faec(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r1, [r4, #0x8]
    ldr r0, [r1, #0x60]
    cmp r0, #0x0
    cmpne r0, #0x1
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    ldrh r0, [r0, #0x72]
    tst r0, #0x1000
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, pc}
    tst r0, #0x2000
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, pc}
    ldrb r0, [r1, #0x74]
    tst r0, #0x2
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, pc}
    ldr r0, [r4, #0x0]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x68]
    tst r0, #0x1
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, pc}
    tst r0, #0x2
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x0
    str r0, [r1, #0x64]
    ldr r0, [r4, #0xc]
    mov r2, #0x3
    ldrh r0, [r0, #0x72]
    add r1, sp, #0xc
    tst r0, #0x8
    bicne r0, r2, #0x1
    movne r0, r0, lsl #0x18
    movne r2, r0, asr #0x18
    mov r0, r4
    bl func_0208f010
    cmp r0, #0x0
    bne L_0208fc18
    ldr r0, =data_020dd7a4
    mov r2, #0x5
    ldrsh r0, [r0, #0x7c]
    add r1, sp, #0x0
    tst r0, #0x4
    orrne r0, r2, #0x8
    movne r0, r0, lsl #0x18
    movne r2, r0, asr #0x18
    mov r0, r4
    bl func_0208f010
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, pc}
    ldr r0, [r4, #0x8]
    mov r1, #0x2
    str r1, [r0, #0x60]
    ldr r0, [r4, #0x8]
    add r3, sp, #0x0
    add r4, r0, #0x1c
    mov r2, #0x6
L_0208fbec:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208fbec
    add sp, sp, #0x18
    ldmfd sp!, {r4, pc}
L_0208fc18:
    add r1, sp, #0xc
    mov r0, r4
    bl func_0208fd90
    add sp, sp, #0x18
    ldmfd sp!, {r4, pc}
}
// clang-format on
