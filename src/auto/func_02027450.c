#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fc70();
extern void func_0201fc74();
extern void func_020b5394();
extern char data_020c57b4[];
extern char data_020c57d0[];
// clang-format off
asm void func_02027450(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0201fc70
    ldr r1, =data_020c57b4
    str r5, [r1, #0x10]
    ldr r0, [r4, #0x20]
    tst r0, #0x4
    beq L_020274c4
    ldr r0, [r5, #0x14]
    tst r0, #0x2
    beq L_020274c4
    ldrb r3, [r4, #0x4]
    ldrb r0, [r5, #0x3c]
    ldrh r2, [r5, #0x3e]
    smulbb r0, r3, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    cmp r2, r0, asr #0x10
    mov r0, r0, asr #0x10
    beq L_020274c4
    strh r0, [r5, #0x3e]
    ldr r1, [r1, #0x10]
    ldr r0, =data_020c57d0
    ldrsh r1, [r1, #0x3e]
    mov r2, #0x0
    mov r1, r1, asr #0x7
    bl func_020b5394
L_020274c4:
    ldr r0, =data_020c57b4
    ldrb r2, [r4, #0x4]
    ldr r0, [r0, #0x10]
    add r1, r0, #0x3d
    swpb r0, r2, [r1]
    bl func_0201fc74
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
