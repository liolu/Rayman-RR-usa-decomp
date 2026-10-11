#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066228();
extern void func_0208941c();
extern void func_02089598();
extern void func_0208992c();
extern void func_02089ee4();
extern void func_0208d7e0();
extern void func_0208f2b4();
extern void func_0208f340();
extern char data_020bed68[];
extern char data_020e3b29[];
extern char data_020e3b2a[];
// clang-format off
asm void func_0208dd48(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0xd0
    mov r4, r0
    ldr r0, [r4, #0x4]
    ldr r0, [r0, #0x10]
    bl func_02066228
    add r1, sp, #0x0
    mov r0, r4
    bl func_0208d7e0
    ldr r2, [sp, #0xc]
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
    add r0, sp, #0x0
    swpb r1, ip, [r2]
    bl func_0208941c
    add r0, sp, #0x0
    bl func_02089598
    add r0, sp, #0x0
    bl func_0208992c
    add r0, sp, #0x0
    bl func_02089ee4
    ldr r0, [sp, #0x10]
    ldr r0, [r0, #0x68]
    cmp r0, #0x0
    addeq sp, sp, #0xd0
    ldmeqfd sp!, {r4, pc}
    add r0, sp, #0x0
    bl func_0208f2b4
    add r0, sp, #0x0
    bl func_0208f340
    add sp, sp, #0xd0
    ldmfd sp!, {r4, pc}
}
// clang-format on
