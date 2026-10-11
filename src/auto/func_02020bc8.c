#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c4b38[];
extern char data_020c4b5c[];
extern char data_020c4b60[];
extern char data_020c4b6c[];
extern char data_020c4b78[];
extern char data_020c4b84[];
// clang-format off
asm void func_02020bc8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr ip, =data_020c4b84
    mov r5, #0x0
    str r5, [ip, #0x0]
    str r5, [ip, #0x4]
    ldr r0, =data_020c4b78
    str r5, [ip, #0x8]
    str r5, [r0, #0x0]
    str r5, [r0, #0x4]
    str r5, [r0, #0x8]
    ldr r1, =data_020c4b6c
    ldr r0, =data_020c4b60
    str r5, [r1, #0x0]
    str r5, [r1, #0x4]
    str r5, [r1, #0x8]
    str r5, [r0, #0x0]
    str r5, [r0, #0x4]
    ldr r1, =data_020c4b5c
    str r5, [r0, #0x8]
    ldr r0, [r1, #0x0]
    cmp r0, #0x0
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c4b38
    mov r7, r5
    mov r8, r5
    mov lr, r5
    mov r3, #0x10
    mov r2, r5
    mov r4, r5
L_02020c3c:
    ldr r6, [r0, #0x20]
    add r6, r6, r7
    str r4, [r6, #0x2c]
    str r4, [r6, #0x30]
    str r4, [r6, #0x34]
    ldr r10, [r6, #0x2c]
    cmp r10, #0x0
    ldrne r9, [r6, #0x30]
    strne r9, [r10, #0x30]
    ldr r10, [r6, #0x30]
    cmp r10, #0x0
    ldrne r9, [r6, #0x2c]
    strne r9, [r10, #0x2c]
    ldr r10, [r6, #0x34]
    cmp r10, #0x0
    beq L_02020cb0
    ldr r9, [r10, #0x8]
    sub r9, r9, #0x1
    str r9, [r10, #0x8]
    ldr r10, [r6, #0x34]
    ldr r9, [r10, #0x0]
    cmp r9, r6
    ldreq r9, [r6, #0x2c]
    streq r9, [r10, #0x0]
    ldr r10, [r6, #0x34]
    ldr r9, [r10, #0x4]
    cmp r9, r6
    ldreq r9, [r6, #0x30]
    streq r9, [r10, #0x4]
L_02020cb0:
    str lr, [r6, #0x2c]
    str lr, [r6, #0x30]
    str lr, [r6, #0x34]
    str lr, [r6, #0x2c]
    ldr r9, [ip, #0x4]
    add r10, r6, #0x29
    str r9, [r6, #0x30]
    str ip, [r6, #0x34]
    ldr r9, [ip, #0x0]
    add r5, r5, #0x1
    cmp r9, #0x0
    streq r6, [ip, #0x0]
    ldrne r9, [ip, #0x4]
    add r7, r7, #0x38
    strne r6, [r9, #0x2c]
    str r6, [ip, #0x4]
    ldr r9, [ip, #0x8]
    add r9, r9, #0x1
    str r9, [ip, #0x8]
    str r3, [r6, #0x0]
    str r2, [r6, #0x4]
    str r2, [r6, #0x8]
    str r2, [r6, #0xc]
    str r2, [r6, #0x10]
    str r2, [r6, #0x1c]
    strh r2, [r6, #0x26]
    swpb r9, r2, [r10]
    add r10, r6, #0x2a
    swpb r9, r2, [r10]
    add r10, r6, #0x2b
    swpb r9, r2, [r10]
    str r2, [r6, #0x14]
    str r2, [r6, #0x18]
    ldr r9, [r0, #0x1c]
    add r9, r9, r8
    str r9, [r6, #0x20]
    ldr r6, [r1, #0x0]
    add r8, r8, #0x8
    cmp r5, r6
    blo L_02020c3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
