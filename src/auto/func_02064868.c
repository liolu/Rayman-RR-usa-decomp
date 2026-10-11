#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020414ac();
extern void func_02041da8();
extern void func_02061fcc();
extern void func_0206ad5c();
// clang-format off
asm void func_02064868(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r7, r1
    mov r6, r3
    bl func_0206ad5c
    mov r4, r0
    mov r1, r5
    mov r0, #0x47
    mov r2, #0x18
    bl func_020414ac
    mov r5, r0
    ldrh r0, [r5, #0x8]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_020648b8
    bl func_02061fcc
    str r0, [r6, #0x0]
    str r7, [r4, #0x4]
    ldrh r0, [r5, #0x8]
    str r0, [r4, #0x0]
L_020648b8:
    ldrsh r0, [r5, #0xa]
    add r1, r4, #0x1d
    add r2, r4, #0x1e
    swpb r0, r0, [r1]
    add r1, r4, #0x1f
    ldrsh r0, [r5, #0xc]
    swpb r0, r0, [r2]
    ldrsh r0, [r5, #0xe]
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x10]
    tst r0, #0x1
    movne r0, #0x5
    strne r0, [r4, #0xc]
    bne L_020648fc
    tst r0, #0x2
    movne r0, #0x0
    strne r0, [r4, #0xc]
L_020648fc:
    ldrh r1, [r5, #0x10]
    ands r0, r1, #0x4
    movne r0, #0x5
    strne r0, [r4, #0x10]
    bne L_0206496c
    tst r1, #0x8
    movne r0, #0x0
    strne r0, [r4, #0x10]
    bne L_0206496c
    cmp r0, #0x0
    movne r0, #0x5
    strne r0, [r4, #0x10]
    bne L_0206496c
    tst r1, #0x10
    movne r0, #0x1
    strne r0, [r4, #0x10]
    bne L_0206496c
    tst r1, #0x20
    movne r0, #0x2
    strne r0, [r4, #0x10]
    bne L_0206496c
    tst r1, #0x40
    movne r0, #0x3
    strne r0, [r4, #0x10]
    bne L_0206496c
    tst r1, #0x80
    movne r0, #0x3
    strne r0, [r4, #0x10]
L_0206496c:
    ldrb r0, [r5, #0x14]
    add r1, r4, #0x24
    add r2, r4, #0x26
    swpb r0, r0, [r1]
    add r3, r4, #0x27
    ldr r1, [r5, #0x0]
    mov r0, r5
    str r1, [r4, #0x20]
    ldr r1, [r5, #0x4]
    add ip, r4, #0x2f
    str r1, [r4, #0x18]
    ldrb r1, [r5, #0x15]
    swpb r1, r1, [r2]
    ldrb r1, [r5, #0x16]
    swpb r1, r1, [r3]
    ldrb r1, [r5, #0x17]
    swpb r1, r1, [ip]
    bl func_02041da8
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
