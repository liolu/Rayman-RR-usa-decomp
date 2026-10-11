#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c480();
extern void func_0205ea18();
extern void func_0205ea28();
extern void func_0205ea78();
extern void func_0206c94c();
extern char data_020dc19c[];
extern char data_020ddcec[];
// clang-format off
asm void func_0206de04(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0x4]
    mov r5, r1
    ldr r4, [r0, #0x0]
    ldr r0, [r4, #0x8]
    cmp r5, r0
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #0x94]
    bl func_0205ea28
    movs r1, #0x0
    bne L_0206de6c
    ldr r0, [r4, #0x94]
    mov r1, r5
    bl func_0205ea78
    cmp r0, #0x0
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #0x94]
    ldrb r0, [r0, #0x1e]
    cmp r0, #0x1
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    mov r0, r5
    b L_0206de70
L_0206de6c:
    bl func_0205ea18
L_0206de70:
    ldr r2, =0xffff
    mov r1, #0x0
    strh r2, [r4, #0xd8]
    str r1, [r4, #0xc0]
    ldr r3, [r4, #0x4]
    add r2, r4, #0xdb
    str r3, [r4, #0x90]
    str r0, [r4, #0x94]
    str r5, [r4, #0x8]
    mov r0, #0x1
    swpb r0, r0, [r2]
    ldr r0, =data_020ddcec
    ldr r2, [r4, #0x94]
    ldr r0, [r0, #0x0]
    ldr r2, [r2, #0x0]
    ldrh r2, [r2, #0x0]
    sub r2, r2, #0x1
    bl func_0202c480
    and r0, r0, #0xff
    mov r1, #0x0
    strh r0, [r4, #0x98]
    sub r0, r0, #0x1
    strh r0, [r4, #0xcc]
    ldr r0, =data_020dc19c
    str r1, [r4, #0xc4]
    ldr r3, [r0, #0x74]
    mov r0, r6
    mov r2, r1
    str r3, [r4, #0xc8]
    bl func_0206c94c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
