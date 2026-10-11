#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206b3c4();
extern void func_02074968();
extern char data_020dc19c[];
// clang-format off
asm void func_02074864(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_0206b3c4
    mov r5, r0
    ldr r2, [r5, #0x4]
    ldr r4, [r2, #0x0]
    ldrb r0, [r4, #0x9b]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldrb r0, [r4, #0x82]
    cmp r0, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #0xfc]
    ldr r0, [r2, #0x4]
    add r2, r1, #0x28
    mov r3, #0x0
    swpb r1, r3, [r2]
    ldr r1, =data_020dc19c
    ldr r2, [r1, #0xcf4]
    cmp r2, r5
    streq r3, [r1, #0xcf4]
    ldr r2, [r4, #0xfc]
    ldrb r1, [r2, #0x29]
    cmp r1, #0x0
    bne L_020748e0
    ldrb r1, [r2, #0x1c]
    cmp r1, #0x0
    ldrne r1, [r0, #0x20]
    bicne r1, r1, #0x10000
    strne r1, [r0, #0x20]
L_020748e0:
    ldr r2, [r4, #0xfc]
    ldrb r1, [r2, #0x2a]
    cmp r1, #0x0
    bne L_02074904
    ldrb r1, [r2, #0x1d]
    cmp r1, #0x0
    ldrne r1, [r0, #0x20]
    bicne r1, r1, #0x8000
    strne r1, [r0, #0x20]
L_02074904:
    ldr r1, [r4, #0xfc]
    ldrb r0, [r1, #0x20]
    cmp r0, #0x0
    ldrne r1, [r1, #0x14]
    cmpne r1, #0x0
    beq L_02074930
    ldr r0, [r5, #0x4]
    ldr r0, [r0, #0xc]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    bl func_02074968
L_02074930:
    ldr r1, [r4, #0xfc]
    ldrb r0, [r1, #0x21]
    cmp r0, #0x0
    ldrne r0, [r1, #0x10]
    cmpne r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x4]
    ldr r1, [r1, #0x18]
    ldr r0, [r0, #0xc]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x8]
    bl func_02074968
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
