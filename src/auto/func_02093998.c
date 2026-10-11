#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054414();
extern void func_020559e0();
extern void func_020606a0();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02093998(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x34
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r7, r0
    mov r0, r6
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x8
    mov r1, r7
    bl func_0209c740
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r5
    bl func_02084450
    mov r5, r0
    cmp r6, #0x6e
    ldr r0, [sp, #0x24]
    bne L_02093a04
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r1, r0, lsr #0x10
    mov r0, #0x0
    bl func_020606a0
    mov r6, r0
    b L_02093a1c
L_02093a04:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    add sp, sp, #0x34
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_02093a1c:
    cmp r6, #0x0
    beq L_02093bc8
    ldr r1, [r6, #0xc]
    ldrsh r1, [r1, #0x0]
    cmp r1, #0x5
    cmpne r1, #0x7
    beq L_02093a44
    cmp r1, #0x8
    beq L_02093a80
    b L_02093b7c
L_02093a44:
    ldr ip, [r6, #0x0]
    mov r3, r4
    mov r2, #0x6
L_02093a50:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093a50
    mov r0, #0x15
    str r0, [r4, #0xc]
    b L_02093c10
L_02093a80:
    add ip, sp, #0x6
    mov r1, #0x0
    add r3, sp, #0x4
    mov r2, r1
    str ip, [sp, #0x0]
    bl func_02054414
    ldrsh r2, [sp, #0x4]
    add r1, sp, #0x18
    mov r0, r6
    bl func_020559e0
    ldrsh r2, [sp, #0x6]
    add r1, sp, #0xc
    mov r0, r6
    bl func_020559e0
    ldr r3, [sp, #0x18]
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x10]
    add lr, r3, r2
    add ip, r1, r0
    mov r1, lr, asr #0x1f
    mov r2, r1, lsl #0xb
    mov r0, ip, asr #0x1f
    mov r1, r0, lsl #0xb
    mov r0, #0x800
    adds r3, r0, lr, lsl #0xb
    orr r2, r2, lr, lsr #0x15
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    adds r2, r0, ip, lsl #0xb
    orr r1, r1, ip, lsr #0x15
    str r3, [sp, #0x18]
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [sp, #0x1c]
    ldr r2, [sp, #0x20]
    ldr r1, [sp, #0x14]
    add ip, sp, #0x18
    add r2, r2, r1
    adds r0, r0, r2, lsl #0xb
    mov r1, r0, lsr #0xc
    mov r0, r2, asr #0x1f
    mov r0, r0, lsl #0xb
    orr r0, r0, r2, lsr #0x15
    adc r0, r0, #0x0
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x20]
    mov r3, r4
    mov r2, #0x6
L_02093b4c:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093b4c
    mov r0, #0x15
    str r0, [r4, #0xc]
    b L_02093c10
L_02093b7c:
    mov r0, #0x0
    add ip, sp, #0x18
    mov r3, r4
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
    mov r2, #0x6
L_02093b98:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093b98
    mov r0, #0x15
    str r0, [r4, #0xc]
    b L_02093c10
L_02093bc8:
    mov r0, #0x0
    add ip, sp, #0x18
    mov r3, r4
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    str r0, [sp, #0x20]
    mov r2, #0x6
L_02093be4:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02093be4
    mov r0, #0x15
    str r0, [r4, #0xc]
L_02093c10:
    mov r0, r5
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
