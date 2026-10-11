#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201da10();
extern void func_0201e074();
extern void func_0201e130();
extern void func_020281e0();
extern void func_0206249c();
extern void func_020728a0();
extern void func_02072a04();
extern void func_02072c70();
extern char data_020dbf4d[];
// clang-format off
asm void func_020625cc(void) {
    stmfd sp!, {r3, lr}
    bl func_020728a0
    bl func_0201da10
    mov r0, #0x0
    bl func_0201e074
    bl func_0201e130
    bl func_02072c70
    bl func_0206249c
    mov r0, #0x0
    bl func_020281e0
    bl func_02072a04
    ldr r1, =data_020dbf4d
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
