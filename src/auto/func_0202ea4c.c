#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f87c();
extern void func_02058e44();
extern void func_02059100();
extern char data_020bc540[];
extern char data_020cf6b4[];
extern char data_020cf6b8[];
// clang-format off
asm void func_0202ea4c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, r0
    ldr r0, [r8, #0x4]
    ldrh r4, [sp, #0x20]
    ldr r0, [r0, #0x0]
    mov r7, r1
    ldr r1, [r0, #0x10]
    ldr r0, [r0, #0xbc]
    ldr r5, [r1, #0x0]
    mov r1, r4
    add r9, r5, r7, lsl #0x4
    mov r6, r2
    mov r5, r3
    ldr r10, [r9, #0x4]
    bl func_02059100
    mov r9, r0
    mvn r0, #0x0
    cmp r9, r0
    beq L_0202eabc
    ldr r1, =data_020cf6b8
    mov r0, #0x7c
    smulbb r0, r9, r0
    ldr r1, [r1, #0x0]
    ldrb r0, [r1, r0]
    cmp r0, #0x0
    beq L_0202eabc
    cmp r0, #0x2
    blo L_0202eb14
L_0202eabc:
    ldr r0, =data_020cf6b4
    mvn r9, #0x0
    ldr r3, [r0, #0x0]
    mov r1, #0x0
    cmp r3, #0x0
    ble L_0202eb00
    ldr r0, =data_020cf6b8
    ldr r2, [r0, #0x0]
L_0202eadc:
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    moveq r0, r1, lsl #0x10
    moveq r9, r0, asr #0x10
    beq L_0202eb00
    add r1, r1, #0x1
    cmp r1, r3
    add r2, r2, #0x7c
    blt L_0202eadc
L_0202eb00:
    mvn r0, #0x0
    cmp r9, r0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, #0x1
    b L_0202eb18
L_0202eb14:
    mov r1, #0x0
L_0202eb18:
    ldr r0, =data_020cf6b8
    ldrsh r3, [sp, #0x20]
    ldr r2, [r0, #0x0]
    mov r0, #0x7c
    smlabb r0, r9, r0, r2
    mov r2, #0x1
    swpb r2, r2, [r0]
    mov ip, #0x64
    strh r3, [r0, #0x20]
    str r8, [r0, #0x4]
    strh r7, [r0, #0x8]
    strh r6, [r0, #0xa]
    str ip, [r0, #0xc]
    sub r2, r5, #0x1
    str r5, [r0, #0x14]
    str r2, [r0, #0x10]
    cmp r1, #0x0
    ldreq r3, [r0, #0x1c]
    ldreq r2, [r0, #0x10]
    cmpeq r3, r2
    subeq r2, ip, #0x65
    streq r2, [r0, #0x1c]
    ldrne r2, [r0, #0x10]
    add r3, r0, #0x1
    strne r2, [r0, #0x1c]
    mov r2, #0x4
    swpb r2, r2, [r3]
    cmp r1, #0x0
    mov r2, #0xa
    str r2, [r0, #0x18]
    str r10, [r0, #0x24]
    beq L_0202ebb8
    mov r1, r10
    bl func_0202f87c
    ldr r0, [r8, #0x4]
    mov r1, r4
    ldr r0, [r0, #0x0]
    mov r2, r9
    ldr r0, [r0, #0xbc]
    bl func_02058e44
L_0202ebb8:
    ldr r0, =data_020bc540
    ldr r1, [r0, #0x0]
    cmp r9, r1
    strgt r9, [r0, #0x0]
    mov r0, r9
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
