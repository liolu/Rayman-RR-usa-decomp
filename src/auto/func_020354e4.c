#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern void func_02035e04();
extern char data_020cf718[];
// clang-format off
asm void func_020354e4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, #0x0
    mov r5, r0
    ldr lr, =data_020cf718
    mov r0, r4
    mov r1, r4
    mov r2, r4
    mov r3, r4
    mov ip, #0x13
L_02035508:
    stmia lr!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs ip, ip, #0x1
    bne L_02035508
    stmia lr!, {r0, r1, r2, r3}
    str r0, [lr, #0x0]
    mov r0, #0x0
    str r0, [r5, #0x8]
    ldr r1, [r5, #0xc]
    ldr r0, =0x4400f
    and r6, r1, r0
    str r6, [r5, #0xc]
    tst r6, #0x4000
    beq L_0203554c
    ldr r4, [r5, #0x168]
    mov r0, r4
    bl func_02035e04
L_0203554c:
    ldr r0, [r5, #0xc]
    mov r1, #0x0
    tst r0, #0x4
    beq L_0203556c
    mov r0, r5
    mov r2, #0x368
    bl memset
    b L_0203558c
L_0203556c:
    tst r0, #0x2
    mov r0, r5
    beq L_02035584
    mov r2, #0x1f4
    bl memset
    b L_0203558c
L_02035584:
    mov r2, #0x16c
    bl memset
L_0203558c:
    str r6, [r5, #0xc]
    cmp r4, #0x0
    strne r4, [r5, #0x168]
    ldr r0, [r5, #0xc]
    add r1, r5, #0x164
    orr r2, r0, #0x80
    str r2, [r5, #0xc]
    mov r0, #0x1
    swpb r0, r0, [r1]
    tst r2, #0x2
    movne r0, #0x1000
    strne r0, [r5, #0x17c]
    ldr r0, [r5, #0xc]
    mov r4, #0x13
    tst r0, #0x4
    movne r0, #0x0
    strne r0, [r5, #0x29c]
    mov r0, #0x0
    ldr r5, =data_020cf718
    mov r1, r0
    mov r2, r0
    mov r3, r0
L_020355e4:
    stmia r5!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    subs r4, r4, #0x1
    bne L_020355e4
    stmia r5!, {r0, r1, r2, r3}
    str r0, [r5, #0x0]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
