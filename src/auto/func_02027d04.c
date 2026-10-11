#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fc34();
extern void func_0201fc70();
extern void func_0201fc74();
extern void func_020b5324();
extern void func_020b5394();
extern void func_020b53e0();
extern void func_020b540c();
extern char data_020bc420[];
extern char data_020bc49c[];
extern char data_020c4a4c[];
extern char data_020c57b4[];
extern char data_020c57cc[];
extern char data_020c57d0[];
extern char func_02027a84[];
extern char func_02027bb8[];
// clang-format off
asm void func_02027d04(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r2
    mov r5, r3
    ldr r4, [sp, #0x20]
    bl func_0201fc70
    ldr r0, =data_020c4a4c
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bne L_02027d40
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_02027d40:
    ldr r0, =data_020c57b4
    ldr r2, [r0, #0xc]
    str r2, [r0, #0x10]
    ldr r1, [r2, #0x4]
    cmp r1, #0x0
    ldreq r1, [r2, #0x8]
    cmpeq r1, #0x0
    bne L_02027f4c
    ldr r2, [r0, #0x14]
    cmp r2, #0x0
    beq L_02027da0
    ldr r0, =data_020c57d0
    mov r1, #0x0
    str r1, [r2, #0x10]
    bl func_020b5324
    cmp r0, #0x0
    beq L_02027d94
    ldr r0, =data_020c57d0
    mov r1, #0x0
    bl func_020b53e0
    bl func_0201fc34
L_02027d94:
    ldr r0, =data_020c57b4
    mov r1, #0x0
    str r1, [r0, #0x14]
L_02027da0:
    ldr r2, =data_020c57b4
    ldr r0, [sp, #0x14]
    ldr r1, [r2, #0x10]
    ldr r3, [sp, #0x10]
    str r0, [r1, #0x44]
    ldr r1, [r3, #0x14]
    ldr r0, [r2, #0x10]
    mov ip, #0x1
    str r1, [r0, #0x14]
    ldr r0, [r2, #0x10]
    ldrb lr, [r3, #0xc]
    add r1, r0, #0x3c
    mov r3, #0x0
    swpb r0, lr, [r1]
    cmp r4, #0x0
    ldr r1, [r2, #0x10]
    ldrb r0, [r1, #0x3c]
    mov r0, r0, lsl #0xc
    str r0, [r1, #0x34]
    ldr r0, [r2, #0x10]
    str r6, [r0, #0x24]
    ldr r0, [r2, #0x10]
    str r5, [r0, #0x28]
    ldr r0, [r2, #0x10]
    str ip, [r0, #0x0]
    ldr r0, [r2, #0x10]
    str ip, [r0, #0x4]
    ldr r0, [r2, #0x10]
    str r3, [r0, #0x8]
    beq L_02027e88
    ldr r0, [r4, #0x20]
    tst r0, #0x4
    beq L_02027e48
    ldr r2, [r2, #0x10]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    beq L_02027e48
    ldrb r1, [r4, #0x4]
    ldrb r0, [r2, #0x3c]
    smulbb r0, r1, r0
    strh r0, [r2, #0x3e]
    b L_02027e5c
L_02027e48:
    ldr r0, =data_020c57b4
    ldr r1, [r0, #0x10]
    ldrb r0, [r1, #0x3c]
    rsb r0, r0, r0, lsl #0x7
    strh r0, [r1, #0x3e]
L_02027e5c:
    ldr r3, =data_020c57b4
    ldrb r4, [r4, #0x4]
    ldr r1, [r3, #0x10]
    ldr r0, =data_020c57d0
    add r2, r1, #0x3d
    swpb r1, r4, [r2]
    mov r2, #0x0
    ldr r1, [r3, #0x10]
    ldrsh r1, [r1, #0x3e]
    mov r1, r1, asr #0x7
    bl func_020b5394
L_02027e88:
    ldr r0, [sp, #0x10]
    ldr r1, =data_020bc420
    ldr r2, [r0, #0x0]
    mov r3, #0x0
L_02027e98:
    ldr r0, [r1, r3, lsl #0x2]
    cmp r2, r0
    ldreq r0, =data_020bc49c
    ldreq r4, [r0, r3, lsl #0x2]
    beq L_02027ebc
    add r3, r3, #0x1
    cmp r3, #0x64
    blt L_02027e98
    mvn r4, #0x0
L_02027ebc:
    mvn r0, #0x0
    cmp r4, r0
    beq L_02027f18
    ldr r0, =data_020c57d0
    mov r1, r4
    mov r2, #0x0
    bl func_020b540c
    ldr r0, =data_020c57cc
    str r4, [r0, #0x0]
    bl func_0201fc34
    ldr r1, =data_020c57b4
    ldr r0, =data_020c57d0
    ldr r1, [r1, #0x10]
    mov r2, #0x0
    ldrsh r1, [r1, #0x3e]
    mov r1, r1, asr #0x7
    bl func_020b5394
    ldr r0, =data_020c57b4
    mov r2, #0x1
    ldr r1, [r0, #0x10]
    str r2, [r1, #0x10]
    ldr r1, [r0, #0x10]
    str r1, [r0, #0x14]
L_02027f18:
    ldr r0, =data_020c57b4
    ldr r3, =func_02027a84
    ldr r2, [r0, #0x10]
    ldr r1, =func_02027bb8
    str r3, [r2, #0x18]
    ldr r0, [r0, #0x10]
    str r1, [r0, #0x20]
    bl func_0201fc74
    ldr r0, =data_020c57b4
    ldr r0, [r0, #0x10]
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
L_02027f4c:
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
