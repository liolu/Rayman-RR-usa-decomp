#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern char data_020bc544[];
extern char data_020becb8[];
// clang-format off
asm void func_02085040(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    movs r5, r0
    mov r4, #0x0
    beq L_020850e8
    mov r0, #0xc
    mul r0, r5, r0
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_020850b4
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_020850b4:
    cmp r5, #0x0
    mov r3, #0x0
    bls L_020850e8
    mov ip, r4
    mov r2, r3
L_020850c8:
    add r1, ip, #0x8
    swpb r0, r2, [r1]
    add r3, r3, #0x1
    str r2, [ip, #0x0]
    str r2, [ip, #0x4]
    cmp r3, r5
    add ip, ip, #0xc
    blo L_020850c8
L_020850e8:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
