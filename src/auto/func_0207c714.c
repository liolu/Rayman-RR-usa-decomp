#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c664();
extern void func_0202cb6c();
extern void func_0202d1e8();
extern void func_0202e210();
extern void func_0207ccec();
extern void func_0207cd3c();
// clang-format off
asm void func_0207c714(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x24
    bl func_0202c664
    add r0, r4, #0x88
    bl func_0202c664
    add r0, r4, #0xec
    bl func_0202c664
    add r0, r4, #0x150
    bl func_0202c664
    add r0, r4, #0x1b4
    bl func_0202c664
    add r0, r4, #0x24
    ldr r1, [r4, #0x14]
    bl func_0202cb6c
    add r0, r4, #0x88
    add r1, r4, #0x24
    ldr r2, [r4, #0x8]
    bl func_0202d1e8
    add r0, r4, #0xec
    add r1, r4, #0x24
    ldr r2, [r4, #0xc]
    bl func_0202d1e8
    ldr r0, [r4, #0x4]
    bl func_0207ccec
    add r1, r4, #0x164
    add r1, r1, #0x800
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x964]
    cmp r0, #0x0
    bne L_0207c7b0
    ldr r1, [r4, #0x18]
    ldr r0, =0xfe001fff
    bic r3, r1, #0xf0
    bic r1, r3, #0x100
    bic r2, r1, #0x600
    bic r1, r2, #0x1800
    and r0, r1, r0
    str r0, [r4, #0x18]
L_0207c7b0:
    ldr r0, [r4, #0x4]
    bl func_0207cd3c
    add r1, r4, #0x65
    add r1, r1, #0x900
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x10]
    ldr r0, [r0, #0x14]
    str r0, [r4, #0x63c]
    cmp r0, #0x0
    beq L_0207c7ec
    add r0, r4, #0x900
    mov r1, #0x0
    strh r1, [r0, #0x66]
    add r0, r4, #0xd00
    strh r1, [r0, #0x50]
L_0207c7ec:
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    movne r0, #0x1000
    strne r0, [r4, #0x218]
    ldmnefd sp!, {r4, pc}
    ldr r0, [r4, #0x14]
    bl func_0202e210
    str r0, [r4, #0x218]
    ldmfd sp!, {r4, pc}
}
// clang-format on
