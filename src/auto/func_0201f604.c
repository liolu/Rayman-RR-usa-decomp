#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void SND_SetTrackMute();
extern void SND_SetPlayerVolume();
extern void SND_StopSeq();
extern void SND_StartSeq();
extern void SND_GetPlayerStatus();
extern void SND_DestroyWaveArc();
extern void func_0201ecb0();
extern void func_0201fc34();
extern void func_0201fc70();
extern void func_0201fc74();
extern char data_020bb604[];
extern char data_020c4a64[];
extern char data_020c4a8c[];
extern char func_0201e598[];
extern char func_0201ea9c[];
// clang-format off
asm void func_0201f604(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r2
    mov r5, r3
    ldr r4, [sp, #0x20]
    bl func_0201fc70
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    bne L_0201f640
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_0201f640:
    ldr r2, [r0, #0x1c]
    mov r3, #0x0
    str r2, [r0, #0x20]
L_0201f64c:
    ldr r1, [r2, #0x4]
    cmp r1, #0x0
    ldreq r1, [r2, #0x8]
    cmpeq r1, #0x0
    bne L_0201f89c
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x24]
    cmp r1, #0x0
    beq L_0201f6c0
    mov r0, #0x0
    str r0, [r1, #0x10]
    bl SND_GetPlayerStatus
    tst r0, #0x1
    beq L_0201f690
    mov r0, #0x0
    bl SND_StopSeq
    bl func_0201fc34
L_0201f690:
    ldr r0, =data_020c4a64
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    beq L_0201f6b4
    bl SND_DestroyWaveArc
    bl func_0201fc34
    ldr r0, =data_020c4a64
    mov r1, #0x0
    str r1, [r0, #0x14]
L_0201f6b4:
    ldr r0, =data_020c4a64
    mov r1, #0x0
    str r1, [r0, #0x24]
L_0201f6c0:
    add r0, sp, #0x10
    ldr r0, [r0, #0x0]
    bl func_0201ecb0
    cmp r0, #0x0
    beq L_0201f884
    ldr r2, =data_020c4a64
    ldr r0, [sp, #0x14]
    ldr r1, [r2, #0x20]
    ldr r3, [sp, #0x10]
    str r0, [r1, #0x44]
    ldr r1, [r3, #0x14]
    ldr r0, [r2, #0x20]
    mov ip, #0x1
    str r1, [r0, #0x14]
    ldr r0, [r2, #0x20]
    ldrb lr, [r3, #0xc]
    add r1, r0, #0x3c
    mov r3, #0x0
    swpb r0, lr, [r1]
    cmp r4, #0x0
    ldr r1, [r2, #0x20]
    ldrsb r0, [r1, #0x3c]
    mov r0, r0, lsl #0xc
    str r0, [r1, #0x34]
    ldr r0, [r2, #0x20]
    str r6, [r0, #0x24]
    ldr r0, [r2, #0x20]
    str r5, [r0, #0x28]
    ldr r0, [r2, #0x20]
    str ip, [r0, #0x0]
    ldr r0, [r2, #0x20]
    str ip, [r0, #0x4]
    ldr r0, [r2, #0x20]
    str r3, [r0, #0x8]
    beq L_0201f7c8
    ldr r0, [r4, #0x20]
    tst r0, #0x4
    beq L_0201f780
    ldr r2, [r2, #0x20]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    beq L_0201f780
    ldrb r1, [r4, #0x4]
    ldrsb r0, [r2, #0x3c]
    smulbb r0, r1, r0
    mov r0, r0, lsl #0x1
    strh r0, [r2, #0x3e]
    b L_0201f794
L_0201f780:
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x20]
    ldrsb r0, [r1, #0x3c]
    rsb r0, r0, r0, lsl #0x8
    strh r0, [r1, #0x3e]
L_0201f794:
    ldr r2, =data_020c4a64
    ldrb r4, [r4, #0x4]
    ldr r0, [r2, #0x20]
    ldr r3, =data_020bb604
    add r1, r0, #0x3d
    swpb r0, r4, [r1]
    mov r0, #0x0
    ldr r1, [r2, #0x20]
    ldrsh r1, [r1, #0x3e]
    mov r1, r1, asr #0x8
    mov r1, r1, lsl #0x1
    ldrsh r1, [r3, r1]
    bl SND_SetPlayerVolume
L_0201f7c8:
    ldr r0, =data_020c4a8c
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    ldrne r2, =data_020c4a64
    ldrne r0, [r2, #0x14]
    cmpne r0, #0x0
    beq L_0201f868
    mov r0, #0x0
    ldr r3, [r2, #0x10]
    mov r2, r0
    bl SND_StartSeq
    bl func_0201fc34
    ldr r0, =data_020c4a64
    ldr r1, =data_020bb604
    ldr r2, [r0, #0x20]
    mov r0, #0x0
    ldrsh r2, [r2, #0x3e]
    mov r2, r2, asr #0x8
    mov r2, r2, lsl #0x1
    ldrsh r1, [r1, r2]
    bl SND_SetPlayerVolume
    ldr r1, =data_020c4a64
    mov r0, #0x0
    ldr r1, [r1, #0x20]
    mov r2, #0x1
    ldrh r1, [r1, #0x40]
    bl SND_SetTrackMute
    ldr r1, =data_020c4a64
    mov r0, #0x0
    ldr r1, [r1, #0x20]
    mov r2, r0
    ldrh r1, [r1, #0x40]
    mvn r1, r1
    bl SND_SetTrackMute
    ldr r0, =data_020c4a64
    mov r2, #0x1
    ldr r1, [r0, #0x20]
    str r2, [r1, #0x10]
    ldr r1, [r0, #0x20]
    str r1, [r0, #0x24]
L_0201f868:
    ldr r0, =data_020c4a64
    ldr r3, =func_0201e598
    ldr r2, [r0, #0x20]
    ldr r1, =func_0201ea9c
    str r3, [r2, #0x18]
    ldr r0, [r0, #0x20]
    str r1, [r0, #0x20]
L_0201f884:
    bl func_0201fc74
    ldr r0, =data_020c4a64
    ldr r0, [r0, #0x20]
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_0201f89c:
    add r2, r2, #0x54
    add r3, r3, #0x1
    str r2, [r0, #0x20]
    cmp r3, #0x2
    blt L_0201f64c
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
