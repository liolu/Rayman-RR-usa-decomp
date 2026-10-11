#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020414ac();
extern void func_02041da8();
extern void func_0205d930();
extern void func_02062634();
// clang-format off
asm void func_02062528(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r0, #0x91
    mov r1, #0x0
    mov r2, #0x4
    bl func_020414ac
    mov r5, r0
    ldrh r1, [r5, #0x0]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_020625bc
    ldrh r2, [r5, #0x2]
    mov r0, #0x35
    mov r2, r2, lsl #0x1
    bl func_020414ac
    ldrh r1, [r5, #0x2]
    mov r6, r0
    mov r7, #0x0
    cmp r1, #0x0
    ble L_020625b4
    mov r4, r7
L_02062578:
    mov r0, r7, lsl #0x1
    ldrh r0, [r6, r0]
    bl func_02062634
    mov r8, r0
    mov r1, r4
    bl func_0205d930
    ldr r1, [r8, #0x4]
    add r7, r7, #0x1
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x2]
    cmp r7, r0
    blt L_02062578
L_020625b4:
    mov r0, r6
    bl func_02041da8
L_020625bc:
    mov r0, r5
    bl func_02041da8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
