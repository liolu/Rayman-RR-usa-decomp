#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_0208e200();
extern void func_0208f010();
extern void func_0208fd90();
extern char data_020dd7a4[];
// clang-format off
asm void func_0208f3bc(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x38
    mov r4, r0
    ldr r1, [r4, #0x8]
    ldr r0, [r1, #0x60]
    cmp r0, #0x0
    cmpne r0, #0x1
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    ldrh r0, [r0, #0x72]
    tst r0, #0x1000
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, pc}
    tst r0, #0x2000
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, pc}
    ldrb r0, [r1, #0x74]
    tst r0, #0x2
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, pc}
    ldr r2, [r4, #0x20]
    ldr r1, [r4, #0x44]
    add r0, sp, #0x2c
    sub r1, r2, r1
    str r1, [sp, #0x2c]
    ldr r2, [r4, #0x24]
    ldr r1, [r4, #0x48]
    sub r1, r2, r1
    str r1, [sp, #0x30]
    ldr r2, [r4, #0x28]
    ldr r1, [r4, #0x4c]
    sub r1, r2, r1
    str r1, [sp, #0x34]
    bl func_01ff8668
    ldr r1, [r4, #0xc]
    ldr r1, [r1, #0x20]
    cmp r0, r1
    addgt sp, sp, #0x38
    ldmgtfd sp!, {r4, pc}
    ldr r0, [r4, #0x0]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x68]
    tst r0, #0x1
    bne L_0208f484
    ldr r0, [r4, #0x8]
    ldrb r0, [r0, #0x74]
    tst r0, #0x4
    addeq sp, sp, #0x38
    ldmeqfd sp!, {r4, pc}
L_0208f484:
    ldr r2, [r4, #0x2c]
    ldr r1, [r4, #0x44]
    add r0, sp, #0x14
    sub r1, r2, r1
    str r1, [sp, #0x14]
    ldr r2, [r4, #0x30]
    ldr r1, [r4, #0x48]
    sub r1, r2, r1
    str r1, [sp, #0x18]
    ldr r2, [r4, #0x34]
    ldr r1, [r4, #0x4c]
    sub r1, r2, r1
    str r1, [sp, #0x1c]
    bl func_01ff8668
    ldr r1, [r4, #0xc]
    ldr r3, =data_020dd7a4
    ldr r2, [r1, #0x20]
    ldr r1, [r3, #0x38]
    add r1, r2, r1
    cmp r0, r1
    movlt r0, #0x1
    blt L_0208f540
    ldr r1, [r3, #0xc]
    mov r0, r4
    str r1, [sp, #0x0]
    ldrsh ip, [r3, #0x42]
    add r1, r4, #0x44
    add r2, r4, #0x2c
    str ip, [sp, #0x4]
    ldr r3, [r3, #0x8]
    bl func_0208e200
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0208f540
    ldr r3, =data_020dd7a4
    mov r0, r4
    ldr r2, [r3, #0x4]
    add r1, r4, #0x20
    str r2, [sp, #0x0]
    ldrsh ip, [r3, #0x40]
    add r2, r4, #0x2c
    str ip, [sp, #0x4]
    ldr r3, [r3, #0x0]
    bl func_0208e200
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_0208f540:
    cmp r0, #0x0
    addeq sp, sp, #0x38
    ldmeqfd sp!, {r4, pc}
    ldr r0, [r4, #0x8]
    mov r1, #0x0
    str r1, [r0, #0x64]
    ldr r0, [r4, #0xc]
    mov r2, #0x3
    ldrh r0, [r0, #0x72]
    add r1, sp, #0x20
    tst r0, #0x8
    bicne r0, r2, #0x1
    movne r0, r0, lsl #0x18
    movne r2, r0, asr #0x18
    mov r0, r4
    bl func_0208f010
    cmp r0, #0x0
    bne L_0208f604
    ldr r0, =data_020dd7a4
    mov r2, #0x5
    ldrsh r0, [r0, #0x7c]
    add r1, sp, #0x8
    tst r0, #0x4
    orrne r0, r2, #0x8
    movne r0, r0, lsl #0x18
    movne r2, r0, asr #0x18
    mov r0, r4
    bl func_0208f010
    cmp r0, #0x0
    addeq sp, sp, #0x38
    ldmeqfd sp!, {r4, pc}
    ldr r0, [r4, #0x8]
    mov r1, #0x2
    str r1, [r0, #0x60]
    ldr r0, [r4, #0x8]
    add r3, sp, #0x8
    add r4, r0, #0x1c
    mov r2, #0x6
L_0208f5d8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208f5d8
    add sp, sp, #0x38
    ldmfd sp!, {r4, pc}
L_0208f604:
    add r1, sp, #0x20
    mov r0, r4
    bl func_0208fd90
    ldr r1, [r4, #0x8]
    ldrb r0, [r1, #0x75]
    add r1, r1, #0x75
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    add sp, sp, #0x38
    ldmfd sp!, {r4, pc}
}
// clang-format on
