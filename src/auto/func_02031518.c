#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
// clang-format off
asm void func_02031518(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r1
    mov r5, #0x0
    mov r7, r3
    mov r1, #0x1
    mov r10, r0
    mov r8, r2
    mov r4, r5
    cmp r9, #0x0
    swpb r0, r1, [r7]
    ble L_0203162c
    mov r11, r5
L_0203154c:
    ldrsh r0, [r8, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203161c
    mov r0, #0x1000
    str r0, [sp, #0x8]
    str r11, [sp, #0x0]
    str r11, [sp, #0x4]
    add r0, r8, #0x4
    add r1, sp, #0x0
    bl VEC_DotProduct
    ldr r1, [r10, #0x18]
    cmp r0, r1
    movge r0, #0x1
    movlt r0, #0x0
    tst r0, #0xff
    beq L_0203161c
    cmp r5, #0x0
    bne L_020315e0
    mov r5, r8
    ldr r0, [r10, #0xc]
    tst r0, #0x10
    beq L_020315d0
    ldr r0, [r8, #0x0]
    cmp r0, #0x0
    movlt r0, #0x1
    movge r0, #0x0
    tst r0, #0xff
    addeq sp, sp, #0xc
    moveq r0, r8
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020315d0:
    ldr r0, [r8, #0x0]
    subs r6, r0, #0x800
    rsbmi r6, r6, #0x0
    b L_0203161c
L_020315e0:
    ldr r1, [r5, #0x18]
    ldr r0, [r8, #0x18]
    sub r1, r1, r0
    ldr r0, =0x733
    cmp r1, r0
    ble L_0203161c
    ldr r0, [r8, #0x0]
    subs r0, r0, #0x800
    rsbmi r0, r0, #0x0
    cmp r0, r6
    bge L_0203161c
    mov r6, r0
    mov r0, #0x0
    swpb r0, r0, [r7]
    mov r5, r8
L_0203161c:
    add r8, r8, #0x68
    add r4, r4, #0x1
    cmp r4, r9
    blt L_0203154c
L_0203162c:
    mov r0, r5
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
