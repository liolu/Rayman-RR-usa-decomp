#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern char data_020bd49c[];
extern char data_020bd49d[];
// clang-format off
asm void func_020730c4(void) {
    stmfd sp!, {r3, lr}
    mov r1, r0
    ldr r0, =data_020bd49d
    mov r2, #0xc0
    bl func_02001588
    ldr r1, =data_020bd49c
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
