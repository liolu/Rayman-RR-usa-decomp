#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204217c();
extern void func_0207ad9c();
extern char data_020bc544[];
// clang-format off
asm void func_0202f9b0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    ldrb r7, [sp, #0x40]
    mov r10, r3
    add r5, r2, r0, lsl #0x4
    ands r8, r7, #0x1
    moveq r9, #0x8
    beq L_0202f9ec
    ldrb r9, [sp, #0x3c]
    sub r0, r9, #0x1
    tst r10, r0
    mvnne r0, r0
    andne r0, r10, r0
    addne r10, r9, r0
    add r10, r10, #0x3
L_0202f9ec:
    sub r6, r9, #0x1
    tst r10, r6
    mvnne r0, r6
    andne r0, r10, r0
    addne r10, r9, r0
    mov r0, r10
    bl func_0204217c
    mov r4, r0
    tst r4, r6
    mvnne r0, r6
    andne r0, r4, r0
    addne r0, r9, r0
    cmp r4, r0
    beq L_0202fa54
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x2
    bl func_0207ad9c
L_0202fa54:
    cmp r4, #0x0
    bne L_0202fa94
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x1f
    bl func_0207ad9c
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
L_0202fa94:
    add r0, r4, r10
    str r4, [r5, #0x0]
    sub r0, r0, #0x1
    str r0, [r5, #0x4]
    cmp r8, #0x0
    bne L_0202fb08
    str r4, [r5, #0x8]
    str r4, [r5, #0xc]
    mov r0, r10, lsr #0x3
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    tst r7, #0x2
    addeq sp, sp, #0x14
    str r0, [r4, #0xc]
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    subs r10, r10, r9, lsl #0x1
    addeq sp, sp, #0x14
    add r2, r4, #0x10
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, =0xaaaaaaaa
L_0202faec:
    str r1, [r2, #0x0]
    str r0, [r2, #0x4]
    subs r10, r10, r9
    add r2, r2, #0x8
    bne L_0202faec
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
L_0202fb08:
    add r1, r4, #0x3
    tst r1, r6
    mvnne r0, r6
    andne r0, r1, r0
    str r1, [r5, #0xc]
    addne r1, r9, r0
    sub r0, r1, #0x1
    str r0, [r5, #0xc]
    mvn r2, #0x0
    str r2, [r5, #0x8]
    tst r7, #0x2
    beq L_0202fb64
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x4]
    add r3, r1, #0x1
    cmp r3, r0
    bhi L_0202fb64
    sub r1, r2, #0x55
L_0202fb50:
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    ldr r0, [r5, #0x4]
    cmp r3, r0
    bls L_0202fb50
L_0202fb64:
    mov r0, #0x3
    tst r6, #0x3
    mvnne r0, r6
    ldr r2, [r5, #0x0]
    andne r0, r0, #0x3
    addne r0, r9, r0
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    swpb r0, r9, [r1]
    add r1, r2, #0x2
    ldrb r0, [sp, #0x40]
    swpb r0, r0, [r1]
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x4]
    sub r0, r0, r1
    cmp r0, #0x4
    addlo sp, sp, #0x14
    ldmlofd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r3, r1, #0x1
    ldr r0, =0xe123456e
    add r1, r3, #0x4
    str r0, [sp, #0x10]
    cmp r3, r1
    add r2, sp, #0x10
    addhs sp, sp, #0x14
    ldmhsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
L_0202fbcc:
    ldrsb r0, [r2], #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    cmp r3, r1
    blo L_0202fbcc
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
