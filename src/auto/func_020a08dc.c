#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067900();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_020a08dc(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r4, r0
    mov r0, r6
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r4
    bl func_0209c740
    add r2, sp, #0x4
    mov r0, r4
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x0]
    mov r5, r0
    ldr r1, [r1, #0x4]
    add r4, sp, #0x4
    ldr r1, [r1, #0x8]
    cmp r1, #0x0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mov r0, r1
    bl func_02067900
    cmp r6, #0x7e
    bgt L_020a0968
    cmp r6, #0x7a
    blt L_020a095c
    beq L_020a0a44
    cmp r6, #0x7e
    beq L_020a0984
    b L_020a0abc
L_020a095c:
    cmp r6, #0x74
    beq L_020a09c4
    b L_020a0abc
L_020a0968:
    cmp r6, #0x82
    bgt L_020a0978
    beq L_020a0a04
    b L_020a0abc
L_020a0978:
    cmp r6, #0x86
    beq L_020a0a80
    b L_020a0abc
L_020a0984:
    ldr r1, [r0, #0x8]
    add r3, r0, #0x30
    bic r1, r1, #0x8000
    orr r1, r1, #0x700000
    str r1, [r0, #0x8]
    mov r2, #0x6
L_020a099c:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a099c
    b L_020a0abc
L_020a09c4:
    ldr r1, [r0, #0x8]
    add r3, r0, #0x24
    bic r1, r1, #0x4000
    orr r1, r1, #0xe0000
    str r1, [r0, #0x8]
    mov r2, #0x6
L_020a09dc:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a09dc
    b L_020a0abc
L_020a0a04:
    ldr r1, [r0, #0x8]
    add r3, r0, #0x30
    orr r1, r1, #0x8000
    orr r1, r1, #0x700000
    str r1, [r0, #0x8]
    mov r2, #0x6
L_020a0a1c:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a0a1c
    b L_020a0abc
L_020a0a44:
    ldr r1, [r0, #0x8]
    add r3, r0, #0x24
    orr r1, r1, #0xe4000
    str r1, [r0, #0x8]
    mov r2, #0x6
L_020a0a58:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a0a58
    b L_020a0abc
L_020a0a80:
    ldr r1, [r0, #0x8]
    add r3, r0, #0x1a8
    orr r1, r1, #0x10000
    orr r1, r1, #0x3800000
    str r1, [r0, #0x8]
    mov r2, #0x6
L_020a0a98:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020a0a98
L_020a0abc:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
