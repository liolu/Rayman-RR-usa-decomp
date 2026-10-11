#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d7d0();
// clang-format off
asm void func_02022884(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, r1
    add r0, r2, r0
    str r0, [r4, #0x24]
    ldrh r0, [r5, #0x22]
    mov r7, #0x0
    str r0, [r4, #0x28]
    cmp r0, #0x0
    ldr r6, [r4, #0x24]
    ble L_020228d4
L_020228b4:
    ldr r0, [r6, #0xc]
    bl func_0201d7d0
    str r0, [r6, #0xc]
    ldr r0, [r4, #0x28]
    add r7, r7, #0x1
    cmp r7, r0
    add r6, r6, #0x10
    blt L_020228b4
L_020228d4:
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
    ldrh r1, [r5, #0x22]
    strh r1, [r4, #0x22]
    ldr r1, [r5, #0x18]
    str r1, [r4, #0x18]
    ldr r1, [r5, #0x1c]
    str r1, [r4, #0x1c]
    ldrh r1, [r5, #0x20]
    sub r1, r1, #0x1
    strh r1, [r4, #0x20]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
