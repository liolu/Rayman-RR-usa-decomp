#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003fe4();
extern void func_02004600();
extern void func_02014910();
extern char data_020bd2a0[];
extern char data_020bd2a4[];
extern char data_020dceec[];
extern char data_020dcef8[];
// clang-format off
asm void func_0205fc20(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r1, =data_020bd2a0
    bl func_02003fe4
    mov r9, r0
    bl func_02004600
    mov r0, r0, lsl #0xc
    mov r1, #0x3e8000
    bl func_02014910
    ldr r5, =data_020dcef8
    mov r10, #0x1
    str r0, [r5, #0x0]
    mov r6, #0x3e8000
    mov r4, #0x3a
    mov r8, #0x0
    ldr r7, =data_020bd2a4
    b L_0205fc94
L_0205fc60:
    mov r0, r8
    mov r1, r7
    bl func_02003fe4
    movs r9, r0
    beq L_0205fc94
    bl func_02004600
    mov r1, r6
    mov r0, r0, lsl #0xc
    bl func_02014910
    str r0, [r5, r10, lsl #0x2]
    sub r1, r9, #0x1
    swpb r0, r4, [r1]
    add r10, r10, #0x1
L_0205fc94:
    cmp r9, #0x0
    beq L_0205fca4
    cmp r10, #0x100
    blt L_0205fc60
L_0205fca4:
    ldr r0, =data_020dceec
    str r10, [r0, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
