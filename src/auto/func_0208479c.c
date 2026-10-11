#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020824d4();
extern void func_0208268c();
extern void func_02082758();
extern void func_020845d8();
extern void func_020846e0();
extern char data_020becb8[];
extern char data_020e39f0[];
extern char data_020e3a00[];
// clang-format off
asm void func_0208479c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    ldr r0, [r8, #0x4]
    mov r7, r1
    ldr r1, [r0, #0x4]
    mov r5, #0x0
    cmp r1, #0x0
    beq L_020847d4
    ldr r0, =data_020becb8
    ldr r2, [r1, #0x4]
    ldr r1, [r0, #0xa8]
    ldr r0, =data_020e39f0
    cmp r2, r1
    str r2, [r0, #0xc]
L_020847d4:
    ldr r9, =data_020e3a00
    mov r0, #0x0
    swpb r0, r0, [r9]
    mov r4, #0x0
L_020847e4:
    mov r0, r8
    mov r1, r7
    bl func_020845d8
    mov r6, r0
    and r0, r6, #0x8
    cmp r0, #0x8
    beq L_02084858
    and r0, r6, #0x1
    cmp r0, #0x1
    beq L_02084818
    ldrb r0, [r9, #0x0]
    cmp r0, #0x0
    beq L_02084848
L_02084818:
    mov r0, r7
    mov r1, r4
    bl func_020824d4
    mov r1, r0
    cmp r1, #0x1
    bhs L_02084858
    mov r0, r7
    bl func_02082758
    str r0, [r7, #0x4]
    mov r0, r7
    bl func_0208268c
    b L_02084858
L_02084848:
    mov r0, r8
    mov r1, r7
    bl func_020846e0
    mov r6, r0
L_02084858:
    ldrb r1, [r9, #0x0]
    and r0, r6, #0x8
    cmp r0, #0x8
    orr r5, r5, r1
    bne L_02084878
    and r0, r6, #0x1
    cmp r0, #0x1
    bne L_020847e4
L_02084878:
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
