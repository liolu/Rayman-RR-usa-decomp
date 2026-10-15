#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void SND_SetTrackMute();
extern void SND_SetPlayerVolume();
extern void SND_StopSeq();
extern void SND_StartSeq();
extern void SND_GetPlayerStatus();
extern void SND_DestroyWaveArc();
extern void func_0201fc34();
extern void func_0201fc70();
extern void func_0201fc74();
extern char data_020bb604[];
extern char data_020c4a64[];
extern char data_020c4a8c[];
extern char func_0201e598[];
extern char func_0201e810[];
// clang-format off
asm void func_0201f198(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r4, r3
    bl func_0201fc70
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    bne L_0201f1d0
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_0201f1d0:
    ldr r2, [r0, #0x1c]
    mov r3, #0x0
    str r2, [r0, #0x20]
L_0201f1dc:
    ldr r1, [r2, #0x4]
    cmp r1, #0x0
    ldreq r1, [r2, #0x8]
    cmpeq r1, #0x0
    bne L_0201f428
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x24]
    cmp r1, #0x0
    beq L_0201f250
    mov r0, #0x0
    str r0, [r1, #0x10]
    bl SND_GetPlayerStatus
    tst r0, #0x1
    beq L_0201f220
    mov r0, #0x0
    bl SND_StopSeq
    bl func_0201fc34
L_0201f220:
    ldr r0, =data_020c4a64
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    beq L_0201f244
    bl SND_DestroyWaveArc
    bl func_0201fc34
    ldr r0, =data_020c4a64
    mov r1, #0x0
    str r1, [r0, #0x14]
L_0201f244:
    ldr r0, =data_020c4a64
    mov r1, #0x0
    str r1, [r0, #0x24]
L_0201f250:
    ldr r3, =data_020c4a64
    ldr r6, [sp, #0x10]
    ldr r1, [r3, #0x20]
    mov r0, #0x0
    str r0, [r1, #0xc]
    ldr r2, [r6, #0x14]
    ldr r1, [r3, #0x20]
    ldr lr, [sp, #0x20]
    str r2, [r1, #0x14]
    ldr r1, [r3, #0x20]
    ldrb r6, [r6, #0xc]
    add r2, r1, #0x3c
    mov ip, #0x1
    swpb r1, r6, [r2]
    ldr r6, [r3, #0x20]
    ldr r1, =data_020c4a8c
    ldrsb r2, [r6, #0x3c]
    mov r2, r2, lsl #0xc
    str r2, [r6, #0x34]
    ldr r2, [r3, #0x20]
    str r4, [r2, #0x24]
    ldr r2, [r3, #0x20]
    str lr, [r2, #0x2c]
    ldr r2, [r3, #0x20]
    str ip, [r2, #0x0]
    ldr r2, [r3, #0x20]
    str ip, [r2, #0x4]
    ldr r2, [r3, #0x20]
    str r0, [r2, #0x8]
    ldr r2, [r3, #0x20]
    str r0, [r2, #0x10]
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    ldrne r2, [r3, #0x14]
    cmpne r2, #0x0
    beq L_0201f360
    ldr r3, [r3, #0x10]
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
L_0201f360:
    ldr r1, [sp, #0x10]
    ldr r0, =data_020c4a64
    ldr r1, [r1, #0x0]
    cmp r5, #0x0
    str r1, [r0, #0x18]
    beq L_0201f3f4
    ldr r1, [r5, #0x20]
    tst r1, #0x4
    beq L_0201f3ac
    ldr r2, [r0, #0x20]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    beq L_0201f3ac
    ldrb r1, [r5, #0x4]
    ldrsb r0, [r2, #0x3c]
    smulbb r0, r1, r0
    mov r0, r0, lsl #0x1
    strh r0, [r2, #0x3e]
    b L_0201f3c0
L_0201f3ac:
    ldr r0, =data_020c4a64
    ldr r1, [r0, #0x20]
    ldrsb r0, [r1, #0x3c]
    rsb r0, r0, r0, lsl #0x8
    strh r0, [r1, #0x3e]
L_0201f3c0:
    ldr r2, =data_020c4a64
    ldrb r4, [r5, #0x4]
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
L_0201f3f4:
    ldr r0, =data_020c4a64
    ldr r3, =func_0201e598
    ldr r2, [r0, #0x20]
    ldr r1, =func_0201e810
    str r3, [r2, #0x18]
    ldr r0, [r0, #0x20]
    str r1, [r0, #0x20]
    bl func_0201fc74
    ldr r0, =data_020c4a64
    ldr r0, [r0, #0x20]
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_0201f428:
    add r2, r2, #0x54
    add r3, r3, #0x1
    str r2, [r0, #0x20]
    cmp r3, #0x2
    blt L_0201f1dc
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
