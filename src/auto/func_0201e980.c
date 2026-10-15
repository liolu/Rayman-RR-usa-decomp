#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void SND_SetPlayerVolume();
extern void func_0201ea9c();
extern void func_0201f484();
extern char data_020bb604[];
extern char data_020c4a64[];
extern char func_0201e5bc[];
extern char func_0201e810[];
// clang-format off
asm void func_0201e980(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020c4a64
    mov r4, r0
    ldr r3, [r2, #0x20]
    ldr r1, [r3, #0x38]
    ldr r0, [r3, #0x30]
    sub r0, r1, r0
    str r0, [r3, #0x38]
    ldr r1, [r2, #0x20]
    ldr r0, [r1, #0x38]
    add r1, r1, #0x3c
    mov r0, r0, asr #0xc
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x20]
    ldr r0, [r1, #0x38]
    cmp r0, #0x0
    bge L_0201ea14
    add r1, r1, #0x3c
    mov r3, #0x0
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x20]
    ldr r1, [r0, #0x4c]
    cmp r1, #0x0
    beq L_0201ea00
    str r3, [r0, #0x4c]
    ldr r0, [r2, #0x20]
    mov r1, #0x1
    str r1, [r0, #0x50]
    ldr r0, [r2, #0x20]
    ldr r1, =func_0201e5bc
    str r1, [r0, #0x18]
    b L_0201ea14
L_0201ea00:
    bl func_0201f484
    ldr r0, =data_020c4a64
    ldr r1, =func_0201e810
    ldr r0, [r0, #0x20]
    str r1, [r0, #0x18]
L_0201ea14:
    ldr r0, =data_020c4a64
    ldr r2, [r0, #0x20]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    ldreq r0, [r2, #0x34]
    moveq r0, r0, asr #0xc
    rsbeq r0, r0, r0, lsl #0x8
    beq L_0201ea44
    ldrsb r0, [r2, #0x3c]
    ldrsb r1, [r2, #0x3d]
    mov r0, r0, lsl #0x1
    mul r0, r1, r0
L_0201ea44:
    strh r0, [r2, #0x3e]
    ldr r0, =data_020c4a64
    ldr r1, =data_020bb604
    ldr r2, [r0, #0x20]
    mov r0, #0x0
    ldrsh r2, [r2, #0x3e]
    mov r2, r2, asr #0x8
    mov r2, r2, lsl #0x1
    ldrsh r1, [r1, r2]
    bl SND_SetPlayerVolume
    ldr r0, =data_020c4a64
    ldr r0, [r0, #0x20]
    ldr r0, [r0, #0x4c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    mov r0, r4
    bl func_0201ea9c
    ldmfd sp!, {r4, pc}
}
// clang-format on
