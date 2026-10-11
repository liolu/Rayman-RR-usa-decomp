#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201a588();
// clang-format off
asm void func_02058b78(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r1, #0x14
    mov r5, r0
    mul r0, r4, r1
    bl func_0201a588
    mov r3, #0x0
    str r0, [r5, #0x0]
    cmp r4, #0x0
    ldmlsfd sp!, {r3, r4, r5, pc}
    mov ip, r3
    mov r2, #0x1
L_02058ba8:
    ldr r0, [r5, #0x0]
    add r3, r3, #0x1
    add r0, r0, ip
    add r1, r0, #0x11
    cmp r3, r4
    swpb r0, r2, [r1]
    add ip, ip, #0x14
    blo L_02058ba8
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
