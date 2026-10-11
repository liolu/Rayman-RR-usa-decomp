#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020413b4();
extern void func_020534f4();
// clang-format off
asm void func_02044f3c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r1
    mov r7, r2
    ldr r4, [r7, #0x0]
    ldrsh r6, [r8, #0x0]
    mov lr, #0x0
    add r1, r4, #0x11
    strh r6, [r4, #0xc]
    swpb r0, lr, [r1]
    sub r3, lr, #0xff0
    add r1, r4, #0x12
    mov ip, #0xff
    add r2, r8, #0x2
    mov r5, r8
    mov r8, r2
    cmp r6, r3
    swpb r0, ip, [r1]
    add r4, r4, #0x14
    bne L_02044ff4
    ldrsh r0, [r2, #0x0]
    add r1, r4, #0x11
    add r3, r4, #0x12
    strh r0, [r4, #0xc]
    swpb r0, lr, [r1]
    add r6, r4, #0x25
    swpb r0, ip, [r3]
    add r8, r4, #0x26
    ldrsh r3, [r2, #0x2]
    add r0, r4, #0x39
    add r1, r4, #0x3a
    strh r3, [r4, #0x20]
    swpb r3, lr, [r6]
    add r3, r4, #0x4d
    swpb r6, ip, [r8]
    add r6, r4, #0x4e
    ldrsh r9, [r2, #0x4]
    add r8, r2, #0x8
    strh r9, [r4, #0x34]
    swpb r9, lr, [r0]
    swpb r0, ip, [r1]
    ldrsh r0, [r2, #0x6]
    strh r0, [r4, #0x48]
    swpb r0, lr, [r3]
    add r4, r4, #0x50
    swpb r0, ip, [r6]
    b L_02045138
L_02044ff4:
    add r0, r6, #0xef
    add r0, r0, #0xf00
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0x3
    bhi L_02045094
    ldrsh r1, [r2, #0x0]
    add r0, r6, #0xed
    add r3, r0, #0xf00
    strh r1, [r4, #0xc]
    add r1, r4, #0x11
    swpb r0, lr, [r1]
    add r1, r4, #0x12
    swpb r0, ip, [r1]
    mov r0, r3, lsl #0x10
    mov r0, r0, asr #0x10
    ldrsh r1, [r2, #0x2]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    strh r1, [r4, #0x20]
    cmp r0, #0x1
    add r8, r2, #0x4
    bhi L_0204507c
    ldrsh r0, [r2, #0x4]
    add r1, r4, #0x25
    add r3, r4, #0x26
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
    add r8, r2, #0x6
    ldrsh r0, [r2, #0x4]
    swpb r0, r0, [r3]
    b L_0204508c
L_0204507c:
    add r1, r4, #0x25
    swpb r0, lr, [r1]
    add r1, r4, #0x26
    swpb r0, ip, [r1]
L_0204508c:
    add r4, r4, #0x28
    b L_02045138
L_02045094:
    add r0, r6, #0x3f8
    add r0, r0, #0xc00
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0x3
    bhi L_02045128
    ldrh r1, [r2, #0x0]
    mov r0, #0x7
    add r8, r2, #0x2
    bl func_020413b4
    add r1, r6, #0xf6
    add r1, r1, #0xf00
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r0, [r4, #0xc]
    cmp r1, #0x1
    bhi L_02045108
    ldrsh r0, [r8, #0x0]
    add r1, r4, #0x11
    add r2, r4, #0x12
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
    ldrsh r0, [r8], #0x2
    swpb r0, r0, [r2]
    b L_02045120
L_02045108:
    add r1, r4, #0x11
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x12
    mov r0, #0xff
    swpb r0, r0, [r1]
L_02045120:
    add r4, r4, #0x14
    b L_02045138
L_02045128:
    ldr r0, =0xfffff019
    cmp r6, r0
    bne L_02045138
    bl func_020534f4
L_02045138:
    sub r0, r8, r5
    str r4, [r7, #0x0]
    mov r0, r0, lsr #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
