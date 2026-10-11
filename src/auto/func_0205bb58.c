#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026748();
extern void func_0206d968();
extern char data_020dc18c[];
extern char data_020dcee8[];
// clang-format off
asm void func_0205bb58(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r0, =data_020dc18c
    ldr r0, [r0, #0x0]
    ldr r4, [r0, #0x8]
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
L_0205bb70:
    ldr r0, [r4, #0x4]
    ldr r1, [r0, #0x4]
    ldrb r0, [r1, #0x25]
    tst r0, #0x4
    movne r0, #0x1
    moveq r0, #0x0
    and r0, r0, #0xff
    cmp r0, #0x1
    bne L_0205bc28
    ldrb r0, [r1, #0x24]
    cmp r0, #0x0
    ldrne r5, [r4, #0x8]
    cmpne r5, #0x0
    beq L_0205bbf4
    ldr r6, =data_020dcee8
L_0205bbac:
    ldr r0, [r5, #0x0]
    cmp r0, #0x2
    bne L_0205bbe8
    ldr r1, [r5, #0x4]
    mov r0, r5
    bl func_0206d968
    ldr r1, [r5, #0x4]
    mov r0, r5
    ldr r2, [r1, #0x4]
    ldrb r1, [r2, #0x25]
    add r2, r2, #0x25
    bic r1, r1, #0x4
    swpb r1, r1, [r2]
    ldr r1, [r6, #0x0]
    bl func_02026748
L_0205bbe8:
    ldr r5, [r5, #0x14]
    cmp r5, #0x0
    bne L_0205bbac
L_0205bbf4:
    ldr r1, [r4, #0x4]
    mov r0, r4
    bl func_0206d968
    ldr r0, [r4, #0x4]
    ldr r3, =data_020dcee8
    ldr r2, [r0, #0x4]
    mov r0, r4
    ldrb r1, [r2, #0x25]
    add r2, r2, #0x25
    bic r1, r1, #0x4
    swpb r1, r1, [r2]
    ldr r1, [r3, #0x0]
    bl func_02026748
L_0205bc28:
    ldr r4, [r4, #0x14]
    cmp r4, #0x0
    bne L_0205bb70
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
