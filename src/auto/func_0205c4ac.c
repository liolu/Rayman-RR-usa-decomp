#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02037404();
extern void func_02067900();
extern void func_0206e188();
extern void func_0206e34c();
// clang-format off
asm void func_0205c4ac(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #0x4]
    mov r6, r1
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02067900
    movs r5, r0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r6
    bl func_0206e188
    mov r4, r0
    mov r0, r7
    mov r1, r6
    bl func_0206e34c
    mov r1, r0
    cmp r4, #0x0
    beq L_0205c528
    add ip, r5, #0x54
    mov r3, #0x6
L_0205c504:
    ldrb r0, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r2, [ip]
    add ip, ip, #0x1
    bne L_0205c504
L_0205c528:
    cmp r1, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    bl func_02037404
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
