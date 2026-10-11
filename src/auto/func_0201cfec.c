#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02048f4c();
extern void func_02048fd0();
extern void func_0204a8cc();
extern void func_0204a8f4();
extern void func_0204e520();
extern void func_02053590();
extern char data_020dba6c[];
// clang-format off
asm void func_0201cfec(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r1
    mov r8, r0
    mov r6, r2
    bl func_0204a8f4
    mov r4, r0
    bl func_02053590
    ldr r1, [r7, #0x38]
    smull r2, r1, r0, r1
    adds r0, r2, #0x800
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_0204a8cc
    ldr r0, [r7, #0x0]
    cmp r0, #0x8
    bne L_0201d0a0
    ldr r5, [r7, #0x2c]
    tst r5, #0x4000
    ldreq r1, =data_020dba6c
    moveq r0, #0x1
    ldrne r1, =data_020dba6c
    movne r0, #0x0
    swpb r0, r0, [r1]
    tst r5, #0x80000000
    bne L_0201d068
    ldr r0, [r7, #0x4]
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0201d068
    bl func_02048f4c
L_0201d068:
    tst r5, #0x20000000
    bne L_0201d084
    ldr r0, [r7, #0x4]
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0201d084
    bl func_02048fd0
L_0201d084:
    ldr r0, [r7, #0x4]
    ldr r3, [r7, #0x30]
    ldr r1, [r0, #0x0]
    mov r0, r8
    mov r2, r6
    bl func_0204e520
    b L_0201d0f8
L_0201d0a0:
    tst r0, #0x88
    beq L_0201d0f8
    ldr r5, [r7, #0x2c]
    tst r5, #0x4000
    ldreq r1, =data_020dba6c
    moveq r0, #0x1
    ldrne r1, =data_020dba6c
    movne r0, #0x0
    swpb r0, r0, [r1]
    tst r5, #0x80000000
    bne L_0201d0d4
    ldr r0, [r7, #0x4]
    bl func_02048f4c
L_0201d0d4:
    tst r5, #0x20000000
    bne L_0201d0e4
    ldr r0, [r7, #0x4]
    bl func_02048fd0
L_0201d0e4:
    ldr r1, [r7, #0x4]
    ldr r3, [r7, #0x30]
    mov r0, r8
    mov r2, r6
    bl func_0204e520
L_0201d0f8:
    mov r0, r4
    bl func_0204a8cc
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
