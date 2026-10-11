#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_01ff87ec();
extern void func_02035bec();
extern void func_02089088();
extern void func_02089850();
extern char data_020e3b29[];
extern char data_020e3b2a[];
// clang-format off
asm void func_02089b48(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x34
    mov r5, r0
    ldr r1, [r5, #0xc]
    ldrh r0, [r1, #0x72]
    tst r0, #0x2000
    beq L_02089c14
    ldr r0, =data_020e3b2a
    ldrsb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02089b88
    ldr r1, [r5, #0x8]
    add r0, r5, #0xb8
    add r1, r1, #0x4c
    bl func_01ff84a0
    b L_02089b9c
L_02089b88:
    mov r0, #0x0
    str r0, [r5, #0xb8]
    str r0, [r5, #0xbc]
    mov r0, #0x1000
    str r0, [r5, #0xc0]
L_02089b9c:
    ldr r1, =data_020e3b29
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r4, r5, #0x2c
    ldr r0, [r5, #0x8]
    mov r2, #0x6
    add r3, r0, #0x34
L_02089bb8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02089bb8
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x20]
    add sp, sp, #0x34
    sub r0, r1, r0
    str r0, [r5, #0xac]
    ldr r1, [r5, #0x30]
    ldr r0, [r5, #0x24]
    sub r0, r1, r0
    str r0, [r5, #0xb0]
    ldr r1, [r5, #0x34]
    ldr r0, [r5, #0x28]
    sub r0, r1, r0
    str r0, [r5, #0xb4]
    ldmfd sp!, {r4, r5, pc}
L_02089c14:
    ldr r0, [r1, #0x68]
    cmp r0, #0x0
    bne L_02089cac
    ldr r0, =data_020e3b2a
    ldrsb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02089c44
    ldr r1, [r5, #0x8]
    add r0, r5, #0xb8
    add r1, r1, #0x4c
    bl func_01ff84a0
    b L_02089c58
L_02089c44:
    mov r0, #0x0
    str r0, [r5, #0xb8]
    str r0, [r5, #0xbc]
    mov r0, #0x1000
    str r0, [r5, #0xc0]
L_02089c58:
    add r1, sp, #0x28
    mov r0, r5
    bl func_02089088
    add r4, r5, #0x2c
    add r3, r5, #0x20
    mov r2, #0x6
L_02089c70:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02089c70
    mov r0, #0x0
    str r0, [r5, #0xac]
    str r0, [r5, #0xb0]
    add sp, sp, #0x34
    str r0, [r5, #0xb4]
    ldmfd sp!, {r4, r5, pc}
L_02089cac:
    ldr r1, [r5, #0x20]
    ldr r0, [r5, #0x50]
    sub r3, r1, r0
    str r3, [sp, #0x1c]
    ldr r1, [r5, #0x24]
    ldr r0, [r5, #0x54]
    sub r2, r1, r0
    str r2, [sp, #0x20]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x58]
    sub r0, r1, r0
    str r0, [sp, #0x24]
    ldr r0, [r5, #0xb8]
    add r1, sp, #0x28
    cmp r3, r0
    ldreq r0, [r5, #0xbc]
    cmpeq r2, r0
    addeq r0, r3, #0x800
    streq r0, [sp, #0x1c]
    mov r0, r5
    bl func_02089088
    add r4, sp, #0x4
    add r1, sp, #0x28
    add r2, sp, #0x1c
    add r3, sp, #0x8
    mov r0, r5
    str r4, [sp, #0x0]
    bl func_02089850
    ldr r0, [sp, #0x8]
    ldr r4, [sp, #0x4]
    add ip, sp, #0x10
    str r0, [sp, #0xc]
    add r3, r5, #0xb8
    mov r2, #0x6
L_02089d34:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02089d34
    add r1, sp, #0x28
    add r0, sp, #0xc
    mov r2, r1
    bl func_02035bec
    ldr r0, [sp, #0x2c]
    ldr r1, [r5, #0xc0]
    ldr r2, [sp, #0x30]
    ldr r3, [r5, #0xbc]
    bl func_01ff87ec
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x30]
    ldr r1, [r5, #0xb8]
    ldr r2, [sp, #0x28]
    ldr r3, [r5, #0xc0]
    bl func_01ff87ec
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x28]
    ldr r1, [r5, #0xbc]
    ldr r2, [sp, #0x2c]
    ldr r3, [r5, #0xb8]
    bl func_01ff87ec
    str r0, [sp, #0x18]
    add r0, sp, #0x10
    mov r1, r0
    bl func_01ff84a0
    add r1, sp, #0x28
    add r0, sp, #0xc
    mov r2, r1
    str r4, [sp, #0xc]
    bl func_02035bec
    add r0, sp, #0x1c
    bl func_01ff8668
    ldr r1, [r5, #0xc]
    ldr r2, [r1, #0x18]
    ldr r1, [r1, #0x1c]
    cmp r0, r2
    movlt r0, r2
    blt L_02089df8
    cmp r0, r1
    movgt r0, r1
L_02089df8:
    ldr r3, [sp, #0x28]
    cmp r0, #0x28
    movle r0, #0x28
    smull r4, r3, r0, r3
    adds lr, r4, #0x800
    ldr r1, [sp, #0x2c]
    ldr r2, [sp, #0x30]
    smull r1, r4, r0, r1
    adc r3, r3, #0x0
    adds ip, r1, #0x800
    mov r1, lr, lsr #0xc
    orr r1, r1, r3, lsl #0x14
    smull r3, r2, r0, r2
    adc r0, r4, #0x0
    mov r4, ip, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    adds r3, r3, #0x800
    adc r0, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r1, [sp, #0x28]
    str r4, [sp, #0x2c]
    str r2, [sp, #0x30]
    ldr r0, [r5, #0x50]
    add r0, r0, r1
    str r0, [r5, #0x2c]
    ldr r1, [r5, #0x54]
    ldr r0, [sp, #0x2c]
    add r0, r1, r0
    str r0, [r5, #0x30]
    ldr r1, [r5, #0x58]
    ldr r0, [sp, #0x30]
    add r2, r1, r0
    str r2, [r5, #0x34]
    ldr r1, [r5, #0x8]
    ldr r0, [r1, #0xc]
    ldr r0, [r0, #0x64]
    cmp r2, r0
    strgt r0, [r5, #0x34]
    ldr r0, [r1, #0xc]
    ldr r0, [r0, #0x60]
    cmp r2, r0
    strlt r0, [r5, #0x34]
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x20]
    sub r0, r1, r0
    str r0, [r5, #0xac]
    ldr r1, [r5, #0x30]
    ldr r0, [r5, #0x24]
    sub r0, r1, r0
    str r0, [r5, #0xb0]
    ldr r1, [r5, #0x34]
    ldr r0, [r5, #0x28]
    sub r0, r1, r0
    str r0, [r5, #0xb4]
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
