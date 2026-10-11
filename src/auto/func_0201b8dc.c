#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_0201b190();
extern void func_0201b1f8();
extern void func_0201b41c();
extern void func_0202c700();
extern void func_0202c820();
extern void func_020566ac();
// clang-format off
asm void func_0201b8dc(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x128
    mov r4, #0x0
    strh r4, [sp, #0x4]
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    ldr r5, [sp, #0x148]
    ldr r4, [sp, #0x14c]
    bl func_0201b190
    mov r2, r7
    add r7, sp, #0x4
    mov r0, r9
    mov r1, r8
    add r3, sp, #0x20
    str r7, [sp, #0x0]
    bl func_0201b41c
    mov r7, r0
    bl func_0201b1f8
    cmp r7, #0x0
    ble L_0201ba58
    ldr r3, [sp, #0x20]
    ldr r1, =0x67a
    ldr r2, [r3, #0x0]
    ldr r0, [sp, #0x24]
    tst r2, r1
    add r2, sp, #0x30
    strne r3, [r4, #0x0]
    moveq r1, #0x0
    streq r1, [r4, #0x0]
    mov r7, r2
    mov lr, r6
    mov ip, #0x6
L_0201b964:
    ldrb r1, [r7, #0x0]
    ldrb r3, [r7, #0x1]
    add r7, r7, #0x2
    subs ip, ip, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r3, [lr]
    add lr, lr, #0x1
    bne L_0201b964
    cmp r4, #0x0
    beq L_0201ba1c
    ldrsh ip, [r2, #0x10]
    ldr r3, [r0, #0xc]
    mov r1, ip, lsl #0x1
    ldrsh r1, [r3, r1]
    cmp r1, #0x7
    bne L_0201ba1c
    ldr r1, [r0, #0x10]
    ldr r4, [r4, #0x0]
    ldr r3, [r1, ip, lsl #0x2]
    ldrsh r1, [r2, #0x12]
    ldr r3, [r3, #0x0]
    mov r2, #0xc
    smlabb r1, r1, r2, r3
    ldrsh r3, [r1, #0x8]
    ldr r0, [r0, #0x0]
    ldr r1, [r4, #0x24]
    smlabb r2, r3, r2, r0
    add r0, sp, #0x8
    bl func_0202c700
    ldr r2, [r6, #0x0]
    ldr r1, [sp, #0x8]
    mov r0, r5
    sub r1, r2, r1
    str r1, [r5, #0x0]
    ldr r3, [r6, #0x4]
    ldr r2, [sp, #0xc]
    mov r1, r5
    sub r2, r3, r2
    str r2, [r5, #0x4]
    ldr r3, [r6, #0x8]
    ldr r2, [sp, #0x10]
    sub r2, r3, r2
    str r2, [r5, #0x8]
    bl func_01ff84a0
    b L_0201ba4c
L_0201ba1c:
    ldrsh r1, [r2, #0x10]
    ldrsh r2, [r2, #0x12]
    add r3, sp, #0x14
    bl func_020566ac
    ldr r0, [r4, #0x0]
    add r2, sp, #0x14
    ldr r1, [r0, #0x24]
    mov r0, r5
    bl func_0202c820
    mov r0, r5
    mov r1, r5
    bl func_01ff84a0
L_0201ba4c:
    add sp, sp, #0x128
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0201ba58:
    mov r0, #0x0
    add sp, sp, #0x128
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
