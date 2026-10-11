#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02041ec4();
extern char data_020bc960[];
extern char data_020d02ec[];
extern char data_020d0304[];
extern char data_020d0318[];
// clang-format off
asm void func_02048120(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, =data_020d02ec
    ldr r0, =data_020d0318
    ldr r2, [ip, #0x4]
    ldr r1, [r0, #0x0]
    mov r0, #0x6
    mla r1, r2, r0, r1
    add lr, r2, #0x1
    and r4, r1, #0x1
    ldr r0, =data_020bc960
    add r3, sp, #0x0
    sub r1, r1, r4
    mov r2, #0x10
    str lr, [ip, #0x4]
    bl func_02041ec4
    ldr ip, =data_020d0304
    add r1, sp, #0x0
    add r0, r1, r4
    ldrb r1, [r1, r4]
    ldrb lr, [r0, #0x1]
    add r2, ip, #0x1
    add r3, ip, #0x2
    swpb r1, r1, [ip]
    add r4, ip, #0x3
    swpb r1, lr, [r2]
    ldrb lr, [r0, #0x3]
    ldrb r1, [r0, #0x2]
    add ip, ip, #0x4
    ldr r2, =data_020d02ec
    swpb r1, r1, [r3]
    swpb r1, lr, [r4]
    ldrb r0, [r0, #0x4]
    swpb r0, r0, [ip]
    ldrb r0, [sp, #0x5]
    str r0, [r2, #0x8]
    add sp, sp, #0x10
    ldmfd sp!, {r4, pc}
}
// clang-format on
