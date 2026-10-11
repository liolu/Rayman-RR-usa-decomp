#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dc19c[];
// clang-format off
asm void func_0207574c(void) {
    ldrb r1, [r0, #0x0]
    tst r1, #0x1
    beq L_02075768
    ldr r1, =data_020dc19c
    ldr r1, [r1, #0x74]
    str r1, [r0, #0x14]
    b L_02075780
L_02075768:
    ldr r1, =data_020dc19c
    ldr r1, [r1, #0x74]
    str r1, [r0, #0x14]
    ldrb r1, [r0, #0x0]
    bic r1, r1, #0x2
    swpb r1, r1, [r0]
L_02075780:
    mov r0, #0x1
    bx lr
}
// clang-format on
