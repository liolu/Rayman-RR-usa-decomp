#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203592c();
extern void func_0205772c();
extern void func_0206730c();
extern void func_02067484();
// clang-format off
asm void func_02067778(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r9, [r1, #0x8]
    ldr r10, [r0, #0x8]
    ldr r4, [r9, #0x0]
    ldr r5, [r10, #0x0]
    mov r7, #0x1
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    bl func_0205772c
    ldr r1, [r4, #0xc]
    mov r8, r0
    tst r1, #0x4
    movne r6, #0x2
    bne L_020677bc
    tst r1, #0x2
    movne r6, r7
    moveq r6, #0x0
L_020677bc:
    cmp r5, #0x0
    beq L_02067854
    cmp r6, #0x0
    beq L_0206780c
    cmp r6, #0x1
    beq L_020677f4
    cmp r6, #0x2
    bne L_02067820
    ldr r0, [r5, #0xc]
    tst r0, #0x4
    moveq r0, #0x1
    movne r0, #0x0
    and r7, r0, #0xff
    b L_02067820
L_020677f4:
    ldr r0, [r5, #0xc]
    tst r0, #0x2
    moveq r0, #0x1
    movne r0, #0x0
    and r7, r0, #0xff
    b L_02067820
L_0206780c:
    ldr r0, [r5, #0xc]
    tst r0, #0x1
    moveq r0, #0x1
    movne r0, #0x0
    and r7, r0, #0xff
L_02067820:
    ldr r0, [r5, #0xc]
    tst r0, #0x4000
    movne r0, #0x1
    moveq r0, #0x0
    tst r1, #0x4000
    movne r1, #0x1
    moveq r1, #0x0
    cmp r1, r0
    movne r7, #0x1
    cmp r7, #0x0
    beq L_02067854
    mov r0, r10
    bl func_02067484
L_02067854:
    cmp r7, #0x0
    beq L_02067880
    ldr r0, [r4, #0xc]
    mov r1, r6
    tst r0, #0x4000
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r10
    mov r3, r8
    and r2, r2, #0xff
    bl func_0206730c
L_02067880:
    ldr r0, [r10, #0x0]
    ldr r1, [r9, #0x0]
    bl func_0203592c
    ldr r4, [r10, #0x4]
    ldr r3, [r9, #0x4]
    mov r2, #0xe
L_02067898:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02067898
    ldr r0, [r9, #0x8]
    cmp r8, #0x0
    str r0, [r10, #0x8]
    ldr r1, [r10, #0x0]
    ldrne r0, [r1, #0xc]
    orrne r0, r0, #0x40000
    ldreq r0, [r1, #0xc]
    biceq r0, r0, #0x40000
    str r0, [r1, #0xc]
    ldr r1, [r10, #0x0]
    ldr r0, [r1, #0xc]
    str r0, [r1, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
