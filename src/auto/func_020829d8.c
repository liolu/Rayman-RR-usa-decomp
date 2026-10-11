#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208479c();
// clang-format off
asm void func_020829d8(void) {
    stmfd sp!, {r3, lr}
    ldr r1, [r0, #0x4]
    mov ip, #0x0
    ldr r1, [r1, #0xc]
    ldr r3, [r1, #0x0]
    add r2, r3, #0x10
    swpb r1, ip, [r2]
    ldr r1, [r3, #0x8]
    cmp r1, #0x0
    beq L_02082a08
    bl func_0208479c
    mov ip, r0
L_02082a08:
    mov r0, ip
    ldmfd sp!, {r3, pc}
}
// clang-format on
