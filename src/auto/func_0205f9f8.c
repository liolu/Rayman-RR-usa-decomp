#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dd3c0[];
extern char data_020dd438[];
extern char data_020dd4b0[];
// clang-format off
asm void func_0205f9f8(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0x0
    ldr r7, =data_020dd4b0
    ldr r3, =data_020dd3c0
    ldr r1, =data_020dd438
    mov ip, #0x1
    mov r2, r6
    mov lr, r6
L_0205fa18:
    mov r5, r7
    mov r4, #0x5
L_0205fa20:
    swpb r0, lr, [r5]
    add r5, r5, #0x1
    swpb r0, lr, [r5]
    add r5, r5, #0x1
    swpb r0, lr, [r5]
    add r5, r5, #0x1
    swpb r0, lr, [r5]
    add r5, r5, #0x1
    subs r4, r4, #0x1
    bne L_0205fa20
    str ip, [r3, r6, lsl #0x2]
    str r2, [r1, r6, lsl #0x2]
    add r6, r6, #0x1
    cmp r6, #0x1e
    str ip, [r7], #0x14
    blt L_0205fa18
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
