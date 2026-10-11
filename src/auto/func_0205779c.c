#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_020298d8();
extern void func_020299c4();
extern void func_0202d1e8();
extern void func_0205aa24();
extern void func_0205e9a8();
extern void func_0206529c();
extern void func_0206a7e4();
extern void func_0206a7ec();
extern void func_0206b3d4();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void r1();
extern void r2();
extern char data_020bd160[];
extern char data_020bd280[];
extern char data_020c49d8[];
extern char data_020dc098[];
extern char data_020dc190[];
extern char data_020dc19c[];
// clang-format off
asm void func_0205779c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r3, =data_020dc098
    str r2, [sp, #0x10]
    ldr r7, [r3, #0x4]
    mov r11, r1
    cmp r7, #0x0
    mov r2, #0x0
    beq L_02057ba8
L_020577c0:
    ldr r1, [r7, #0xc]
    cmp r1, r0
    bne L_02057b98
    ldr r0, =data_020dc098
    mov r5, #0x0
    ldr r4, [r0, #0x10]
    ldr r1, [r0, #0x0]
    ldr r2, [r0, #0x18]
    b L_020577ec
L_020577e4:
    add r5, r5, #0x1
    add r4, r4, #0x3c
L_020577ec:
    cmp r5, r1
    bhs L_02057808
    ldr r0, [r2, r5, lsl #0x2]
    cmp r0, #0x0
    ldreq r0, [r4, #0x14]
    cmpeq r0, #0x0
    bne L_020577e4
L_02057808:
    cmp r5, r1
    addhs sp, sp, #0x14
    movhs r0, #0x0
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x2c
    mul r10, r5, r0
    ldr r0, [sp, #0x10]
    mov r6, #0x0
    str r0, [r2, r5, lsl #0x2]
    ldr r8, [r4, #0x4]
    sub r0, r6, #0x1
    str r6, [r4, #0x30]
    ldr r9, =data_020bd160
    str r0, [r4, #0x2c]
L_02057840:
    ldr r0, [r7, #0x10]
    ldr r0, [r0, r6, lsl #0x2]
    cmp r0, #0x0
    beq L_02057894
    ldr r0, =data_020dc098
    ldr r0, [r0, #0x14]
    add r0, r0, r10
    ldr r1, [r0, r6, lsl #0x2]
    cmp r1, #0x0
    bne L_02057870
    ldr r1, [r9, #0x8]
    blx r1
L_02057870:
    ldr r0, =data_020dc098
    ldr r1, [r0, #0x14]
    mov r0, r8
    add r1, r1, r10
    ldr r1, [r1, r6, lsl #0x2]
    str r1, [r8, r6, lsl #0x2]
    ldr r1, [r7, #0x10]
    ldr r2, [r9, #0x0]
    blx r2
L_02057894:
    add r6, r6, #0x1
    cmp r6, #0xb
    add r9, r9, #0x18
    blo L_02057840
    ldr r0, [r8, #0x4]
    add r1, r5, #0x10000
    str r1, [r0, #0x4]
    ldr r0, [r8, #0x4]
    mov r1, r4
    bl func_0206b3d4
    ldr r0, [r8, #0x0]
    cmp r0, #0x0
    beq L_020578d8
    ldr r1, [sp, #0x38]
    add r0, r0, #0x18
    mov r2, #0x64
    bl func_02001588
L_020578d8:
    ldr r0, [r4, #0x24]
    ldr r1, [r11, #0x24]
    ldr r2, [r4, #0x20]
    bl func_0202d1e8
    ldr r1, =data_020c49d8
    ldr r0, [sp, #0x10]
    ldr r1, [r1, #0x0]
    str r1, [r4, #0x28]
    ldr r6, [r4, #0x24]
    bl func_0206a7ec
    mov r7, r0
    ldr r1, [r7, #0x4]
    add r0, r6, #0x4
    bl func_020298d8
    cmp r0, #0x0
    bne L_0205792c
    ldr r0, =data_020dc190
    add r1, r6, #0x4
    ldr r0, [r0, #0x0]
    bl func_020299c4
    mov r7, r0
L_0205792c:
    cmp r7, #0x0
    bne L_0205794c
    ldr r1, =data_020dc098
    mov r0, #0x0
    ldr r1, [r1, #0x18]
    add sp, sp, #0x14
    str r0, [r1, r5, lsl #0x2]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0205794c:
    ldr r0, [r8, #0x20]
    mov r1, r7
    bl func_0206a7e4
    ldr r5, =data_020bd160
    mov r6, #0x0
    mov r7, #0x5
L_02057964:
    ldr r0, [r8, r6, lsl #0x2]
    cmp r0, #0x0
    beq L_02057980
    ldr r2, [r5, #0x10]
    mov r0, r8
    mov r1, r7
    blx r2
L_02057980:
    add r6, r6, #0x1
    cmp r6, #0xb
    add r5, r5, #0x18
    blo L_02057964
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0x14]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x24]
    cmp r0, #0x0
    beq L_02057a4c
    cmp r1, #0x0
    ldrne r0, [r4, #0x18]
    strne r0, [r1, #0x18]
    ldr r1, [r4, #0x18]
    cmp r1, #0x0
    ldrne r0, [r4, #0x14]
    strne r0, [r1, #0x14]
    ldr r1, [r4, #0x1c]
    cmp r1, #0x0
    beq L_02057a04
    ldr r0, [r1, #0x10]
    sub r0, r0, #0x1
    str r0, [r1, #0x10]
    ldr r1, [r4, #0x1c]
    ldr r0, [r1, #0x8]
    cmp r0, r4
    ldreq r0, [r4, #0x14]
    streq r0, [r1, #0x8]
    ldr r1, [r4, #0x1c]
    ldr r0, [r1, #0xc]
    cmp r0, r4
    ldreq r0, [r4, #0x18]
    streq r0, [r1, #0xc]
L_02057a04:
    mov r0, #0x0
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    str r0, [r4, #0x1c]
    str r0, [r4, #0x18]
    ldr r0, [r11, #0x8]
    str r0, [r4, #0x14]
    str r11, [r4, #0x1c]
    ldr r0, [r11, #0xc]
    cmp r0, #0x0
    streq r4, [r11, #0xc]
    ldrne r0, [r11, #0x8]
    strne r4, [r0, #0x18]
    str r4, [r11, #0x8]
    ldr r0, [r11, #0x10]
    add r0, r0, #0x1
    str r0, [r11, #0x10]
    b L_02057aec
L_02057a4c:
    cmp r1, #0x0
    ldrne r0, [r4, #0x18]
    strne r0, [r1, #0x18]
    ldr r1, [r4, #0x18]
    cmp r1, #0x0
    ldrne r0, [r4, #0x14]
    strne r0, [r1, #0x14]
    ldr r1, [r4, #0x1c]
    cmp r1, #0x0
    beq L_02057aa8
    ldr r0, [r1, #0x10]
    sub r0, r0, #0x1
    str r0, [r1, #0x10]
    ldr r1, [r4, #0x1c]
    ldr r0, [r1, #0x8]
    cmp r0, r4
    ldreq r0, [r4, #0x14]
    streq r0, [r1, #0x8]
    ldr r1, [r4, #0x1c]
    ldr r0, [r1, #0xc]
    cmp r0, r4
    ldreq r0, [r4, #0x18]
    streq r0, [r1, #0xc]
L_02057aa8:
    mov r0, #0x0
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    str r0, [r4, #0x1c]
    str r0, [r4, #0x14]
    ldr r0, [r11, #0xc]
    str r0, [r4, #0x18]
    str r11, [r4, #0x1c]
    ldr r0, [r11, #0x8]
    cmp r0, #0x0
    streq r4, [r11, #0x8]
    ldrne r0, [r11, #0xc]
    strne r4, [r0, #0x14]
    str r4, [r11, #0xc]
    ldr r0, [r11, #0x10]
    add r0, r0, #0x1
    str r0, [r11, #0x10]
L_02057aec:
    ldr r1, [r8, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    ldr r0, [r8, #0x0]
    ldr r0, [r0, #0x14]
    bl func_0205aa24
    str r0, [r4, #0x34]
    ldr r1, [r8, #0x4]
    ldr r2, =data_020dc19c
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x74]
    ldr r0, [r8, #0x0]
    str r1, [r0, #0xc0]
    ldr r1, [r2, #0x74]
    ldr r0, [r8, #0x0]
    str r1, [r0, #0xc8]
    ldr r1, [r8, #0x0]
    ldr r0, [r1, #0xa8]
    cmp r0, #0x0
    bne L_02057b8c
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    beq L_02057b80
    bl func_0205e9a8
    cmp r0, #0x0
    beq L_02057b80
    ldrb r1, [r0, #0x3]
    ldr r0, [r8, #0x0]
    bl func_0206529c
    ldr r0, [r8, #0x0]
    mov r1, #0x0
    str r1, [r0, #0xb4]
L_02057b80:
    ldr r0, [r8, #0x0]
    mov r1, #0x0
    str r1, [r0, #0xb4]
L_02057b8c:
    add sp, sp, #0x14
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02057b98:
    ldr r7, [r7, #0x0]
    add r2, r2, #0x1
    cmp r7, #0x0
    bne L_020577c0
L_02057ba8:
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0x36
    bl func_0207ad9c
    mov r0, #0x0
    bl func_0207ac90
    mov r0, #0x0
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
