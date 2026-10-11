#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009a6c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009ae0
    cmn ip, r3, lsl #0x1
    bhs L_02009af4
L_02009a80:
    orrs ip, r3, r1
    bmi L_02009ab0
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_02009a9c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02009ab0:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_02009ae0:
    bne L_02009a9c
    cmp r0, #0x0
    bhi L_02009a9c
    cmn ip, r3, lsl #0x1
    blo L_02009a80
L_02009af4:
    bne L_02009a9c
    cmp r2, #0x0
    bhi L_02009a9c
    b L_02009a80
}
// clang-format on
