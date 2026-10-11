#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207abe0();
extern void func_0207ac90();
extern void func_0207ad9c();
extern void func_02082918();
extern void func_02093240();
extern void func_02093248();
extern void func_0209325c();
extern void func_02093264();
extern char data_020bc544[];
extern char data_020becb8[];
// clang-format off
asm void func_02085660(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r9, r2
    movs r11, r1
    mov r10, r0
    cmpne r9, #0x0
    beq L_020858d4
    mov r0, #0x10
    bl func_02082918
    ldr r1, =data_020bc544
    mov r6, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_020856d8
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_020856d8:
    mov r0, r11
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085734
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_02085734:
    mov r0, r9, lsl #0x4
    str r4, [r6, #0x0]
    bl func_02082918
    ldr r1, =data_020bc544
    mov r7, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_02085794
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_02085794:
    cmp r9, #0x0
    mov r8, #0x0
    bls L_020857e4
    mov r5, r8
    mov r4, #0x19
L_020857a8:
    str r5, [r7, r8, lsl #0x4]
    add r0, r7, r8, lsl #0x4
    str r4, [r0, #0x4]
    bl func_02093240
    bl func_02093248
    add r1, r7, r8, lsl #0x4
    strh r0, [r1, #0x8]
    bl func_0209325c
    bl func_02093264
    add r2, r7, r8, lsl #0x4
    add r1, r8, #0x1
    and r8, r1, #0xff
    str r0, [r2, #0xc]
    cmp r8, r9
    blo L_020857a8
L_020857e4:
    stmib r6, {r7, r11}
    add r1, r6, #0xc
    swpb r0, r9, [r1]
    ldr r1, [r10, #0x0]
    mov r0, #0xc
    str r6, [r1, #0x8]
    ldr r1, [r10, #0x0]
    add r4, r1, #0x8
    bl func_02082918
    ldr r1, =data_020bc544
    mov r5, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_0208585c
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_0208585c:
    mov r0, r11
    str r4, [r5, #0x0]
    mov r1, #0x0
    str r1, [r5, #0x4]
    bl func_02082918
    ldr r1, =data_020bc544
    mov r4, r0
    ldrb r0, [r1, #0x0]
    mov r1, #0x0
    bl func_0207abe0
    cmp r0, #0x0
    beq L_020858c4
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020becb8
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x42
    mov r3, #0xc
    bl func_0207ad9c
L_020858c4:
    str r4, [r5, #0x8]
    add sp, sp, #0x10
    str r5, [r10, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020858d4:
    ldr r0, [r10, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x8]
    str r1, [r10, #0xc]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
