#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020298a8();
extern void func_020298d0();
extern void func_02067fb4();
extern void func_020680d8();
extern void func_0206a654();
extern void func_0206a65c();
extern void func_0206a6e8();
extern void func_0206b3c4();
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bd280[];
// clang-format off
asm void func_0206a390(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    movs r6, r0
    mov r4, r1
    bne L_0206a3dc
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xe
    bl func_0207ad9c
L_0206a3dc:
    ldr r0, [r6, #0x20]
    cmp r0, #0x0
    bne L_0206a420
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xf
    bl func_0207ad9c
L_0206a420:
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0206a568
L_0206a42c:
    b L_0206a568
    b L_0206a444
    b L_0206a458
    b L_0206a458
    b L_0206a458
    b L_0206a4bc
L_0206a444:
    ldr r0, [r6, #0x20]
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldr r0, [r6, #0x20]
    bl func_0206a654
L_0206a458:
    ldr r0, [r6, #0x4]
    bl func_0206b3c4
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r1, [r6, #0x0]
    ldr r0, [r6, #0x4]
    add r4, r1, #0x1c
    bl func_0206b3c4
    mov r1, r4
    bl func_0206a65c
    ldr r0, [r6, #0x20]
    mov r2, #0x6
    add r3, r0, #0x8
L_0206a490:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0206a490
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
L_0206a4bc:
    ldr r0, [r6, #0x4]
    bl func_0206b3c4
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x4]
    bl func_0206b3c4
    mov r4, r0
    ldr r0, [r6, #0x20]
    ldr r2, [r4, #0x24]
    ldr r0, [r0, #0x0]
    mov r1, r4
    add r5, r2, #0x4
    bl func_0206a6e8
    ldr r0, [r6, #0x20]
    mov r1, r4
    ldr r0, [r0, #0x4]
    bl func_020298a8
    ldr r0, [r6, #0x20]
    mov r2, #0x6
    add r3, r0, #0x8
L_0206a510:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0206a510
    ldr r0, [r4, #0x4]
    ldr r5, [r0, #0x1c]
    cmp r5, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_02067fb4
    mov r4, r0
    mov r0, r5
    bl func_020680d8
    mov r1, r0
    mov r0, r4
    bl func_020298d0
L_0206a568:
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
