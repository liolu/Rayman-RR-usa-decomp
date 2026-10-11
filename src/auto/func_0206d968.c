#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201a62c();
extern void func_0202e93c();
extern void func_02058bcc();
extern void func_020652dc();
extern void func_0206d1c8();
extern void func_0206e57c();
// clang-format off
asm void func_0206d968(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8
    cmp r1, #0x0
    mov r10, r0
    mov r9, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r7, [r1, #0x0]
    ldr r0, [r7, #0x4]
    ldr r8, [r7, #0xa4]
    cmp r0, #0x0
    ldrne r9, [r0, #0x0]
    ldr r0, [r7, #0x9c]
    cmp r0, #0x0
    str r0, [sp, #0x4]
    cmpne r8, #0x0
    beq L_0206db44
    mov r6, #0x0
    mov r5, r6
    mov r4, r6
    mov r11, r6
L_0206d9bc:
    cmp r10, #0x0
    cmpne r9, #0x0
    ldrne r0, [r9, #0x14]
    cmpne r0, #0x0
    beq L_0206d9f8
    ldr r1, [sp, #0x4]
    ldr r2, =0x66666667
    sub ip, r8, r1
    smull r3, r1, r2, ip
    mov r2, ip, lsr #0x1f
    add r1, r2, r1, asr #0x3
    mov r1, r1, lsl #0x10
    mov r0, r10
    mov r1, r1, asr #0x10
    bl func_0202e93c
L_0206d9f8:
    ldr r0, [r8, #0x4]
    cmp r0, #0x0
    beq L_0206da98
    ldr r1, [r0, #0x14]
    cmp r1, #0x0
    ldrne r0, [r0, #0x18]
    strne r0, [r1, #0x18]
    ldr r0, [r8, #0x4]
    ldr r1, [r0, #0x18]
    cmp r1, #0x0
    ldrne r0, [r0, #0x14]
    strne r0, [r1, #0x14]
    ldr r0, [r8, #0x4]
    ldr r1, [r0, #0x1c]
    cmp r1, #0x0
    beq L_0206da74
    ldr r0, [r1, #0x10]
    sub r0, r0, #0x1
    str r0, [r1, #0x10]
    ldr r2, [r8, #0x4]
    ldr r1, [r2, #0x1c]
    ldr r0, [r1, #0x8]
    cmp r0, r2
    ldreq r0, [r2, #0x14]
    streq r0, [r1, #0x8]
    ldr r2, [r8, #0x4]
    ldr r1, [r2, #0x1c]
    ldr r0, [r1, #0xc]
    cmp r0, r2
    ldreq r0, [r2, #0x18]
    streq r0, [r1, #0xc]
L_0206da74:
    ldr r0, [r8, #0x4]
    str r6, [r0, #0x14]
    ldr r0, [r8, #0x4]
    str r6, [r0, #0x18]
    ldr r0, [r8, #0x4]
    str r6, [r0, #0x1c]
    ldr r0, [r8, #0x4]
    bl func_0206d1c8
    str r5, [r8, #0x4]
L_0206da98:
    ldr r0, [r8, #0x0]
    cmp r0, #0x0
    beq L_0206db38
    ldr r1, [r0, #0x14]
    cmp r1, #0x0
    ldrne r0, [r0, #0x18]
    strne r0, [r1, #0x18]
    ldr r0, [r8, #0x0]
    ldr r1, [r0, #0x18]
    cmp r1, #0x0
    ldrne r0, [r0, #0x14]
    strne r0, [r1, #0x14]
    ldr r0, [r8, #0x0]
    ldr r1, [r0, #0x1c]
    cmp r1, #0x0
    beq L_0206db14
    ldr r0, [r1, #0x10]
    sub r0, r0, #0x1
    str r0, [r1, #0x10]
    ldr r2, [r8, #0x0]
    ldr r1, [r2, #0x1c]
    ldr r0, [r1, #0x8]
    cmp r0, r2
    ldreq r0, [r2, #0x14]
    streq r0, [r1, #0x8]
    ldr r2, [r8, #0x0]
    ldr r1, [r2, #0x1c]
    ldr r0, [r1, #0xc]
    cmp r0, r2
    ldreq r0, [r2, #0x18]
    streq r0, [r1, #0xc]
L_0206db14:
    ldr r0, [r8, #0x0]
    str r4, [r0, #0x14]
    ldr r0, [r8, #0x0]
    str r4, [r0, #0x18]
    ldr r0, [r8, #0x0]
    str r4, [r0, #0x1c]
    ldr r0, [r8, #0x0]
    bl func_0206d1c8
    str r11, [r8, #0x0]
L_0206db38:
    ldr r8, [r8, #0x8]
    cmp r8, #0x0
    bne L_0206d9bc
L_0206db44:
    add r2, r7, #0xcf
    mov r1, #0x0
    cmp r10, #0x0
    swpb r0, r1, [r2]
    beq L_0206db64
    mov r0, r10
    mov r2, #0x1
    bl func_0206e57c
L_0206db64:
    add r0, sp, #0x4
    bl func_02058bcc
    mov r1, #0x0
    str r1, [r7, #0x9c]
    mov r0, r7
    str r1, [r7, #0xa4]
    bl func_020652dc
    mov r0, #0x0
    str r0, [r7, #0xb4]
    ldr r0, [r7, #0x88]
    str r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_0206dba0
    add r0, sp, #0x0
    bl func_0201a62c
L_0206dba0:
    mov r2, #0x0
    str r2, [r7, #0xb0]
    str r2, [r7, #0x88]
    strh r2, [r7, #0x8c]
    add r1, r7, #0xdb
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r7, #0xcf
    swpb r0, r2, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
