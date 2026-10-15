#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void strcpy();
extern void func_020414ac();
extern void func_02041da8();
extern void func_0205488c();
extern void func_02058360();
extern char data_020cf9e0[];
extern char data_020dc19c[];
extern char data_020dc4b2[];
// clang-format off
asm void func_02058000(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r0, =data_020cf9e0
    ldr r2, =data_020dc19c
    ldrh r3, [r0, #0x0]
    add r0, r2, #0x76
    add r1, r0, #0xc00
    swpb r0, r3, [r1]
    mov r3, #0x0
    add r0, r2, #0x78
    add r1, r0, #0xc00
    swpb r0, r3, [r1]
    add r2, r2, #0x79
    add r1, r2, #0xc00
    swpb r0, r3, [r1]
    mov r0, #0xc
    bl func_0205488c
    mov r6, r0
    mov r1, #0x0
    str r1, [r6, #0x0]
    str r1, [r6, #0x4]
    str r1, [r6, #0x8]
    ldr r0, =data_020cf9e0
    mov r1, #0x8000
    ldrh r2, [r0, #0x0]
    mov r0, #0x2b
    mov r2, r2, lsl #0x6
    bl func_020414ac
    str r0, [sp, #0x0]
    ldr r4, =data_020cf9e0
    ldr r8, [sp, #0x0]
    ldrh r0, [r4, #0x0]
    mov r9, #0x0
    cmp r0, #0x0
    bls L_02058188
    ldr r10, =data_020dc4b2
    mov r11, r9
    mov r5, r9
L_02058094:
    mov r0, #0x10
    bl func_0205488c
    mov r7, r0
    str r5, [r7, #0x0]
    str r5, [r7, #0x4]
    add r0, r8, #0x2
    str r5, [r7, #0x8]
    bl func_02003cfc
    add r0, r0, #0x1
    bl func_0205488c
    add r1, r8, #0x2
    str r0, [r7, #0xc]
    bl strcpy
    mov r0, r10
    add r1, r8, #0x2
    bl strcpy
    ldr r1, [r7, #0x0]
    cmp r1, #0x0
    ldrne r0, [r7, #0x4]
    strne r0, [r1, #0x4]
    ldr r1, [r7, #0x4]
    cmp r1, #0x0
    ldrne r0, [r7, #0x0]
    strne r0, [r1, #0x0]
    ldr r1, [r7, #0x8]
    cmp r1, #0x0
    beq L_02058134
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r7, #0x8]
    ldr r0, [r1, #0x0]
    cmp r0, r7
    ldreq r0, [r7, #0x0]
    streq r0, [r1, #0x0]
    ldr r1, [r7, #0x8]
    ldr r0, [r1, #0x4]
    cmp r0, r7
    ldreq r0, [r7, #0x4]
    streq r0, [r1, #0x4]
L_02058134:
    str r11, [r7, #0x0]
    str r11, [r7, #0x4]
    str r11, [r7, #0x8]
    str r11, [r7, #0x0]
    ldr r0, [r6, #0x4]
    add r9, r9, #0x1
    stmib r7, {r0, r6}
    ldr r0, [r6, #0x0]
    add r8, r8, #0x40
    cmp r0, #0x0
    streq r7, [r6, #0x0]
    ldrne r0, [r6, #0x4]
    add r10, r10, #0x1e
    strne r7, [r0, #0x0]
    str r7, [r6, #0x4]
    ldr r0, [r6, #0x8]
    add r0, r0, #0x1
    str r0, [r6, #0x8]
    ldrh r0, [r4, #0x0]
    cmp r9, r0
    blo L_02058094
L_02058188:
    ldr r0, [sp, #0x0]
    ldr r1, =data_020dc19c
    add r0, r0, #0x2
    str r6, [r1, #0x244]
    bl func_02058360
    ldr r0, [sp, #0x0]
    bl func_02041da8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
