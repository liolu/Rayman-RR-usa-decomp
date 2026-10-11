#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020824d4();
extern void func_02082758();
extern void func_0208446c();
extern char data_020e39f0[];
extern char data_020e3a01[];
extern char data_020e3a04[];
// clang-format off
asm void func_020846e0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r3, =data_020e39f0
    mov r2, #0x1
    swpb r2, r2, [r3]
    mov r4, r1
    ldr r2, =data_020e3a04
    mov r5, r0
    str r4, [r2, #0x0]
    ldr r6, [r4, #0x4]
    cmp r6, #0x0
    addeq sp, sp, #0x10
    moveq r0, #0x10
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r3, =data_020e3a01
    mov r1, #0x0
    mov r0, r4
    swpb r2, r1, [r3]
    bl func_020824d4
    mov r1, r0
    cmp r1, #0x1
    bhs L_02084744
    mov r0, r4
    bl func_02082758
    mov r6, r0
L_02084744:
    ldrb r0, [r6, #0x7]
    add r2, sp, #0x0
    cmp r0, #0x8
    ldreq r0, [r4, #0x8]
    ldreq r0, [r0, #0x4]
    ldreq r6, [r0, #0x0]
    mov r0, r5
    mov r1, r6
    bl func_0208446c
    ldr r1, [sp, #0x0]
    and r2, r1, #0xff
    and r1, r2, #0x8
    cmp r1, #0x8
    andne r1, r2, #0x2
    cmpne r1, #0x2
    strne r0, [r4, #0x4]
    mov r0, r2
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
