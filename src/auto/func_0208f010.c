#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_020039b0();
extern void func_0208e200();
extern void func_0208e7b0();
extern void func_0208e9e4();
extern void func_0208eb24();
extern void r3();
extern char data_020dd7a4[];
extern char data_020e3b30[];
extern char data_020e3bb0[];
extern char func_0208e578[];
extern char func_0208e684[];
extern char func_0208eb04[];
// clang-format off
asm void func_0208f010(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r9, r1
    mov r5, #0x0
    str r5, [r9, #0x0]
    mov r8, r2
    str r5, [r9, #0x4]
    mov r10, r0
    str r5, [r9, #0x8]
    tst r8, #0x8
    beq L_0208f0b8
    tst r8, #0x4
    beq L_0208f078
    ldr r1, [r10, #0x20]
    ldr r0, [r10, #0x50]
    sub r0, r1, r0
    str r0, [sp, #0x24]
    ldr r1, [r10, #0x24]
    ldr r0, [r10, #0x54]
    sub r0, r1, r0
    str r0, [sp, #0x28]
    ldr r1, [r10, #0x28]
    ldr r0, [r10, #0x58]
    sub r0, r1, r0
    str r0, [sp, #0x2c]
    b L_0208f0a8
L_0208f078:
    ldr r1, [r10, #0x2c]
    ldr r0, [r10, #0x50]
    sub r0, r1, r0
    str r0, [sp, #0x24]
    ldr r1, [r10, #0x30]
    ldr r0, [r10, #0x54]
    sub r0, r1, r0
    str r0, [sp, #0x28]
    ldr r1, [r10, #0x34]
    ldr r0, [r10, #0x58]
    sub r0, r1, r0
    str r0, [sp, #0x2c]
L_0208f0a8:
    add r1, sp, #0x24
    mov r0, r10
    bl func_0208e7b0
    mov r5, r0
L_0208f0b8:
    mov r0, r10
    mov r1, r8
    bl func_0208eb24
    ldr r1, =data_020e3b30
    ldr r0, =data_020e3bb0
    ldrh r1, [r1, #0x0]
    ldr r3, =func_0208eb04
    mov r2, #0x10
    bl func_020039b0
    ldr r0, =data_020e3b30
    mov r4, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    bls L_0208f290
    and r0, r8, #0x1
    ldr r6, =data_020e3bb0
    str r0, [sp, #0x8]
    and r11, r8, #0x4
    and r7, r8, #0x2
L_0208f104:
    ldr r0, =data_020e3bb0
    str r8, [sp, #0x0]
    add r0, r0, r4, lsl #0x4
    ldr r2, [r0, #0xc]
    mov r0, r10
    mov r1, r6
    mov r3, r5
    bl func_0208e9e4
    cmp r0, #0x0
    beq L_0208f278
    ldr r2, [r6, #0x0]
    ldr r0, [r10, #0x50]
    ldr r1, [r6, #0x4]
    add r3, r2, r0
    str r3, [sp, #0x18]
    ldr r0, [r10, #0x54]
    ldr ip, [r6, #0x8]
    add r2, r1, r0
    str r2, [sp, #0x1c]
    ldr r1, [r10, #0x58]
    add r0, sp, #0xc
    add r1, ip, r1
    str r1, [sp, #0x20]
    ldr ip, [r10, #0x44]
    sub r3, r3, ip
    str r3, [sp, #0xc]
    ldr r3, [r10, #0x48]
    sub r2, r2, r3
    str r2, [sp, #0x10]
    ldr r2, [r10, #0x4c]
    sub r1, r1, r2
    str r1, [sp, #0x14]
    bl func_01ff8668
    ldr r2, [r10, #0xc]
    ldr r1, =data_020dd7a4
    ldr r2, [r2, #0x20]
    ldr r1, [r1, #0x38]
    add r1, r2, r1
    cmp r0, r1
    movlt r0, #0x1
    blt L_0208f21c
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    beq L_0208f1dc
    cmp r11, #0x0
    ldrne r3, =func_0208e578
    add r2, sp, #0x18
    ldreq r3, =func_0208e684
    mov r0, r10
    add r1, r10, #0x44
    blx r3
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0208f21c
L_0208f1dc:
    cmp r7, #0x0
    beq L_0208f218
    ldr r3, =data_020dd7a4
    add r2, sp, #0x18
    ldr r1, [r3, #0x4]
    mov r0, r10
    str r1, [sp, #0x0]
    ldrsh ip, [r3, #0x40]
    add r1, r10, #0x20
    str ip, [sp, #0x4]
    ldr r3, [r3, #0x0]
    bl func_0208e200
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0208f21c
L_0208f218:
    mov r0, #0x0
L_0208f21c:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0208f25c
    add r2, sp, #0x18
    mov r1, r9
    mov r0, #0x6
L_0208f234:
    ldrb r3, [r2, #0x0]
    ldrb ip, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    swpb r3, ip, [r1]
    add r1, r1, #0x1
    bne L_0208f234
    mov r0, #0x1
L_0208f25c:
    cmp r0, #0x0
    beq L_0208f278
    cmp r4, #0x0
    moveq r0, #0x1
    add sp, sp, #0x30
    movne r0, #0x2
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0208f278:
    ldr r0, =data_020e3b30
    add r4, r4, #0x1
    ldrh r0, [r0, #0x0]
    add r6, r6, #0x10
    cmp r4, r0
    blo L_0208f104
L_0208f290:
    mov r0, #0x0
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
