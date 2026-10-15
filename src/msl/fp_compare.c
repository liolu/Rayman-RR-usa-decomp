#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dgr(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009b78
    cmn ip, r3, lsl #0x1
    bhs L_02009b8c
L_02009b18:
    orrs ip, r3, r1
    bmi L_02009b48
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02009b34:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02009b48:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02009b78:
    bne L_02009b34
    cmp r0, #0x0
    bhi L_02009b34
    cmn ip, r3, lsl #0x1
    blo L_02009b18
L_02009b8c:
    bne L_02009b34
    cmp r2, #0x0
    bhi L_02009b34
    b L_02009b18
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dleq(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dls(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _deq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02009d44
    cmn ip, r3, lsl #0x1
    bhs L_02009d58
L_02009cf0:
    orrs ip, r3, r1
    bmi L_02009d20
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02009d0c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02009d20:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02009d44:
    bne L_02009d0c
    cmp r0, #0x0
    bhi L_02009d0c
    cmn ip, r3, lsl #0x1
    blo L_02009cf0
L_02009d58:
    bne L_02009d0c
    cmp r2, #0x0
    bhi L_02009d0c
    b L_02009cf0
}
