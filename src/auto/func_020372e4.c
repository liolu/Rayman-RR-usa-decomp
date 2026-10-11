#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0203f230();
// clang-format off
asm void func_020372e4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, r1
    tst r0, #0x80
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, pc}
    ldr r1, [r5, #0x8]
    add r0, r5, #0x140
    orr r1, r1, #0x20000000
    str r1, [r5, #0x8]
    add r1, r4, #0x1c
    mov r2, #0x24
    bl func_02001588
    ldr r1, [r4, #0x4]
    ldr r0, [r5, #0xe0]
    add r3, sp, #0x0
    sub r0, r1, r0
    str r0, [sp, #0x0]
    ldr r1, [r4, #0x8]
    ldr r0, [r5, #0xe4]
    add ip, r5, #0x6c
    sub r0, r1, r0
    str r0, [sp, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r5, #0xe8]
    mov r2, #0x6
    sub r0, r1, r0
    str r0, [sp, #0x8]
L_0203735c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203735c
    ldr r0, [r5, #0xc]
    tst r0, #0x4
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, pc}
    mov r0, r5
    bl func_0203f230
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
