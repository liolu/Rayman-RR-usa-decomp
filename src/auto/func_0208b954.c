#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202e1e0();
extern void func_02066228();
extern void func_0208941c();
extern void func_02089598();
extern void func_0208992c();
extern void func_02089ee4();
extern void func_0208d7e0();
extern void func_0208f2b4();
extern void func_02093198();
extern void func_0209c740();
extern char data_020bed68[];
extern char data_020e3b29[];
extern char data_020e3b2a[];
// clang-format off
asm void func_0208b954(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xec
    mov r6, r1
    mov r4, r0
    ldr r0, [r6, #-0x8]
    mov r5, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    ldr r1, [sp, #0x0]
    ldr r0, [r1, #0x4]
    ldr r4, [r0, #0x10]
    ldrb r0, [r4, #0x17c]
    cmp r0, #0x0
    bne L_0208b9e4
    ldr r0, [r1, #0x24]
    add r1, sp, #0x4
    bl func_0202e1e0
    add r4, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_0208b9ac:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208b9ac
    mov r1, #0x15
    add sp, sp, #0xec
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0208b9e4:
    mov r0, r4
    bl func_02066228
    ldr r0, [sp, #0x0]
    add r1, sp, #0x1c
    bl func_0208d7e0
    ldr r2, [sp, #0x28]
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
    add r0, sp, #0x1c
    swpb r1, ip, [r2]
    bl func_0208941c
    add r0, sp, #0x1c
    bl func_02089598
    add r0, sp, #0x1c
    bl func_0208992c
    add r0, sp, #0x1c
    bl func_02089ee4
    ldr r0, [sp, #0x2c]
    ldr r0, [r0, #0x68]
    cmp r0, #0x0
    addeq sp, sp, #0xec
    moveq r0, r6
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    add r0, sp, #0x1c
    bl func_0208f2b4
    ldr r1, [sp, #0x24]
    ldr r0, [r1, #0x60]
    cmp r0, #0x2
    bne L_0208bac8
    add ip, sp, #0x10
    add r3, r1, #0x1c
    mov r2, #0x6
L_0208ba94:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0208ba94
    add r1, r4, #0x17c
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0208bad8
L_0208bac8:
    mov r0, #0x0
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
L_0208bad8:
    ldr r0, [sp, #0x24]
    mov r1, #0x0
    add r4, sp, #0x10
    mov r3, r5
    str r1, [r0, #0x60]
    mov r2, #0x6
L_0208baf0:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208baf0
    mov r1, #0x15
    mov r0, r6
    str r1, [r5, #0xc]
    add sp, sp, #0xec
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
