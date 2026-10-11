#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02088e08();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_020966cc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r6, r1
    ldr r7, [r6, #-0x8]
    mov r8, r0
    mov r0, r7
    mov r5, r2
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r8
    bl func_0209c740
    mov r1, #0x0
    ldr r0, [sp, #0x0]
    str r1, [sp, #0x4]
    str r1, [sp, #0x8]
    str r1, [sp, #0xc]
    bl func_02088e08
    mov r4, r0
    cmp r7, #0x7b
    beq L_02096814
    cmp r7, #0x7c
    bne L_020969e8
    mov r0, r8
    mov r1, r6
    mov r2, r5
    bl func_02084450
    ldr r1, [r5, #0x0]
    mov r6, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02096760
L_02096748:
    b L_020967a4
    b L_020967ac
    b L_020967b4
    b L_020967bc
    b L_020967c4
    b L_020967cc
L_02096760:
    add r4, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_0209676c:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0209676c
    mov r1, #0x15
    add sp, sp, #0x10
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020967a4:
    add r0, r4, #0x8
    b L_020967d0
L_020967ac:
    add r0, r4, #0x30
    b L_020967d0
L_020967b4:
    add r0, r4, #0x58
    b L_020967d0
L_020967bc:
    add r0, r4, #0x80
    b L_020967d0
L_020967c4:
    add r0, r4, #0xa8
    b L_020967d0
L_020967cc:
    add r0, r4, #0xd0
L_020967d0:
    mov r3, r5
    add r4, r0, #0x4
    mov r2, #0x6
L_020967dc:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020967dc
    mov r1, #0x15
    add sp, sp, #0x10
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02096814:
    ldr r0, [r4, #0x4]
    and r1, r0, #0x10000
    cmp r1, #0x10000
    bne L_02096854
    ldr r2, [sp, #0x4]
    ldr r1, [r4, #0x84]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x88]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x8c]
    add r1, r2, r1
    str r1, [sp, #0xc]
L_02096854:
    and r1, r0, #0x1
    cmp r1, #0x1
    bne L_02096890
    ldr r2, [sp, #0x4]
    ldr r1, [r4, #0x34]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x38]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x3c]
    add r1, r2, r1
    str r1, [sp, #0xc]
L_02096890:
    and r1, r0, #0x4
    cmp r1, #0x4
    bne L_020968cc
    ldr r2, [sp, #0x4]
    ldr r1, [r4, #0x5c]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x60]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x64]
    add r1, r2, r1
    str r1, [sp, #0xc]
L_020968cc:
    and r1, r0, #0x40
    cmp r1, #0x40
    bne L_02096908
    ldr r2, [sp, #0x4]
    ldr r1, [r4, #0xac]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [r4, #0xb0]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0xb4]
    add r1, r2, r1
    str r1, [sp, #0xc]
L_02096908:
    and r1, r0, #0x10
    cmp r1, #0x10
    bne L_02096944
    ldr r2, [sp, #0x4]
    ldr r1, [r4, #0xd4]
    ldr r3, [sp, #0x8]
    add r1, r2, r1
    str r1, [sp, #0x4]
    ldr r1, [r4, #0xd8]
    ldr r2, [sp, #0xc]
    add r1, r3, r1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0xdc]
    add r1, r2, r1
    str r1, [sp, #0xc]
L_02096944:
    cmp r0, #0x0
    bne L_0209697c
    ldr r1, [sp, #0x4]
    ldr r0, [r4, #0xc]
    ldr r2, [sp, #0x8]
    add r0, r1, r0
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [sp, #0xc]
    add r0, r2, r0
    str r0, [sp, #0x8]
    ldr r0, [r4, #0x14]
    add r0, r1, r0
    str r0, [sp, #0xc]
L_0209697c:
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0xc]
    cmpeq r0, #0x0
    beq L_020969a4
    add r0, sp, #0x4
    mov r1, r0
    bl func_01ff84a0
L_020969a4:
    add r4, sp, #0x4
    mov r3, r5
    mov r2, #0x6
L_020969b0:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020969b0
    mov r1, #0x15
    add sp, sp, #0x10
    mov r0, r6
    str r1, [r5, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020969e8:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    mov r0, r6
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
