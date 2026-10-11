#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
// clang-format off
asm void func_0208d264(void) {
    stmfd sp!, {r4, lr}
    ldr r0, [r0, #0x4]
    mov r4, r1
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, pc}
    bl func_02067900
    cmp r0, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, pc}
    ldr r1, [r0, #0x168]
    cmp r1, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, pc}
    ldr r0, [r1, #0x4]
    tst r0, #0x1
    moveq r0, #0x0
    ldmeqfd sp!, {r4, pc}
    add r3, r1, #0x34
    mov r2, #0x6
L_0208d2b8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208d2b8
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
}
// clang-format on
