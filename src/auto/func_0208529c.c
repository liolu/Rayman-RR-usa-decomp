#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern char data_020bc544[];
extern char data_020becb8[];
// clang-format off
asm void func_0208529c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r0, #0x10
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085300
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
L_02085300:
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    add r1, r4, #0xc
    swpb r0, r0, [r1]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, pc}
}
// clang-format on
