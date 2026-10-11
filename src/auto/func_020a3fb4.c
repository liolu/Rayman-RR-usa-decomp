#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_020a3fb4(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r6, r1
    ldr r4, [r6, #-0x8]
    mov r7, r0
    mov r0, r4
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r7
    bl func_0209c740
    ldr r1, [sp, #0x0]
    add r2, sp, #0x4
    ldr r0, [r1, #0x0]
    cmp r0, #0x2
    movne r5, #0x0
    ldreq r5, [r1, #0x4]
    mov r0, r7
    mov r1, r6
    bl func_02084450
    ldr r1, =0x105
    ldr r2, [sp, #0x4]
    cmp r4, r1
    addne sp, sp, #0x14
    and r3, r2, #0xff
    ldmnefd sp!, {r4, r5, r6, r7, pc}
    ldr r1, [r5, #0x4]
    add r2, r1, #0x1c
    swpb r1, r3, [r2]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
