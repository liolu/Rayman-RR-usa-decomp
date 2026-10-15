#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void SND_UnlockChannel();
extern void SND_StopTimer();
extern void SND_GetCurrentCommandTag();
extern void SND_WaitForCommandProc();
extern void SND_FlushCommand();
extern void func_0201fc78();
extern void func_02020208();
extern char data_020c4b38[];
extern char data_020c4b9c[];
extern char data_020c4ba0[];
// clang-format off
asm void func_0202032c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x0]
    tst r1, #0x1
    beq L_0202048c
    ldr r0, [r4, #0x20]
    mov r1, #0x0
    ldrh r0, [r0, #0x4]
    mov r2, r1
    mov r3, r1
    bl SND_StopTimer
    ldr r0, [r4, #0x20]
    mov r1, #0x0
    ldrh r0, [r0, #0x4]
    bl SND_UnlockChannel
    bl SND_GetCurrentCommandTag
    mov r5, r0
    mov r0, #0x1
    bl SND_FlushCommand
    mov r0, r5
    bl SND_WaitForCommandProc
    ldr r0, [r4, #0x20]
    ldr r2, =data_020c4b38
    ldrh r1, [r0, #0x4]
    ldr r3, [r2, #0x10]
    mov r0, #0x0
    mvn r1, r1
    and r1, r3, r1
    str r1, [r2, #0x10]
    ldr r3, [r2, #0x14]
    ldr r1, =data_020c4ba0
    sub r3, r3, #0x1
    str r3, [r2, #0x14]
    ldr r3, [r4, #0x0]
    ldr r2, =data_020c4b9c
    bic r3, r3, #0x1
    bic r3, r3, #0x8
    str r3, [r4, #0x0]
    ldr r3, [r4, #0x20]
    ldr ip, =0xffff
    strh r0, [r3, #0x4]
    ldr r3, [r4, #0x20]
    ldr lr, [r1, #0x0]
    ldr r3, [r3, #0x0]
    ldr r1, [r2, #0x0]
    add lr, lr, r3
    sub r2, lr, #0x10
    add r3, r2, #0x8
    swpb r0, r0, [r3]
    ldr r0, [lr, #-0x10]
    ldr lr, [r1, r0, lsl #0x4]
    cmp lr, ip
    beq L_02020434
    add r0, r1, r0, lsl #0x4
    ldrb r0, [r0, #0x8]
    tst r0, #0x1
    bne L_02020434
    sub r3, r2, r1
    mov r0, r3, asr #0x3
    add r0, r3, r0, lsr #0x1c
    mov r3, r0, asr #0x4
    add r0, r1, lr, lsl #0x4
    str r3, [r0, #0x4]
    ldr r0, [r2, #0x0]
    ldr r0, [r1, r0, lsl #0x4]
    str r0, [r2, #0x0]
L_02020434:
    ldr r3, [r2, #0x4]
    ldr r0, =0xffff
    cmp r3, r0
    beq L_0202046c
    add r0, r1, r3, lsl #0x4
    ldrb r0, [r0, #0x8]
    tst r0, #0x1
    bne L_0202046c
    ldr r0, [r2, #0x0]
    add r0, r1, r0, lsl #0x4
    str r3, [r0, #0x4]
    ldr r3, [r2, #0x0]
    ldr r0, [r2, #0x4]
    str r3, [r1, r0, lsl #0x4]
L_0202046c:
    ldr r0, [r4, #0x0]
    tst r0, #0x4
    mov r0, r4
    beq L_02020484
    bl func_02020208
    ldmfd sp!, {r3, r4, r5, pc}
L_02020484:
    bl func_0201fc78
    ldmfd sp!, {r3, r4, r5, pc}
L_0202048c:
    bl func_0201fc78
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
