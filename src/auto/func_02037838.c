#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff87ec();
extern void func_0202dc64();
extern void func_02031c40();
extern void func_0203f230();
// clang-format off
asm void func_02037838(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r4, r0
    ldr r0, [r4, #0xc]
    mov r5, r1
    tst r0, #0x80
    addne sp, sp, #0x24
    ldmnefd sp!, {r4, r5, pc}
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    ldreq r0, [r5, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r5, #0x8]
    cmpeq r0, #0x0
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, pc}
    add r1, sp, #0x8
    add r2, sp, #0x4
    add r3, sp, #0x0
    add r0, r4, #0xdc
    bl func_0202dc64
    ldr r0, [sp, #0x4]
    mov r1, r5
    bl func_01ff84a0
    ldr r1, [sp, #0x4]
    ldr r0, [r1, #0x0]
    rsb r0, r0, #0x0
    str r0, [r1, #0x0]
    ldr r1, [sp, #0x4]
    ldr r0, [r1, #0x4]
    rsb r0, r0, #0x0
    str r0, [r1, #0x4]
    ldr r1, [sp, #0x4]
    ldr r0, [r1, #0x8]
    rsb r0, r0, #0x0
    str r0, [r1, #0x8]
    ldr r0, [sp, #0x8]
    ldr r2, [sp, #0x4]
    cmp r0, r2
    ldrne r3, [sp, #0x0]
    cmpne r0, r3
    bne L_0203796c
    ldr r3, [sp, #0x0]
    ldr r2, [sp, #0x4]
    ldr r1, [r3, #0x8]
    ldr r3, [r3, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r3, [sp, #0x0]
    str r0, [sp, #0x18]
    ldr r2, [sp, #0x4]
    ldr r1, [r3, #0x0]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    ldr r3, [sp, #0x0]
    str r0, [sp, #0x1c]
    ldr r2, [sp, #0x4]
    ldr r1, [r3, #0x4]
    ldr r3, [r3, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr ip, [sp, #0x8]
    add r3, sp, #0x18
    str r0, [sp, #0x20]
    mov r2, #0x6
L_02037944:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02037944
    b L_020379c8
L_0203796c:
    ldr r1, [r3, #0x8]
    ldr r3, [r3, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [r1, #0x0]
    ldr r3, [sp, #0x0]
    ldr r2, [sp, #0x4]
    ldr r1, [r3, #0x0]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [r1, #0x4]
    ldr r3, [sp, #0x0]
    ldr r2, [sp, #0x4]
    ldr r1, [r3, #0x4]
    ldr r3, [r3, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [r1, #0x8]
L_020379c8:
    ldr r0, [sp, #0x4]
    ldr r2, [sp, #0x0]
    cmp r0, r2
    ldrne r3, [sp, #0x8]
    cmpne r0, r3
    bne L_02037a6c
    ldr r3, [sp, #0x8]
    ldr r2, [sp, #0x0]
    ldr r1, [r3, #0x8]
    ldr r3, [r3, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r3, [sp, #0x8]
    str r0, [sp, #0xc]
    ldr r2, [sp, #0x0]
    ldr r1, [r3, #0x0]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    ldr r3, [sp, #0x8]
    str r0, [sp, #0x10]
    ldr r2, [sp, #0x0]
    ldr r1, [r3, #0x4]
    ldr r3, [r3, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr ip, [sp, #0x4]
    add r3, sp, #0xc
    str r0, [sp, #0x14]
    mov r2, #0x6
L_02037a44:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_02037a44
    b L_02037ac8
L_02037a6c:
    ldr r1, [r3, #0x8]
    ldr r3, [r3, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x4]
    str r0, [r1, #0x0]
    ldr r3, [sp, #0x8]
    ldr r2, [sp, #0x0]
    ldr r1, [r3, #0x0]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    ldr r3, [r3, #0x8]
    bl func_01ff87ec
    ldr r1, [sp, #0x4]
    str r0, [r1, #0x4]
    ldr r3, [sp, #0x8]
    ldr r2, [sp, #0x0]
    ldr r1, [r3, #0x4]
    ldr r3, [r3, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x4]
    str r0, [r1, #0x8]
L_02037ac8:
    mov r0, r4
    add r1, r4, #0xdc
    bl func_02031c40
    ldr r0, [r4, #0xc]
    tst r0, #0x4
    addeq sp, sp, #0x24
    ldmeqfd sp!, {r4, r5, pc}
    mov r0, r4
    bl func_0203f230
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
