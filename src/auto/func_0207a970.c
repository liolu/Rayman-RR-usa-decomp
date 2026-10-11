#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200eb98();
extern char data_020dfd98[];
// clang-format off
asm void func_0207a970(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mvn r4, #0x0
    mov r5, #0x0
    ldr r6, =data_020dfd98
    mov lr, r5
    mov ip, r4
    mov r2, r4
    mov r1, r4
    mov r3, r5
L_0207a994:
    ldrb r7, [r6, #0x0]
    cmp r7, #0x0
    bne L_0207a9e8
    add r5, r5, #0x1
    cmp r4, r2
    moveq r4, lr
    cmp r5, r0
    bne L_0207a9e8
    cmp r5, #0x0
    mov r2, #0x0
    ble L_0207a9e0
    ldr r0, =data_020dfd98
    mov r1, #0x1
    add r3, r0, r4
L_0207a9cc:
    add r2, r2, #0x1
    swpb r0, r1, [r3]
    cmp r2, r5
    add r3, r3, #0x1
    blt L_0207a9cc
L_0207a9e0:
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0207a9e8:
    add lr, lr, #0x1
    cmp r7, #0x0
    cmpne r4, r1
    movne r4, ip
    movne r5, r3
    cmp lr, #0x80
    add r6, r6, #0x1
    blt L_0207a994
    bl func_0200eb98
    mvn r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
