#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_02088f60();
extern char data_020bc978[];
extern char data_020bc97c[];
extern char data_020bc980[];
extern char data_020db934[];
extern char data_020db938[];
extern char data_020db940[];
// clang-format off
asm void func_0209d5d0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    ldr r2, [r1, #-0x8]
    mov r4, r0
    sub r2, r2, #0x17
    cmp r2, #0x3
    addls pc, pc, r2, lsl #0x2
    b L_0209d738
L_0209d5f0:
    b L_0209d600
    b L_0209d644
    b L_0209d678
    b L_0209d6e0
L_0209d600:
    add r2, sp, #0x10
    bl func_02084450
    ldr r2, [sp, #0x1c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r0, [sp, #0x10]
    moveq r0, r0, asr #0xc
    ldrne r0, [sp, #0x10]
    add sp, sp, #0x20
    tst r0, #0xff
    ldrne r2, =data_020db934
    movne r0, #0x1
    ldreq r2, =data_020db934
    moveq r0, #0x0
    swpb r0, r0, [r2]
    mov r0, r1
    ldmfd sp!, {r3, r4, r5, pc}
L_0209d644:
    add r2, sp, #0x10
    bl func_02084450
    mov r5, r0
    add r0, sp, #0x10
    add r1, sp, #0x0
    bl func_02088f60
    add r0, sp, #0x0
    ldr r4, =data_020db940
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    add sp, sp, #0x20
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, pc}
L_0209d678:
    add r2, sp, #0x10
    bl func_02084450
    ldr r2, [sp, #0x1c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r5, [sp, #0x10]
    ldrne r0, [sp, #0x10]
    ldr r3, =data_020bc978
    movne r5, r0, lsl #0xc
    add r2, sp, #0x10
    mov r0, r4
    str r5, [r3, #0x0]
    bl func_02084450
    ldr r2, [sp, #0x1c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r5, [sp, #0x10]
    ldrne r0, [sp, #0x10]
    ldr r3, =data_020bc97c
    movne r5, r0, lsl #0xc
    add r2, sp, #0x10
    mov r0, r4
    str r5, [r3, #0x0]
    bl func_02084450
    add sp, sp, #0x20
    ldmfd sp!, {r3, r4, r5, pc}
L_0209d6e0:
    add r2, sp, #0x10
    bl func_02084450
    ldr r2, [sp, #0x1c]
    mov r1, r0
    cmp r2, #0x8
    ldreq r5, [sp, #0x10]
    ldrne r0, [sp, #0x10]
    ldr r3, =data_020db938
    movne r5, r0, lsl #0xc
    add r2, sp, #0x10
    mov r0, r4
    str r5, [r3, #0x0]
    bl func_02084450
    ldr r1, [sp, #0x1c]
    cmp r1, #0x8
    ldreq r2, [sp, #0x10]
    ldrne r1, [sp, #0x10]
    add sp, sp, #0x20
    movne r2, r1, lsl #0xc
    ldr r1, =data_020bc980
    str r2, [r1, #0x0]
    ldmfd sp!, {r3, r4, r5, pc}
L_0209d738:
    mov r0, r1
    add sp, sp, #0x20
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
