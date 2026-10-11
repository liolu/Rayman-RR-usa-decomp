#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02050ed0();
extern void func_02084450();
extern char data_020bc570[];
extern char data_020dba7e[];
// clang-format off
asm void func_020a3144(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    add r2, sp, #0x0
    bl func_02084450
    ldr r1, =data_020bc570
    mov r4, r0
    ldr r0, [r1, #0x0]
    cmp r0, #0x12c
    bne L_020a3188
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ldrne r1, =data_020dba7e
    movne r0, #0x1
    ldreq r1, =data_020dba7e
    moveq r0, #0x0
    swpb r0, r0, [r1]
    bl func_02050ed0
L_020a3188:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, pc}
}
// clang-format on
