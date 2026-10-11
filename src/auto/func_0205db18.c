#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c700();
extern void func_0202e1e0();
extern void func_0206529c();
extern void func_0206a65c();
extern void func_0206b3c4();
extern char data_020dc18c[];
extern char data_020dc194[];
extern char data_020dc19c[];
// clang-format off
asm void func_0205db18(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    ldr r1, =data_020dc18c
    ldr r2, [r0, #0x1c]
    ldr r0, [r1, #0x0]
    cmp r2, r0
    bne L_0205dcc4
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x24]
    cmp r0, #0x0
    ldr r0, [r4, #0x4]
    beq L_0205dc14
    bl func_0206b3c4
    ldr r3, [r0, #0x14]
    ldr r1, =data_020dc194
    cmp r3, #0x0
    ldr r1, [r1, #0x0]
    ldrne r2, [r0, #0x18]
    strne r2, [r3, #0x18]
    ldr r3, [r0, #0x18]
    cmp r3, #0x0
    ldrne r2, [r0, #0x14]
    strne r2, [r3, #0x14]
    ldr r3, [r0, #0x1c]
    cmp r3, #0x0
    beq L_0205dbcc
    ldr r2, [r3, #0x10]
    sub r2, r2, #0x1
    str r2, [r3, #0x10]
    ldr r3, [r0, #0x1c]
    ldr r2, [r3, #0x8]
    cmp r2, r0
    ldreq r2, [r0, #0x14]
    streq r2, [r3, #0x8]
    ldr r3, [r0, #0x1c]
    ldr r2, [r3, #0xc]
    cmp r2, r0
    ldreq r2, [r0, #0x18]
    streq r2, [r3, #0xc]
L_0205dbcc:
    mov r2, #0x0
    str r2, [r0, #0x14]
    str r2, [r0, #0x18]
    str r2, [r0, #0x1c]
    str r2, [r0, #0x18]
    ldr r2, [r1, #0x8]
    str r2, [r0, #0x14]
    str r1, [r0, #0x1c]
    ldr r2, [r1, #0xc]
    cmp r2, #0x0
    streq r0, [r1, #0xc]
    ldrne r2, [r1, #0x8]
    strne r0, [r2, #0x18]
    str r0, [r1, #0x8]
    ldr r0, [r1, #0x10]
    add r0, r0, #0x1
    str r0, [r1, #0x10]
    b L_0205dcc4
L_0205dc14:
    bl func_0206b3c4
    ldr r3, [r0, #0x14]
    ldr r1, =data_020dc194
    cmp r3, #0x0
    ldr r1, [r1, #0x0]
    ldrne r2, [r0, #0x18]
    strne r2, [r3, #0x18]
    ldr r3, [r0, #0x18]
    cmp r3, #0x0
    ldrne r2, [r0, #0x14]
    strne r2, [r3, #0x14]
    ldr r3, [r0, #0x1c]
    cmp r3, #0x0
    beq L_0205dc80
    ldr r2, [r3, #0x10]
    sub r2, r2, #0x1
    str r2, [r3, #0x10]
    ldr r3, [r0, #0x1c]
    ldr r2, [r3, #0x8]
    cmp r2, r0
    ldreq r2, [r0, #0x14]
    streq r2, [r3, #0x8]
    ldr r3, [r0, #0x1c]
    ldr r2, [r3, #0xc]
    cmp r2, r0
    ldreq r2, [r0, #0x18]
    streq r2, [r3, #0xc]
L_0205dc80:
    mov r2, #0x0
    str r2, [r0, #0x14]
    str r2, [r0, #0x18]
    str r2, [r0, #0x1c]
    str r2, [r0, #0x14]
    ldr r2, [r1, #0xc]
    str r2, [r0, #0x18]
    str r1, [r0, #0x1c]
    ldr r2, [r1, #0x8]
    cmp r2, #0x0
    streq r0, [r1, #0x8]
    ldrne r2, [r1, #0xc]
    strne r0, [r2, #0x14]
    str r0, [r1, #0xc]
    ldr r0, [r1, #0x10]
    add r0, r0, #0x1
    str r0, [r1, #0x10]
L_0205dcc4:
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    ldr r1, [r0, #0x1c]
    ldr r0, [r4, #0x4]
    ldr r5, [r1, #0x24]
    bl func_0206b3c4
    ldr r0, [r0, #0x20]
    add r1, sp, #0x0
    bl func_0202e1e0
    add r0, sp, #0x0
    mov r1, r5
    mov r2, r0
    bl func_0202c700
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    add r1, sp, #0x0
    bl func_0206a65c
    ldr r1, [r4, #0x4]
    ldr r2, =data_020dc19c
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x74]
    ldr r0, [r4, #0x0]
    str r1, [r0, #0xc0]
    ldr r1, [r2, #0x74]
    ldr r0, [r4, #0x0]
    str r1, [r0, #0xc8]
    ldr r2, [r4, #0x0]
    ldr r0, [r2, #0xa8]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, pc}
    ldr r0, [r2, #0x4]
    cmp r0, #0x0
    ldrne r1, [r0, #0x0]
    cmpne r1, #0x0
    beq L_0205dd88
    mov r0, #0x0
    str r0, [r2, #0xb4]
    ldrb r1, [r1, #0x3]
    ldr r0, [r4, #0x0]
    bl func_0206529c
L_0205dd88:
    ldr r0, [r4, #0x0]
    mov r1, #0x0
    str r1, [r0, #0xb4]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
