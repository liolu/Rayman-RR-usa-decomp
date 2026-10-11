#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084ea0();
// clang-format off
asm void func_020849bc(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x78
    mov r9, r0
    ldrb r5, [r9, #0x0]
    mov r7, #0x0
    mov r4, r7
    cmp r5, #0x0
    bls L_02084a14
    add r2, sp, #0x0
L_020849e0:
    add r0, r9, r4, lsl #0x2
    ldr r3, [r0, #0x4]
    ldr r0, [r3, #0x4]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x14]
    cmp r0, r1
    addeq r0, r7, #0x1
    streq r3, [r2, r7, lsl #0x2]
    andeq r7, r0, #0xff
    add r0, r4, #0x1
    and r4, r0, #0xff
    cmp r4, r5
    blo L_020849e0
L_02084a14:
    mov r8, #0x0
    cmp r7, #0x0
    addls sp, sp, #0x78
    swpb r0, r8, [r9]
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r5, #0xe
    mov r4, r8
    add r6, sp, #0x0
L_02084a34:
    ldrb r1, [r9, #0x0]
    ldrb r0, [r9, #0x1]
    ldr r2, [r6, r8, lsl #0x2]
    cmp r1, r0
    bhs L_02084a5c
    add r0, r1, #0x1
    swpb r0, r0, [r9]
    add r0, r9, r1, lsl #0x2
    str r2, [r0, #0x4]
    b L_02084a68
L_02084a5c:
    mov r0, r5
    mov r1, r4
    bl func_02084ea0
L_02084a68:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, r7
    blo L_02084a34
    add sp, sp, #0x78
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
