#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066228();
extern void func_0208941c();
extern void func_02089598();
extern void func_0208d7e0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_0208b7a4(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xd4
    mov r6, r1
    mov r4, r0
    ldr r0, [r6, #-0x8]
    mov r5, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x10]
    bl func_02066228
    ldr r0, [sp, #0x0]
    add r1, sp, #0x4
    bl func_0208d7e0
    ldr r0, [sp, #0x14]
    ldr r0, [r0, #0x68]
    cmp r0, #0x0
    bne L_0208b83c
    mov r3, r5
    mov r4, #0x0
    mov r2, #0x6
L_0208b804:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208b804
    mov r1, #0x15
    add sp, sp, #0xd4
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0208b83c:
    ldr r2, [sp, #0x10]
    add r0, sp, #0x4
    ldrh r4, [r2, #0x72]
    orr r1, r4, #0x1
    strh r1, [r2, #0x72]
    ldr r2, [sp, #0x10]
    ldrh r1, [r2, #0x72]
    bic r1, r1, #0x1000
    strh r1, [r2, #0x72]
    bl func_0208941c
    add r0, sp, #0x4
    bl func_02089598
    ldr r0, [sp, #0x10]
    add ip, sp, #0xa4
    mov r3, r5
    strh r4, [r0, #0x72]
    mov r2, #0x6
L_0208b880:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208b880
    mov r1, #0x15
    mov r0, r6
    str r1, [r5, #0xc]
    add sp, sp, #0xd4
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
