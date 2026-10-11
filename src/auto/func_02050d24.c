#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205185c();
extern char data_020bc570[];
extern char data_020bc574[];
extern char data_020bca48[];
extern char data_020dba10[];
extern char data_020dba6c[];
extern char data_020de09c[];
// clang-format off
asm void func_02050d24(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x28
    ldr r1, =data_020bc570
    ldr r2, =data_020bc574
    ldr r3, [r1, #0x0]
    ldr r2, [r2, #0x0]
    ldr r1, =data_020bca48
    sub r6, r2, #0x20
    sub r2, r3, #0x80
    mov r4, r2, asr #0x1
    mov r5, #0x0
    mov r8, r6, lsl #0x2
    add r2, r6, #0xf
    mov r6, r2, lsl #0x2
    mov r2, r0
    mov ip, #0x400
    add r3, r4, #0x7f
    mov r7, r3, lsl #0x2
    mov r9, r4, lsl #0x2
    ldr r10, =data_020dba10
    sub r3, ip, #0x600
    mov lr, #0xf0
    str r3, [sp, #0x24]
    ldrsh r0, [r1, #0x90]
    ldr r4, [r10, #0x0]
    str r9, [sp, #0x4]
    str r0, [r10, #0x0]
    str r8, [sp, #0x8]
    str r7, [sp, #0xc]
    str r5, [sp, #0x18]
    str lr, [sp, #0x1c]
    str ip, [sp, #0x20]
    str r5, [sp, #0x14]
    str r6, [sp, #0x10]
    ldrsb r6, [r1, #0x0]
    mov r0, #0x1
    ldr r3, =data_020de09c
    swpb r0, r0, [r1]
    str r5, [sp, #0x0]
    ldr r1, [r3, #0x0]
    add r0, sp, #0x4
    mov r3, #0x4
    bl func_0205185c
    ldr r2, =data_020bca48
    mov r1, r10
    swpb r0, r6, [r2]
    str r4, [r1, #0x0]
    ldrsh r3, [r2, #0x90]
    cmp r3, #0xf0
    bgt L_02050df4
    cmp r3, #0xa
    bge L_02050e50
L_02050df4:
    ldr r0, =data_020dba6c
    ldrsh r1, [r0, #0x5c]
    add r1, r1, #0x1
    strh r1, [r0, #0x5c]
    ldrsh r0, [r0, #0x5c]
    cmp r0, #0x14
    bge L_02050e1c
    cmp r3, #0xa
    addge sp, sp, #0x28
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02050e1c:
    ldr r1, =data_020bca48
    ldr r0, =data_020dba6c
    ldrsh r3, [r1, #0x92]
    mov r2, #0x0
    strh r2, [r0, #0x5c]
    rsb r0, r3, #0x0
    strh r0, [r1, #0x92]
    ldrsh r2, [r1, #0x90]
    ldrsh r0, [r1, #0x92]
    add sp, sp, #0x28
    add r0, r2, r0
    strh r0, [r1, #0x90]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02050e50:
    ldrsh r0, [r2, #0x92]
    add r0, r3, r0
    strh r0, [r2, #0x90]
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
