#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff83a8();
extern void func_01ff84a0();
extern void func_01ff87ec();
// clang-format off
asm void func_0208d3e8(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r5, r1
    ldr r1, [r5, #0x0]
    mov r6, r0
    cmp r1, #0x0
    ldreq r0, [r5, #0x4]
    mov r4, r2
    cmpeq r0, #0x0
    ldreq r0, [r5, #0x8]
    cmpeq r0, #0x0
    beq L_0208d434
    ldr r0, [r6, #0x0]
    cmp r0, #0x0
    ldreq r0, [r6, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r6, #0x8]
    cmpeq r0, #0x0
    bne L_0208d440
L_0208d434:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0208d440:
    cmp r4, #0x0
    beq L_0208d52c
    cmp r4, r5
    cmpne r4, r6
    ldr r1, [r6, #0x8]
    bne L_0208d4c8
    ldmib r5, {r0, r2}
    ldr r3, [r6, #0x4]
    bl func_01ff87ec
    str r0, [sp, #0x0]
    ldr r0, [r5, #0x8]
    ldr r1, [r6, #0x0]
    ldr r2, [r5, #0x0]
    ldr r3, [r6, #0x8]
    bl func_01ff87ec
    str r0, [sp, #0x4]
    ldr r1, [r6, #0x4]
    ldr r3, [r6, #0x0]
    ldmia r5, {r0, r2}
    bl func_01ff87ec
    add ip, sp, #0x0
    mov r3, r4
    str r0, [sp, #0x8]
    mov r2, #0x6
L_0208d4a0:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208d4a0
    b L_0208d504
L_0208d4c8:
    ldmib r5, {r0, r2}
    ldr r3, [r6, #0x4]
    bl func_01ff87ec
    str r0, [r4, #0x0]
    ldr r0, [r5, #0x8]
    ldr r1, [r6, #0x0]
    ldr r2, [r5, #0x0]
    ldr r3, [r6, #0x8]
    bl func_01ff87ec
    str r0, [r4, #0x4]
    ldr r1, [r6, #0x4]
    ldr r3, [r6, #0x0]
    ldmia r5, {r0, r2}
    bl func_01ff87ec
    str r0, [r4, #0x8]
L_0208d504:
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    ldreq r0, [r4, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r4, #0x8]
    cmpeq r0, #0x0
    beq L_0208d52c
    mov r0, r4
    mov r1, r4
    bl func_01ff84a0
L_0208d52c:
    ldr r1, [r5, #0x4]
    ldr r0, [r6, #0x4]
    ldr r2, [r5, #0x0]
    mul r0, r1, r0
    ldr r1, [r6, #0x0]
    ldr r3, [r5, #0x8]
    mla r0, r2, r1, r0
    ldr r1, [r6, #0x8]
    mla r0, r3, r1, r0
    add r0, r0, #0x8
    mov r0, r0, asr #0x4
    bl func_01ff83a8
    add r0, r0, #0x80
    mov r0, r0, asr #0x8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
