#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040d90();
extern void func_020413b4();
extern void func_0204141c();
extern void func_020414ac();
extern void func_02041da8();
extern void func_020850fc();
extern void func_02087220();
extern void func_02087358();
// clang-format off
asm void func_02087970(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldrh r4, [r8, #0x2]
    mov r7, r1
    mov r0, #0x2
    mov r1, r4
    bl func_020413b4
    movs r2, r0
    bne L_02087a50
    movs r2, #0x0
    beq L_02087a50
    mov r1, r4
    mov r0, #0x2
    mov r3, #0x6
    bl func_0204141c
    mov r4, r0
    ldrh r0, [r4, #0x4]
    mov r1, #0x8
    swpb r0, r0, [r1]
    ldrh r1, [r4, #0x4]
    cmp r1, #0x0
    beq L_020879e0
    ldrh r0, [r4, #0x2]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02087220
    mov r1, #0x0
    str r0, [r1, #0x0]
L_020879e0:
    ldrh r5, [r4, #0x0]
    ldr r0, =0xffff
    cmp r5, r0
    beq L_02087a44
    mov r0, #0x1
    bl func_020850fc
    mov r6, r0
    mov r1, r5
    mov r0, #0x50
    mov r2, #0x4
    bl func_020414ac
    mov r5, r0
    ldrh r1, [r5, #0x2]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_02087a30
    ldrh r0, [r5, #0x0]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02087358
L_02087a30:
    str r0, [r6, #0x0]
    mov r0, r5
    bl func_02041da8
    mov r0, #0x4
    str r6, [r0, #0x0]
L_02087a44:
    mov r0, r4
    bl func_02041da8
    mov r2, #0x0
L_02087a50:
    str r2, [r7, #0x0]
    cmp r2, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r2, [r8, #0x2]
    mov r0, r7
    mov r1, #0x2
    bl func_02040d90
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
