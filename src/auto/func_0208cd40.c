#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202e1e0();
extern void func_02066228();
extern void func_0208941c();
extern void func_02089598();
extern void func_0208992c();
extern void func_02089ee4();
extern void func_0208cf58();
extern void func_0208d7e0();
extern void func_0208f2b4();
extern void func_0208f340();
extern void func_020931d8();
extern void func_0209c740();
extern char data_020bed68[];
extern char data_020e3b29[];
extern char data_020e3b2a[];
// clang-format off
asm void func_0208cd40(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0xe0
    mov r5, r1
    mov r4, r0
    ldr r0, [r5, #-0x8]
    bl func_020931d8
    add r2, sp, #0xc
    mov r1, r4
    bl func_0209c740
    ldr r1, [sp, #0xc]
    ldr r0, [r1, #0x4]
    ldr r4, [r0, #0x10]
    ldrb r0, [r4, #0x17c]
    cmp r0, #0x0
    bne L_0208cdc0
    ldr r0, [r1, #0x24]
    add r1, r4, #0x34
    bl func_0202e1e0
    mov r0, #0x1
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r0, #0x2000
    str r0, [sp, #0x8]
    ldmib r4, {r1, r2, r3}
    mov r0, r4
    add r1, r1, #0x72
    add r2, r2, #0x72
    add r3, r3, #0x72
    bl func_0208cf58
    add sp, sp, #0xe0
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, pc}
L_0208cdc0:
    mov r0, r4
    bl func_02066228
    ldr r0, [sp, #0xc]
    add r1, sp, #0x10
    bl func_0208d7e0
    ldr r2, [sp, #0x1c]
    ldr r1, =data_020e3b2a
    ldrh r0, [r2, #0x72]
    ldr r3, =data_020e3b29
    mov ip, #0x1
    tst r0, #0x4000
    movne r0, #0x1
    moveq r0, #0x0
    swpb r0, r0, [r1]
    ldrh r0, [r2, #0x72]
    ldr r2, =data_020bed68
    tst r0, #0x20
    movne r1, #0x1
    moveq r1, #0x0
    swpb r1, r1, [r3]
    add r0, sp, #0x10
    swpb r1, ip, [r2]
    bl func_0208941c
    add r0, sp, #0x10
    bl func_02089598
    add r0, sp, #0x10
    bl func_0208992c
    add r0, sp, #0x10
    bl func_02089ee4
    ldr r0, [sp, #0x20]
    ldr r0, [r0, #0x68]
    cmp r0, #0x0
    addeq sp, sp, #0xe0
    moveq r0, r5
    ldmeqfd sp!, {r3, r4, r5, pc}
    add r0, sp, #0x10
    bl func_0208f2b4
    add r0, sp, #0x10
    bl func_0208f340
    ldr ip, [sp, #0x1c]
    add r2, r4, #0x17c
    ldrh r3, [ip, #0x70]
    mov r1, #0x0
    mov r0, r5
    orr r3, r3, #0x5
    strh r3, [ip, #0x70]
    swpb r1, r1, [r2]
    add sp, sp, #0xe0
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
