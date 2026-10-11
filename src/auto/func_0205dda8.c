#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026748();
extern void func_0206b3c4();
extern void func_0206d968();
extern char data_020dcee8[];
// clang-format off
asm void func_0205dda8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    mov r1, r4
    bl func_0206d968
    ldr r0, [r4, #0x4]
    bl func_0206b3c4
    ldr r1, =data_020dcee8
    ldr r1, [r1, #0x0]
    bl func_02026748
    ldr r1, [r4, #0x4]
    ldrb r0, [r1, #0x25]
    tst r0, #0x1
    movne r2, #0x1
    moveq r2, #0x0
    tst r2, #0xff
    ldmnefd sp!, {r4, pc}
    tst r0, #0x2
    movne r0, #0x1
    moveq r0, #0x0
    and r0, r0, #0xff
    cmp r0, #0x1
    ldmnefd sp!, {r4, pc}
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
