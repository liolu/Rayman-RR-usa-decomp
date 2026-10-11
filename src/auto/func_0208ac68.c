#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208a410();
extern void func_0208aa0c();
extern void func_0208ff30();
// clang-format off
asm void func_0208ac68(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x8]
    ldrb r1, [r1, #0x74]
    tst r1, #0x2
    ldmnefd sp!, {r4, pc}
    ldr r2, [r4, #0xc]
    ldrh r1, [r2, #0x72]
    tst r1, #0x2000
    ldmnefd sp!, {r4, pc}
    ldr r1, [r2, #0x68]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, pc}
    add r1, r4, #0x2c
    bl func_0208ff30
    cmp r0, #0x0
    beq L_0208acc0
    ldr r1, [r4, #0x8]
    ldrb r0, [r1, #0x75]
    add r1, r1, #0x75
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
L_0208acc0:
    ldr r1, [r4, #0x8]
    ldrb r0, [r1, #0x75]
    tst r0, #0x8
    beq L_0208acdc
    mov r0, r4
    bl func_0208a410
    ldmfd sp!, {r4, pc}
L_0208acdc:
    ldrsb r0, [r4, #0x74]
    cmp r0, #0x0
    beq L_0208ad04
    ldr r0, [r4, #0xc]
    ldrh r0, [r0, #0x72]
    tst r0, #0x4
    bne L_0208ad04
    mov r0, r4
    bl func_0208aa0c
    ldmfd sp!, {r4, pc}
L_0208ad04:
    add r1, r1, #0x76
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
