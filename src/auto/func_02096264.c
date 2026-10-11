#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205c178();
extern void func_02084450();
extern void func_02084ea0();
// clang-format off
asm void func_02096264(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c
    mov r5, r1
    ldr r3, [r5, #-0x8]
    mov r6, r0
    mov r4, r2
    cmp r3, #0x5f
    bne L_020962e4
    add r2, sp, #0xc
    bl func_02084450
    mov r5, r0
    ldr r2, [sp, #0xc]
    add r1, sp, #0x0
    mov r0, r6
    bl func_0205c178
    add ip, sp, #0x0
    mov r3, r4
    mov r2, #0x6
L_020962ac:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020962ac
    mov r1, #0x15
    add sp, sp, #0x1c
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_020962e4:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    mov r0, r5
    add sp, sp, #0x1c
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
