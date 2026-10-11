#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040f0c();
extern void func_0204141c();
extern void func_020414ac();
extern void func_02041da8();
extern void func_02044e6c();
extern void func_02044f3c();
extern char data_020cfc80[];
// clang-format off
asm void func_0204514c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8
    mov r0, #0x7
    bl func_02040f0c
    mov r11, r0
    mov r0, #0x34
    ldr r1, =data_020cfc80
    mul r0, r11, r0
    str r11, [r1, #0x354]
    bl func_02044e6c
    cmp r11, #0x0
    ldr r1, =data_020cfc80
    mov r5, r0
    mov r7, #0x0
    addls sp, sp, #0x8
    str r5, [r1, #0x358]
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mvn r0, #0x1
    add r4, sp, #0x4
    str r0, [sp, #0x0]
L_0204519c:
    ldr r0, [sp, #0x0]
    add r1, r5, #0x30
    str r0, [r5, #0x28]
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r6, r7, lsl #0x10
    mov r0, #0x7
    mov r2, r5
    mov r3, #0x6
    mov r1, r6, lsr #0x10
    bl func_0204141c
    mov r6, r0
    ldrh r8, [r6, #0x2]
    cmp r8, #0x0
    beq L_0204523c
    ldrh r1, [r6, #0x0]
    mov r0, #0x78
    mov r2, r8, lsl #0x1
    mov r9, #0x0
    bl func_020414ac
    mov r10, r0
    ldrh r1, [r6, #0x4]
    mov r0, #0x14
    mul r0, r1, r0
    bl func_02044e6c
    str r0, [sp, #0x4]
    str r0, [r5, #0x1c]
    ldrh r0, [r6, #0x4]
    cmp r8, #0x0
    str r0, [r5, #0x18]
    bls L_02045234
L_02045218:
    mov r0, r5
    add r1, r10, r9, lsl #0x1
    mov r2, r4
    bl func_02044f3c
    add r9, r9, r0
    cmp r9, r8
    blo L_02045218
L_02045234:
    mov r0, r10
    bl func_02041da8
L_0204523c:
    mov r0, r6
    bl func_02041da8
    add r7, r7, #0x1
    cmp r7, r11
    add r5, r5, #0x34
    blo L_0204519c
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
