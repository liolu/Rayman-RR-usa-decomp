#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_0208cf58();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_0208cb70(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x2c
    mov r5, r1
    ldr r8, [r5, #-0x8]
    mov r10, r0
    mov r0, r8
    mov r7, #0x0
    bl func_020931d8
    add r2, sp, #0xc
    mov r1, r10
    bl func_0209c740
    ldr r0, [sp, #0xc]
    add r2, sp, #0x1c
    ldr r1, [r0, #0x4]
    mov r0, r10
    ldr r4, [r1, #0x10]
    mov r1, r5
    bl func_02084450
    mov r1, r0
    mov r0, r10
    add r2, sp, #0x1c
    ldr r6, [sp, #0x1c]
    bl func_02084450
    mov r1, r0
    mov r0, r10
    add r2, sp, #0x1c
    ldr r5, [sp, #0x1c]
    bl func_02084450
    ldr ip, =0x147
    add r3, sp, #0x1c
    mov r9, r0
    add lr, sp, #0x10
    ldmia r3, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    cmp r8, ip
    beq L_0208cc18
    cmp r8, #0x148
    beq L_0208cc54
    add r0, ip, #0x2
    cmp r8, r0
    beq L_0208cc90
    b L_0208cd10
L_0208cc18:
    cmp r5, #0x1
    bne L_0208cc4c
    add r7, r4, #0x28
    mov r2, #0x6
L_0208cc28:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0208cc28
L_0208cc4c:
    mov r7, #0x1000
    b L_0208cd10
L_0208cc54:
    cmp r5, #0x1
    bne L_0208cc88
    add r7, r4, #0x34
    mov r2, #0x6
L_0208cc64:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_0208cc64
L_0208cc88:
    mov r7, #0x2000
    b L_0208cd10
L_0208cc90:
    mov r0, r10
    mov r1, r9
    mov r2, r3
    bl func_02084450
    mov r9, r0
    cmp r5, #0x1
    add r0, sp, #0x1c
    bne L_0208cd0c
    add r7, sp, #0x10
    add r8, r4, #0x40
    mov r3, #0x6
L_0208ccbc:
    ldrb r1, [r7, #0x0]
    ldrb r2, [r7, #0x1]
    add r7, r7, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r8]
    add r8, r8, #0x1
    swpb r1, r2, [r8]
    add r8, r8, #0x1
    bne L_0208ccbc
    add r7, r4, #0x4c
    mov r3, #0x6
L_0208cce8:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r7]
    add r7, r7, #0x1
    swpb r1, r2, [r7]
    add r7, r7, #0x1
    bne L_0208cce8
L_0208cd0c:
    mov r7, #0x4000
L_0208cd10:
    str r6, [sp, #0x0]
    stmib sp, {r5, r7}
    ldmib r4, {r1, r2, r3}
    mov r0, r4
    add r1, r1, #0x72
    add r2, r2, #0x72
    add r3, r3, #0x72
    bl func_0208cf58
    mov r0, r9
    add sp, sp, #0x2c
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
