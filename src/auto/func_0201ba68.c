#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201ba68();
extern void func_0202c700();
extern void func_0202c820();
extern void func_0202c8a4();
extern void func_0202cb6c();
extern void func_0202e1e0();
extern void func_0202e210();
extern void func_0202e618();
extern void func_02061720();
extern void func_0207dfc8();
extern void func_0207fa0c();
extern void func_02080fe4();
extern char data_020c4824[];
extern char data_020c4928[];
extern char data_020c4934[];
extern char data_020c4940[];
extern char data_020c4958[];
extern char data_020c4964[];
extern char data_020c4970[];
// clang-format off
asm void func_0201ba68(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    ldr r3, =data_020c4824
    mov r6, #0x0
    str r6, [r3, #0xfc]
    str r6, [r3, #0x100]
    mov r4, r2
    mov r5, r1
    str r6, [r3, #0x12c]
    mov r6, r0
    ldr r0, [r4, #0x24]
    ldr r1, =data_020c4940
    bl func_0202e1e0
    ldr r0, [r4, #0x30]
    ldr r7, =data_020c4824
    and r0, r0, #0x10
    ands ip, r0, #0xff
    add r1, r7, #0x128
    swpb r0, ip, [r1]
    beq L_0201bb20
    ldr r3, [r4, #0x34]
    str r3, [r7, #0x100]
    cmp r3, #0x0
    beq L_0201bb28
    ldr r2, [r7, #0x11c]
    ldr r0, [r3, #0x0]
    add r0, r0, r2
    str r0, [r7, #0x104]
    ldr r1, [r7, #0x120]
    ldr r0, [r3, #0x4]
    add r0, r0, r1
    str r0, [r7, #0x108]
    ldr r0, [r7, #0x124]
    ldr lr, [r3, #0x8]
    add lr, lr, r0
    str lr, [r7, #0x10c]
    ldr lr, [r3, #0xc]
    add r2, lr, r2
    str r2, [r7, #0x110]
    ldr r2, [r3, #0x10]
    add r1, r2, r1
    str r1, [r7, #0x114]
    ldr r1, [r3, #0x14]
    add r0, r1, r0
    str r0, [r7, #0x118]
    b L_0201bb28
L_0201bb20:
    ldr r0, [r4, #0x34]
    str r0, [r7, #0xfc]
L_0201bb28:
    ldr r0, =data_020c4824
    ldr r7, [r0, #0xfc]
    cmp r7, #0x0
    ldreq r1, [r0, #0x100]
    cmpeq r1, #0x0
    bne L_0201bb54
    add r0, r0, #0x29
    add r1, r0, #0x100
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201bc1c
L_0201bb54:
    cmp ip, #0x0
    bne L_0201bbf0
    ldr r8, [r4, #0x24]
    add r1, sp, #0x10
    mov r0, r8
    bl func_0202e1e0
    add r0, sp, #0x4
    mov r1, r8
    mov r2, r7
    bl func_0202c8a4
    ldr r2, [sp, #0x4]
    ldr r1, [sp, #0x10]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [sp, #0x18]
    mov r0, r8
    add r1, r2, r1
    str r1, [sp, #0xc]
    bl func_0202e210
    ldr r1, [r7, #0xc]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    mov r3, r1, lsr #0xc
    adc r0, r0, #0x0
    orr r3, r3, r0, lsl #0x14
    mov r0, r6
    mov r1, r5
    add r2, sp, #0x4
    bl func_0207fa0c
    ldr r1, =data_020c4824
    add r1, r1, #0x29
    add r1, r1, #0x100
    swpb r0, r0, [r1]
    b L_0201bc1c
L_0201bbf0:
    ldr r2, =data_020c4928
    mov r7, #0x0
    ldr r3, =data_020c4934
    mov r0, r6
    mov r1, r5
    str r7, [sp, #0x0]
    bl func_0207dfc8
    ldr r1, =data_020c4824
    add r1, r1, #0x29
    add r1, r1, #0x100
    swpb r0, r0, [r1]
L_0201bc1c:
    ldr r0, =data_020c4824
    ldrb r1, [r0, #0x129]
    cmp r1, #0x0
    beq L_0201bd40
    ldr r1, [r4, #0x0]
    str r1, [r0, #0x130]
    tst r1, #0x18
    beq L_0201bc50
    ldr r0, [r4, #0x4]
    bl func_0202e618
    ldr r1, =data_020c4824
    str r0, [r1, #0x12c]
    b L_0201bc6c
L_0201bc50:
    cmp r1, #0x2
    bne L_0201bc6c
    mov r1, r4
    mov r0, #0x3
    bl func_02061720
    ldr r1, =data_020c4824
    str r0, [r1, #0x12c]
L_0201bc6c:
    ldr r0, =data_020c4824
    ldr r1, [r0, #0x12c]
    cmp r1, #0x0
    beq L_0201bd40
    ldr r1, [r4, #0x30]
    and r1, r1, #0x4
    tst r1, #0xff
    beq L_0201bcf0
    ldr r2, [r6, #0x0]
    ldr r1, [r0, #0x11c]
    ldr r7, =data_020c4964
    sub r1, r2, r1
    str r1, [r0, #0x134]
    ldr r2, [r6, #0x4]
    ldr r1, [r0, #0x120]
    mov r3, r5
    sub r1, r2, r1
    str r1, [r0, #0x138]
    ldr ip, [r6, #0x8]
    ldr r1, [r0, #0x124]
    mov r2, #0x6
    sub r1, ip, r1
    str r1, [r0, #0x13c]
L_0201bcc8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0201bcc8
    b L_0201bd1c
L_0201bcf0:
    ldr r1, [r4, #0x24]
    ldr r0, =data_020c4970
    bl func_0202cb6c
    ldr r0, =data_020c4958
    ldr r1, =data_020c4970
    mov r2, r6
    bl func_0202c700
    ldr r0, =data_020c4964
    ldr r1, =data_020c4970
    mov r2, r5
    bl func_0202c820
L_0201bd1c:
    ldr r1, =data_020c4824
    ldr r0, =data_020c4958
    ldr r2, [r1, #0x12c]
    ldr r1, =data_020c4964
    bl func_02080fe4
    cmp r0, #0x0
    addne sp, sp, #0x1c
    movne r0, #0x1
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_0201bd40:
    ldr r0, =data_020c4824
    ldrb r0, [r0, #0x129]
    cmp r0, #0x0
    bne L_0201bd64
    ldr r0, [r4, #0x30]
    and r0, r0, #0x200
    mov r0, r0, lsr #0x8
    tst r0, #0xff
    beq L_0201bda8
L_0201bd64:
    ldr r4, [r4, #0x8]
    cmp r4, #0x0
    beq L_0201bda8
L_0201bd70:
    ldr r0, [r4, #0x0]
    cmp r0, #0x2
    beq L_0201bd9c
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_0201ba68
    cmp r0, #0x0
    addne sp, sp, #0x1c
    movne r0, #0x1
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_0201bd9c:
    ldr r4, [r4, #0x14]
    cmp r4, #0x0
    bne L_0201bd70
L_0201bda8:
    mov r0, #0x0
    add sp, sp, #0x1c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
