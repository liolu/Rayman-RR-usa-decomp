#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void HIE_fn_bInitCameraMatrixStack();
extern void func_0201ad68();
extern void func_02048e44();
extern void func_02048e54();
extern void func_02048e84();
extern void func_0204a270();
extern void func_0204a284();
extern char data_020c3e8c[];
extern char data_020c3f10[];
extern char data_020db92c[];
// clang-format off
asm void func_0201b024(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r2, =data_020db92c
    mov r3, #0x0
    ldrsb r8, [r2, #0x0]
    mov r10, r0
    mov r9, r1
    swpb r0, r3, [r2]
    bl func_0204a284
    bl func_02048e54
    mov r11, r0
    bl func_02048e84
    cmp r0, #0x0
    bne L_0201b060
    mov r0, #0x0
    bl func_02048e44
L_0201b060:
    mov r0, r10
    bl HIE_fn_bInitCameraMatrixStack
    ldr r4, =data_020c3e8c
    mov r6, #0x0
    ldrsh r0, [r4, #0x0]
    ldr r7, =data_020c3f10
    cmp r0, #0x0
    ble L_0201b0b4
    mov r5, r6
L_0201b084:
    ldr r1, [r7], #0x4
    mov r0, r10
    ldr r2, [r1, #0x2c]
    mov r3, r5
    and r2, r9, r2
    bl func_0201ad68
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    ldrsh r1, [r4, #0x0]
    mov r6, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_0201b084
L_0201b0b4:
    mov r0, r11
    bl func_02048e44
    ldr r1, =data_020db92c
    cmp r8, #0x0
    swpb r0, r8, [r1]
    beq L_0201b0d0
    bl func_0204a270
L_0201b0d0:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
