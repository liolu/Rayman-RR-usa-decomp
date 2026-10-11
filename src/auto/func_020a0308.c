#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_020a0308(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    mov r4, r1
    ldr r5, [r4, #-0x8]
    mov r6, r0
    mov r0, r5
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    add r2, sp, #0x4
    mov r0, r6
    mov r1, r4
    bl func_02084450
    ldr r1, [sp, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x4]
    ldr r1, [r1, #0x8]
    cmp r1, #0x0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mov r0, r1
    bl func_02067900
    sub r1, r5, #0x9a
    cmp r1, #0xc
    addls pc, pc, r1, lsl #0x2
    b L_020a0580
L_020a0374:
    b L_020a03a8
    b L_020a0404
    b L_020a0424
    b L_020a0444
    b L_020a0464
    b L_020a0484
    b L_020a0564
    b L_020a04a4
    b L_020a04c4
    b L_020a04e4
    b L_020a0504
    b L_020a0524
    b L_020a0544
L_020a03a8:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x2
    biceq r1, r1, #0x2
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    beq L_020a0580
    add ip, r0, #0x1c0
    add r3, r0, #0xe0
    mov r2, #0x6
L_020a03dc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_020a03dc
    b L_020a0580
L_020a0404:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x4
    biceq r1, r1, #0x4
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0424:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x20
    biceq r1, r1, #0x20
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0444:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0xc]
    orrne r1, r1, #0x200
    biceq r1, r1, #0x200
    str r1, [r0, #0xc]
    str r1, [r0, #0xc]
    b L_020a0580
L_020a0464:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0xc]
    orrne r1, r1, #0x100000
    biceq r1, r1, #0x100000
    str r1, [r0, #0xc]
    str r1, [r0, #0xc]
    b L_020a0580
L_020a0484:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0xc]
    orrne r1, r1, #0x200000
    biceq r1, r1, #0x200000
    str r1, [r0, #0xc]
    str r1, [r0, #0xc]
    b L_020a0580
L_020a04a4:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x80
    biceq r1, r1, #0x80
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a04c4:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x200
    biceq r1, r1, #0x200
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a04e4:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x400
    biceq r1, r1, #0x400
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0504:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x800
    biceq r1, r1, #0x800
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0524:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x1000
    biceq r1, r1, #0x1000
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0544:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0x8]
    orrne r1, r1, #0x2000
    biceq r1, r1, #0x2000
    str r1, [r0, #0x8]
    str r1, [r0, #0x8]
    b L_020a0580
L_020a0564:
    ldr r1, [sp, #0x4]
    cmp r1, #0x0
    ldr r1, [r0, #0xc]
    orrne r1, r1, #0x4000000
    biceq r1, r1, #0x4000000
    str r1, [r0, #0xc]
    str r1, [r0, #0xc]
L_020a0580:
    mov r0, r4
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
