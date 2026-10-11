#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c2c0();
extern void func_0205aa44();
extern char data_020bd288[];
extern char data_020dceec[];
// clang-format off
asm void func_0205eb20(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, =data_020bd288
    mov r7, #0x0
    ldr ip, =data_020dceec
    ldr lr, [r3, #0x0]
    sub r3, r7, #0x1
    mov r6, r0
    mov r5, r1
    mov r4, r2
    str r7, [ip, #0x0]
    cmp lr, r3
    bne L_0205eb5c
    bl func_0202c2c0
    ldr r1, =data_020bd288
    str r0, [r1, #0x0]
L_0205eb5c:
    mov r1, #0x0
    str r4, [r6, #0x0]
    str r1, [r6, #0x8]
    str r1, [r6, #0x4]
    ldr r0, =data_020bd288
    str r1, [r6, #0xc]
    ldr r3, [r0, #0x4]
    add r2, r6, #0x2c
    str r3, [r6, #0x14]
    ldr r4, [r0, #0x8]
    mov r3, #0x6c
    str r4, [r6, #0x18]
    ldr r0, [r0, #0xc]
    str r0, [r6, #0x1c]
    str r1, [r6, #0x20]
    swpb r0, r3, [r2]
    ldr r0, [r5, #0x4]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x14]
    bl func_0205aa44
    str r0, [r6, #0x28]
    mov r0, #0x0
    str r0, [r6, #0x10]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
