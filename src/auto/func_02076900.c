#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02008a0c();
extern void func_02008d24();
extern void func_02008f00();
extern void func_02008f40();
extern void func_02008f7c();
extern void func_02009848();
extern void func_02009e50();
extern void func_02009eac();
extern void func_0200a334();
extern void func_0200a3b8();
extern void func_0200a4bc();
extern void func_0200a6a8();
extern void func_02075388();
extern void func_02075554();
extern char data_020bd8c7[];
extern char data_020bd8c8[];
extern char data_020be0d0[];
extern char data_020be0d2[];
extern char data_020be594[];
extern char data_020dc19c[];
extern char data_020de6a0[];
extern char data_020de76c[];
extern char data_020de774[];
extern char data_020de780[];
extern char data_020df7a0[];
// clang-format off
asm void func_02076900(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    add r0, r0, r1, lsl #0x2
    mov r10, r2
    cmp r1, #0x0
    ldr r2, [r0, #0x18]
    ldreq r0, =data_020be594
    moveq r1, #0x1
    streq r1, [r0, #0x18c]
    ldrb r0, [r2, #0x0]
    mov r9, r3
    tst r0, #0x10
    beq L_02076b90
    ldr r0, =data_020be594
    ldrb r4, [r2, #0x1]
    ldr r2, [r0, #0x18c]
    ldr r3, =data_020be0d0
    ldr r1, =data_020de774
    cmp r2, #0x0
    ldrb r6, [r3, r4, lsl #0x2]
    ldrb r5, [r1, #0x0]
    beq L_02076b08
    mov r1, #0x0
    str r1, [r0, #0x18c]
    ldr r0, [r0, #0x17c]
    bl func_0200a334
    ldr r2, =data_020be594
    mov r4, r0
    ldr r0, [r2, #0x180]
    mov r7, r1
    bl func_02008f00
    mov r2, r0
    mov r3, r1
    ldr r0, =0xbc6a7efa
    ldr r1, =0x3f789374
    bl func_02008f7c
    mov r11, r0
    ldr r0, =data_020dc19c
    mov r8, r1
    ldr r0, [r0, #0xbc]
    bl func_02008f40
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r8
    bl func_02008f7c
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r7
    bl func_02008a0c
    bl func_02008d24
    ldr r1, =data_020be594
    str r0, [r1, #0x17c]
    ldr r1, [r1, #0x184]
    bl func_02009e50
    bls L_020769fc
    ldr r0, =data_020be594
    mvn r1, #0x0
    str r1, [r0, #0x180]
    ldr r1, [r0, #0x184]
    str r1, [r0, #0x17c]
    b L_02076a24
L_020769fc:
    ldr r1, =data_020be594
    ldr r0, [r1, #0x17c]
    ldr r1, [r1, #0x188]
    bl func_02009eac
    bhs L_02076a24
    ldr r0, =data_020be594
    mov r1, #0x1
    str r1, [r0, #0x180]
    ldr r1, [r0, #0x188]
    str r1, [r0, #0x17c]
L_02076a24:
    ldr r0, =data_020be594
    mov r1, #0x0
    ldr r0, [r0, #0x17c]
    bl func_02009e50
    ldr r0, =0x45800000
    bls L_02076a58
    ldr r1, =data_020be594
    ldr r1, [r1, #0x17c]
    bl func_0200a4bc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_02009848
    b L_02076a6c
L_02076a58:
    ldr r1, =data_020be594
    ldr r1, [r1, #0x17c]
    bl func_0200a4bc
    mov r1, #0x3f000000
    bl func_0200a6a8
L_02076a6c:
    bl func_0200a3b8
    ldr r2, =data_020de6a0
    mov r1, #0x0
    str r0, [r2, #0x60]
    str r1, [r2, #0x64]
    ldr r0, =data_020be594
    str r1, [r2, #0x68]
    ldr r0, [r0, #0x17c]
    bl func_02009e50
    ldr r0, =0x45800000
    bls L_02076ab4
    ldr r1, =data_020be594
    ldr r1, [r1, #0x17c]
    bl func_0200a4bc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_02009848
    b L_02076ac8
L_02076ab4:
    ldr r1, =data_020be594
    ldr r1, [r1, #0x17c]
    bl func_0200a4bc
    mov r1, #0x3f000000
    bl func_0200a6a8
L_02076ac8:
    bl func_0200a3b8
    ldr r2, =data_020de6a0
    ldr r1, =data_020df7a0
    str r0, [r2, #0x6c]
    ldr r3, [r2, #0x60]
    add r1, r1, r5, lsl #0x5
    mov r3, r3, asr #0x4
    strh r3, [r1, #0x6]
    ldr r3, [r2, #0x64]
    mov r0, r0, asr #0x4
    mov r3, r3, asr #0x4
    strh r3, [r1, #0xe]
    ldr r2, [r2, #0x68]
    mov r2, r2, asr #0x4
    strh r2, [r1, #0x16]
    strh r0, [r1, #0x1e]
L_02076b08:
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #0x3c]
    sub r4, r1, r10
    sub r3, r0, r9
    cmp r4, #0x0
    cmpgt r3, #0x0
    movle r10, #0x0
    movle r9, #0xc1
    ble L_02076b5c
    mov r0, #0x24
    mul r2, r6, r0
    ldr r1, =data_020bd8c7
    ldr r0, =data_020bd8c8
    ldrb r1, [r1, r2]
    ldrb r0, [r0, r2]
    rsb r2, r4, r1, lsl #0x1
    rsb r1, r3, r0, lsl #0x1
    add r0, r2, r2, lsr #0x1f
    add r1, r1, r1, lsr #0x1f
    sub r10, r10, r0, asr #0x1
    sub r9, r9, r1, asr #0x1
L_02076b5c:
    ldr r0, =data_020de780
    mov r2, r5
    ldr r3, [r0, #0x0]
    mov r1, r6
    ldrb r0, [r3, #0x3]
    add r5, r3, #0x3
    mov r3, r10
    add r4, r0, #0x1
    swpb r4, r4, [r5]
    str r9, [sp, #0x0]
    bl func_02075388
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02076b90:
    ldrb r3, [r2, #0x1]
    ldr r0, =data_020be0d2
    ldr r2, =data_020be0d0
    ldrb r1, [r0, r3, lsl #0x2]
    ldrb r2, [r2, r3, lsl #0x2]
    cmp r1, #0x0
    bne L_02076bc4
    ldr r0, =data_020de76c
    ldr r0, [r0, #0x0]
    ldrb r1, [r0, #0x3]
    add r3, r0, #0x3
    add r0, r1, #0x1
    swpb r0, r0, [r3]
L_02076bc4:
    ldr r0, =data_020de780
    ldr r7, [sp, #0x38]
    ldr r3, [r0, #0x0]
    ldr r6, [sp, #0x3c]
    ldrb r0, [r3, #0x3]
    add r5, r3, #0x3
    mov r3, r10
    add r4, r0, #0x1
    swpb r4, r4, [r5]
    mov r4, #0x0
    str r9, [sp, #0x0]
    str r7, [sp, #0x4]
    str r6, [sp, #0x8]
    str r4, [sp, #0xc]
    bl func_02075554
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
