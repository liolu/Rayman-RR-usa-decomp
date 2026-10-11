#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f4();
extern void func_02009f08();
extern void func_02009f7c();
extern void func_0200a42c();
extern void func_0200a6a8();
extern void func_0200dd9c();
extern void func_0200de10();
extern void func_02017398();
extern void func_02077f2c();
extern void func_02077f80();
extern void func_020781b8();
extern void func_02078294();
extern void func_0207ab0c();
extern void func_0207ab5c();
extern char data_020be848[];
extern char data_020dfbb0[];
extern char data_020dfe24[];
// clang-format off
asm void func_02078e14(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r7, [r8, #0x14]
    mov r2, r1
    ldr r1, =data_020be848
    add r0, r7, #0x64
    mov r3, #0x0
    bl func_02077f2c
    cmp r0, #0x0
    bne L_02078e58
    mov r1, #0x0
    mov r0, r7
    mov r2, #0xc4
    str r1, [r8, #0x4]
    bl func_020015f4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02078e58:
    mov r1, #0x1
    mov r0, #0x0
    str r1, [r8, #0x4]
    str r0, [r8, #0x94]
    str r0, [r8, #0xa4]
    sub r1, r0, #0x1
    mov r2, #0x34
    str r0, [r8, #0xa8]
    bl func_0200de10
    mov r6, r0
    mov r1, r6
    add r0, r7, #0x64
    mov r2, #0x0
    mov r3, #0x34
    bl func_02077f80
    ldrsh r3, [r6, #0x8]
    add r1, r7, #0xc1
    add r2, r7, #0xc2
    strh r3, [r7, #0x0]
    ldrsh r4, [r6, #0xa]
    add r3, r7, #0xc3
    add r5, r7, #0xc0
    strh r4, [r7, #0x2]
    ldrsh ip, [r6, #0xc]
    mov r4, r0
    strh ip, [r7, #0x4]
    ldrsh r0, [r6, #0xe]
    strh r0, [r7, #0x6]
    ldrsh r0, [r6, #0x10]
    strh r0, [r7, #0x10]
    ldrsh r0, [r6, #0x16]
    strh r0, [r7, #0x12]
    ldrsb r0, [r6, #0x31]
    swpb r0, r0, [r1]
    ldrsb r0, [r6, #0x32]
    swpb r0, r0, [r2]
    ldrsb r0, [r6, #0x33]
    swpb r0, r0, [r3]
    ldrsh r1, [r7, #0x4]
    ldrsb r0, [r7, #0xc2]
    mov r0, r1, lsl r0
    mov r0, r0, asr #0x1
    strh r0, [r7, #0xc]
    ldrsh r0, [r7, #0x4]
    mov r0, r0, asr #0x3
    strh r0, [r7, #0x8]
    ldrsh r0, [r7, #0x6]
    mov r0, r0, asr #0x3
    strh r0, [r7, #0xa]
    ldrb r0, [r6, #0x30]
    swpb r0, r0, [r5]
    ldr r0, [r6, #0x0]
    str r0, [r7, #0xb8]
    ldr r0, [r6, #0x4]
    str r0, [r7, #0xbc]
    cmp r0, #0x0
    bne L_02078ff8
    add r5, r7, #0x40
    add r3, r6, #0x18
    mov r2, #0xc
L_02078f48:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_02078f48
    ldr r0, [r7, #0x44]
    ldr r1, [r7, #0x50]
    bl func_02009f08
    moveq r0, #0x3f800000
    beq L_02078fac
    ldrsh r1, [r7, #0x4a]
    ldrsh r0, [r7, #0x56]
    sub r0, r1, r0
    bl func_0200a42c
    mov r5, r0
    ldr r0, [r7, #0x44]
    ldr r1, [r7, #0x50]
    bl func_0200a6a8
    mov r1, r0
    mov r0, r5
    bl func_02009f7c
L_02078fac:
    str r0, [r7, #0x5c]
    ldr r0, [r7, #0x40]
    ldr r1, [r7, #0x4c]
    bl func_02009f08
    moveq r0, #0x3f800000
    streq r0, [r7, #0x58]
    beq L_02078ff8
    ldrsh r1, [r7, #0x48]
    ldrsh r0, [r7, #0x54]
    sub r0, r1, r0
    bl func_0200a42c
    mov r5, r0
    ldr r0, [r7, #0x40]
    ldr r1, [r7, #0x4c]
    bl func_0200a6a8
    mov r1, r0
    mov r0, r5
    bl func_02009f7c
    str r0, [r7, #0x58]
L_02078ff8:
    ldr r0, [r7, #0xb8]
    cmp r0, #0x0
    beq L_020790f0
    mov r0, #0x0
    str r0, [r7, #0x34]
    ldrsh r2, [r6, #0x12]
    ldr r1, =0x6fe0
    ldr r0, =data_020dfe24
    strh r2, [r8, #0x70]
    ldrsh r2, [r6, #0x12]
    sub r1, r1, r2
    str r1, [r8, #0x6c]
    bl func_0207ab0c
    mov r0, #0x0
    ldrsh r2, [r6, #0x12]
    sub r1, r0, #0x1
    bl func_0200de10
    ldr r1, =data_020dfbb0
    mov r5, r0
    ldr r0, [r1, #0x0]
    ldrsh r3, [r6, #0x14]
    ldr r1, [r0, #0x1c]
    mov r2, r4
    add r0, r7, #0x64
    bl func_02077f80
    mov r4, r0
    ldr r0, =data_020dfbb0
    ldr r1, [r8, #0x6c]
    ldr r3, [r0, #0x0]
    mov r0, r1, asr #0x4
    add r0, r1, r0, lsr #0x1b
    mov r0, r0, lsl #0xb
    ldr r1, [r3, #0x20]
    mov r2, r0, lsr #0x10
    ldr r0, [r3, #0x1c]
    mov r1, r1, asr #0x1
    bl func_020781b8
    mov r2, r4
    add r0, r7, #0x64
    mov r1, r5
    mov r3, #0x20
    bl func_02077f80
    mov r4, r0
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x20
    bl func_02017398
    ldrsh r3, [r6, #0x12]
    add r0, r7, #0x64
    mov r2, r4
    mov r1, r5
    bl func_02077f80
    ldrsh r3, [r6, #0x12]
    ldr r0, =data_020dfe24
    ldr r1, [r8, #0x6c]
    mov r2, r5
    bl func_0207ab5c
    mov r0, #0x0
    mov r2, r5
    sub r1, r0, #0x1
    bl func_0200dd9c
    b L_0207913c
L_020790f0:
    ldrsh r0, [r7, #0x0]
    mov r0, r0, lsl #0x3
    bl func_02078294
    str r0, [r7, #0x34]
    ldrsh r3, [r7, #0x0]
    mov r1, r0
    mov r2, r4
    add r0, r7, #0x64
    mov r3, r3, lsl #0x3
    bl func_02077f80
    mov r2, r0
    mov r1, r6
    add r0, r7, #0x64
    mov r3, #0x20
    bl func_02077f80
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x20
    bl func_02017398
L_0207913c:
    ldr r3, [r8, #0xa4]
    mov r0, #0x0
    mov r2, r6
    sub r1, r0, #0x1
    str r3, [r8, #0xa8]
    bl func_0200dd9c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
