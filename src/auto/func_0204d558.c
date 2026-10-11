#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020bca48[];
extern char data_020dba10[];
extern char data_020dba6c[];
extern char data_020dbf60[];
// clang-format off
asm void func_0204d558(void) {
    stmfd sp!, {r3, lr}
    ldr ip, =data_020dba6c
    ldr lr, [ip, #0x30]
    cmp lr, #0x0
    beq L_0204d58c
    ldr r1, [ip, #0x38]
    add r2, r0, #0x11
    swpb r1, r1, [r2]
    ldr r1, =data_020dbf60
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x8]
    ldr r0, [ip, #0x38]
    ldmfd sp!, {r3, pc}
L_0204d58c:
    ldr r1, [r1, #0x60]
    cmp r1, #0x0
    beq L_0204d5ac
    ldr r1, [sp, #0x8]
    cmp r1, #0x0
    movne r2, #0x2
    moveq r2, #0x1
    b L_0204d62c
L_0204d5ac:
    ldrh r1, [r0, #0xe]
    ands r1, r1, #0xf00
    beq L_0204d5e8
    cmp r1, #0x100
    bne L_0204d5f0
    tst r2, #0x8
    bne L_0204d5d8
    ldr r1, =data_020dba10
    ldr r1, [r1, #0x0]
    cmp r1, #0xfa
    ble L_0204d5e0
L_0204d5d8:
    mov r2, #0x0
    b L_0204d62c
L_0204d5e0:
    mvn r2, #0x0
    b L_0204d62c
L_0204d5e8:
    mov r2, #0x0
    b L_0204d62c
L_0204d5f0:
    cmp r3, #0x0
    ldreq r1, [ip, #0x34]
    cmpeq r1, #0x0
    beq L_0204d628
    ldr r1, =data_020bca48
    ldr r2, [r1, #0x70]
    add r2, r2, #0x1
    str r2, [r1, #0x70]
    cmp r2, #0x3f
    moveq r2, #0x4
    streq r2, [r1, #0x70]
    ldr r1, =data_020bca48
    ldr r2, [r1, #0x70]
    b L_0204d62c
L_0204d628:
    mvn r2, #0x0
L_0204d62c:
    mvn r1, #0x0
    cmp r2, r1
    bne L_0204d694
    ldr r1, =data_020dbf60
    ldr r2, [r0, #0x8]
    ldr r1, [r1, #0x0]
    cmp r2, r1
    ldreq r1, =data_020dba6c
    ldreq r1, [r1, #0x34]
    cmpeq r1, #0x0
    beq L_0204d690
    ldr r1, =data_020bca48
    ldr r3, =data_020dbf60
    ldr r2, [r1, #0x70]
    add r2, r2, #0x1
    str r2, [r1, #0x70]
    cmp r2, #0x3f
    moveq r2, #0x4
    streq r2, [r1, #0x70]
    ldr r1, =data_020bca48
    add r2, r0, #0x11
    ldr r1, [r1, #0x70]
    swpb r1, r1, [r2]
    ldr r1, [r3, #0x0]
    str r1, [r0, #0x8]
L_0204d690:
    ldrb r2, [r0, #0x11]
L_0204d694:
    mov r0, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
