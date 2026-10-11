#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208f010();
extern char data_020dd7a4[];
// clang-format off
asm void func_0208f2b4(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r1, =data_020dd7a4
    mov r4, r0
    ldrsh r0, [r1, #0x7c]
    mov r2, #0x5
    add r1, sp, #0x0
    tst r0, #0x4
    orrne r0, r2, #0x8
    movne r0, r0, lsl #0x18
    movne r2, r0, asr #0x18
    mov r0, r4
    bl func_0208f010
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, pc}
    ldr r0, [r4, #0x8]
    mov r1, #0x2
    str r1, [r0, #0x60]
    ldr r0, [r4, #0x8]
    add r3, sp, #0x0
    add ip, r0, #0x1c
    mov r2, #0x6
L_0208f310:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208f310
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
