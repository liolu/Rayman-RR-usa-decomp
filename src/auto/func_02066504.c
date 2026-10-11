#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02066504(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r2, #0x0
L_0206650c:
    add r1, r0, r2, lsl #0x2
    ldr r1, [r1, #0x138]
    cmp r1, #0x0
    bne L_02066528
    add r2, r2, #0x1
    cmp r2, #0x8
    blo L_0206650c
L_02066528:
    cmp r2, #0x8
    ldmlofd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r0, #0xc]
    mov lr, #0x0
    ldr r1, [r1, #0x68]
    mov r3, r0
    ldr r2, [r1, #0x24]
    add ip, r0, #0xd8
    mov r1, #0x7a
    mov r9, lr
L_02066550:
    add r4, r0, lr, lsl #0x2
    str r1, [r4, #0x138]
    str r9, [r3, #0x78]
    str r9, [r3, #0x7c]
    mov r7, ip
    str r9, [r3, #0x80]
    add r8, r2, #0x4
    mov r6, #0x6
L_02066570:
    ldrb r4, [r8, #0x0]
    ldrb r5, [r8, #0x1]
    add r8, r8, #0x2
    subs r6, r6, #0x1
    swpb r4, r4, [r7]
    add r7, r7, #0x1
    swpb r4, r5, [r7]
    add r7, r7, #0x1
    bne L_02066570
    add lr, lr, #0x1
    cmp lr, #0x8
    add r3, r3, #0xc
    add ip, ip, #0xc
    blo L_02066550
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
