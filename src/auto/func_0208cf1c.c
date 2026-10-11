#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208cf1c(void) {
    cmp r2, #0x4
    blt L_0208cf38
L_0208cf24:
    ldr r3, [r1], #0x4
    sub r2, r2, #0x4
    cmp r2, #0x4
    str r3, [r0], #0x4
    bge L_0208cf24
L_0208cf38:
    cmp r2, #0x0
    bxeq lr
L_0208cf40:
    ldrsb r3, [r1], #0x4
    subs r2, r2, #0x1
    swpb r3, r3, [r0]
    add r0, r0, #0x4
    bne L_0208cf40
    bx lr
}
// clang-format on
