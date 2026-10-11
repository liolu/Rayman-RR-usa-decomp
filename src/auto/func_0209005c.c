#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_0206625c();
extern void func_02066294();
extern void func_020662bc();
extern void func_02089088();
extern void func_02089b48();
extern void func_02089ee4();
extern void func_0208d61c();
extern void func_0208f010();
extern char data_020dc19c[];
extern char data_020dd7a4[];
extern char data_020e3b28[];
// clang-format off
asm void func_0209005c(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x34
    mov r6, r0
    ldr r5, [r6, #0x8]
    ldr r4, =data_020dc19c
    ldr r3, [r5, #0x64]
    ldr r1, [r4, #0xbc]
    ldr r2, =data_020dd7a4
    add r1, r3, r1, lsl #0xc
    str r1, [r5, #0x64]
    ldrsh r5, [r2, #0x46]
    mov r1, #0x3e8
    ldr r3, [r6, #0x8]
    smulbb r5, r5, r1
    ldr r1, [r4, #0xc4]
    mov r4, r5, lsl #0xc
    smull r5, r1, r4, r1
    adds r4, r5, #0x800
    adc r1, r1, #0x0
    mov r4, r4, lsr #0xc
    ldr r5, [r3, #0x64]
    orr r4, r4, r1, lsl #0x14
    cmp r5, r4
    mov r4, #0x0
    addlt sp, sp, #0x34
    ldmltfd sp!, {r3, r4, r5, r6, pc}
    ldrsh r1, [r2, #0x7c]
    tst r1, #0x20
    addne sp, sp, #0x34
    ldmnefd sp!, {r3, r4, r5, r6, pc}
    ldrb r1, [r3, #0x17c]
    cmp r1, #0x0
    addeq sp, sp, #0x34
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    add r1, sp, #0x28
    mov r2, #0xb
    str r4, [r3, #0x64]
    bl func_0208f010
    cmp r0, #0x0
    addeq sp, sp, #0x34
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    cmp r0, #0x1
    ldr r0, [r6, #0x8]
    bne L_02090158
    mov r1, r4
    str r1, [r0, #0x60]
    ldr r0, [r6, #0x8]
    bl func_02066294
    ldr r0, [r6, #0x8]
    bl func_020662bc
    ldr r2, [r6, #0x8]
    mov r0, r6
    ldrb r1, [r2, #0x75]
    add r2, r2, #0x75
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    ldr r2, [r6, #0x8]
    ldrb r1, [r2, #0x75]
    add r2, r2, #0x75
    bic r1, r1, #0x8
    swpb r1, r1, [r2]
    bl func_02089ee4
    b L_02090314
L_02090158:
    mov r2, r4
    add r1, r0, #0x76
    swpb r0, r2, [r1]
    ldr r0, [r6, #0x8]
    bl func_0206625c
    ldr r5, [r6, #0xc]
    ldr r2, [r6, #0x10]
    add r1, sp, #0x10
    mov r0, r6
    str r2, [r6, #0xc]
    bl func_02089088
    ldr r2, [sp, #0x28]
    ldr r0, [r6, #0x50]
    ldr r1, [sp, #0x2c]
    sub r0, r2, r0
    str r0, [sp, #0x1c]
    ldr r0, [r6, #0x54]
    ldr r2, [sp, #0x30]
    sub r0, r1, r0
    str r0, [sp, #0x20]
    ldr r1, [r6, #0x58]
    add r0, sp, #0x1c
    sub r1, r2, r1
    str r1, [sp, #0x24]
    bl func_01ff8668
    add r1, sp, #0xc
    mov r4, r0
    str r1, [sp, #0x0]
    add r0, r6, #0xb8
    str r0, [sp, #0x4]
    ldr r0, [r6, #0xc]
    add r1, sp, #0x10
    add r2, sp, #0x1c
    add r3, sp, #0x8
    bl func_0208d61c
    ldr r0, [r6, #0xc]
    mov r2, #0x1
    str r4, [r0, #0x18]
    ldr r1, [r6, #0xc]
    mov r0, r6
    str r4, [r1, #0x1c]
    ldr r3, [sp, #0x8]
    ldr r1, [r6, #0xc]
    str r3, [r1, #0x28]
    ldr r3, [sp, #0xc]
    ldr r1, [r6, #0xc]
    str r3, [r1, #0x30]
    str r5, [r6, #0xc]
    ldr r1, [r6, #0x8]
    str r2, [r1, #0x60]
    ldr r2, [r6, #0x8]
    ldrb r1, [r2, #0x75]
    add r2, r2, #0x75
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    ldr r2, [r6, #0x10]
    ldr r1, [r6, #0xc]
    ldr r2, [r2, #0x28]
    str r2, [r1, #0x28]
    ldr r2, [r6, #0x10]
    ldr r1, [r6, #0xc]
    ldr r2, [r2, #0x30]
    str r2, [r1, #0x30]
    ldr r2, [r6, #0x10]
    ldr r1, [r6, #0xc]
    ldr r2, [r2, #0x18]
    str r2, [r1, #0x18]
    ldr r2, [r6, #0x10]
    ldr r1, [r6, #0xc]
    ldr r2, [r2, #0x1c]
    str r2, [r1, #0x1c]
    bl func_02089b48
    ldr r0, [r6, #0x8]
    add r3, r6, #0x20
    add r4, r0, #0x10
    mov r2, #0x6
L_02090288:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02090288
    ldr r0, [r6, #0x8]
    add r3, sp, #0x28
    add r4, r0, #0x1c
    mov r2, #0x6
L_020902bc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020902bc
    ldr r0, [r6, #0x8]
    ldrb r0, [r0, #0x75]
    tst r0, #0x8
    ldrne r1, =data_020e3b28
    movne r0, #0x1
    ldreq r1, =data_020e3b28
    moveq r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, [r6, #0x8]
    ldrb r0, [r1, #0x75]
    add r1, r1, #0x75
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
L_02090314:
    ldr r0, [r6, #0x8]
    mov r2, #0x0
    add r1, r0, #0x17c
    swpb r0, r2, [r1]
    add sp, sp, #0x34
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
