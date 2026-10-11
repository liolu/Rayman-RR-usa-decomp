#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020298d8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    add r4, sp, #0xc
    add lr, r1, #0x48
    mov ip, #0x6
L_020298ec:
    ldrb r2, [lr, #0x0]
    ldrb r3, [lr, #0x1]
    add lr, lr, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [r4]
    add r4, r4, #0x1
    swpb r2, r3, [r4]
    add r4, r4, #0x1
    bne L_020298ec
    add lr, sp, #0x0
    add ip, r1, #0x54
    mov r3, #0x6
L_0202991c:
    ldrb r1, [ip, #0x0]
    ldrb r2, [ip, #0x1]
    add ip, ip, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [lr]
    add lr, lr, #0x1
    swpb r1, r2, [lr]
    add lr, lr, #0x1
    bne L_0202991c
    ldr r2, [r0, #0x0]
    ldr r1, [sp, #0xc]
    cmp r2, r1
    blt L_0202995c
    ldr r1, [sp, #0x0]
    cmp r2, r1
    ble L_02029968
L_0202995c:
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, pc}
L_02029968:
    ldr r2, [r0, #0x4]
    ldr r1, [sp, #0x10]
    cmp r2, r1
    blt L_02029984
    ldr r1, [sp, #0x4]
    cmp r2, r1
    ble L_02029990
L_02029984:
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, pc}
L_02029990:
    ldr r1, [r0, #0x8]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    blt L_020299ac
    ldr r0, [sp, #0x8]
    cmp r1, r0
    ble L_020299b8
L_020299ac:
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, pc}
L_020299b8:
    mov r0, #0x1
    add sp, sp, #0x18
    ldmfd sp!, {r4, pc}
}
// clang-format on
