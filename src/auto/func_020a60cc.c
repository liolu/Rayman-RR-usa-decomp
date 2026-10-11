#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003b14();
extern void func_02014910();
extern void func_020a6020();
extern void func_020a6840();
extern void func_020affb8();
extern char data_020b7490[];
extern char data_020dbf60[];
extern char data_020dc19c[];
extern char data_020e4f10[];
extern char data_020e59b0[];
extern char data_020e59bc[];
extern char data_020e59c8[];
extern char data_020e59cc[];
// clang-format off
asm void func_020a60cc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r10, r0
    ands r5, r10, #0x80000
    ldrne r0, =data_020e4f10
    mov r9, r1
    ldrne r1, [r0, #0x0]
    mov r8, r2
    mov r7, r3
    ldr r6, [sp, #0x38]
    cmpne r1, #0x96
    beq L_020a6118
    ldr r1, [r0, #0x28]
    cmp r1, #0x23
    addeq sp, sp, #0x18
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r1, r1, #0x1
    str r1, [r0, #0x28]
L_020a6118:
    ldr r0, =data_020e4f10
    ldr r0, [r0, #0x0]
    cmp r0, #0x96
    bne L_020a614c
    bl func_020a6020
    mvn r1, #0x0
    cmp r0, r1
    beq L_020a6140
    bl func_020a6840
    b L_020a614c
L_020a6140:
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_020a614c:
    ldr r2, =data_020e4f10
    mov r0, #0x5c
    ldr r1, [r2, #0x0]
    ldr r3, =data_020e59cc
    mul r0, r1, r0
    add ip, r1, #0x1
    add r4, r3, r0
    str ip, [r2, #0x0]
    str r10, [r3, r0]
    mov r1, r9
    add r2, r4, #0x18
    mov r0, #0x6
L_020a617c:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_020a617c
    mov r1, r9
    add r2, r4, #0xc
    mov r0, #0x6
L_020a61ac:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_020a61ac
    cmp r8, #0x0
    beq L_020a6208
    mov r1, r8
    add r2, r4, #0x24
    mov r0, #0x6
L_020a61e4:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_020a61e4
L_020a6208:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr ip, [r1, #0x74]
    mov r1, #0x0
    umull r3, r2, ip, r0
    mla r2, ip, r1, r2
    mla r2, r1, r0, r2
    mov r1, r3, lsr #0x5
    orr r1, r1, r2, lsl #0x1b
    sub r0, r0, #0x84
    and r2, r1, r0
    str r2, [r4, #0x8]
    ldr r1, [r4, #0x0]
    ldr r0, =data_020e4f10
    tst r1, #0x800000
    str r2, [r0, #0x14]
    beq L_020a6264
    ldr r0, [r4, #0x1c]
    sub r0, r0, #0x800
    str r0, [r4, #0x1c]
    ldr r0, [r4, #0x10]
    sub r0, r0, #0x800
    str r0, [r4, #0x10]
L_020a6264:
    ldr r0, [sp, #0x3c]
    str r6, [r4, #0x50]
    cmp r6, #0x0
    rsble r6, r6, #0x0
    cmp r0, #0x0
    ldr r2, =data_020dbf60
    ldr r1, =data_020e59c8
    str r6, [r4, #0x30]
    rsble r0, r0, #0x0
    str r0, [r4, #0x34]
    ldr r0, =0x10003300
    ldr r3, [sp, #0x40]
    str r7, [r4, #0x3c]
    ldr r2, [r2, #0x0]
    str r3, [r4, #0x40]
    ldr r1, [r1, #0x0]
    str r2, [r4, #0x4]
    str r1, [r4, #0x38]
    mov r1, #0xff000
    str r1, [r4, #0x44]
    cmp r10, r0
    bne L_020a62c8
    cmp r8, #0x0
    ldrne r0, [r8, #0x0]
    strne r0, [r4, #0x44]
L_020a62c8:
    and r0, r10, #0xf000
    cmp r0, #0x7000
    cmpne r0, #0xa000
    cmpne r0, #0x9000
    moveq r0, #0x5000
    streq r0, [r4, #0x44]
    tst r10, #0x100000
    beq L_020a6300
    ldr r0, =data_020e59bc
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r4, #0x48]
    str r0, [r4, #0x4c]
    b L_020a6320
L_020a6300:
    tst r10, #0x400000
    beq L_020a6320
    ldr r1, =data_020e59bc
    ldr r0, =data_020e59b0
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    str r1, [r4, #0x4c]
    str r0, [r4, #0x48]
L_020a6320:
    and r0, r10, #0xf00
    cmp r0, #0xf00
    cmpne r0, #0xe00
    ldreq r0, =data_020e59bc
    and r6, r10, #0xff
    ldreq r0, [r0, #0x4]
    streq r0, [r4, #0x54]
    cmp r6, #0x6
    bne L_020a6410
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x6488
    mov r2, #0x0
    umull r10, r3, r0, r1
    mla r3, r0, r2, r3
    adds r2, r10, #0x800
    mov r2, r2, lsr #0xc
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    ldr r0, =0xffffcdbc
    add r0, r2, r0
    str r0, [r4, #0xc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r10, r0, asr #0x1f
    mov r2, #0x0
    ldr r1, =0x6488
    ldr r3, =0xffffcdbc
    umull lr, ip, r0, r1
    mla ip, r0, r2, ip
    mla ip, r10, r1, ip
    adds r1, lr, #0x800
    adc r0, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    str r0, [r4, #0x10]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r10, r0, asr #0x1f
    mov r2, #0x0
    ldr r1, =0x6488
    ldr r3, =0xffffcdbc
    umull lr, ip, r0, r1
    mla ip, r0, r2, ip
    mla ip, r10, r1, ip
    adds r1, lr, #0x800
    adc r0, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    str r0, [r4, #0x14]
L_020a6410:
    cmp r6, #0x7
    cmpne r6, #0xb
    bne L_020a651c
    cmp r5, #0x0
    beq L_020a64ac
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x3244
    mov r2, #0x0
    umull r5, r3, r0, r1
    adds r5, r5, #0x800
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adc r1, r3, #0x0
    mov r2, r5, lsr #0xc
    ldr r0, =0xffffe6de
    orr r2, r2, r1, lsl #0x14
    add r0, r2, r0
    str r0, [r4, #0xc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r3, r0, asr #0x1f
    mov r2, #0x0
    mov r1, #0x3000
    umull r10, r5, r0, r1
    mla r5, r0, r2, r5
    mla r5, r3, r1, r5
    adds r1, r10, #0x800
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x1000
    str r0, [r4, #0x14]
    b L_020a651c
L_020a64ac:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x800
    str r0, [r4, #0xc]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x1000
    str r0, [r4, #0x14]
L_020a651c:
    cmp r6, #0x8
    bne L_020a65e0
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x14
    umull r5, r3, r0, r1
    mov r2, #0x0
    adds r5, r5, #0x800
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adc r0, r3, #0x0
    mov r1, r5, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r4, #0xc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r3, r0, asr #0x1f
    mov r2, #0x0
    mov r1, #0x198
    umull r10, r5, r0, r1
    mla r5, r0, r2, r5
    mla r5, r3, r1, r5
    adds r1, r10, #0x800
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0xcc
    str r0, [r4, #0x10]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x5000
    str r0, [r4, #0x14]
    mov r0, #0xc8000
    str r0, [r4, #0x44]
L_020a65e0:
    cmp r6, #0x12
    bne L_020a6630
    ldr r2, [r4, #0x24]
    ldr r0, [r4, #0x18]
    mov r1, #0x9000
    sub r0, r2, r0
    bl func_02014910
    str r0, [r4, #0xc]
    ldr r2, [r4, #0x28]
    ldr r0, [r4, #0x1c]
    mov r1, #0x9000
    sub r0, r2, r0
    bl func_02014910
    str r0, [r4, #0x10]
    ldr r2, [r4, #0x2c]
    ldr r0, [r4, #0x20]
    mov r1, #0x9000
    sub r0, r2, r0
    bl func_02014910
    str r0, [r4, #0x14]
L_020a6630:
    cmp r6, #0xc
    bne L_020a67fc
    mov r3, r9
    add r5, r4, #0xc
    mov r2, #0x6
L_020a6644:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_020a6644
    add r1, sp, #0xc
    add r2, sp, #0x0
    mov r0, r8
    bl func_020affb8
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x6488
    mov r2, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    adds r5, r5, #0x800
    mla r3, r0, r1, r3
    adc r0, r3, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    str r5, [r4, #0x38]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r5, lsl #0x13
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    mov r1, r0, asr #0x1f
    mov r3, r1, lsl #0xb
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xb
    orr r3, r3, r0, lsr #0x15
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x800
    str r0, [r4, #0x4]
    add r0, r2, #0x1
    mov r3, r0, lsl #0x1
    mov r0, r2, lsl #0x1
    ldr r2, =data_020b7490
    ldr r1, [r9, #0x0]
    ldrsh r3, [r2, r3]
    ldrsh r2, [r2, r0]
    ldr r0, [sp, #0xc]
    smull r10, r8, r3, r7
    adds r3, r10, #0x800
    smull r6, r5, r2, r7
    adc r2, r8, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    adds r2, r6, #0x800
    adc r5, r5, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r5, lsl #0x14
    smull r6, r5, r0, r2
    adds r0, r6, #0x800
    ldr r6, [sp, #0x0]
    adc r5, r5, #0x0
    smull r8, r7, r6, r3
    adds r8, r8, #0x800
    mov r0, r0, lsr #0xc
    adc r6, r7, #0x0
    mov r7, r8, lsr #0xc
    orr r0, r0, r5, lsl #0x14
    orr r7, r7, r6, lsl #0x14
    add r0, r0, r7
    add r0, r1, r0
    ldr r6, [sp, #0x4]
    ldr r5, [sp, #0x10]
    str r0, [r4, #0x18]
    smull r1, r0, r5, r2
    adds r5, r1, #0x800
    adc r1, r0, #0x0
    mov r0, r5, lsr #0xc
    smull r8, r7, r6, r3
    ldr r5, [sp, #0x14]
    orr r0, r0, r1, lsl #0x14
    smull r6, r2, r5, r2
    adds r8, r8, #0x800
    adc r5, r7, #0x0
    mov r7, r8, lsr #0xc
    orr r7, r7, r5, lsl #0x14
    adds r5, r6, #0x800
    ldr r1, [r9, #0x4]
    add r0, r0, r7
    add r0, r1, r0
    str r0, [r4, #0x1c]
    adc r1, r2, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, [sp, #0x8]
    ldr r0, [r9, #0x8]
    smull r3, r2, r1, r3
    adds r3, r3, #0x800
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r5, r2
    add r0, r0, r1
    str r0, [r4, #0x20]
L_020a67fc:
    mov r0, r4
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
