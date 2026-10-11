#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02093120();
extern void func_02093150();
extern void func_02093168();
extern void r4();
extern void r5();
// clang-format off
asm void func_02083ad8(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r7, r1
    mov r6, r2
    bl func_02093150
    mov r4, r0
    mov r0, r5
    bl func_02093168
    mov r5, r0
    mov r0, r4
    bl func_02093120
    mov r2, #0x0
    swpb r1, r2, [r6]
    add r3, r6, #0x1
    swpb r1, r2, [r3]
    add r3, r6, #0x2
    swpb r1, r2, [r3]
    add r3, r6, #0x3
    swpb r1, r2, [r3]
    add r3, r6, #0x4
    swpb r1, r2, [r3]
    add r3, r6, #0x5
    swpb r1, r2, [r3]
    add r3, r6, #0x6
    swpb r1, r2, [r3]
    add r3, r6, #0x7
    swpb r1, r2, [r3]
    add r1, r6, #0x8
    mov r4, r0
    swpb r0, r2, [r1]
    add r1, r6, #0x9
    swpb r0, r2, [r1]
    add r1, r6, #0xa
    swpb r0, r2, [r1]
    add r1, r6, #0xb
    swpb r0, r2, [r1]
    mov r0, r7
    mov r1, r6
    str r2, [r6, #0xc]
    blx r5
    mov r0, r0, lsl #0x18
    mov r5, r0, asr #0x18
    cmp r5, #0x1
    bne L_02083b90
    mov r0, r6
    blx r4
L_02083b90:
    and r0, r5, #0xff
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
