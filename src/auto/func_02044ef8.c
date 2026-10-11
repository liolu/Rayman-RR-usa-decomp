#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020460b4();
extern char data_020cfc80[];
extern char data_020cfc83[];
// clang-format off
asm void func_02044ef8(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020cfc83
    ldrb r1, [r2, r0]
    add r4, r2, r0
    cmp r1, #0x1
    ldmnefd sp!, {r4, pc}
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_020460b4
    mov r0, #0x4
    swpb r0, r0, [r4]
    ldr r1, =data_020cfc80
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
