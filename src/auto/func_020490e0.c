#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020d0c18[];
extern char data_020d0c19[];
extern char data_020d0c1c[];
extern char data_020d0c28[];
extern char data_020d0c34[];
extern char data_020d0c35[];
extern char data_020d0c38[];
extern char data_020d0c44[];
// clang-format off
asm void func_020490e0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r2, =data_020d0c28
    ldr r0, =data_020d0c44
    mov r3, #0x0
L_020490f0:
    ldr r1, [r2, r3, lsl #0x2]
    str r1, [r0, r3, lsl #0x2]
    add r3, r3, #0x1
    cmp r3, #0x3
    blt L_020490f0
    ldr r1, =data_020d0c19
    ldr r0, =data_020d0c18
    ldrsb r4, [r1, #0x0]
    ldr r1, =data_020d0c1c
    ldr ip, =data_020d0c35
    ldrsb lr, [r0, #0x0]
    ldr r3, =data_020d0c34
    ldr r5, =data_020d0c38
    ldmia r1, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    swpb r0, r4, [ip]
    swpb r0, lr, [r3]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
