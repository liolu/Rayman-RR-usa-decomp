#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208d000();
extern void func_0208d04c();
extern void func_0208fd90();
// clang-format off
asm void func_0208f340(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x8]
    ldr r0, [r1, #0x60]
    cmp r0, #0x2
    ldmnefd sp!, {r4, pc}
    ldr r0, [r4, #0x1c]
    add r1, r1, #0x1c
    bl func_0208d000
    ldr r0, [r4, #0x1c]
    add r1, r4, #0xa0
    add r2, r4, #0xb8
    bl func_0208d04c
    ldr r0, [r4, #0x8]
    add ip, r4, #0x20
    add r3, r0, #0x1c
    mov r2, #0x6
L_0208f384:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208f384
    ldr r1, [r4, #0x8]
    mov r0, r4
    add r1, r1, #0x1c
    bl func_0208fd90
    ldmfd sp!, {r4, pc}
}
// clang-format on
