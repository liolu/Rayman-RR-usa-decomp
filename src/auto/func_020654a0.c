#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02082788();
// clang-format off
asm void func_020654a0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02082788
    ldr r1, =0xcdcdcdcd
    stmia r4, {r0, r1}
    add r1, r4, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
