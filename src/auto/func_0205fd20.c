#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205fcc0();
extern void func_0205fd00();
extern char data_020dc19c[];
// clang-format off
asm void func_0205fd20(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, #0x1
    mov r4, #0x0
L_0205fd2c:
    mov r0, r5
    bl func_0205fcc0
    add r5, r5, #0x1
    str r4, [r0, #0x4]
    add r1, r0, #0xc
    cmp r5, #0x2
    swpb r0, r4, [r1]
    ble L_0205fd2c
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    ldrne r5, [r0, #0x4]
    moveq r5, r4
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    mov r6, #0x0
L_0205fd6c:
    cmp r0, #0x0
    beq L_0205fd9c
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x4]
    ldr r0, [r0, #0x10]
    ldr r2, [r0, #0x0]
    ldrb r0, [r2, #0x79]
    cmp r0, #0x0
    ldrne r0, [r2, #0x74]
    cmpne r0, #0x0
    beq L_0205fd9c
    bl func_0205fd00
L_0205fd9c:
    mov r0, r5
    cmp r5, #0x0
    ldrne r5, [r5, #0x4]
    add r4, r4, #0x1
    moveq r5, r6
    cmp r0, #0x0
    bne L_0205fd6c
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
