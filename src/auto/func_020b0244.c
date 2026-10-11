#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020e4f78[];
// clang-format off
asm void func_020b0244(void) {
    cmp r0, #0x32
    bxge lr
    ldr ip, =data_020e4f78
    mov r3, #0x1c
    mla r3, r0, r3, ip
    cmp r1, #0x7
    addls pc, pc, r1, lsl #0x2
    bx lr
L_020b0264:
    b L_020b0284
    b L_020b028c
    b L_020b02a4
    b L_020b02c4
    b L_020b02d4
    b L_020b02dc
    b L_020b030c
    b L_020b0334
L_020b0284:
    str r2, [r3, #0x10]
    bx lr
L_020b028c:
    cmp r2, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    add r1, r3, #0x19
    swpb r0, r0, [r1]
    bx lr
L_020b02a4:
    add r1, r3, #0x1a
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r3, #0x10]
    cmp r0, #0x0
    moveq r0, #0x1000
    streq r0, [r3, #0x10]
    bx lr
L_020b02c4:
    add r1, r3, #0x1a
    mov r0, #0x2
    swpb r0, r0, [r1]
    bx lr
L_020b02d4:
    str r2, [r3, #0xc]
    bx lr
L_020b02dc:
    cmp r2, #0x0
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    bne L_020b02f8
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    bx lr
L_020b02f8:
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
    mov r2, r2, asr #0xc
    str r2, [r3, #0x14]
    bx lr
L_020b030c:
    cmp r2, #0x0
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    bne L_020b0328
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
    bx lr
L_020b0328:
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    bx lr
L_020b0334:
    mov r0, r2, asr #0xc
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    bx lr
L_020b0344:
    b L_020b0354
    b L_020b0374
    b L_020b0394
    b L_020b03b4
L_020b0354:
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    add r2, r3, #0x1b
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r2]
    bx lr
L_020b0374:
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    add r2, r3, #0x1b
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    bx lr
L_020b0394:
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    add r2, r3, #0x1b
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    mov r0, #0x2
    swpb r0, r0, [r2]
    bx lr
L_020b03b4:
    ldrb r0, [r3, #0x1a]
    add r1, r3, #0x1a
    add r2, r3, #0x1b
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    mov r0, #0x3
    swpb r0, r0, [r2]
    bx lr
}
// clang-format on
