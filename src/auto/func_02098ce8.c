#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02098ce8(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r6, r0
    ldr r0, [r5, #-0x8]
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    ldr r0, [sp, #0x0]
    mov r3, r4
    ldr r0, [r0, #0x24]
    mov r2, #0x6
    add ip, r0, #0x4
L_02098d24:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02098d24
    mov r1, #0x15
    mov r0, r5
    str r1, [r4, #0xc]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
