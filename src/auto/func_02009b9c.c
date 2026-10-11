#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009b9c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009c1c
    cmn ip, r3, lsl #0x1
    bhs L_02009c30
L_02009bb0:
    orrs ip, r3, r1
    bmi L_02009be4
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_02009bcc:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02009be4:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bne L_02009c08
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_02009c08:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_02009c1c:
    bne L_02009bcc
    cmp r0, #0x0
    bhi L_02009bcc
    cmn ip, r3, lsl #0x1
    blo L_02009bb0
L_02009c30:
    bne L_02009bcc
    cmp r2, #0x0
    bhi L_02009bcc
    b L_02009bb0
}
// clang-format on
