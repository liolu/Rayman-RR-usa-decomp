#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushAll(void) {
    mov ip, #0x0
    mov r1, #0x0
L_0200d698:
    mov r0, #0x0
L_0200d69c:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_0200d69c
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_0200d698
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_InvalidateRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200d6cc:
    mcr p15, 0, r0, c7, c6, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200d6cc
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_StoreRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200d6e8:
    mcr p15, 0, r0, c7, c10, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200d6e8
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushRange(void) {
    mov ip, #0x0
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200d708:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200d708
    bx lr
}
