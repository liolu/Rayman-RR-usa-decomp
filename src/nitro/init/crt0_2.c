#include "m2c.h"

// clang-format on
/* Uses instructions the compiler never generates: written in assembly. */
extern void AutoloadCallback();
extern char BuildInfo[];

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void MIi_UncompressBackward(void) {
    cmp r0, #0x0
    beq L_020009ec
    stmfd sp!, {r4, r5, r6, r7}
    ldmea r0, {r1, r2}
    add r2, r0, r2
    sub r3, r0, r1, lsr #0x18
    bic r1, r1, #0xff000000
    sub r1, r0, r1
    mov r4, r2
L_02000968:
    cmp r3, r1
    ble L_020009c8
    ldrb r5, [r3, #-0x1]!
    mov r6, #0x8
L_02000978:
    subs r6, r6, #0x1
    blt L_02000968
    tst r5, #0x80
    bne L_02000994
    ldrb r0, [r3, #-0x1]!
    strb r0, [r2, #-0x1]!
    b L_020009bc
L_02000994:
    ldrb ip, [r3, #-0x1]!
    ldrb r7, [r3, #-0x1]!
    orr r7, r7, ip, lsl #0x8
    bic r7, r7, #0xf000
    add r7, r7, #0x2
    add ip, ip, #0x20
L_020009ac:
    ldrb r0, [r2, r7]
    strb r0, [r2, #-0x1]!
    subs ip, ip, #0x10
    bge L_020009ac
L_020009bc:
    cmp r3, r1
    mov r5, r5, lsl #0x1
    bgt L_02000978
L_020009c8:
    mov r0, #0x0
    bic r3, r1, #0x1f
L_020009d0:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r3, c7, c5, 1
    mcr p15, 0, r3, c7, c14, 1
    add r3, r3, #0x20
    cmp r3, r4
    blt L_020009d0
    ldmfd sp!, {r4, r5, r6, r7}
L_020009ec:
    bx lr
}

// clang-format off
asm void do_autoload(void) {
    ldr r0, =BuildInfo
    ldr r1, [r0, #0x0]
    ldr r2, [r0, #0x4]
    ldr r3, [r0, #0x8]
L_02000a00:
    cmp r1, r2
    beq L_02000a60
    ldr r5, [r1], #0x4
    ldr r7, [r1], #0x4
    add r6, r5, r7
    mov r4, r5
L_02000a18:
    cmp r4, r6
    ldrmi r7, [r3], #0x4
    strmi r7, [r4], #0x4
    bmi L_02000a18
    ldr r7, [r1], #0x4
    add r6, r4, r7
    mov r7, #0x0
L_02000a34:
    cmp r4, r6
    strlo r7, [r4], #0x4
    blo L_02000a34
    bic r4, r5, #0x1f
L_02000a44:
    mcr p15, 0, r7, c7, c10, 4
    mcr p15, 0, r4, c7, c5, 1
    mcr p15, 0, r4, c7, c14, 1
    add r4, r4, #0x20
    cmp r4, r6
    blt L_02000a44
    b L_02000a00
L_02000a60:
    b AutoloadCallback
}
