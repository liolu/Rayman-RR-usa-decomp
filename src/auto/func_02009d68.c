#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009d68(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009dd0
    cmn ip, r3, lsl #0x1
    bhs L_02009de4
L_02009d7c:
    orrs ip, r3, r1
    bmi L_02009dac
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_02009d98:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02009dac:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_02009dd0:
    bne L_02009d98
    cmp r0, #0x0
    bhi L_02009d98
    cmn ip, r3, lsl #0x1
    blo L_02009d7c
L_02009de4:
    bne L_02009d98
    cmp r2, #0x0
    bhi L_02009d98
    b L_02009d7c
}
// clang-format on
