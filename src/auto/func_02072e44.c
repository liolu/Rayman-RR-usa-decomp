#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202b988();
extern char data_020bd49c[];
extern char data_020bd49d[];
// clang-format off
asm void func_02072e44(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bd49d
    bl func_0202b988
    cmp r0, #0x1
    mov r0, #0x0
    ldmnefd sp!, {r3, pc}
    ldr r1, =data_020bd49c
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
}
// clang-format on
