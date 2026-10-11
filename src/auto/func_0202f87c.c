#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0200eb98();
extern void func_0202f7a4();
extern char data_020cf6b0[];
// clang-format off
asm void func_0202f87c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    str r7, [r8, #0x24]
    add r0, r8, #0x30
    str r0, [r8, #0x28]
    ldr r1, [r7, #0x4]
    mov r2, #0x40
    str r1, [r8, #0x2c]
    ldr r1, [r7, #0x0]
    bl func_02001588
    ldr r1, [r8, #0x70]
    ldr r0, =data_020cf6b0
    str r1, [r8, #0x40]
    ldr r1, [r0, #0x0]
    mov r3, #0x0
    cmp r1, #0x0
    ble L_0202f8ec
    mov r4, r3
L_0202f8c8:
    ldr r2, [r8, #0x74]
    ldr r1, [r8, #0x70]
    add r2, r2, r4
    str r2, [r1, r3, lsl #0x2]
    ldr r1, [r0, #0x0]
    add r3, r3, #0x1
    cmp r3, r1
    add r4, r4, #0xc
    blt L_0202f8c8
L_0202f8ec:
    ldr r2, [r7, #0x0]
    mov r4, #0x0
    ldrsh r0, [r2, #0x38]
    mov r6, r4
    cmp r0, #0x0
    ble L_0202f980
    mov r5, r4
L_0202f908:
    ldr r1, [r2, #0xc]
    mov r0, r6, lsl #0x1
    ldrsh r0, [r1, r0]
    cmp r0, #0x1
    beq L_0202f968
    ldr r0, [r2, #0x10]
    ldr r1, [r8, #0x74]
    ldr r3, [r0, r6, lsl #0x2]
    add ip, r1, r5
    mov r2, #0x6
L_0202f930:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0202f930
    ldr r0, [r7, #0x0]
    ldr r0, [r0, #0x10]
    ldr r0, [r0, r6, lsl #0x2]
    bl func_0202f7a4
    add r4, r4, r0
L_0202f968:
    ldr r2, [r7, #0x0]
    add r6, r6, #0x1
    ldrsh r0, [r2, #0x38]
    add r5, r5, #0xc
    cmp r6, r0
    blt L_0202f908
L_0202f980:
    ldr r0, =0x1d4c
    cmp r4, r0
    ldmlsfd sp!, {r4, r5, r6, r7, r8, pc}
    bl func_0200eb98
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
