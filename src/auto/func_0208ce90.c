#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066294();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_0208ce90(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r0
    ldr r0, [r5, #-0x8]
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r4, [r0, #0x10]
    ldrb r0, [r4, #0x75]
    tst r0, #0x2
    beq L_0208ced0
    mov r0, r4
    bl func_02066294
L_0208ced0:
    ldrb r0, [r4, #0x75]
    add r1, r4, #0x75
    mov r2, #0x0
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
    mov r0, r5
    str r2, [r4, #0x60]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
