#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02058bf4(void) {
    stmfd sp!, {r3, lr}
    ldr r3, [r0, #0x0]
    ldr ip, [r3, #0x9c]
    cmp ip, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =0xffff
    ldr r3, [r3, #0xa0]
    cmp r1, r0
    beq L_02058c2c
    mov r0, #0x14
    mla r0, r1, r0, ip
    add r1, r0, #0x10
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
L_02058c2c:
    cmp r3, #0x0
    mov lr, #0x0
    ldmlsfd sp!, {r3, pc}
L_02058c38:
    add r1, ip, #0x10
    add lr, lr, #0x1
    cmp lr, r3
    swpb r0, r2, [r1]
    add ip, ip, #0x14
    blo L_02058c38
    ldmfd sp!, {r3, pc}
}
// clang-format on
