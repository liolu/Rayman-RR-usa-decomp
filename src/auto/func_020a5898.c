#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020730f0();
extern char data_020dbfd0[];
extern char data_020dbfd1[];
// clang-format off
asm void func_020a5898(void) {
    stmfd sp!, {r4, lr}
    mov r0, #0x0
    mov r4, r1
    bl func_020730f0
    ldr r2, =data_020dbfd0
    mov r0, #0x1
    ldr r1, =data_020dbfd1
    mov r3, #0x0
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    mov r0, r4
    ldmfd sp!, {r4, pc}
}
// clang-format on
