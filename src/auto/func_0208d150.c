#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_02066680();
extern char data_020dd7a4[];
// clang-format off
asm void func_0208d150(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r2, =data_020dd7a4
    mov r4, r1
    ldr r1, [r2, #0x1c]
    ldr r0, [r0, #0x8]
    add r2, sp, #0x0
    bl func_02066680
    add r0, sp, #0x0
    bl func_01ff8668
    ldr r1, =data_020dd7a4
    ldr r1, [r1, #0x24]
    cmp r0, r1
    ble L_0208d1c8
    cmp r4, #0x0
    beq L_0208d1bc
    add r3, sp, #0x0
    mov r2, #0x6
L_0208d198:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208d198
L_0208d1bc:
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r3, r4, pc}
L_0208d1c8:
    cmp r4, #0x0
    beq L_0208d1e0
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
L_0208d1e0:
    mov r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
