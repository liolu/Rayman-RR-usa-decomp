#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204217c();
extern char data_020cf6cc[];
extern char data_020cf708[];
// clang-format off
asm void func_02030be4(void) {
    stmfd sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    ldmeqfd sp!, {r3, r4, r5, pc}
    mov r0, r4, lsl #0x4
    bl func_0204217c
    ldr r1, =data_020cf6cc
    cmp r4, #0x0
    str r0, [r1, r5, lsl #0x2]
    mov r1, #0x0
    bls L_02030c28
    mvn r2, #0x0
L_02030c14:
    add r1, r1, #0x1
    and r1, r1, #0xff
    cmp r1, r4
    str r2, [r0], #0x10
    blo L_02030c14
L_02030c28:
    ldr r0, =data_020cf708
    add r1, r0, r5
    swpb r0, r4, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
