#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020663b8();
extern void func_020663f0();
extern void func_02066428();
// clang-format off
asm void func_02066460(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_020663b8
    mov r3, #0x6
L_0206647c:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r6]
    add r6, r6, #0x1
    swpb r1, r2, [r6]
    add r6, r6, #0x1
    bne L_0206647c
    mov r0, r7
    bl func_020663f0
    mov r3, #0x6
L_020664ac:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_020664ac
    mov r0, r7
    bl func_02066428
    mov r3, #0x6
L_020664dc:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r4]
    add r4, r4, #0x1
    swpb r1, r2, [r4]
    add r4, r4, #0x1
    bne L_020664dc
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
