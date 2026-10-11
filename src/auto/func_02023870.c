#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d7d0();
// clang-format off
asm void func_02023870(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, r1
    add r0, r2, r0
    str r0, [r4, #0x14]
    ldrh r0, [r5, #0x24]
    mov r7, #0x0
    str r0, [r4, #0x18]
    cmp r0, #0x0
    ldr r6, [r4, #0x14]
    ble L_020238bc
L_020238a0:
    ldr r0, [r6, #0x0]
    bl func_0201d7d0
    str r0, [r6], #0x8
    ldr r0, [r4, #0x18]
    add r7, r7, #0x1
    cmp r7, r0
    blt L_020238a0
L_020238bc:
    ldr r0, [r5, #0x0]
    add r2, r4, #0xc
    str r0, [r4, #0x0]
    ldr r1, [r5, #0x4]
    mov r0, #0x1
    str r1, [r4, #0x4]
    ldr r1, [r5, #0x8]
    add r3, r4, #0x26
    str r1, [r4, #0x8]
    ldrb r1, [r5, #0x12]
    swpb r1, r1, [r2]
    str r0, [r4, #0x10]
    ldrh r1, [r5, #0x24]
    strh r1, [r4, #0x24]
    ldr r1, [r5, #0x1c]
    str r1, [r4, #0x1c]
    ldr r1, [r5, #0x20]
    str r1, [r4, #0x20]
    ldrb r1, [r5, #0x26]
    swpb r1, r1, [r3]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
