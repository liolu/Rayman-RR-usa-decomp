#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003984();
extern void func_02009f7c();
extern void func_0200a334();
extern void func_0200a42c();
extern void func_02084450();
extern void func_02088a04();
extern char data_020c04a4[];
extern char data_020c04b0[];
extern char data_020c04bc[];
extern char data_020de0d3[];
extern char data_020de0d4[];
extern char data_020e4c40[];
extern char data_020e4c41[];
// clang-format off
asm void func_020a31dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x14
    add r2, sp, #0x4
    mov r8, r0
    ldr r5, [r1, #-0x8]
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x4
    mov r0, r8
    ldr r6, [sp, #0x4]
    bl func_02084450
    mov r4, r0
    add r0, sp, #0x4
    bl func_02088a04
    mov r7, r0
    mov r0, r8
    mov r1, r4
    add r2, sp, #0x4
    bl func_02084450
    mov r9, r0
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    movlt r0, #0x0
    cmp r0, #0x3e8
    movgt r0, #0x3e8
    cmp r7, #0x0
    bne L_020a3260
    ldr r1, =data_020de0d3
    mov r0, #0xa
    mla r1, r6, r0, r1
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_020a3390
L_020a3260:
    ldr r1, =0x112
    cmp r5, r1
    bne L_020a3390
    ldrsb r1, [r7], #0x1
    cmp r1, #0x2f
    bne L_020a3290
L_020a3278:
    ldrsb r1, [r7], #0x1
    cmp r1, #0x3a
    bne L_020a3278
    ldrsb r1, [r7], #0x1
    cmp r1, #0x2f
    beq L_020a3278
L_020a3290:
    sub r2, r6, #0x1
    mov r1, #0xa
    mul r5, r2, r1
    add r2, r7, #0x2
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r4, =data_020de0d4
    ldr r3, =data_020e4c41
    add r1, r4, r5
    add r2, r3, r5
    mov ip, #0x4
L_020a32bc:
    ldrb r3, [r1, #0x0]
    ldrb r8, [r1, #0x1]
    add r1, r1, #0x2
    subs ip, ip, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r8, [r2]
    add r2, r2, #0x1
    bne L_020a32bc
    mov r3, #0xa
    mul r8, r6, r3
    ldrb r1, [r1, #0x0]
    ldr r3, =data_020e4c40
    mov r6, #0x0
    swpb r1, r1, [r2]
    add r2, r3, r8
    cmp r0, #0x64
    swpb r1, r6, [r2]
    bge L_020a3334
    bl func_0200a42c
    ldr r1, =0x41200000
    bl func_02009f7c
    bl func_0200a334
    sub r2, r7, #0x1
    str r1, [sp, #0x0]
    mov r3, r0
    add r0, r4, r5
    ldr r1, =data_020c04a4
    bl func_02003984
    b L_020a3380
L_020a3334:
    cmp r0, #0x63
    ble L_020a3370
    cmp r0, #0x3e8
    bge L_020a3370
    bl func_0200a42c
    ldr r1, =0x41200000
    bl func_02009f7c
    bl func_0200a334
    sub r2, r7, #0x1
    str r1, [sp, #0x0]
    mov r3, r0
    add r0, r4, r5
    ldr r1, =data_020c04b0
    bl func_02003984
    b L_020a3380
L_020a3370:
    ldr r1, =data_020c04bc
    add r0, r4, r5
    sub r2, r7, #0x1
    bl func_02003984
L_020a3380:
    ldr r0, =data_020de0d3
    mov r2, #0x0
    add r1, r0, r8
    swpb r0, r2, [r1]
L_020a3390:
    mov r0, r9
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
