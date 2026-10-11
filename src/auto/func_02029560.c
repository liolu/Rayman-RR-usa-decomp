#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void HIE_fn_bInitCameraMatrixStack();
extern void func_02029088();
extern void func_02029390();
extern void func_0204a1b0();
extern void func_0204a250();
extern char data_020c75b8[];
extern char data_020dba76[];
extern char data_020dc19c[];
extern char data_020e4c64[];
// clang-format off
asm void func_02029560(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r11, sp
    ldr r6, [r2, #0x4]
    mov r10, r0
    ldr r0, [r6, #0x24]
    str r2, [r11, #0x4]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x2
    rsb r0, r0, #0x0
    bic r0, r0, #0x7
    mov r8, r1
    str r3, [r11, #0x8]
    add sp, sp, r0
    ldr r5, [r6, #0x14]
    add r4, sp, #0x4
    cmp r5, #0x0
    mov r0, #0x0
    beq L_020295d0
L_020295ac:
    cmp r5, r0
    beq L_020295d0
    ldr r1, [r5, #0x0]
    mov r0, r8
    bl func_0204a1b0
    mov r0, r5
    ldr r5, [r5, #0x4]
    cmp r5, #0x0
    bne L_020295ac
L_020295d0:
    ldr r0, [r6, #0x24]
    ldr r5, [r6, #0x20]
    cmp r0, #0x0
    mov r9, #0x0
    ble L_0202963c
L_020295e4:
    ldr r0, [r5, #0x4]
    mov r1, #0x0
    ldr r0, [r0, #0x4]
    ldr r7, [r0, #0x14]
    cmp r7, #0x0
    beq L_02029620
L_020295fc:
    cmp r7, r1
    beq L_02029620
    ldr r1, [r7, #0x0]
    mov r0, r8
    bl func_0204a1b0
    mov r1, r7
    ldr r7, [r7, #0x4]
    cmp r7, #0x0
    bne L_020295fc
L_02029620:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    ldr r1, [r6, #0x24]
    mov r9, r0, asr #0x10
    cmp r1, r0, asr #0x10
    add r5, r5, #0x8
    bgt L_020295e4
L_0202963c:
    mov r0, r8
    bl HIE_fn_bInitCameraMatrixStack
    ldr r0, =data_020e4c64
    ldr r1, =data_020dba76
    ldrb r2, [r0, #0x0]
    mov r0, #0x0
    swpb r0, r0, [r1]
    cmp r2, #0x0
    bne L_02029698
    ldr r0, =data_020c75b8
    mov r5, #0x1
    add r7, r0, #0x1
    ldr r2, [r11, #0x4]
    ldr r3, [r11, #0x8]
    mov r0, r10
    mov r1, r8
    swpb r5, r5, [r7]
    bl func_02029088
    ldr r1, =data_020c75b8
    str r0, [r4, #0x0]
    add r1, r1, #0x1
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02029698:
    ldr r0, =data_020e4c64
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02029720
    ldr r0, [r6, #0x24]
    ldr r7, [r6, #0x20]
    cmp r0, #0x0
    mov r5, #0x0
    ble L_02029720
    ldr r1, =data_020dba76
    mov r0, r5
    ldr r2, =data_020dc19c
    swpb r0, r0, [r1]
    add r9, r2, #0xc00
L_020296d0:
    ldrsb r0, [r9, #0x80]
    cmp r0, #0x1
    beq L_020296e8
    ldrsb r0, [r7, #0x2]
    cmp r0, #0x2
    beq L_02029704
L_020296e8:
    ldr r2, [r7, #0x4]
    ldr r3, [r11, #0x8]
    mov r0, r10
    mov r1, r8
    bl func_02029088
    add r1, r4, r5, lsl #0x2
    str r0, [r1, #0x4]
L_02029704:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    ldr r1, [r6, #0x24]
    mov r5, r0, asr #0x10
    cmp r1, r0, asr #0x10
    add r7, r7, #0x8
    bgt L_020296d0
L_02029720:
    ldr r5, [r4, #0x0]
    ldr r2, [r11, #0x4]
    ldr r3, [r11, #0x8]
    mov r0, r10
    mov r1, r8
    str r5, [sp, #0x0]
    bl func_02029390
    ldr r0, [r6, #0x24]
    ldr r5, [r6, #0x20]
    cmp r0, #0x0
    mov r7, #0x0
    ble L_020297bc
    ldr r0, =data_020dc19c
    add r9, r0, #0xc00
L_02029758:
    ldr r0, =data_020e4c64
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02029780
    ldrsb r0, [r9, #0x80]
    cmp r0, #0x1
    beq L_02029780
    ldrsb r0, [r5, #0x2]
    cmp r0, #0x2
    beq L_020297a0
L_02029780:
    add r0, r4, r7, lsl #0x2
    ldr r1, [r0, #0x4]
    ldr r3, [r11, #0x8]
    str r1, [sp, #0x0]
    ldr r2, [r5, #0x4]
    mov r0, r10
    mov r1, r8
    bl func_02029390
L_020297a0:
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    ldr r1, [r6, #0x24]
    mov r7, r0, asr #0x10
    cmp r1, r0, asr #0x10
    add r5, r5, #0x8
    bgt L_02029758
L_020297bc:
    mov r0, r8
    bl func_0204a250
    add sp, r11, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
