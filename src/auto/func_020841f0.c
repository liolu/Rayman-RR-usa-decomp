#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020931e8();
extern void r3();
extern char data_020e39f0[];
// clang-format off
asm void func_020841f0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    ldr r0, [r5, #0x0]
    mov r4, r2
    bl func_020931e8
    ldr r1, =data_020e39f0
    mov r3, r0
    add r2, r1, #0x8
    mov r1, #0x0
    mov r0, r6
    swpb r1, r1, [r2]
    add r1, r5, #0x8
    blx r3
    ldr r1, =data_020e39f0
    mov r2, #0x14
    ldrb r1, [r1, #0x8]
    bic r1, r1, #0x4
    str r1, [r4, #0x0]
    str r2, [r4, #0xc]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
