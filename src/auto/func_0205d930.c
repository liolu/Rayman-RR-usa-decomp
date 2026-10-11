#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ac90();
extern void func_0207ad9c();
extern void r2();
extern char data_020bd160[];
extern char data_020bd280[];
// clang-format off
asm void func_0205d930(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r5, r0
    ldr r0, [r5, #0x0]
    mov r4, r1
    cmp r0, #0x0
    ldrne r0, [r5, #0x4]
    cmpne r0, #0x0
    bne L_0205d98c
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0xc
    bl func_0207ad9c
L_0205d98c:
    ldr r1, [r5, #0x4]
    mvn r0, #0x0
    ldr r1, [r1, #0x0]
    cmp r1, r0
    bne L_0205d9d0
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    str r2, [sp, #0x8]
    ldr r0, =data_020bd280
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x30
    mov r3, #0x47
    bl func_0207ad9c
    mov r0, #0x0
    bl func_0207ac90
L_0205d9d0:
    ldr r7, =data_020bd160
    mov r6, #0x0
L_0205d9d8:
    ldr r0, [r5, r6, lsl #0x2]
    cmp r0, #0x0
    beq L_0205d9f4
    ldr r2, [r7, #0x10]
    mov r0, r5
    mov r1, r4
    blx r2
L_0205d9f4:
    add r6, r6, #0x1
    cmp r6, #0xb
    add r7, r7, #0x18
    blo L_0205d9d8
    cmp r4, #0x1
    addne sp, sp, #0x10
    ldmnefd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r5, #0x4]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
