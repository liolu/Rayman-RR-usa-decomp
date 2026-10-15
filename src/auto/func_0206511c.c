#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _u32_div_f();
extern void func_0205e9e0();
extern char data_020dc19c[];
// clang-format off
asm void func_0206511c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x4]
    mov r4, r1
    bl func_0205e9e0
    mul r1, r4, r0
    ldr r0, =0x51eb851f
    umull r0, r2, r1, r0
    mov r2, r2, lsr #0x5
    and r4, r2, #0xff
    cmp r4, #0x1
    ldmlsfd sp!, {r4, r5, r6, pc}
    ldr r0, =data_020dc19c
    ldrb r2, [r5, #0xda]
    ldr r6, [r0, #0x74]
    ldr r0, [r5, #0xc0]
    mov r1, r4
    sub r0, r6, r0
    mul r0, r2, r0
    bl _u32_div_f
    sub r0, r6, r0
    str r0, [r5, #0xc0]
    add r1, r5, #0xda
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
