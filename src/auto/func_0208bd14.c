#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066228();
// clang-format off
asm void func_0208bd14(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    ldr r4, [sp, #0x2c]
    mov r5, #0x0
    mov r8, r0
    mov r7, r1
    mov r6, r3
    str r5, [sp, #0x0]
    str r5, [sp, #0x4]
    str r5, [sp, #0x8]
    cmp r4, #0x1
    ldr r5, [sp, #0x28]
    ldr r4, [sp, #0x34]
    bne L_0208bd54
    bl func_02066228
    mov r2, r5
L_0208bd54:
    ldr r1, [sp, #0x30]
    mvn r0, #0x0
    cmp r1, r0
    beq L_0208bd78
    cmp r1, #0x0
    beq L_0208bda8
    cmp r1, #0x1
    beq L_0208be1c
    b L_0208be48
L_0208bd78:
    add r4, sp, #0x0
    mov r3, #0x6
L_0208bd80:
    ldrb r0, [r7, #0x0]
    ldrb r1, [r7, #0x1]
    add r7, r7, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208bd80
    b L_0208be48
L_0208bda8:
    ldrb r0, [r8, #0x74]
    tst r0, #0x1
    beq L_0208bde8
    ldr r1, [r5, #0x0]
    ldr r0, [r4, #0x0]
    add r0, r1, r0
    str r0, [sp, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, [r4, #0x4]
    add r0, r1, r0
    str r0, [sp, #0x4]
    ldr r1, [r5, #0x8]
    ldr r0, [r4, #0x8]
    add r0, r1, r0
    str r0, [sp, #0x8]
    b L_0208be48
L_0208bde8:
    ldr r1, [r2, #0x0]
    ldr r0, [r4, #0x0]
    add r0, r1, r0
    str r0, [sp, #0x0]
    ldr r1, [r2, #0x4]
    ldr r0, [r4, #0x4]
    add r0, r1, r0
    str r0, [sp, #0x4]
    ldr r1, [r2, #0x8]
    ldr r0, [r4, #0x8]
    add r0, r1, r0
    str r0, [sp, #0x8]
    b L_0208be48
L_0208be1c:
    add r7, sp, #0x0
    mov r3, #0x6
L_0208be24:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0208be24
L_0208be48:
    add r4, sp, #0x0
    mov r3, #0x6
L_0208be50:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r2]
    add r2, r2, #0x1
    swpb r0, r1, [r2]
    add r2, r2, #0x1
    bne L_0208be50
    ldr r0, [sp, #0x2c]
    cmp r0, #0x1
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r3, sp, #0x0
    mov r2, #0x6
L_0208be8c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r6]
    add r6, r6, #0x1
    bne L_0208be8c
    add r3, sp, #0x0
    mov r2, #0x6
L_0208beb8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0208beb8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
