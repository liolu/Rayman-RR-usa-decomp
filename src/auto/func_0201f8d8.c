#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void SND_SetPlayerVolume();
extern void func_0201fc70();
extern void func_0201fc74();
extern char data_020bb604[];
extern char data_020c4a64[];
// clang-format off
asm void func_0201f8d8(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0201fc70
    bl func_0201fc70
    ldr r1, =data_020c4a64
    str r5, [r1, #0x20]
    ldr r0, [r4, #0x20]
    tst r0, #0x4
    beq L_0201f950
    ldr r0, [r5, #0x14]
    tst r0, #0x2
    beq L_0201f950
    ldrb r3, [r4, #0x4]
    ldrsb r0, [r5, #0x3c]
    ldrsh r2, [r5, #0x3e]
    smulbb r0, r3, r0
    mov r0, r0, lsl #0x11
    cmp r2, r0, asr #0x10
    mov r0, r0, asr #0x10
    beq L_0201f950
    strh r0, [r5, #0x3e]
    ldr r0, [r1, #0x20]
    ldr r1, =data_020bb604
    ldrsh r2, [r0, #0x3e]
    mov r0, #0x0
    mov r2, r2, asr #0x8
    mov r2, r2, lsl #0x1
    ldrsh r1, [r1, r2]
    bl SND_SetPlayerVolume
L_0201f950:
    ldr r0, =data_020c4a64
    ldrb r2, [r4, #0x4]
    ldr r0, [r0, #0x20]
    add r1, r0, #0x3d
    swpb r0, r2, [r1]
    bl func_0201fc74
    bl func_0201fc74
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
