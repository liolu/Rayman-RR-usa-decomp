#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020498e0();
extern void func_020548e0();
extern char data_020bc540[];
extern char data_020cf6ac[];
extern char data_020cf6b0[];
extern char data_020cf6b4[];
extern char data_020cf6b8[];
// clang-format off
asm void func_0202f230(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r2, #0x7c
    mul r5, r0, r2
    ldr r2, =data_020cf6b4
    ldr r4, =data_020cf6b0
    str r0, [r2, #0x0]
    mov r7, #0x64
    ldr r3, =data_020cf6ac
    ldr r2, =data_020bc540
    sub r6, r7, #0x65
    mov r0, r5
    str r1, [r4, #0x0]
    str r7, [r3, #0x0]
    str r6, [r2, #0x0]
    bl func_020498e0
    ldr r6, =data_020cf6b4
    ldr r7, =data_020cf6b8
    ldr r1, [r6, #0x0]
    mov r9, #0x0
    str r0, [r7, #0x0]
    cmp r1, #0x0
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, =0x1d4c
    mov r5, r4
    mov r10, r9
    mov r8, r9
    mov r4, #0xc
L_0202f29c:
    ldr r0, [r7, #0x0]
    add r1, r0, r10
    swpb r0, r8, [r1]
    ldr r0, [r5, #0x0]
    mov r0, r0, lsl #0x2
    bl func_020498e0
    ldr r1, [r7, #0x0]
    add r1, r1, r10
    str r0, [r1, #0x70]
    ldr r1, [r5, #0x0]
    mul r0, r1, r4
    bl func_020498e0
    ldr r1, [r7, #0x0]
    add r1, r1, r10
    str r0, [r1, #0x74]
    mov r0, r11
    bl func_020548e0
    ldr r1, [r7, #0x0]
    add r9, r9, #0x1
    add r1, r1, r10
    str r0, [r1, #0x78]
    ldr r0, [r6, #0x0]
    add r10, r10, #0x7c
    cmp r9, r0
    blo L_0202f29c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
