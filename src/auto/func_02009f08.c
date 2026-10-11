#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009f08(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    blo L_02009f5c
    cmp r3, r1, lsl #0x1
    blo L_02009f5c
    orr r3, r0, r1
    movs r3, r3, lsl #0x1
    moveq r0, #0x0
    bne L_02009f3c
    mrs ip, cpsr
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02009f3c:
    cmp r0, r1
    movne r0, #0x1
    moveq r0, #0x0
    mrs ip, cpsr
    bicne ip, ip, #0x40000000
    orreq ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02009f5c:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
