#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c680();
// clang-format off
asm void func_0202c700(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r1, [r4, #0x0]
    mov r5, r0
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_0202c810
L_0202c71c:
    b L_0202c810
    b L_0202c730
    b L_0202c764
    b L_0202c798
    b L_0202c7d4
L_0202c730:
    cmp r5, r2
    ldmeqfd sp!, {r3, r4, r5, pc}
    mov r3, #0x6
L_0202c73c:
    ldrb r0, [r2, #0x0]
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0202c73c
    ldmfd sp!, {r3, r4, r5, pc}
L_0202c764:
    ldr r1, [r4, #0x4]
    ldr r0, [r2, #0x0]
    add r0, r1, r0
    str r0, [r5, #0x0]
    ldr r1, [r4, #0x8]
    ldr r0, [r2, #0x4]
    add r0, r1, r0
    str r0, [r5, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r2, #0x8]
    add r0, r1, r0
    str r0, [r5, #0x8]
    ldmfd sp!, {r3, r4, r5, pc}
L_0202c798:
    add r1, r4, #0x1c
    bl func_0202c680
    ldr r1, [r5, #0x0]
    ldr r0, [r4, #0x4]
    add r0, r1, r0
    str r0, [r5, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, [r4, #0x8]
    add r0, r1, r0
    str r0, [r5, #0x4]
    ldr r1, [r5, #0x8]
    ldr r0, [r4, #0xc]
    add r0, r1, r0
    str r0, [r5, #0x8]
    ldmfd sp!, {r3, r4, r5, pc}
L_0202c7d4:
    add r1, r4, #0x40
    bl func_0202c680
    ldr r1, [r5, #0x0]
    ldr r0, [r4, #0x4]
    add r0, r1, r0
    str r0, [r5, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, [r4, #0x8]
    add r0, r1, r0
    str r0, [r5, #0x4]
    ldr r1, [r5, #0x8]
    ldr r0, [r4, #0xc]
    add r0, r1, r0
    str r0, [r5, #0x8]
    ldmfd sp!, {r3, r4, r5, pc}
L_0202c810:
    mov r1, #0x5
    mov r0, #0x0
    str r1, [r0, #0x0]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
