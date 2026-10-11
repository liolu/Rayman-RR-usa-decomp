#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c680();
// clang-format off
asm void func_0202c820(void) {
    stmfd sp!, {r3, lr}
    ldr r3, [r1, #0x0]
    cmp r3, #0x4
    addls pc, pc, r3, lsl #0x2
    b L_0202c894
L_0202c834:
    b L_0202c894
    b L_0202c848
    b L_0202c848
    b L_0202c87c
    b L_0202c888
L_0202c848:
    cmp r0, r2
    ldmeqfd sp!, {r3, pc}
    mov ip, #0x6
L_0202c854:
    ldrb r1, [r2, #0x0]
    ldrb r3, [r2, #0x1]
    add r2, r2, #0x2
    subs ip, ip, #0x1
    swpb r1, r1, [r0]
    add r0, r0, #0x1
    swpb r1, r3, [r0]
    add r0, r0, #0x1
    bne L_0202c854
    ldmfd sp!, {r3, pc}
L_0202c87c:
    add r1, r1, #0x1c
    bl func_0202c680
    ldmfd sp!, {r3, pc}
L_0202c888:
    add r1, r1, #0x40
    bl func_0202c680
    ldmfd sp!, {r3, pc}
L_0202c894:
    mov r1, #0x5
    mov r0, #0x0
    str r1, [r0, #0x0]
    ldmfd sp!, {r3, pc}
}
// clang-format on
