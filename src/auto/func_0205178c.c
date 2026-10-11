#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020bca48[];
extern char data_020dba6c[];
// clang-format off
asm void func_0205178c(void) {
    ldr r3, =data_020dba6c
    ldrb r0, [r3, #0xe]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_02051838
L_020517a0:
    b L_020517c4
    b L_020517c8
    b L_020517d8
    b L_020517e8
    b L_02051838
    b L_02051838
    b L_02051838
    b L_020517f8
    b L_02051814
L_020517c4:
    bx lr
L_020517c8:
    add r0, r0, #0x1
    add r1, r3, #0xe
    swpb r0, r0, [r1]
    bx lr
L_020517d8:
    add r0, r0, #0x1
    add r1, r3, #0xe
    swpb r0, r0, [r1]
    bx lr
L_020517e8:
    add r0, r0, #0x1
    add r1, r3, #0xe
    swpb r0, r0, [r1]
    bx lr
L_020517f8:
    add r0, r0, #0x1
    add r1, r3, #0xe
    swpb r0, r0, [r1]
    add r1, r3, #0xd
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
L_02051814:
    add r1, r3, #0xd
    mov ip, #0x0
    ldr r2, =data_020bca48
    swpb r0, ip, [r1]
    add r1, r2, #0x5
    swpb r0, ip, [r1]
    add r2, r3, #0xe
    swpb r0, ip, [r2]
    bx lr
L_02051838:
    ldr r0, =data_020dba6c
    ldrb r2, [r0, #0xe]
    add r1, r0, #0xe
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
