#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d7d0();
// clang-format off
asm void func_02023cbc(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, r1
    add r0, r2, r0
    str r0, [r4, #0x28]
    ldrh r0, [r5, #0x1e]
    mov r7, #0x0
    str r0, [r4, #0x2c]
    cmp r0, #0x0
    ldr r6, [r4, #0x28]
    ble L_02023d08
L_02023cec:
    ldr r0, [r6, #0x0]
    bl func_0201d7d0
    str r0, [r6], #0x10
    ldr r0, [r4, #0x2c]
    add r7, r7, #0x1
    cmp r7, r0
    blt L_02023cec
L_02023d08:
    ldr r0, [r5, #0x0]
    add r2, r4, #0xc
    str r0, [r4, #0x0]
    ldr r1, [r5, #0x4]
    mov r0, #0x1
    str r1, [r4, #0x4]
    ldr r1, [r5, #0x8]
    str r1, [r4, #0x8]
    ldrb r1, [r5, #0x12]
    swpb r1, r1, [r2]
    str r0, [r4, #0x10]
    ldr r1, [r5, #0x14]
    str r1, [r4, #0x14]
    ldrh r1, [r5, #0x1e]
    strh r1, [r4, #0x1c]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
