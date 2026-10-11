#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a3b8();
extern void func_0200a4bc();
extern void func_02035e28();
extern void func_020413b4();
extern void func_0204141c();
extern void func_02041da8();
extern char data_020cf9d4[];
// clang-format off
asm void func_0204051c(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r5, r0
    mov r1, r5
    mov r0, #0x23
    bl func_020413b4
    movs r4, r0
    bne L_020408e0
    mov r0, #0x1
    bl func_02035e28
    mov r4, r0
    mov r1, r5
    mov r2, r4
    mov r0, #0x23
    mov r3, #0x24
    bl func_0204141c
    mov r5, r0
    ldrh r0, [r5, #0x20]
    tst r0, #0x1
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x1
    biceq r0, r0, #0x1
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x2
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x2
    biceq r0, r0, #0x2
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x4
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x4
    biceq r0, r0, #0x4
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x10
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x10
    biceq r0, r0, #0x10
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x20
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x40
    biceq r0, r0, #0x40
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x4000
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x100
    biceq r0, r0, #0x100
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x8000
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x8000
    biceq r0, r0, #0x8000
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x40
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x20
    biceq r0, r0, #0x20
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x8
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x8
    biceq r0, r0, #0x8
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x80
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x200
    biceq r0, r0, #0x200
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x100
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x400
    biceq r0, r0, #0x400
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x200
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x800
    biceq r0, r0, #0x800
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x400
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x1000
    biceq r0, r0, #0x1000
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x800
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x2000
    biceq r0, r0, #0x2000
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x1000
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x4000
    biceq r0, r0, #0x4000
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r0, [r5, #0x20]
    tst r0, #0x2000
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x80
    biceq r0, r0, #0x80
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldr r1, [r5, #0x0]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x8]
    ldr r1, [r5, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0xc]
    ldr r1, [r5, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x10]
    ldr r1, [r5, #0xc]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x14]
    ldr r0, =0x45800000
    ldr r1, [r5, #0x10]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x24]
    ldr r0, =0x45800000
    ldr r1, [r5, #0x14]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x28]
    ldr r0, =0x45800000
    ldr r1, [r5, #0x18]
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x2c]
    ldrh r0, [r5, #0x22]
    cmp r0, #0x0
    ldr r0, [r4, #0x4]
    orrne r0, r0, #0x20000
    biceq r0, r0, #0x20000
    str r0, [r4, #0x4]
    str r0, [r4, #0x4]
    ldrh r1, [r5, #0x1c]
    ldr r0, =0xffff
    cmp r1, r0
    moveq r0, #0x0
    streq r0, [r4, #0x18]
    streq r0, [r4, #0x1c]
    beq L_02040830
    mov r0, #0xc
    mul r2, r1, r0
    ldr r1, =data_020cf9d4
    ldr r0, =0x45800000
    ldr r3, [r1, #0x0]
    ldr r1, [r3, r2]
    add r6, r3, r2
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x18]
    ldr r1, [r6, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x1c]
    ldr r1, [r6, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
L_02040830:
    str r0, [r4, #0x20]
    ldrh r1, [r5, #0x1e]
    ldr r0, =0xffff
    cmp r1, r0
    beq L_02040898
    mov r0, #0xc
    mul r2, r1, r0
    ldr r1, =data_020cf9d4
    ldr r0, =0x45800000
    ldr r3, [r1, #0x0]
    ldr r1, [r3, r2]
    add r6, r3, r2
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x0]
    ldr r1, [r6, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x4]
    ldr r1, [r6, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [sp, #0x8]
    b L_020408a8
L_02040898:
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
L_020408a8:
    add r3, sp, #0x0
    add ip, r4, #0x30
    mov r2, #0x6
L_020408b4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_020408b4
    mov r0, r5
    bl func_02041da8
L_020408e0:
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
