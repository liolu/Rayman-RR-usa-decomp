#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_0208b540(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r11, r1
    ldr r8, [r11, #-0x8]
    mov r5, #0x0
    mov r4, r0
    mov r0, r8
    mov r10, r2
    mov r6, r5
    mov r9, r5
    mov r7, r5
    bl func_02093198
    mov r1, r4
    add r2, sp, #0x0
    bl func_0209c740
    ldr r2, [sp, #0x0]
    mov r0, r4
    ldr r3, [r2, #0x4]
    mov r1, r11
    mov r2, r10
    ldr r4, [r3, #0x10]
    bl func_02084450
    mov r11, r0
    cmp r8, #0xb1
    ldr ip, [r10, #0x0]
    beq L_0208b5b0
    cmp r8, #0xb2
    beq L_0208b5b8
    b L_0208b5d8
L_0208b5b0:
    ldmia r4, {r5, r6, r7, r9}
    b L_0208b5d8
L_0208b5b8:
    ldr r3, [r4, #0x0]
    ldr r2, [r4, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r4, #0x8]
    add r5, r3, #0xc
    add r6, r2, #0xc
    add r9, r1, #0xc
    add r7, r0, #0xc
L_0208b5d8:
    cmp ip, #0x1
    bne L_0208b5f0
    ldrb r0, [r4, #0x74]
    tst r0, #0x1
    moveq r9, r6
    b L_0208b610
L_0208b5f0:
    mvn r0, #0x0
    cmp ip, r0
    moveq r9, r5
    beq L_0208b610
    ldrb r0, [r4, #0x75]
    tst r0, #0x2
    movne r9, r7
    moveq r9, r6
L_0208b610:
    mov r3, r10
    mov r2, #0x6
L_0208b618:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0208b618
    mov r1, #0x15
    mov r0, r11
    str r1, [r10, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
