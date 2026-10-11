#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02058c58();
// clang-format off
asm void func_02058c7c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    ldr r0, [r0, #0x4]
    mov r5, r2
    ldr r2, [r0, #0x0]
    ldr r4, [r2, #0x9c]
    cmp r4, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =0xffff
    ldr r6, [r2, #0xa0]
    cmp r1, r0
    beq L_02058cd0
    mov r0, #0x14
    mla r2, r1, r0, r4
    add r1, r2, #0x11
    swpb r0, r5, [r1]
    mov r1, r5
    ldr r0, [r2, #0x4]
    cmp r0, #0x0
    ldreq r0, [r2, #0x0]
    bl func_02058c58
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02058cd0:
    mov r7, #0x0
    cmp r6, #0x0
    ldmlsfd sp!, {r3, r4, r5, r6, r7, pc}
L_02058cdc:
    add r1, r4, #0x11
    swpb r0, r5, [r1]
    mov r1, r5
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    ldreq r0, [r4, #0x0]
    bl func_02058c58
    add r7, r7, #0x1
    cmp r7, r6
    add r4, r4, #0x14
    blo L_02058cdc
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
