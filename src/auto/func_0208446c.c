#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020825bc();
extern void func_0208261c();
extern void r3();
extern char data_020becbc[];
extern char data_020e39e8[];
extern char data_020e39e9[];
extern char data_020e39f0[];
extern char data_020e3a01[];
extern char data_020e3a04[];
// clang-format off
asm void func_0208446c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r5, =data_020e39e8
    mov r10, r0
    mov r0, #0x0
    swpb r0, r0, [r5]
    mov r9, r1
    mov r8, r2
    ldr r0, =data_020e39e9
    mov r1, #0x20
    mov r2, #0x1
    swpb r1, r1, [r0]
    swpb r0, r2, [r5]
    ldr r11, =data_020becbc
    ldr r4, =data_020e3a04
L_020844a4:
    ldrb r2, [r9, #0x7]
    mov r0, r10
    mov r1, r9
    ldr r3, [r11, r2, lsl #0x2]
    mov r2, r8
    ldrb r6, [r9, #0x6]
    blx r3
    ldr r1, =data_020e39e9
    ldr r2, [r8, #0x0]
    ldrb r1, [r1, #0x0]
    mov r9, r0
    and r7, r2, #0xff
    and r0, r1, #0x20
    cmp r0, #0x20
    beq L_02084518
    ldrb r0, [r5, #0x0]
    cmp r0, #0x0
    bne L_02084518
    and r0, r7, #0x4
    cmp r0, #0x4
    bne L_02084510
    ldrb r0, [r9, #0x6]
    cmp r0, r6
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    bne L_02084518
L_02084510:
    and r0, r7, #0x1c
    orr r7, r0, r1
L_02084518:
    and r0, r7, #0x10
    cmp r0, #0x10
    andne r0, r7, #0x8
    cmpne r0, #0x8
    bne L_02084540
    str r7, [r8, #0x0]
    mov r1, #0x14
    mov r0, r9
    str r1, [r8, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02084540:
    and r0, r7, #0x4
    cmp r0, #0x4
    bne L_02084554
    ldr r0, [r4, #0x0]
    bl func_020825bc
L_02084554:
    and r0, r7, #0x1
    cmp r0, #0x1
    bne L_02084578
    ldr r0, =data_020e3a01
    ldr r2, =data_020e3a04
    ldrb r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    bl func_0208261c
    b L_020845ac
L_02084578:
    ldrb r0, [r9, #0x7]
    cmp r0, #0x8
    moveq r7, #0x10
    beq L_020845ac
    and r0, r7, #0x2
    cmp r0, #0x2
    beq L_020845ac
    ldr r0, =data_020e39f0
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, [r4, #0x0]
    strne r9, [r0, #0x4]
    b L_020844a4
L_020845ac:
    str r7, [r8, #0x0]
    mov r1, #0x14
    mov r0, r9
    str r1, [r8, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
