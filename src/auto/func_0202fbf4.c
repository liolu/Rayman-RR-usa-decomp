#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202fbf4(void) {
    stmfd sp!, {r3}
    sub sp, sp, #0x4
    add r1, r2, r0, lsl #0x4
    ldr ip, [r1, #0x8]
    mvn r3, #0x0
    cmp ip, r3
    ldr r0, [r2, r0, lsl #0x4]
    beq L_0202fc5c
    ldr r3, [r1, #0x4]
    mov r2, #0x0
    sub r3, r3, r0
    add ip, r3, #0x1
    mov r3, ip, asr #0x1f
    mov ip, ip, lsr #0x3
    orr ip, ip, r3, lsl #0x1d
    str ip, [r0, #0x0]
    mov r3, r3, lsr #0x3
    str r3, [r0, #0x4]
    str r2, [r0, #0x8]
    str r2, [r0, #0xc]
    str r0, [r1, #0x8]
    sub r0, r0, #0x1
    str r0, [r1, #0xc]
    add sp, sp, #0x4
    ldmfd sp!, {r3}
    bx lr
L_0202fc5c:
    ldrb r2, [r0, #0x0]
    add r2, r0, r2
    sub r2, r2, #0x1
    str r2, [r1, #0xc]
    ldrb r2, [r0, #0x2]
    tst r2, #0x2
    beq L_0202fca4
    ldr ip, [r1, #0xc]
    ldr r2, [r1, #0x4]
    add ip, ip, #0x1
    cmp ip, r2
    bhi L_0202fca4
    sub r3, r3, #0x55
L_0202fc90:
    swpb r2, r3, [ip]
    add ip, ip, #0x1
    ldr r2, [r1, #0x4]
    cmp ip, r2
    bls L_0202fc90
L_0202fca4:
    ldrb r0, [r0, #0x2]
    tst r0, #0x8
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r3}
    bxeq lr
    ldr r2, [r1, #0xc]
    ldr r0, [r1, #0x4]
    sub r0, r0, r2
    cmp r0, #0x4
    addlo sp, sp, #0x4
    ldmlofd sp!, {r3}
    bxlo lr
    add r3, r2, #0x1
    ldr r0, =0xe123456e
    add r1, r3, #0x4
    str r0, [sp, #0x0]
    cmp r3, r1
    add r2, sp, #0x0
    addhs sp, sp, #0x4
    ldmhsfd sp!, {r3}
    bxhs lr
L_0202fcf8:
    ldrsb r0, [r2], #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    cmp r3, r1
    blo L_0202fcf8
    add sp, sp, #0x4
    ldmfd sp!, {r3}
    bx lr
}
// clang-format on
