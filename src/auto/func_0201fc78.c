#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r1();
extern char data_020c4b84[];
// clang-format off
asm void func_0201fc78(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x2c]
    cmp r1, #0x0
    ldrne r0, [r4, #0x30]
    strne r0, [r1, #0x30]
    ldr r1, [r4, #0x30]
    cmp r1, #0x0
    ldrne r0, [r4, #0x2c]
    strne r0, [r1, #0x2c]
    ldr r1, [r4, #0x34]
    cmp r1, #0x0
    beq L_0201fce0
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r4, #0x34]
    ldr r0, [r1, #0x0]
    cmp r0, r4
    ldreq r0, [r4, #0x2c]
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0x34]
    ldr r0, [r1, #0x4]
    cmp r0, r4
    ldreq r0, [r4, #0x30]
    streq r0, [r1, #0x4]
L_0201fce0:
    mov r0, #0x0
    str r0, [r4, #0x2c]
    str r0, [r4, #0x30]
    str r0, [r4, #0x34]
    ldr r1, [r4, #0x2c]
    cmp r1, #0x0
    ldrne r0, [r4, #0x30]
    strne r0, [r1, #0x30]
    ldr r1, [r4, #0x30]
    cmp r1, #0x0
    ldrne r0, [r4, #0x2c]
    strne r0, [r1, #0x2c]
    ldr r1, [r4, #0x34]
    cmp r1, #0x0
    beq L_0201fd50
    ldr r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0x8]
    ldr r1, [r4, #0x34]
    ldr r0, [r1, #0x0]
    cmp r0, r4
    ldreq r0, [r4, #0x2c]
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0x34]
    ldr r0, [r1, #0x4]
    cmp r0, r4
    ldreq r0, [r4, #0x30]
    streq r0, [r1, #0x4]
L_0201fd50:
    mov r0, #0x0
    str r0, [r4, #0x2c]
    str r0, [r4, #0x30]
    str r0, [r4, #0x34]
    ldr r1, =data_020c4b84
    str r0, [r4, #0x2c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x30]
    str r1, [r4, #0x34]
    ldr r0, [r1, #0x0]
    cmp r0, #0x0
    streq r4, [r1, #0x0]
    ldrne r0, [r1, #0x4]
    mov r1, #0x10
    strne r4, [r0, #0x2c]
    ldr r0, =data_020c4b84
    str r4, [r0, #0x4]
    ldr r2, [r0, #0x8]
    add r2, r2, #0x1
    str r2, [r0, #0x8]
    str r1, [r4, #0x0]
    ldr r1, [r4, #0x14]
    cmp r1, #0x0
    beq L_0201fdc4
    ldr r0, [r4, #0x18]
    blx r1
    mov r0, #0x0
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
L_0201fdc4:
    mov r2, #0x0
    str r2, [r4, #0x4]
    str r2, [r4, #0x8]
    str r2, [r4, #0xc]
    str r2, [r4, #0x10]
    str r2, [r4, #0x1c]
    strh r2, [r4, #0x26]
    add r1, r4, #0x29
    swpb r0, r2, [r1]
    add r1, r4, #0x2a
    swpb r0, r2, [r1]
    add r1, r4, #0x2b
    swpb r0, r2, [r1]
    str r2, [r4, #0x14]
    str r2, [r4, #0x18]
    ldmfd sp!, {r4, pc}
}
// clang-format on
