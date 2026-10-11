#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054414();
extern void func_020559e0();
extern void func_020606a0();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02094168(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r7, r0
    mov r0, r6
    mov r4, r2
    bl func_02093198
    add r2, sp, #0x8
    mov r1, r7
    bl func_0209c740
    add r2, sp, #0x18
    mov r0, r7
    mov r1, r5
    bl func_02084450
    mov r5, r0
    cmp r6, #0x6c
    ldr r0, [sp, #0x18]
    beq L_020941c0
    cmp r6, #0x6d
    beq L_020941e0
    b L_02094200
L_020941c0:
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r1, r0, lsr #0x10
    mov r0, #0x1
    bl func_020606a0
    mov r6, r0
    b L_02094218
L_020941e0:
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    ldr r2, [sp, #0x8]
    mov r1, r0, lsr #0x10
    mov r0, #0x2
    bl func_020606a0
    mov r6, r0
    b L_02094218
L_02094200:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    add sp, sp, #0x28
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02094218:
    cmp r6, #0x0
    beq L_02094310
    ldr r0, [r6, #0xc]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x9
    addls pc, pc, r0, lsl #0x2
    b L_02094310
L_02094234:
    b L_02094310
    b L_02094310
    b L_02094310
    b L_02094310
    b L_02094310
    b L_0209425c
    b L_02094310
    b L_0209425c
    b L_020942a0
    b L_020942a0
L_0209425c:
    ldr ip, [r6, #0x0]
    mov r3, r4
    mov r2, #0x6
L_02094268:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02094268
    mov r1, #0x15
    add sp, sp, #0x28
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_020942a0:
    add ip, sp, #0x6
    mov r1, #0x0
    add r3, sp, #0x4
    mov r0, r6
    mov r2, r1
    str ip, [sp, #0x0]
    bl func_02054414
    ldrsh r2, [sp, #0x4]
    add r1, sp, #0xc
    mov r0, r6
    bl func_020559e0
    add ip, sp, #0xc
    mov r3, r4
    mov r2, #0x6
L_020942d8:
    ldrb r0, [ip, #0x0]
    ldrb r1, [ip, #0x1]
    add ip, ip, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020942d8
    mov r1, #0x15
    add sp, sp, #0x28
    mov r0, r5
    str r1, [r4, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02094310:
    mov r0, r5
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
