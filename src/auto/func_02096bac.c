#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_0202dc18();
extern void func_0202dde8();
extern void func_0202e1e0();
extern void func_02067900();
extern void func_02084248();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02096bac(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x7c
    mov r7, r1
    ldr r4, [r7, #-0x8]
    mov r8, r0
    mov r0, r4
    mov r6, r2
    mov r5, #0x1
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r8
    bl func_0209c740
    mov r0, #0x0
    str r0, [sp, #0x70]
    str r0, [sp, #0x74]
    str r0, [sp, #0x78]
    cmp r4, #0x8c
    bgt L_02096c1c
    bge L_02096c44
    cmp r4, #0x6b
    bgt L_02096d04
    cmp r4, #0x68
    blt L_02096d04
    beq L_02096c38
    cmp r4, #0x6a
    cmpne r4, #0x6b
    beq L_02096d1c
    b L_02096d04
L_02096c1c:
    cmp r4, #0x8d
    bgt L_02096c2c
    beq L_02096c40
    b L_02096d04
L_02096c2c:
    cmp r4, #0x8e
    beq L_02096c44
    b L_02096d04
L_02096c38:
    mov r5, r0
    b L_02096d1c
L_02096c40:
    mov r5, r0
L_02096c44:
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl func_02084450
    ldr r1, [r6, #0x0]
    mov r7, r0
    and r2, r1, #0xff
    cmp r2, #0xff
    bne L_02096cb0
    add r4, sp, #0x70
    mov r3, r6
    mov r2, #0x6
L_02096c74:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02096c74
    mov r1, #0x15
    mov r0, r7
    str r1, [r6, #0xc]
    bl func_02084248
    add sp, sp, #0x7c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02096cb0:
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_02096cd8
    mov r0, #0x14
    mul r0, r2, r0
    ldr r0, [r1, r0]
L_02096cd8:
    cmp r0, #0x0
    strne r0, [sp, #0x0]
    cmp r4, #0x8e
    bne L_02096d1c
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl func_02084450
    mov r7, r0
    ldr r5, [r6, #0x0]
    b L_02096d1c
L_02096d04:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    add sp, sp, #0x7c
    mov r0, r7
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02096d1c:
    cmp r5, #0x0
    ldrne r0, [sp, #0x0]
    ldrne r5, [r0, #0x24]
    ldreq r0, [sp, #0x0]
    ldreq r5, [r0, #0x20]
    cmp r4, #0x8c
    bgt L_02096d64
    bge L_02096e68
    cmp r4, #0x6b
    bgt L_02096e74
    cmp r4, #0x68
    blt L_02096e74
    beq L_02096e2c
    cmp r4, #0x6a
    beq L_02096dd8
    cmp r4, #0x6b
    beq L_02096d80
    b L_02096e74
L_02096d64:
    cmp r4, #0x8d
    bgt L_02096d74
    beq L_02096e68
    b L_02096e74
L_02096d74:
    cmp r4, #0x8e
    beq L_02096df0
    b L_02096e74
L_02096d80:
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_02096dc0
    bl func_02067900
    cmp r0, #0x0
    beq L_02096dc0
    ldr r0, [r0, #0x8]
    tst r0, #0x8
    beq L_02096dc0
    mov r1, #0x0
    mov r0, #0x1000
    str r1, [sp, #0x70]
    str r1, [sp, #0x74]
    str r0, [sp, #0x78]
    b L_02096e74
L_02096dc0:
    add r1, sp, #0x64
    add r2, sp, #0x58
    add r3, sp, #0x70
    mov r0, r5
    bl func_0202dc18
    b L_02096e74
L_02096dd8:
    add r1, sp, #0x70
    add r2, sp, #0x4c
    add r3, sp, #0x40
    mov r0, r5
    bl func_0202dc18
    b L_02096e74
L_02096df0:
    add r1, sp, #0x34
    add r2, sp, #0x70
    add r3, sp, #0x28
    mov r0, r5
    bl func_0202dc18
    ldr r2, [sp, #0x70]
    ldr r1, [sp, #0x74]
    ldr r0, [sp, #0x78]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x70]
    str r1, [sp, #0x74]
    str r0, [sp, #0x78]
    b L_02096e74
L_02096e2c:
    add r1, sp, #0x1c
    add r2, sp, #0x10
    add r3, sp, #0x4
    mov r0, r5
    bl func_0202dde8
    add r0, sp, #0x1c
    bl func_01ff8668
    str r0, [sp, #0x70]
    add r0, sp, #0x10
    bl func_01ff8668
    str r0, [sp, #0x74]
    add r0, sp, #0x4
    bl func_01ff8668
    str r0, [sp, #0x78]
    b L_02096e74
L_02096e68:
    add r1, sp, #0x70
    mov r0, r5
    bl func_0202e1e0
L_02096e74:
    add r4, sp, #0x70
    mov r3, r6
    mov r2, #0x6
L_02096e80:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02096e80
    mov r1, #0x15
    mov r0, r7
    str r1, [r6, #0xc]
    add sp, sp, #0x7c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
