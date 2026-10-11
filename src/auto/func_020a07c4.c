#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_020a07c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r4, r0
    mov r0, r6
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    add r2, sp, #0x10
    mov r0, r4
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x0]
    mov r5, r0
    ldr r1, [r1, #0x4]
    add r4, sp, #0x10
    ldr r1, [r1, #0x8]
    cmp r1, #0x0
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, pc}
    mov r0, r1
    bl func_02067900
    mov lr, r0
    cmp r6, #0xaf
    beq L_020a083c
    cmp r6, #0xb1
    beq L_020a08a4
    b L_020a08d0
L_020a083c:
    add r0, lr, #0x190
    add ip, sp, #0x4
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r3, [r4, #0x0]
    ldr r0, [r4, #0x4]
    cmp r3, #0x0
    strgt r3, [sp, #0x4]
    cmp r0, #0x0
    strgt r0, [sp, #0x8]
    ldr r0, [r4, #0x8]
    add r3, sp, #0x4
    cmp r0, #0x0
    strgt r0, [sp, #0xc]
    add r4, lr, #0x190
    mov r2, #0x6
L_020a087c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020a087c
    b L_020a08d0
L_020a08a4:
    add r3, lr, #0x19c
    mov r2, #0x6
L_020a08ac:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a08ac
L_020a08d0:
    mov r0, r5
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
