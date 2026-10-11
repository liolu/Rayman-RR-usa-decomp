#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dd3c0[];
extern char data_020dd438[];
extern char data_020dd4b0[];
// clang-format off
asm void func_0205fad8(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020dd438
    mov r4, #0x0
L_0205fae4:
    ldr r1, [r2, r4, lsl #0x2]
    cmp r0, r1
    bne L_0205fb4c
    mov r0, #0x14
    mul r3, r4, r0
    mov lr, #0x0
    ldr ip, =data_020dd4b0
    str lr, [r2, r4, lsl #0x2]
    ldr r0, =data_020dd3c0
    mov r1, #0x1
    str r1, [r0, r4, lsl #0x2]
    add r2, ip, r3
    mov r1, #0x5
L_0205fb18:
    swpb r0, lr, [r2]
    add r2, r2, #0x1
    swpb r0, lr, [r2]
    add r2, r2, #0x1
    swpb r0, lr, [r2]
    add r2, r2, #0x1
    swpb r0, lr, [r2]
    add r2, r2, #0x1
    subs r1, r1, #0x1
    bne L_0205fb18
    mov r0, #0x1
    str r0, [ip, r3]
    ldmfd sp!, {r4, pc}
L_0205fb4c:
    add r1, r4, #0x1
    and r4, r1, #0xff
    cmp r4, #0x1e
    blo L_0205fae4
    ldmfd sp!, {r4, pc}
}
// clang-format on
