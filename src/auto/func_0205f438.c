#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_0201bde4();
extern void func_0202c558();
extern void func_0202c664();
extern void func_0202dc80();
extern void func_0202e19c();
extern void func_02058b78();
extern void func_02058bcc();
extern void func_0205e678();
extern void func_0205eb20();
extern void func_0205eecc();
extern void func_0206d074();
extern char data_020bd288[];
extern char data_020dceec[];
extern char data_020dcef4[];
// clang-format off
asm void func_0205f438(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x68
    mov r10, r0
    mov r0, #0x0
    str r0, [sp, #0x2c]
    mov r9, r1
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x90]
    str r1, [sp, #0x1c]
    str r1, [sp, #0x24]
    strh r1, [sp, #0x3e]
    strh r1, [sp, #0x3c]
    str r1, [sp, #0x40]
    ldr r1, [sp, #0x94]
    mov r8, r2
    str r1, [sp, #0x94]
    ldr r1, [sp, #0x98]
    mov r4, r3
    cmp r0, #0x0
    str r1, [sp, #0x98]
    bge L_0205f494
    mov r0, r8
    bl func_02003cfc
L_0205f494:
    ldr r1, [sp, #0x94]
    add r0, r8, r0
    ldrb r1, [r1, #0x0]
    str r0, [sp, #0x20]
    cmp r1, #0x1
    bne L_0205f4c0
    mov r0, r8
    bl func_02003cfc
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x1c]
L_0205f4c0:
    ldr r0, [sp, #0x98]
    ldrsh r1, [r0, #0x0]
    mvn r0, #0x0
    strh r1, [sp, #0x3e]
    cmp r1, r0
    bne L_0205f4e8
    mov r0, #0x0
    strh r0, [sp, #0x3e]
    mov r0, #0x1
    str r0, [sp, #0x24]
L_0205f4e8:
    mov r0, r10
    mov r1, r9
    strh r4, [sp, #0x3a]
    mov r2, #0x0
    add r8, r8, r4
    bl func_0205eb20
    ldr r0, [r9, #0x4]
    ldr r5, [r0, #0x0]
    ldr r0, [r5, #0x10]
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x28]
    b L_0205f8ec
L_0205f518:
    ldr r0, [sp, #0x20]
    cmp r8, r0
    bhs L_0205f8ec
    mvn r0, #0x0
    ldr r4, =data_020dceec
    str r0, [sp, #0x30]
L_0205f530:
    add r0, sp, #0x39
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x24]
    mov r1, r9
    str r0, [sp, #0x4]
    add r0, sp, #0x3e
    str r0, [sp, #0x8]
    add r0, sp, #0x40
    str r0, [sp, #0xc]
    add r0, sp, #0x9c
    str r0, [sp, #0x10]
    add r0, sp, #0x3c
    str r0, [sp, #0x14]
    add r0, sp, #0x3a
    str r0, [sp, #0x18]
    mov r0, r10
    mov r2, r8
    add r3, sp, #0x38
    bl func_0205eecc
    mov r8, r0
    ldr r0, [r10, #0x28]
    bl func_0205e678
    mov r1, r0, lsl #0x10
    ldrb r0, [sp, #0x38]
    cmp r0, #0x20
    ldrlo r7, [sp, #0x30]
    blo L_0205f5ec
    movlt r0, #0x0
    blt L_0205f5d8
    cmp r0, #0x61
    blt L_0205f5b8
    cmp r0, #0x7a
    suble r0, r0, #0x40
    ble L_0205f5d8
L_0205f5b8:
    cmp r0, #0x41
    blt L_0205f5cc
    cmp r0, #0x5a
    suble r0, r0, #0x20
    ble L_0205f5d8
L_0205f5cc:
    cmp r0, #0xa0
    subge r0, r0, #0x40
    sublt r0, r0, #0x20
L_0205f5d8:
    and r2, r0, #0xff
    ldr r0, [r4, #0x0]
    add r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
L_0205f5ec:
    cmp r7, #0x0
    blt L_0205f5fc
    cmp r7, r1, asr #0x10
    blt L_0205f614
L_0205f5fc:
    ldrsh r1, [sp, #0x3e]
    ldr r0, [sp, #0x98]
    strh r1, [r0, #0x0]
    ldr r0, [sp, #0x40]
    add sp, sp, #0x68
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0205f614:
    ldr r0, [sp, #0x94]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0205f670
    cmp r5, #0x0
    ldrne r0, [r5, #0x9c]
    cmpne r0, #0x0
    beq L_0205f63c
    add r0, r5, #0x9c
    bl func_02058bcc
L_0205f63c:
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x1c]
    str r0, [r5, #0xa0]
    ldr r0, =data_020dcef4
    bl func_02058b78
    ldr r0, [r4, #0x8]
    mov r1, #0x0
    str r0, [r5, #0x9c]
    ldr r0, [r4, #0x8]
    str r0, [r5, #0xa4]
    ldr r0, [sp, #0x94]
    swpb r1, r1, [r0]
    b L_0205f678
L_0205f670:
    ldr r0, [r5, #0x9c]
    str r0, [r4, #0x8]
L_0205f678:
    bl func_0206d074
    mov r6, r0
    ldr r1, [r6, #0x14]
    cmp r1, #0x0
    ldrne r0, [r6, #0x18]
    strne r0, [r1, #0x18]
    ldr r1, [r6, #0x18]
    cmp r1, #0x0
    ldrne r0, [r6, #0x14]
    strne r0, [r1, #0x14]
    ldr r1, [r6, #0x1c]
    cmp r1, #0x0
    beq L_0205f6e0
    ldr r0, [r1, #0x10]
    sub r0, r0, #0x1
    str r0, [r1, #0x10]
    ldr r1, [r6, #0x1c]
    ldr r0, [r1, #0x8]
    cmp r0, r6
    ldreq r0, [r6, #0x14]
    streq r0, [r1, #0x8]
    ldr r1, [r6, #0x1c]
    ldr r0, [r1, #0xc]
    cmp r0, r6
    ldreq r0, [r6, #0x18]
    streq r0, [r1, #0xc]
L_0205f6e0:
    mov r0, #0x0
    str r0, [r6, #0x14]
    str r0, [r6, #0x18]
    str r0, [r6, #0x1c]
    str r0, [r6, #0x14]
    ldr r0, [r9, #0xc]
    str r0, [r6, #0x18]
    str r9, [r6, #0x1c]
    ldr r0, [r9, #0x8]
    cmp r0, #0x0
    streq r6, [r9, #0x8]
    ldrne r0, [r9, #0xc]
    strne r6, [r0, #0x14]
    str r6, [r9, #0xc]
    ldr r0, [r9, #0x10]
    add r0, r0, #0x1
    str r0, [r9, #0x10]
    ldr r0, [r6, #0x30]
    orr r0, r0, #0x400
    str r0, [r6, #0x30]
    ldrsh r1, [sp, #0x3c]
    mov r0, #0x14
    ldr r11, [r4, #0x8]
    smulbb r0, r1, r0
    str r0, [sp, #0x34]
    add r0, r11, r0
    str r0, [sp, #0x2c]
    add r1, r0, #0x10
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x20]
    bl func_0202c664
    ldr r0, [sp, #0x34]
    mov r2, #0x8
    str r6, [r11, r0]
    ldr r0, [sp, #0x28]
    add r0, r0, r7, lsl #0x4
    ldr r1, [r0, #0x4]
    mov r0, r6
    bl func_0201bde4
    mov r0, #0xff000
    str r0, [r6, #0x38]
    ldrsh r2, [sp, #0x3c]
    cmp r2, #0x0
    beq L_0205f7a8
    ldr r1, [r4, #0x8]
    mov r0, #0x14
    smlabb r1, r2, r0, r1
    ldr r0, [sp, #0x2c]
    str r0, [r1, #-0xc]
L_0205f7a8:
    mov r0, r2, lsl #0x10
    mov r2, r0, lsr #0x10
    ldr r0, [r9, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_0205f7d4
    mov r0, #0x14
    mul r0, r2, r0
    ldr r0, [r1, r0]
L_0205f7d4:
    cmp r0, #0x0
    beq L_0205f8bc
    ldr r1, [r10, #0x24]
    ldr r7, [r0, #0x20]
    mov r0, r1, asr #0x1f
    mov r3, r0, lsl #0xb
    mov r0, #0x800
    orr r3, r3, r1, lsr #0x15
    adds r1, r0, r1, lsl #0xb
    mov r0, #0x0
    adc r0, r3, r0
    mov r6, r1, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    ldr r0, =data_020bd288
    ldr r2, [r10, #0x10]
    ldr r0, [r0, #0x0]
    rsb r1, r2, #0x0
    bl func_0202c558
    ldr r1, [r10, #0x4]
    add r0, r1, r0
    add r0, r0, r6
    str r0, [sp, #0x5c]
    mov r0, #0x0
    str r0, [sp, #0x60]
    ldr r0, =data_020bd288
    ldr r2, [r10, #0x10]
    ldr r0, [r0, #0x0]
    rsb r1, r2, #0x0
    bl func_0202c558
    ldr r2, [r10, #0x8]
    add r1, sp, #0x5c
    add r0, r2, r0
    str r0, [sp, #0x64]
    mov r0, r7
    bl func_0202e19c
    ldr r0, [r10, #0x20]
    subs r1, r0, #0x1000
    rsbmi r1, r1, #0x0
    cmp r1, #0x10
    ble L_0205f8bc
    mov r1, #0x0
    str r0, [sp, #0x5c]
    str r1, [sp, #0x60]
    str r1, [sp, #0x64]
    str r1, [sp, #0x50]
    ldr r2, [r10, #0x20]
    mov r0, r7
    str r2, [sp, #0x54]
    mov r2, #0x0
    str r2, [sp, #0x58]
    str r2, [sp, #0x44]
    str r2, [sp, #0x48]
    ldr r3, [r10, #0x20]
    add r1, sp, #0x5c
    str r3, [sp, #0x4c]
    add r2, sp, #0x50
    add r3, sp, #0x44
    bl func_0202dc80
L_0205f8bc:
    ldr r0, [sp, #0x20]
    ldrsh r1, [sp, #0x3c]
    cmp r8, r0
    ldrsh r0, [sp, #0x3e]
    add r1, r1, #0x1
    strh r1, [sp, #0x3c]
    add r0, r0, #0x1
    strh r0, [sp, #0x3e]
    ldrsh r1, [sp, #0x3e]
    ldr r0, [sp, #0x98]
    strh r1, [r0, #0x0]
    blo L_0205f530
L_0205f8ec:
    ldr r0, [sp, #0x20]
    cmp r8, r0
    bhs L_0205f904
    ldrsb r0, [r8, #0x0]
    cmp r0, #0x0
    bne L_0205f518
L_0205f904:
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    movne r1, #0x0
    strne r1, [r0, #0x8]
    ldr r0, [sp, #0x40]
    add sp, sp, #0x68
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
