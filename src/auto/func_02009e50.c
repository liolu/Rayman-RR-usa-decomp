#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009e50(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    cmphs r3, r1, lsl #0x1
    blo L_02009e98
    cmp r0, #0x0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0x0
    cmp r1, #0x0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0x0
    cmp r0, r1
    movgt r0, #0x1
    movle r0, #0x0
    mrs ip, cpsr
    bicle ip, ip, #0x20000000
    orrgt ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02009e98:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
