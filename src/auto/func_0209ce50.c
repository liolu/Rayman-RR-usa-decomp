#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020661bc();
extern void func_020931d8();
extern void func_0209c740();
extern char data_020dc19c[];
// clang-format off
asm void func_0209ce50(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x4
    mov r5, r1
    ldr r4, [r5, #-0x8]
    mov r6, r0
    mov r0, r4
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    cmp r4, #0x63
    bne L_0209cf28
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x23c]
    cmp r0, #0x0
    beq L_0209cf1c
    ldr r0, [r0, #0x4]
    ldr r6, [sp, #0x0]
    ldr r4, [r0, #0x10]
    ldr r0, [r4, #0x4]
    bl func_020661bc
    cmp r0, r6
    bne L_0209cf1c
    ldr lr, [r6, #0x24]
    mov r6, #0x0
    mov r7, r4
    add r8, r4, #0xd8
    mov ip, #0x7a
    mov r3, r6
L_0209cec4:
    add r0, r4, r6, lsl #0x2
    str ip, [r0, #0x138]
    str r3, [r7, #0x78]
    str r3, [r7, #0x7c]
    mov r1, r8
    str r3, [r7, #0x80]
    add r2, lr, #0x4
    mov r0, #0x6
L_0209cee4:
    ldrb r9, [r2, #0x0]
    ldrb r10, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r9, r9, [r1]
    add r1, r1, #0x1
    swpb r9, r10, [r1]
    add r1, r1, #0x1
    bne L_0209cee4
    add r6, r6, #0x1
    cmp r6, #0x8
    add r7, r7, #0xc
    add r8, r8, #0xc
    blo L_0209cec4
L_0209cf1c:
    add sp, sp, #0x4
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
L_0209cf28:
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
