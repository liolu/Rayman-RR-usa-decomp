#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0202d964();
extern void func_0202e19c();
extern void func_020336f8();
extern void func_02033fa4();
extern void func_020350e4();
// clang-format off
asm void func_0203530c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xbc
    ldr r4, [sp, #0xd0]
    mov r7, r0
    mov r6, r1
    mov r5, r2
    str r4, [sp, #0x0]
    bl func_020336f8
    add r4, sp, #0x30
    mov r3, r5
    mov r2, #0x6
L_02035338:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02035338
    add r1, sp, #0x30
    str r1, [sp, #0x0]
    add r0, sp, #0x48
    str r0, [sp, #0x4]
    ldr r4, [sp, #0xd0]
    add r0, sp, #0x54
    mov r1, r7
    mov r2, r5
    mov r3, r6
    str r4, [sp, #0x8]
    bl func_02033fa4
    cmp r0, #0x0
    addeq sp, sp, #0xbc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    add r4, sp, #0x30
    mov r3, r5
    mov r2, #0x6
L_020353a4:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020353a4
    add r4, sp, #0x3c
    add r3, r5, #0x10
    mov r2, #0x6
L_020353d4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020353d4
    add r1, r7, #0x220
    ldrh r0, [r1, #0x56]
    ldr r4, [r6, #0x20]
    tst r0, #0x80
    bne L_0203547c
    add ip, sp, #0x24
    add r3, r1, #0x68
    mov r2, #0x6
L_02035418:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02035418
    add r1, sp, #0xc
    str r1, [sp, #0x0]
    add r0, sp, #0x18
    str r0, [sp, #0x4]
    add ip, sp, #0x24
    add r2, sp, #0x48
    add r3, sp, #0x3c
    mov r0, r7
    mov r1, r6
    str ip, [sp, #0x8]
    bl func_020350e4
    add r1, sp, #0xc
    add r2, sp, #0x18
    add r3, sp, #0x24
    mov r0, r4
    bl func_0202d964
L_0203547c:
    add r1, sp, #0x48
    mov r0, r4
    bl func_0202e19c
    ldr r0, [r6, #0x24]
    mov r1, r4
    mov r2, #0x64
    bl func_02001588
    cmp r7, #0x0
    addeq sp, sp, #0xbc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    add r3, sp, #0x3c
    add r4, r5, #0x10
    mov r2, #0x6
L_020354b4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020354b4
    mov r0, r7
    add sp, sp, #0xbc
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
