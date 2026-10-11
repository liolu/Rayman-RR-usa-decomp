#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207a970();
// clang-format off
asm void func_0207aa18(void) {
    stmfd sp!, {r3, r4, r5, lr}
    movs r5, r1
    mov r4, r0
    bne L_0207aa48
    mov r0, #0x1
    bl func_0207a970
    swpb r1, r0, [r4]
    add r2, r4, #0x1
    ldrb r1, [r4, #0x0]
    rsb r1, r1, #0x80
    swpb r1, r1, [r2]
    b L_0207aa5c
L_0207aa48:
    mov r0, r5
    bl func_0207a970
    swpb r1, r0, [r4]
    add r2, r4, #0x1
    swpb r1, r5, [r2]
L_0207aa5c:
    ldrb r1, [r4, #0x0]
    add r2, r4, #0x3
    add r3, r4, #0x2
    swpb r1, r1, [r2]
    ldrb r1, [r4, #0x3]
    swpb r1, r1, [r3]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
