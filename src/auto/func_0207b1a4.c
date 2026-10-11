#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207b120();
extern void func_0207cf3c();
extern void func_0207cfd0();
extern void func_0207ee34();
extern char data_020dfe50[];
// clang-format off
asm void func_0207b1a4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r1, =data_020dfe50
    mov r5, #0x0
    ldr r6, [r1, #0x0]
    ldr r9, [sp, #0x38]
    swpb r1, r5, [r6]
    add r4, r6, #0x1
    swpb r1, r5, [r4]
    mov r10, r0
    mov r1, #0x1
    strh r1, [r9, #0x0]
    ldrsh r0, [r10, #0x38]
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    cmp r0, #0x0
    add r4, r6, #0x2
    ble L_0207b3e8
L_0207b1ec:
    ldr r1, [r10, #0xc]
    mov r0, r5, lsl #0x1
    ldrsh r0, [r1, r0]
    cmp r0, #0x1
    beq L_0207b214
    cmp r0, #0x7
    beq L_0207b2c4
    cmp r0, #0x8
    beq L_0207b348
    b L_0207b3d0
L_0207b214:
    ldr r0, [r10, #0x10]
    mov r6, #0x0
    ldr r7, [r0, r5, lsl #0x2]
    ldrsh r0, [r7, #0x4]
    cmp r0, #0x0
    ble L_0207b3d0
    mov r11, r6
    mov r8, r6
L_0207b234:
    ldr r0, [r7, #0x8]
    ldr r2, [r10, #0x0]
    ldr r1, [sp, #0xc]
    add r3, r0, r8
    str r1, [sp, #0x0]
    ldr r1, [sp, #0x10]
    mov ip, #0xc
    str r1, [sp, #0x4]
    mov r1, #0x0
    str r1, [sp, #0x8]
    ldrsh r1, [r3, #0x2]
    ldrsh r0, [r0, r8]
    ldrsh r3, [r3, #0x4]
    smlabb r1, r1, ip, r2
    smlabb r0, r0, ip, r2
    smlabb r2, r3, ip, r2
    ldr r3, [r7, #0x10]
    add r3, r3, r11
    bl func_0207ee34
    cmp r0, #0x0
    beq L_0207b2a0
    mov r0, r4
    mov r1, r5
    mov r2, r6
    mov r3, r9
    bl func_0207b120
    mov r4, r0
L_0207b2a0:
    add r11, r11, #0xc
    add r8, r8, #0x6
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r1, [r7, #0x4]
    cmp r1, r0, asr #0x10
    bgt L_0207b234
    b L_0207b3d0
L_0207b2c4:
    ldr r0, [r10, #0x10]
    mov r8, #0x0
    ldr r6, [r0, r5, lsl #0x2]
    ldrsh r0, [r6, #0x4]
    cmp r0, #0x0
    ble L_0207b3d0
    mov r7, r8
    mov r11, #0xc
L_0207b2e4:
    ldr r1, [r6, #0x0]
    ldr r3, [r10, #0x0]
    add r0, r1, r7
    ldrsh r0, [r0, #0x8]
    ldr r1, [r1, r7]
    ldr r2, [sp, #0xc]
    smlabb r0, r0, r11, r3
    ldr r3, [sp, #0x10]
    bl func_0207cfd0
    cmp r0, #0x0
    beq L_0207b328
    mov r0, r4
    mov r1, r5
    mov r2, r8
    mov r3, r9
    bl func_0207b120
    mov r4, r0
L_0207b328:
    ldrsh r1, [r6, #0x4]
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    add r7, r7, #0xc
    mov r8, r0, asr #0x10
    bgt L_0207b2e4
    b L_0207b3d0
L_0207b348:
    ldr r0, [r10, #0x10]
    mov r8, #0x0
    ldr r6, [r0, r5, lsl #0x2]
    ldrsh r0, [r6, #0x4]
    cmp r0, #0x0
    ble L_0207b3d0
    mov r7, r8
    mov r11, #0xc
L_0207b368:
    ldr r0, [r6, #0x0]
    ldr r1, [r10, #0x0]
    add r2, r0, r7
    ldrsh ip, [r0, r7]
    ldrsh r3, [r2, #0x2]
    mov r0, #0xc
    smlabb r0, ip, r0, r1
    smlabb r1, r3, r11, r1
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    bl func_0207cf3c
    cmp r0, #0x0
    beq L_0207b3b4
    mov r0, r4
    mov r1, r5
    mov r2, r8
    mov r3, r9
    bl func_0207b120
    mov r4, r0
L_0207b3b4:
    ldrsh r1, [r6, #0x4]
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    add r7, r7, #0x8
    mov r8, r0, asr #0x10
    bgt L_0207b368
L_0207b3d0:
    ldrsh r1, [r10, #0x38]
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    mov r5, r0, asr #0x10
    bgt L_0207b1ec
L_0207b3e8:
    ldr r0, =data_020dfe50
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
