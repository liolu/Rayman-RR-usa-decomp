#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020585f8();
extern void func_02084450();
extern char data_020bca49[];
extern char data_020dba73[];
extern char data_020dbae4[];
extern char data_020dbae8[];
// clang-format off
asm void func_0209ff1c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    ldr r5, [r1, #-0x8]
    add r2, sp, #0x18
    mov r8, r0
    bl func_02084450
    mov r6, r0
    cmp r5, #0xc2
    ldr r4, [sp, #0x18]
    beq L_020a0000
    cmp r5, #0xc3
    beq L_0209ff58
    cmp r5, #0xc4
    beq L_020a0030
    b L_020a0088
L_0209ff58:
    add r2, sp, #0x18
    mov r0, r8
    mov r1, r6
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x18
    mov r0, r8
    ldr r4, [sp, #0x18]
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x18
    mov r0, r8
    ldr r7, [sp, #0x18]
    bl func_02084450
    mov r1, r0
    mov r0, r8
    add r2, sp, #0x18
    ldr r5, [sp, #0x18]
    bl func_02084450
    mov r6, r0
    cmp r4, #0x0
    cmpeq r7, #0x0
    ldr r0, [sp, #0x18]
    cmpeq r5, #0x64
    cmpeq r0, #0x64
    bne L_0209ffd8
    ldr r2, =data_020dba73
    mov r3, #0x0
    ldr r1, =data_020bca49
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    b L_020a0088
L_0209ffd8:
    ldr r3, =data_020dbae8
    ldr r0, =data_020dbae4
    ldr r2, =data_020dba73
    mov ip, #0x1
    ldr r1, =data_020bca49
    str r4, [r3, #0x0]
    str r5, [r0, #0x0]
    swpb r0, ip, [r2]
    swpb r0, ip, [r1]
    b L_020a0088
L_020a0000:
    add r2, sp, #0x18
    mov r0, r8
    mov r1, r6
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x18
    mov r0, r8
    bl func_02084450
    ldr r1, [sp, #0x18]
    mov r6, r0
    cmp r1, #0x0
    b L_020a0088
L_020a0030:
    add r2, sp, #0x18
    mov r0, r8
    mov r1, r6
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x18
    mov r0, r8
    ldr r5, [sp, #0x18]
    bl func_02084450
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    str r5, [sp, #0x10]
    ldr r1, [sp, #0x18]
    mov r6, r0
    str r1, [sp, #0x14]
    mov r0, r4
    mov r3, r2
    mov r1, #0x3
    bl func_020585f8
L_020a0088:
    mov r0, r6
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
