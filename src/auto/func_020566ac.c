#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020566ac(void) {
    stmfd sp!, {r3, lr}
    mov ip, #0x0
    str ip, [r3, #0x0]
    str ip, [r3, #0x4]
    str ip, [r3, #0x8]
    ldr lr, [r0, #0xc]
    mov ip, r1, lsl #0x1
    ldrsh ip, [lr, ip]
    cmp ip, #0x1
    ldmnefd sp!, {r3, pc}
    ldr ip, [r0, #0x10]
    mov r0, #0xc
    ldr r1, [ip, r1, lsl #0x2]
    mov ip, #0x6
    ldr r1, [r1, #0x10]
    smlabb r2, r2, r0, r1
L_020566ec:
    ldrb r0, [r2, #0x0]
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x2
    subs ip, ip, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020566ec
    ldmfd sp!, {r3, pc}
}
// clang-format on
