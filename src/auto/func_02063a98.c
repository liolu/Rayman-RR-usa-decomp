#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a3b8();
extern void func_0200a4bc();
extern void func_020414ac();
extern void func_02041da8();
extern void func_02062160();
extern void func_02063804();
extern void func_02064a70();
extern char data_020dd71c[];
// clang-format off
asm void func_02063a98(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r6, r1
    bl func_02064a70
    mov r4, r0
    mov r1, r5
    mov r0, #0x9
    mov r2, #0x14
    bl func_020414ac
    mov r5, r0
    ldrh r0, [r5, #0xc]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_02063adc
    mov r1, #0x0
    bl func_02062160
    str r0, [r4, #0x0]
L_02063adc:
    ldrh r0, [r5, #0xe]
    ldr r1, =0xffff
    cmp r0, r1
    moveq r0, #0x0
    beq L_02063af4
    bl func_02063804
L_02063af4:
    str r0, [r6, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0xd0]
    ldr r1, [r5, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0xd4]
    ldr r0, [r5, #0x0]
    add r1, r4, #0xfa
    str r0, [r4, #0xe0]
    ldr r2, [r5, #0x0]
    mov r0, #0xff
    str r2, [r4, #0xdc]
    swpb r0, r0, [r1]
    add r1, r4, #0xf6
    ldrb r0, [r5, #0x10]
    swpb r0, r0, [r1]
    ldrb r0, [r5, #0x11]
    cmp r0, #0x1
    ldreq r0, =data_020dd71c
    moveq r1, #0x1
    ldrne r0, =data_020dd71c
    movne r1, #0x0
    str r1, [r0, #0x0]
    mov r0, r5
    bl func_02041da8
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
