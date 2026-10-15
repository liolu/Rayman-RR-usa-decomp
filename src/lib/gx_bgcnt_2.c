#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0202b884();
extern void func_0202d1e8();
extern void func_02058bf4();
extern void func_02058d4c();
extern void func_02065040();
extern void func_02065058();
extern void func_020650d4();
extern void func_02065188();
extern void func_0206b3c4();
extern void func_0206d968();
extern void func_0206e050();
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd280[];
extern char data_020dd720[];
// clang-format on

// clang-format off
asm void func_02064c70(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, r1
    bne L_02064cbc
    mov r0, #0x0
    bl func_0207ac90
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
    mov r3, #0xe
    bl func_0207ad9c
L_02064cbc:
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    bne L_02064d00
    mov r0, #0x0
    bl func_0207ac90
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
    mov r3, #0xf
    bl func_0207ad9c
L_02064d00:
    sub r0, r4, #0x3
    cmp r0, #0x1
    bhi L_02064d5c
    ldr r0, [r5, #0x0]
    mov r1, #0x32
    add r0, r0, #0x18
    bl func_0202b884
    ldr r2, [r5, #0x0]
    mov r1, r0
    add r0, r2, #0x18
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r5, #0x4]
    bl func_0206b3c4
    cmp r0, #0x0
    ldrne r0, [r0, #0x1c]
    cmpne r0, #0x0
    beq L_02064d5c
    ldr r2, [r5, #0x0]
    ldr r1, [r0, #0x24]
    ldr r0, [r2, #0x7c]
    add r2, r2, #0x18
    bl func_0202d1e8
L_02064d5c:
    ldr r0, [r5, #0x4]
    bl func_0206b3c4
    cmp r0, #0x0
    beq L_02064d7c
    ldr r1, [r5, #0x0]
    ldrb r1, [r1, #0xfa]
    mov r1, r1, lsl #0xc
    str r1, [r0, #0x38]
L_02064d7c:
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_02064f1c
L_02064d88:
    b L_02064f1c
    b L_02064da0
    b L_02064dcc
    b L_02064dcc
    b L_02064dcc
    b L_02064ed4
L_02064da0:
    ldr r0, [r5, #0x0]
    bl func_02065040
    ldr r0, [r5, #0x0]
    bl func_02065058
    ldr r0, [r5, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x9c]
    ldr r1, [r5, #0x0]
    ldr r0, [r1, #0x14]
    ldr r0, [r0, #0x28]
    str r0, [r1, #0xa0]
L_02064dcc:
    ldr r0, [r5, #0x0]
    mov r2, #0x1
    add r1, r0, #0xf4
    swpb r0, r2, [r1]
    rsb r1, r2, #0x10000
    mov r0, r5
    mov r2, #0x0
    bl func_02058bf4
    ldr r0, [r5, #0x0]
    mov r1, #0x0
    str r1, [r0, #0xc0]
    ldr r0, [r5, #0x0]
    str r1, [r0, #0xc4]
    ldr r0, [r5, #0x0]
    str r1, [r0, #0xc8]
    ldr r0, [r5, #0x4]
    bl func_0206b3c4
    mov r1, r5
    bl func_0206d968
    ldr r0, =data_020dd720
    mov r3, #0x0
    strh r3, [r0, #0x0]
    ldr r0, [r5, #0x0]
    mov r1, #0x5
    add r2, r0, #0xa8
L_02064e30:
    swpb r0, r3, [r2]
    add r2, r2, #0x1
    swpb r0, r3, [r2]
    add r2, r2, #0x1
    swpb r0, r3, [r2]
    add r2, r2, #0x1
    swpb r0, r3, [r2]
    add r2, r2, #0x1
    subs r1, r1, #0x1
    bne L_02064e30
    ldr r0, [r5, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x88]
    ldr r0, [r5, #0x0]
    strh r1, [r0, #0x8c]
    ldr r0, [r5, #0x0]
    strh r1, [r0, #0x8e]
    ldr r0, [r5, #0x0]
    str r1, [r0, #0xe4]
    ldr r0, [r5, #0x0]
    add r2, r0, #0xce
    swpb r0, r1, [r2]
    ldr r0, [r5, #0x0]
    bl func_020650d4
    mov r3, #0x0
    ldr r0, [r5, #0x0]
    sub r2, r3, #0x1
    str r3, [r0, #0x4]
    ldr r0, [r5, #0x0]
    str r3, [r0, #0xa8]
    ldr r0, [r5, #0x0]
    str r3, [r0, #0xb4]
    ldr r1, [r5, #0x0]
    ldr r0, [r1, #0xdc]
    str r0, [r1, #0xe0]
    ldr r0, [r5, #0x0]
    add r1, r0, #0xf7
    swpb r0, r2, [r1]
    ldr r0, [r5, #0x0]
    add r1, r0, #0xcf
    swpb r0, r3, [r1]
L_02064ed4:
    ldr r0, [r5, #0x0]
    add r0, r0, #0xbc
    bl func_02058d4c
    ldr r3, =data_020dd720
    mov r1, #0x1
    ldrh r0, [r3, #0x0]
    mov r2, r0, lsr #0x1f
    rsb r0, r2, r0, lsl #0x1c
    add r0, r2, r0, ror #0x1c
    strh r0, [r3, #0x0]
    ldrh r0, [r3, #0x0]
    add r0, r0, #0x1
    strh r0, [r3, #0x0]
    ldrh r2, [r3, #0x0]
    ldr r0, [r5, #0x0]
    strh r2, [r0, #0xf8]
    ldr r0, [r5, #0x0]
    bl func_02065188
L_02064f1c:
    ldr r0, [r5, #0x4]
    bl func_0206b3c4
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x4]
    bl func_0206b3c4
    ldr r1, [r5, #0x0]
    ldr r1, [r1, #0x0]
    bl func_0206e050
    ldr r1, [r5, #0x0]
    ldr r0, [r5, #0x4]
    ldr r4, [r1, #0xe0]
    bl func_0206b3c4
    str r4, [r0, #0x2c]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
