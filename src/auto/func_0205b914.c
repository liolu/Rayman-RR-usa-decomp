#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201bdd0();
extern void func_0201c0ac();
extern void func_0201c2b8();
extern void func_0205fe28();
extern char data_020dc18c[];
extern char data_020dc194[];
extern char data_020dc19c[];
// clang-format off
asm void func_0205b914(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r1, =data_020dc194
    mov r5, r0
    ldr r0, [r1, #0x0]
    mov r10, #0x0
    ldr r4, [r0, #0x8]
    mov r0, r4
    bl func_0201c2b8
    mov r9, r0
    mov r0, r4
    bl func_0201bdd0
    cmp r0, #0x0
    beq L_0205baf4
    ldr r6, =data_020dc18c
    mov r8, r10
    mov r7, r10
L_0205b954:
    ldr r0, [r4, #0x0]
    cmp r0, #0x2
    bne L_0205bad0
    mov r0, r4
    bl func_0205fe28
    cmp r0, #0x0
    bne L_0205bad0
    mov r0, r4
    bl func_0201c0ac
    ldr r0, [r4, #0x4]
    ldr r2, [r4, #0x14]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x24]
    cmp r0, #0x0
    ldr r0, [r6, #0x0]
    beq L_0205ba34
    cmp r2, #0x0
    ldrne r1, [r4, #0x18]
    strne r1, [r2, #0x18]
    ldr r2, [r4, #0x18]
    cmp r2, #0x0
    ldrne r1, [r4, #0x14]
    strne r1, [r2, #0x14]
    ldr r2, [r4, #0x1c]
    cmp r2, #0x0
    beq L_0205b9f0
    ldr r1, [r2, #0x10]
    sub r1, r1, #0x1
    str r1, [r2, #0x10]
    ldr r2, [r4, #0x1c]
    ldr r1, [r2, #0x8]
    cmp r1, r4
    ldreq r1, [r4, #0x14]
    streq r1, [r2, #0x8]
    ldr r2, [r4, #0x1c]
    ldr r1, [r2, #0xc]
    cmp r1, r4
    ldreq r1, [r4, #0x18]
    streq r1, [r2, #0xc]
L_0205b9f0:
    str r8, [r4, #0x14]
    str r8, [r4, #0x18]
    str r8, [r4, #0x1c]
    str r8, [r4, #0x18]
    ldr r1, [r0, #0x8]
    str r1, [r4, #0x14]
    str r0, [r4, #0x1c]
    ldr r1, [r0, #0xc]
    cmp r1, #0x0
    streq r4, [r0, #0xc]
    ldrne r1, [r0, #0x8]
    strne r4, [r1, #0x18]
    str r4, [r0, #0x8]
    ldr r1, [r0, #0x10]
    add r1, r1, #0x1
    str r1, [r0, #0x10]
    b L_0205bad0
L_0205ba34:
    cmp r2, #0x0
    ldrne r1, [r4, #0x18]
    strne r1, [r2, #0x18]
    ldr r2, [r4, #0x18]
    cmp r2, #0x0
    ldrne r1, [r4, #0x14]
    strne r1, [r2, #0x14]
    ldr r2, [r4, #0x1c]
    cmp r2, #0x0
    beq L_0205ba90
    ldr r1, [r2, #0x10]
    sub r1, r1, #0x1
    str r1, [r2, #0x10]
    ldr r2, [r4, #0x1c]
    ldr r1, [r2, #0x8]
    cmp r1, r4
    ldreq r1, [r4, #0x14]
    streq r1, [r2, #0x8]
    ldr r2, [r4, #0x1c]
    ldr r1, [r2, #0xc]
    cmp r1, r4
    ldreq r1, [r4, #0x18]
    streq r1, [r2, #0xc]
L_0205ba90:
    str r7, [r4, #0x14]
    str r7, [r4, #0x18]
    str r7, [r4, #0x1c]
    str r7, [r4, #0x14]
    ldr r1, [r0, #0xc]
    str r1, [r4, #0x18]
    str r0, [r4, #0x1c]
    ldr r1, [r0, #0x8]
    cmp r1, #0x0
    streq r4, [r0, #0x8]
    ldrne r1, [r0, #0xc]
    strne r4, [r1, #0x14]
    str r4, [r0, #0xc]
    ldr r1, [r0, #0x10]
    add r1, r1, #0x1
    str r1, [r0, #0x10]
L_0205bad0:
    mov r4, r9
    mov r0, r9
    add r10, r10, #0x1
    bl func_0201c2b8
    mov r9, r0
    mov r0, r4
    bl func_0201bdd0
    cmp r0, #0x0
    bne L_0205b954
L_0205baf4:
    cmp r5, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020dc19c
    ldr r1, [r5, #0x4]
    ldr r0, [r0, #0x6c]
    add r1, r1, #0x6e
    mov r0, r0, lsl #0x18
    mov r3, r0, asr #0x18
    swpb r0, r3, [r1]
    ldr r0, [r5, #0x4]
    ldr r4, [r0, #0x34]
    ldr r2, [r0, #0x30]
    cmp r4, #0x0
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0205bb2c:
    ldr r0, [r2], #0x4
    sub r4, r4, #0x1
    ldr r0, [r0, #0x4]
    cmp r4, #0x0
    add r1, r0, #0x6e
    swpb r0, r3, [r1]
    bgt L_0205bb2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
