#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201c0ac();
extern void func_02029bfc();
extern void func_0202dc18();
extern void func_0202e1e0();
extern void func_0205736c();
extern void func_0205772c();
extern void func_0205d0cc();
extern void func_0205d0d4();
extern void func_0205e0b0();
extern void func_0206a6e8();
extern void func_0206a81c();
extern char data_020dc180[];
extern char data_020dc18c[];
extern char data_020dd840[];
// clang-format off
asm void func_0206a8a0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4c
    mov r6, r0
    ldr r0, [r6, #0x24]
    add r1, sp, #0x4
    add r2, sp, #0x10
    add r3, sp, #0x1c
    bl func_0202dc18
    ldr r8, [sp, #0x1c]
    ldr r0, =0x333
    mov r2, #0x0
    umull r7, r9, r8, r0
    ldr r3, [sp, #0x20]
    adds r7, r7, #0x800
    umull r1, r5, r3, r0
    mov ip, r7, lsr #0xc
    mla r9, r8, r2, r9
    mov r7, r8, asr #0x1f
    mla r9, r7, r0, r9
    adc r7, r9, #0x0
    orr ip, ip, r7, lsl #0x14
    adds r1, r1, #0x800
    mov r7, r1, lsr #0xc
    mla r5, r3, r2, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    ldr r4, [sp, #0x24]
    adc r1, r5, #0x0
    orr r7, r7, r1, lsl #0x14
    str r7, [sp, #0x20]
    umull r7, r5, r4, r0
    mla r5, r4, r2, r5
    mov r3, r4, asr #0x1f
    adds r2, r7, #0x800
    mla r5, r3, r0, r5
    adc r0, r5, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str ip, [sp, #0x1c]
    str r2, [sp, #0x24]
    ldr r2, [r6, #0x4]
    ldr r0, [r6, #0x24]
    ldr r4, [r2, #0x20]
    add r1, sp, #0x40
    bl func_0202e1e0
    ldr r0, [r4, #0x0]
    add r9, sp, #0x34
    str r0, [sp, #0x0]
    add r0, sp, #0x40
    ldr r5, [r4, #0x0]
    ldmia r0, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    add r8, sp, #0x28
    add r7, r4, #0x8
    mov r3, #0x6
L_0206a97c:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_0206a97c
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x34]
    ldr r0, [sp, #0x28]
    add ip, r1, r2
    add r8, r0, r2
    ldr r2, [sp, #0x20]
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #0x2c]
    add r3, r1, r2
    add r7, r0, r2
    ldr r2, [sp, #0x24]
    ldr r1, [sp, #0x3c]
    ldr r0, [sp, #0x30]
    add r9, r1, r2
    add lr, r0, r2
    add r0, sp, #0x28
    add r1, sp, #0x34
    add r2, sp, #0x0
    str ip, [sp, #0x34]
    str r3, [sp, #0x38]
    str r9, [sp, #0x3c]
    str r8, [sp, #0x28]
    str r7, [sp, #0x2c]
    str lr, [sp, #0x30]
    bl func_02029bfc
    ldr r0, [r4, #0x0]
    ldr r1, [sp, #0x0]
    cmp r1, r0
    beq L_0206ac64
    ldr r2, =data_020dd840
    ldr r2, [r2, #0x0]
    cmp r6, r2
    bne L_0206aa28
    bl func_0206a81c
L_0206aa28:
    ldr r0, [sp, #0x0]
    str r0, [r4, #0x0]
    ldr r0, [r6, #0x4]
    bl func_0205772c
    cmp r0, #0x0
    bne L_0206ac38
    mov r0, r6
    bl func_0205736c
    cmp r0, #0x0
    bne L_0206ac38
    ldr r0, =data_020dc180
    ldr r7, [r4, #0x0]
    ldr r0, [r0, #0x0]
    cmp r7, r0
    movne r1, #0x1
    moveq r1, #0x0
    ands r1, r1, #0xff
    beq L_0206ac38
    ldr r0, [r0, #0x4]
    ldr r3, [r0, #0x34]
    ldr r2, [r0, #0x30]
    cmp r3, #0x0
    ble L_0206aaa4
L_0206aa84:
    ldr r0, [r2, #0x0]
    cmp r0, r7
    moveq r1, #0x0
    beq L_0206aaa4
    sub r3, r3, #0x1
    cmp r3, #0x0
    add r2, r2, #0x4
    bgt L_0206aa84
L_0206aaa4:
    cmp r1, #0x0
    beq L_0206ac38
    mov r0, r6
    bl func_0201c0ac
    ldr r0, [r6, #0x4]
    ldr r2, [r6, #0x14]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x24]
    cmp r0, #0x0
    beq L_0206ab78
    ldr r0, =data_020dc18c
    cmp r2, #0x0
    ldr r0, [r0, #0x0]
    ldrne r1, [r6, #0x18]
    strne r1, [r2, #0x18]
    ldr r2, [r6, #0x18]
    cmp r2, #0x0
    ldrne r1, [r6, #0x14]
    strne r1, [r2, #0x14]
    ldr r2, [r6, #0x1c]
    cmp r2, #0x0
    beq L_0206ab30
    ldr r1, [r2, #0x10]
    sub r1, r1, #0x1
    str r1, [r2, #0x10]
    ldr r2, [r6, #0x1c]
    ldr r1, [r2, #0x8]
    cmp r1, r6
    ldreq r1, [r6, #0x14]
    streq r1, [r2, #0x8]
    ldr r2, [r6, #0x1c]
    ldr r1, [r2, #0xc]
    cmp r1, r6
    ldreq r1, [r6, #0x18]
    streq r1, [r2, #0xc]
L_0206ab30:
    mov r1, #0x0
    str r1, [r6, #0x14]
    str r1, [r6, #0x18]
    str r1, [r6, #0x1c]
    str r1, [r6, #0x18]
    ldr r1, [r0, #0x8]
    str r1, [r6, #0x14]
    str r0, [r6, #0x1c]
    ldr r1, [r0, #0xc]
    cmp r1, #0x0
    streq r6, [r0, #0xc]
    ldrne r1, [r0, #0x8]
    strne r6, [r1, #0x18]
    str r6, [r0, #0x8]
    ldr r1, [r0, #0x10]
    add r1, r1, #0x1
    str r1, [r0, #0x10]
    b L_0206ac20
L_0206ab78:
    ldr r0, =data_020dc18c
    cmp r2, #0x0
    ldr r0, [r0, #0x0]
    ldrne r1, [r6, #0x18]
    strne r1, [r2, #0x18]
    ldr r2, [r6, #0x18]
    cmp r2, #0x0
    ldrne r1, [r6, #0x14]
    strne r1, [r2, #0x14]
    ldr r2, [r6, #0x1c]
    cmp r2, #0x0
    beq L_0206abdc
    ldr r1, [r2, #0x10]
    sub r1, r1, #0x1
    str r1, [r2, #0x10]
    ldr r2, [r6, #0x1c]
    ldr r1, [r2, #0x8]
    cmp r1, r6
    ldreq r1, [r6, #0x14]
    streq r1, [r2, #0x8]
    ldr r2, [r6, #0x1c]
    ldr r1, [r2, #0xc]
    cmp r1, r6
    ldreq r1, [r6, #0x18]
    streq r1, [r2, #0xc]
L_0206abdc:
    mov r1, #0x0
    str r1, [r6, #0x14]
    str r1, [r6, #0x18]
    str r1, [r6, #0x1c]
    str r1, [r6, #0x14]
    ldr r1, [r0, #0xc]
    str r1, [r6, #0x18]
    str r0, [r6, #0x1c]
    ldr r1, [r0, #0x8]
    cmp r1, #0x0
    streq r6, [r0, #0x8]
    ldrne r1, [r0, #0xc]
    strne r6, [r1, #0x14]
    str r6, [r0, #0xc]
    ldr r1, [r0, #0x10]
    add r1, r1, #0x1
    str r1, [r0, #0x10]
L_0206ac20:
    ldr r0, [r6, #0x4]
    ldr r1, [r0, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
L_0206ac38:
    ldr r0, [r4, #0x0]
    mov r1, r6
    bl func_0206a6e8
    bl func_0205d0d4
    bl func_0205d0cc
    cmp r6, r0
    bne L_0206ac64
    ldr r1, [r4, #0x0]
    mov r0, r6
    mov r2, r5
    bl func_0205e0b0
L_0206ac64:
    add r3, sp, #0x40
    add r4, r4, #0x8
    mov r2, #0x6
L_0206ac70:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0206ac70
    add sp, sp, #0x4c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
