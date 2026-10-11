#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
extern char data_020dd7a4[];
extern char data_020dd7e4[];
extern char data_020dd7f0[];
extern char data_020dd814[];
// clang-format off
asm void func_0208c97c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r4, r1
    mov r5, r0
    ldr r0, [r4, #-0x8]
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r5
    bl func_0209c740
    add r2, sp, #0x4
    mov r0, r5
    mov r1, r4
    bl func_02084450
    mov r1, r0
    add r2, sp, #0x4
    mov r0, r5
    ldr r4, [sp, #0x4]
    bl func_02084450
    ldr r2, [sp, #0x4]
    cmp r4, #0x27
    mov r1, r2, asr #0xc
    bne L_0208ca2c
    ldr r2, [sp, #0x0]
    tst r1, #0x2
    ldr r2, [r2, #0x4]
    ldr r3, [r2, #0x10]
    beq L_0208ca14
    ldrb r2, [r3, #0x74]
    add r3, r3, #0x74
    ldr ip, =data_020dd7a4
    bic r2, r2, #0x1
    swpb r2, r2, [r3]
    mvn r1, r1
    ldrsh r2, [ip, #0x7c]
    add sp, sp, #0x14
    and r1, r2, r1
    strh r1, [ip, #0x7c]
    ldmfd sp!, {r4, r5, pc}
L_0208ca14:
    ldr r2, =data_020dd7a4
    add sp, sp, #0x14
    ldrsh r3, [r2, #0x7c]
    orr r1, r3, r1
    strh r1, [r2, #0x7c]
    ldmfd sp!, {r4, r5, pc}
L_0208ca2c:
    cmp r4, #0x11
    bge L_0208ca48
    ldr r1, =data_020dd7a4
    add sp, sp, #0x14
    add r1, r1, r4, lsl #0x2
    str r2, [r1, #-0x4]
    ldmfd sp!, {r4, r5, pc}
L_0208ca48:
    cmp r4, #0x17
    bge L_0208ca64
    ldr r2, =data_020dd7e4
    add sp, sp, #0x14
    add r2, r2, r4, lsl #0x1
    strh r1, [r2, #-0x22]
    ldmfd sp!, {r4, r5, pc}
L_0208ca64:
    cmp r4, #0x1e
    addlt sp, sp, #0x14
    ldmltfd sp!, {r4, r5, pc}
    cmp r4, #0x27
    bge L_0208ca8c
    ldr r1, =data_020dd7f0
    add sp, sp, #0x14
    add r1, r1, r4, lsl #0x2
    str r2, [r1, #-0x78]
    ldmfd sp!, {r4, r5, pc}
L_0208ca8c:
    cmp r4, #0x28
    bne L_0208cab4
    ldr r2, =data_020dd7a4
    mov r1, r1, lsl #0x10
    ldrsh r3, [r2, #0x7c]
    mvn r1, r1, asr #0x10
    add sp, sp, #0x14
    and r1, r3, r1
    strh r1, [r2, #0x7c]
    ldmfd sp!, {r4, r5, pc}
L_0208cab4:
    cmp r4, #0x2c
    bge L_0208cad0
    ldr r1, =data_020dd814
    add sp, sp, #0x14
    add r1, r1, r4, lsl #0x2
    str r2, [r1, #-0xa4]
    ldmfd sp!, {r4, r5, pc}
L_0208cad0:
    addne sp, sp, #0x14
    ldmnefd sp!, {r4, r5, pc}
    ldr r2, [sp, #0x0]
    cmp r1, #0x0
    ldr r1, [r2, #0x4]
    movne r3, #0x1
    ldr r1, [r1, #0x10]
    moveq r3, #0x0
    add r2, r1, #0x17c
    swpb r1, r3, [r2]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
