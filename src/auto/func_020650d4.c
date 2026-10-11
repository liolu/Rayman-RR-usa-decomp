#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ad34();
extern char data_020dc19c[];
// clang-format off
asm void func_020650d4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0x1
    bls L_0206510c
    ldr r0, =data_020dc19c
    ldrb r2, [r5, #0xda]
    ldr r6, [r0, #0x74]
    ldr r0, [r5, #0xc0]
    sub r0, r6, r0
    mul r0, r2, r0
    bl func_0200ad34
    sub r0, r6, r0
    str r0, [r5, #0xc0]
L_0206510c:
    add r1, r5, #0xda
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
