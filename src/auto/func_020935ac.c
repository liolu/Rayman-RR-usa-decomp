#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202dc18();
// clang-format off
asm void func_020935ac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r1
    mov r1, #0x0
    ldr r0, [r0, #0x24]
    mov r2, r1
    mov r3, r1
    bl func_0202dc18
    mov r3, r4
    mov ip, #0x0
    mov r2, #0x6
L_020935d4:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020935d4
    mov r0, #0x15
    str r0, [r4, #0xc]
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
}
// clang-format on
