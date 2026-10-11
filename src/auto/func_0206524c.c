#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206524c(void) {
    stmfd sp!, {r3, lr}
    mov ip, #0x1
    mov r1, ip, lsl r1
    cmp r2, #0x0
    and lr, r1, #0xff
    beq L_02065274
    ldrb r1, [r0, #0xf5]
    add r2, r0, #0xf5
    orr r1, r1, lr
    b L_02065284
L_02065274:
    ldrb ip, [r0, #0xf5]
    mvn r1, lr
    add r2, r0, #0xf5
    and r1, ip, r1
L_02065284:
    swpb r1, r1, [r2]
    cmp r3, #0x0
    addne ip, r0, #0xe8
    ldmneia r3, {r0, r1, r2}
    stmneia ip, {r0, r1, r2}
    ldmfd sp!, {r3, pc}
}
// clang-format on
