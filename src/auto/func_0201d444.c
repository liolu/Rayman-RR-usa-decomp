#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ab84();
extern char data_020bc050[];
// clang-format off
asm void func_0201d444(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bc050
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    ldmnefd sp!, {r3, pc}
    bl func_0207ab84
    ldr r1, =data_020bc050
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
