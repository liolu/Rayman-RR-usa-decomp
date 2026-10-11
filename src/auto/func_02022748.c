#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d7d0();
// clang-format off
asm void func_02022748(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, r1
    add r0, r2, r0
    str r0, [r4, #0x24]
    ldr r0, [r5, #0x14]
    mov r7, #0x0
    str r0, [r4, #0x28]
    cmp r0, #0x0
    ldr r6, [r4, #0x24]
    ble L_02022794
L_02022778:
    ldr r0, [r6, #0x0]
    bl func_0201d7d0
    str r0, [r6], #0xc
    ldr r0, [r4, #0x28]
    add r7, r7, #0x1
    cmp r7, r0
    blt L_02022778
L_02022794:
    ldr r1, [r5, #0x0]
    mov r0, #0x1
    str r1, [r4, #0x0]
    ldr r1, [r5, #0x4]
    add r2, r4, #0xc
    str r1, [r4, #0x4]
    ldr r1, [r5, #0x8]
    sub r3, r0, #0x3
    str r1, [r4, #0x8]
    ldrb r1, [r5, #0x12]
    swpb r1, r1, [r2]
    str r0, [r4, #0x10]
    ldr r1, [r5, #0x14]
    str r1, [r4, #0x14]
    ldr r1, [r5, #0x18]
    str r1, [r4, #0x18]
    str r3, [r4, #0x20]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
