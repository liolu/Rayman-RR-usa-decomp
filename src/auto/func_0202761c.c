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
extern char data_020c57b4[];
extern char data_020c57cc[];
extern char data_020c57d0[];
extern char func_020275c0[];
extern char func_020275e4[];
// clang-format off
asm void func_0202761c(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    mov r4, r3
    bl func_0201fc70
    ldr r0, =data_020c57b4
    ldr r2, [r0, #0xc]
    str r2, [r0, #0x10]
    ldr r1, [r2, #0x4]
    cmp r1, #0x0
    ldreq r1, [r2, #0x8]
    cmpeq r1, #0x0
    bne L_02027840
    ldr r2, [r0, #0x14]
    cmp r2, #0x0
    beq L_02027690
    ldr r0, =data_020c57d0
    mov r1, #0x0
    str r1, [r2, #0x10]
    bl func_020b5324
    cmp r0, #0x0
    beq L_02027684
    ldr r0, =data_020c57d0
    mov r1, #0x0
    bl func_020b53e0
    bl func_0201fc34
L_02027684:
    ldr r0, =data_020c57b4
    mov r1, #0x0
    str r1, [r0, #0x14]
L_02027690:
    ldr ip, =data_020c57b4
    ldr r0, [sp, #0x18]
    ldr r2, [ip, #0x10]
    mov r1, #0x0
    str r1, [r2, #0xc]
    ldr r3, [r0, #0x14]
    ldr r2, [ip, #0x10]
    ldr r6, [sp, #0x28]
    str r3, [r2, #0x14]
    ldr r2, [ip, #0x10]
    ldrb r7, [r0, #0xc]
    add r3, r2, #0x3c
    mov lr, #0x1
    swpb r2, r7, [r3]
    ldr r3, [ip, #0x10]
    ldrb r2, [r3, #0x3c]
    mov r2, r2, lsl #0xc
    str r2, [r3, #0x34]
    ldr r2, [ip, #0x10]
    str r4, [r2, #0x24]
    ldr r2, [ip, #0x10]
    str r6, [r2, #0x2c]
    ldr r2, [ip, #0x10]
    str lr, [r2, #0x0]
    ldr r2, [ip, #0x10]
    str lr, [r2, #0x4]
    ldr r2, [ip, #0x10]
    str r1, [r2, #0x8]
    ldr r2, [ip, #0x10]
    str r1, [r2, #0x10]
    ldr r3, [r0, #0x0]
    ldr r2, =data_020bc420
L_02027710:
    ldr r0, [r2, r1, lsl #0x2]
    cmp r3, r0
    ldreq r0, =data_020bc49c
    ldreq r4, [r0, r1, lsl #0x2]
    beq L_02027734
    add r1, r1, #0x1
    cmp r1, #0x64
    blt L_02027710
    mvn r4, #0x0
L_02027734:
    mvn r0, #0x0
    cmp r4, r0
    beq L_02027790
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
L_02027790:
    cmp r5, #0x0
    beq L_0202780c
    ldr r0, [r5, #0x20]
    tst r0, #0x4
    beq L_020277cc
    ldr r0, =data_020c57b4
    ldr r2, [r0, #0x10]
    ldr r0, [r2, #0x14]
    tst r0, #0x2
    beq L_020277cc
    ldrb r1, [r5, #0x4]
    ldrb r0, [r2, #0x3c]
    smulbb r0, r1, r0
    strh r0, [r2, #0x3e]
    b L_020277e0
L_020277cc:
    ldr r0, =data_020c57b4
    ldr r1, [r0, #0x10]
    ldrb r0, [r1, #0x3c]
    rsb r0, r0, r0, lsl #0x7
    strh r0, [r1, #0x3e]
L_020277e0:
    ldr r3, =data_020c57b4
    ldrb r4, [r5, #0x4]
    ldr r1, [r3, #0x10]
    ldr r0, =data_020c57d0
    add r2, r1, #0x3d
    swpb r1, r4, [r2]
    mov r2, #0x0
    ldr r1, [r3, #0x10]
    ldrsh r1, [r1, #0x3e]
    mov r1, r1, asr #0x7
    bl func_020b5394
L_0202780c:
    ldr r0, =data_020c57b4
    ldr r3, =func_020275c0
    ldr r2, [r0, #0x10]
    ldr r1, =func_020275e4
    str r3, [r2, #0x18]
    ldr r0, [r0, #0x10]
    str r1, [r0, #0x20]
    bl func_0201fc74
    ldr r0, =data_020c57b4
    ldr r0, [r0, #0x10]
    ldmfd sp!, {r3, r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
L_02027840:
    bl func_0201fc74
    mvn r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
