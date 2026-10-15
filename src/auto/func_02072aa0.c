#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void strncpy();
extern char data_020de0d4[];
extern char data_020de0dd[];
extern char data_020de0f8[];
extern char data_020e4c41[];
extern char data_020e4c4a[];
// clang-format off
asm void func_02072aa0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r0
    mov r5, r1
    mov r4, r2
    mov r0, #0xa
    beq L_02072ae8
    mul r6, r4, r0
    ldr r0, =data_020de0d4
    mov r1, r7
    add r0, r0, r6
    mov r2, #0x9
    bl strncpy
    ldr r0, =data_020e4c41
    mov r1, r7
    add r0, r0, r6
    mov r2, #0x9
    bl strncpy
    b L_02072b88
L_02072ae8:
    mul r2, r4, r0
    ldr r0, =data_020de0d4
    mov r1, #0x0
    add r0, r0, r2
    swpb r3, r1, [r0]
    add ip, r0, #0x1
    swpb r3, r1, [ip]
    add ip, r0, #0x2
    swpb r3, r1, [ip]
    add ip, r0, #0x3
    swpb r3, r1, [ip]
    add ip, r0, #0x4
    swpb r3, r1, [ip]
    add ip, r0, #0x5
    swpb r3, r1, [ip]
    add ip, r0, #0x6
    swpb r3, r1, [ip]
    add ip, r0, #0x7
    swpb r3, r1, [ip]
    ldr ip, =data_020e4c41
    add r3, r0, #0x8
    swpb r0, r1, [r3]
    add r0, ip, r2
    swpb r2, r1, [r0]
    add r3, r0, #0x1
    swpb r2, r1, [r3]
    add r3, r0, #0x2
    swpb r2, r1, [r3]
    add r3, r0, #0x3
    swpb r2, r1, [r3]
    add r3, r0, #0x4
    swpb r2, r1, [r3]
    add r3, r0, #0x5
    swpb r2, r1, [r3]
    add r3, r0, #0x6
    swpb r2, r1, [r3]
    add r3, r0, #0x7
    swpb r2, r1, [r3]
    add r2, r0, #0x8
    swpb r0, r1, [r2]
L_02072b88:
    mov r0, #0xa
    mul lr, r4, r0
    ldr r0, =data_020e4c4a
    ldr r3, =data_020de0f8
    add r1, r0, lr
    mov ip, #0x0
    ldr r2, =data_020de0dd
    swpb r0, ip, [r1]
    add r1, r3, r4
    swpb r0, r5, [r1]
    add r1, r2, lr
    swpb r0, ip, [r1]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
