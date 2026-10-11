#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02089ee4();
extern char data_020e3b34[];
// clang-format off
asm void func_0208992c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0xd0
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r4
    mov r2, #0xd0
    bl func_02001588
    ldr r0, [r4, #0x8]
    mov r2, #0x7c
    ldrb r0, [r0, #0x75]
    tst r0, #0x2
    beq L_02089988
    ldr r1, [r4, #0x18]
    ldr r0, =data_020e3b34
    bl func_02001588
    ldr r1, [r4, #0xc]
    ldr r0, =data_020e3b34
    ldr r1, [r1, #0x18]
    str r1, [r0, #0x18]
    ldr r1, [r4, #0xc]
    ldr r1, [r1, #0x1c]
    str r1, [r0, #0x1c]
    b L_02089994
L_02089988:
    ldr r1, [r4, #0xc]
    ldr r0, =data_020e3b34
    bl func_02001588
L_02089994:
    ldr r1, =data_020e3b34
    add r0, sp, #0x0
    ldrh r2, [r1, #0x72]
    orr r2, r2, #0x40
    strh r2, [r1, #0x72]
    str r1, [sp, #0xc]
    bl func_02089ee4
    add r3, sp, #0x2c
    add r4, r4, #0x38
    mov r2, #0x6
L_020899bc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020899bc
    add sp, sp, #0xd0
    ldmfd sp!, {r4, pc}
}
// clang-format on
