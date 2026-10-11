#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c8a4();
extern void func_0202cb6c();
extern void func_02031c98();
// clang-format off
asm void func_0203fbac(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    ldr r0, [r6, #0xc]
    mov r5, r1
    mov r4, r2
    tst r0, #0x800
    beq L_0203fbe0
    mov r0, r4
    bl func_0202cb6c
    ldr r0, [r6, #0xc]
    bic r0, r0, #0x800
    str r0, [r6, #0xc]
L_0203fbe0:
    ldr r2, [r6, #0xe0]
    ldr r1, [r6, #0x7c]
    add r0, sp, #0x0
    sub r1, r2, r1
    str r1, [sp, #0x0]
    ldr r3, [r6, #0xe4]
    ldr r2, [r6, #0x80]
    mov r1, r4
    sub r2, r3, r2
    str r2, [sp, #0x4]
    ldr ip, [r6, #0xe8]
    ldr r3, [r6, #0x84]
    mov r2, r0
    sub r3, ip, r3
    str r3, [sp, #0x8]
    bl func_0202c8a4
    add r1, sp, #0x0
    mov r0, r6
    bl func_02031c98
    add r0, sp, #0x0
    mov r1, r5
    mov r2, r0
    bl func_0202c8a4
    ldr r1, [r6, #0x7c]
    ldr r0, [sp, #0x0]
    add ip, sp, #0x0
    add r0, r1, r0
    str r0, [r6, #0xe0]
    ldr r1, [r6, #0x80]
    ldr r0, [sp, #0x4]
    add r3, r6, #0x24
    add r0, r1, r0
    str r0, [r6, #0xe4]
    ldr r1, [r6, #0x84]
    ldr r0, [sp, #0x8]
    mov r2, #0x6
    add r0, r1, r0
    str r0, [r6, #0xe8]
L_0203fc78:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203fc78
    ldr r0, [r6, #0x8]
    tst r0, #0x4000
    beq L_0203fcb8
    add r0, sp, #0x0
    mov r1, r4
    mov r2, r0
    bl func_0202c8a4
L_0203fcb8:
    add r1, sp, #0x0
    mov r0, r6
    bl func_02031c98
    ldr r0, [r6, #0x8]
    tst r0, #0x4000
    beq L_0203fce0
    add r0, sp, #0x0
    mov r1, r5
    mov r2, r0
    bl func_0202c8a4
L_0203fce0:
    add r3, sp, #0x0
    add ip, r6, #0x24
    mov r2, #0x6
L_0203fcec:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203fcec
    add ip, sp, #0x0
    add r3, r6, #0x30
    mov r2, #0x6
L_0203fd1c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203fd1c
    ldr r0, [r6, #0x8]
    tst r0, #0x8000
    beq L_0203fd5c
    add r0, sp, #0x0
    mov r1, r4
    mov r2, r0
    bl func_0202c8a4
L_0203fd5c:
    add r1, sp, #0x0
    mov r0, r6
    bl func_02031c98
    ldr r0, [r6, #0x8]
    tst r0, #0x4000
    beq L_0203fd84
    add r0, sp, #0x0
    mov r1, r5
    mov r2, r0
    bl func_0202c8a4
L_0203fd84:
    add r3, sp, #0x0
    add ip, r6, #0x30
    mov r2, #0x6
L_0203fd90:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203fd90
    add ip, sp, #0x0
    add r3, r6, #0x1a8
    mov r2, #0x6
L_0203fdc0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203fdc0
    ldr r0, [r6, #0x8]
    tst r0, #0x10000
    beq L_0203fe00
    add r0, sp, #0x0
    mov r1, r4
    mov r2, r0
    bl func_0202c8a4
L_0203fe00:
    add r1, sp, #0x0
    mov r0, r6
    bl func_02031c98
    ldr r0, [r6, #0x8]
    tst r0, #0x4000
    beq L_0203fe28
    add r0, sp, #0x0
    mov r1, r5
    mov r2, r0
    bl func_0202c8a4
L_0203fe28:
    add r3, sp, #0x0
    add r4, r6, #0x1a8
    mov r2, #0x6
L_0203fe34:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203fe34
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
