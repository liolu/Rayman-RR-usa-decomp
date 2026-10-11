#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dfe30[];
extern char data_020dfe38[];
// clang-format off
asm void func_0207ab84(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_020dfe30
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_0207abc4
    mov r4, #0x0
    ldr r3, =data_020dfe38
    mov lr, r4
L_0207aba4:
    mov ip, r4, lsl #0x3
    add r1, r4, #0x1
    add r2, r3, r4, lsl #0x3
    strh lr, [r3, ip]
    and r4, r1, #0xff
    str lr, [r2, #0x4]
    cmp r4, #0x3
    blo L_0207aba4
L_0207abc4:
    ldr r2, =data_020dfe30
    ldrb r1, [r2, #0x0]
    add r1, r1, #0x1
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, pc}
}
// clang-format on
