#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009c40(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009cb8
    cmn ip, r3, lsl #0x1
    bhs L_02009ccc
L_02009c54:
    orrs ip, r3, r1
    bmi L_02009c84
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02009c70:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02009c84:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_02009ca4
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_02009ca4:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02009cb8:
    bne L_02009c70
    cmp r0, #0x0
    bhi L_02009c70
    cmn ip, r3, lsl #0x1
    blo L_02009c54
L_02009ccc:
    bne L_02009c70
    cmp r2, #0x0
    bhi L_02009c70
    b L_02009c54
}
// clang-format on
