#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d264();
extern void func_02024ec8();
extern char data_020c572c[];
extern char data_020c5738[];
// clang-format off
asm void func_02024a60(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #0x0
    mov r1, #0x44
    bl func_0201d264
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x38]
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    ldr r1, [r4, #0x38]
    cmp r1, #0x0
    ldrne r0, [r4, #0x3c]
    strne r0, [r1, #0x3c]
    ldr r1, [r4, #0x3c]
    cmp r1, #0x0
    ldrne r0, [r4, #0x38]
    strne r0, [r1, #0x38]
    ldr r1, [r4, #0x40]
    cmp r1, #0x0
    beq L_02024ae8
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r4, #0x40]
    ldr r0, [r1, #0x0]
    cmp r0, r4
    ldreq r0, [r4, #0x38]
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0x40]
    ldr r0, [r1, #0x4]
    cmp r0, r4
    ldreq r0, [r4, #0x3c]
    streq r0, [r1, #0x4]
L_02024ae8:
    mov r0, #0x0
    str r0, [r4, #0x38]
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    ldr r1, =data_020c572c
    str r0, [r4, #0x38]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x3c]
    str r1, [r4, #0x40]
    ldr r0, [r1, #0x0]
    cmp r0, #0x0
    streq r4, [r1, #0x0]
    ldrne r0, [r1, #0x4]
    strne r4, [r0, #0x38]
    ldr r0, =data_020c572c
    cmp r5, #0x0
    str r4, [r0, #0x4]
    ldr r1, [r0, #0x8]
    add r1, r1, #0x1
    str r1, [r0, #0x8]
    moveq r0, #0x1
    streq r0, [r4, #0x30]
    beq L_02024c04
    mov ip, r5
    mov r3, r4
    mov r2, #0x6
L_02024b50:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02024b50
    add ip, r4, #0xc
    add r3, r5, #0xc
    mov r2, #0x6
L_02024b80:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02024b80
    add ip, r4, #0x18
    add r3, r5, #0x18
    mov r2, #0x6
L_02024bb0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02024bb0
    add ip, r4, #0x24
    add r3, r5, #0x24
    mov r2, #0x6
L_02024be0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02024be0
L_02024c04:
    ldr r2, =data_020c5738
    mov r0, r5
    ldr r3, [r2, #0x0]
    mov r1, r4
    add r3, r3, #0x1
    str r3, [r2, #0x0]
    bl func_02024ec8
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
