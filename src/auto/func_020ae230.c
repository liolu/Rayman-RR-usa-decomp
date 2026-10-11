#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8778();
extern void func_01ff87d0();
extern void func_02003b14();
extern void func_0200eb98();
extern void func_02014834();
extern void func_02014910();
extern void func_02050e7c();
extern void func_02076c40();
extern void func_02076d60();
extern void func_02076e38();
extern void func_020a60cc();
extern void func_020aa404();
extern void func_020affb8();
extern void func_020b00e8();
extern void func_020b00fc();
extern char data_020b7490[];
extern char data_020dba75[];
extern char data_020e4f10[];
extern char data_020e54f0[];
extern char data_020e54f4[];
extern char data_020e54f8[];
extern char data_020e54fc[];
extern char data_020e5500[];
extern char data_020e5504[];
extern char data_020e5508[];
extern char data_020e550c[];
extern char data_020e5610[];
extern char data_020e5614[];
extern char data_020e5618[];
extern char data_020e561c[];
extern char data_020e5620[];
extern char data_020e5624[];
extern char data_020e59c8[];
extern char data_020e59cc[];
// clang-format off
asm void func_020ae230(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xcc
    ldr r5, =data_020e59c8
    mov r10, #0x1000
    str r10, [r5, #0x0]
    ldr r6, [sp, #0xf0]
    mov r9, r1
    add r4, sp, #0xc0
    mov r8, r2
    mov r7, r3
    mov r5, #0x6
L_020ae25c:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs r5, r5, #0x1
    swpb r2, r2, [r4]
    add r4, r4, #0x1
    swpb r2, r3, [r4]
    add r4, r4, #0x1
    bne L_020ae25c
    add r5, sp, #0xb4
    mov r4, r8
    mov r3, #0x6
L_020ae28c:
    ldrb r1, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_020ae28c
    cmp r0, #0x7f
    bhi L_020ae388
    bhs L_020af140
    cmp r0, #0x65
    bhi L_020ae31c
    bhs L_020aed70
    cmp r0, #0x53
    bhi L_020ae300
    bhs L_020aeb98
    cmp r0, #0x0
    bls L_020aff48
    sub r1, r0, #0x44
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_020aff48
L_020ae2ec:
    b L_020ae4e8
    b L_020ae62c
    b L_020aff48
    b L_020ae87c
    b L_020aea20
L_020ae300:
    cmp r0, #0x63
    bhi L_020ae310
    beq L_020aebb4
    b L_020aff48
L_020ae310:
    cmp r0, #0x64
    beq L_020aed5c
    b L_020aff48
L_020ae31c:
    cmp r0, #0x79
    bhi L_020ae36c
    bhs L_020aefa8
    cmp r0, #0x6e
    bhi L_020ae360
    subs r1, r0, #0x66
    addpl pc, pc, r1, lsl #0x2
    b L_020aff48
    b L_020aed84
    b L_020aed94
    b L_020aeda4
    b L_020aff48
    b L_020aff48
    b L_020aff48
    b L_020aff48
    b L_020aff48
    b L_020aeef0
L_020ae360:
    cmp r0, #0x78
    beq L_020aef24
    b L_020aff48
L_020ae36c:
    cmp r0, #0x7d
    bhi L_020ae37c
    beq L_020af044
    b L_020aff48
L_020ae37c:
    cmp r0, #0x7e
    beq L_020af0ac
    b L_020aff48
L_020ae388:
    cmp r0, #0x9e
    bhi L_020ae3d8
    bhs L_020af62c
    cmp r0, #0x9b
    bhi L_020ae3bc
    bhs L_020af4c8
    cmp r0, #0x84
    bhi L_020ae3b0
    beq L_020af1cc
    b L_020aff48
L_020ae3b0:
    cmp r0, #0x97
    beq L_020af454
    b L_020aff48
L_020ae3bc:
    cmp r0, #0x9c
    bhi L_020ae3cc
    beq L_020af5d0
    b L_020aff48
L_020ae3cc:
    cmp r0, #0x9d
    beq L_020af608
    b L_020aff48
L_020ae3d8:
    cmp r0, #0x104
    bhi L_020ae42c
    addhs sp, sp, #0xcc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, #0xa3
    bhi L_020ae3f8
    beq L_020af954
    b L_020aff48
L_020ae3f8:
    sub r1, r0, #0xa7
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_020aff48
L_020ae408:
    b L_020afad0
    b L_020aff48
    b L_020aff48
    b L_020afb08
    b L_020afb1c
    b L_020aff48
    b L_020aff48
    b L_020aff48
    b L_020afb34
L_020ae42c:
    cmp r0, #0x12c
    bhi L_020ae450
    addhs sp, sp, #0xcc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =0x105
    cmp r0, r1
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b L_020aff48
L_020ae450:
    cmp r0, #0x1f4
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b L_020aff48
L_020ae4e8:
    ldr r0, =0x4333
    ldr r4, =0x7fff000
    mov r5, #0x6
    rsb r8, r0, #0x4000
L_020ae4f8:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xb4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xb8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r1, =0x4333
    mov r2, r0, asr #0x1f
    umull r9, r3, r0, r1
    adds r1, r9, #0x800
    mov r9, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    ldr r0, =0x4333
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r9, r9, r0, lsl #0x14
    add r0, r9, r8
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r10, =0x11f
    mov r9, r0, asr #0x1f
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    ldr r0, =0x11f
    mov r11, r11, lsr #0xc
    mla r10, r9, r0, r10
    mov r0, ip
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0xcc
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x3005
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    mov r3, r6
    bl func_020a60cc
    sub r5, r5, #0x1
    cmp r5, #0x0
    bgt L_020ae4f8
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae62c:
    ldr ip, [sp, #0xb4]
    mov r0, #0x214
    umull r0, r9, ip, r0
    mov r4, #0x0
    adds r0, r0, #0x800
    mov r10, r0, lsr #0xc
    mla r9, ip, r4, r9
    ldr r6, [sp, #0xb8]
    mov r2, #0x214
    umull r5, r3, r6, r2
    sub r2, r2, #0x7b
    mov r8, ip, asr #0x1f
    mov r0, #0x214
    mla r9, r8, r0, r9
    adc r0, r9, #0x0
    orr r10, r10, r0, lsl #0x14
    adds r0, r5, #0x800
    ldr r11, [sp, #0xc0]
    mov r9, r0, lsr #0xc
    add r8, r11, r10
    ldr r1, [sp, #0xbc]
    str r2, [sp, #0x38]
    umull lr, r2, r1, r2
    mla r3, r6, r4, r3
    mla r2, r1, r4, r2
    mov r0, r6, asr #0x1f
    mov r11, #0x214
    mla r3, r0, r11, r3
    mov r11, r1, asr #0x1f
    ldr r1, [sp, #0x38]
    adc r3, r3, #0x0
    orr r9, r9, r3, lsl #0x14
    adds r3, lr, #0x800
    mla r2, r11, r1, r2
    ldr r10, [sp, #0xc4]
    mov r3, r3, lsr #0xc
    adc r1, r2, #0x0
    orr r3, r3, r1, lsl #0x14
    add r10, r10, r9
    add r1, r3, #0x33
    rsb r5, ip, #0x0
    ldr r9, [sp, #0xc8]
    add r1, r1, #0x300
    add r1, r9, r1
    str r1, [sp, #0xc8]
    mov r1, #0x800
    sub r2, r1, #0x334
    umull r11, r9, r6, r2
    mla r9, r6, r4, r9
    mla r9, r0, r2, r9
    adds r2, r11, #0x800
    adc r0, r9, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r8, r2
    sub r1, r1, #0x334
    str r0, [sp, #0xc0]
    umull r2, r0, r5, r1
    mla r0, r5, r4, r0
    mov r3, r5, asr #0x1f
    mla r0, r3, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r10, r1
    str r0, [sp, #0xc4]
L_020ae738:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x3000
    mov r2, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    adds r2, r5, #0x800
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r2, r2, lsr #0xc
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    ldr r5, [sp, #0xc0]
    sub r0, r2, #0x1800
    add r0, r5, r0
    str r0, [sp, #0xb4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x3000
    mov r2, #0x0
    umull r6, r5, r0, r1
    mla r5, r0, r2, r5
    mov r3, r0, asr #0x1f
    mla r5, r3, r1, r5
    adds r1, r6, #0x800
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r8, [sp, #0xc4]
    sub r0, r1, #0x1800
    add r0, r8, r0
    str r0, [sp, #0xb8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r6, #0x3000
    umull r11, r10, r0, r6
    mov r2, #0x0
    adds r11, r11, #0x800
    mla r10, r0, r2, r10
    mov r9, r0, asr #0x1f
    mla r10, r9, r6, r10
    mov r11, r11, lsr #0xc
    adc r0, r10, #0x0
    orr r11, r11, r0, lsl #0x14
    ldr r5, [sp, #0xc8]
    sub r0, r11, #0x1800
    add r0, r5, r0
    str r0, [sp, #0xbc]
    mov r8, #0x5000
    str r8, [sp, #0x0]
    str r8, [sp, #0x4]
    ldr r3, =0x199
    ldr r0, =0x50006000
    add r1, sp, #0xc0
    str r7, [sp, #0x8]
    bl func_020a60cc
    cmp r0, #0x0
    beq L_020ae868
    add r3, sp, #0xb4
    add r5, r0, #0xc
    mov r2, #0x6
L_020ae844:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_020ae844
L_020ae868:
    add r4, r4, #0x1
    cmp r4, #0x3
    blt L_020ae738
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae87c:
    ldr ip, [sp, #0xb4]
    mov r0, #0x214
    umull r0, r9, ip, r0
    mov r1, #0x0
    adds r0, r0, #0x800
    mov r10, r0, lsr #0xc
    ldr r5, [sp, #0xb8]
    mov r3, #0x214
    umull lr, r4, r5, r3
    sub r3, r3, #0x7b
    ldr r2, [sp, #0xbc]
    str r3, [sp, #0x30]
    umull r8, r3, r2, r3
    str r8, [sp, #0x34]
    mla r9, ip, r1, r9
    mov r8, ip, asr #0x1f
    mov r0, #0x214
    mla r9, r8, r0, r9
    adc r0, r9, #0x0
    mla r4, r5, r1, r4
    mov r8, r5, asr #0x1f
    mov r9, #0x214
    mla r4, r8, r9, r4
    ldr r11, [sp, #0xc0]
    orr r10, r10, r0, lsl #0x14
    add r0, r11, r10
    str r0, [sp, #0x24]
    adds r0, lr, #0x800
    mov r10, r0, lsr #0xc
    adc r4, r4, #0x0
    orr r10, r10, r4, lsl #0x14
    ldr r11, [sp, #0xc4]
    ldr r4, [sp, #0x34]
    add lr, r11, r10
    adds r4, r4, #0x800
    mla r3, r2, r1, r3
    mov r10, r2, asr #0x1f
    ldr r2, [sp, #0x30]
    mov r4, r4, lsr #0xc
    mla r3, r10, r2, r3
    adc r2, r3, #0x0
    orr r4, r4, r2, lsl #0x14
    add r2, r4, #0x33
    rsb r0, ip, #0x0
    mov r3, #0x800
    mov r4, #0x800
    ldr r9, [sp, #0xc8]
    add r2, r2, #0x300
    add r2, r9, r2
    str r2, [sp, #0xc8]
    mov r2, #0x800
    sub r2, r2, #0x334
    umull ip, r11, r5, r2
    mla r11, r5, r1, r11
    adds r5, ip, #0x800
    mla r11, r8, r2, r11
    adc r2, r11, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    ldr r2, [sp, #0x24]
    sub r3, r3, #0x334
    add r2, r2, r5
    str r2, [sp, #0xc0]
    umull r5, r2, r0, r3
    mla r2, r0, r1, r2
    mov r10, r0, asr #0x1f
    mla r2, r10, r3, r2
    adds r3, r5, #0x800
    adc r0, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, lr, r2
    sub r4, r4, #0x334
    str r0, [sp, #0xc4]
    umull r2, r0, r6, r4
    mla r0, r6, r1, r0
    mov r9, r6, asr #0x1f
    mla r0, r9, r4, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    sub r1, r4, r4
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r3, =0x199
    mov r2, #0x0
    mov r0, #0x6000
    add r1, sp, #0xc0
    bl func_020a60cc
    cmp r0, #0x0
    movne r1, #0x1f4000
    strne r1, [r0, #0x44]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aea20:
    add r4, sp, #0x78
    mov r3, r8
    mov r2, #0x6
L_020aea2c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020aea2c
    mov r4, #0x0
L_020aea54:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0xe67
    ldr r10, [r9, #0x0]
    umull r5, r3, r0, r1
    adds r1, r5, #0x800
    ldr r11, [r8, #0x0]
    mov r5, r1, lsr #0xc
    sub r1, r11, r10
    mov r11, #0x0
    mla r3, r0, r11, r3
    mov r2, r0, asr #0x1f
    ldr r0, =0xe67
    mla r3, r2, r0, r3
    mov r0, r11
    adc r0, r3, r0
    orr r5, r5, r0, lsl #0x14
    add r2, r5, #0xcc
    smull r3, r1, r2, r1
    mov r0, #0x800
    adds r3, r3, r0
    mov r0, r11
    adc r0, r1, r0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r10, r1
    str r0, [sp, #0x6c]
    ldr r0, [r9, #0x4]
    ldr r1, [r8, #0x4]
    sub r1, r1, r0
    smull r5, r3, r2, r1
    adds r5, r5, #0x800
    mov r1, r11
    adc r1, r3, r1
    mov r3, r5, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    add r0, r0, r3
    str r0, [sp, #0x70]
    ldr r0, [r9, #0x8]
    ldr r1, [r8, #0x8]
    sub r1, r1, r0
    smull r5, r3, r2, r1
    adds r2, r5, #0x800
    mov r1, r11
    adc r1, r3, r1
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [sp, #0x74]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r10, =0xccd
    mov r5, r0, asr #0x1f
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    ldr r0, =0xccd
    mov r11, r11, lsr #0xc
    mla r10, r5, r0, r10
    mov r0, ip
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    add r1, sp, #0x6c
    add r2, sp, #0x78
    mov r3, r6
    mov r0, #0x5400
    bl func_020a60cc
    add r4, r4, #0x1
    cmp r4, #0x3
    blt L_020aea54
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aeb98:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020aa404
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aebb4:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x4cc
    mov r2, #0x0
    umull r3, r4, r0, r1
    adds r3, r3, #0x800
    mov r5, r3, lsr #0xc
    mla r4, r0, r2, r4
    mov r3, r0, asr #0x1f
    mla r4, r3, r1, r4
    adc r0, r4, #0x0
    orr r5, r5, r0, lsl #0x14
    add r0, r5, #0x800
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    mov r0, #0x4500
    add r1, sp, #0xc0
    mov r3, r6
    bl func_020a60cc
    mov r0, r6, asr #0xc
    mov r0, r0, lsl #0x2
    adds r5, r0, #0x4
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =0x6333
    ldr r4, =0x7fff000
    rsb r8, r0, #0x6000
L_020aec28:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xe
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xe
    orr r2, r2, r0, lsr #0x12
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x2000
    str r0, [sp, #0xb4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xe
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xe
    orr r2, r2, r0, lsr #0x12
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x2000
    str r0, [sp, #0xb8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r1, =0x6333
    mov r2, r0, asr #0x1f
    umull r9, r3, r0, r1
    adds r1, r9, #0x800
    mov r9, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    ldr r0, =0x6333
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r9, r9, r0, lsl #0x14
    add r0, r9, r8
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r10, =0x28f
    mov r9, r0, asr #0x1f
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    ldr r0, =0x28f
    mov r11, r11, lsr #0xc
    mla r10, r9, r0, r10
    mov r0, ip
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0xa
    add r0, r0, #0x300
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x3001
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    mov r3, r6
    bl func_020a60cc
    subs r5, r5, #0x1
    bne L_020aec28
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aed5c:
    ldr r1, =data_020dba75
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aed70:
    ldr r1, =data_020dba75
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aed84:
    mov r0, #0x1
    bl func_02050e7c
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aed94:
    mov r0, #0x0
    bl func_02050e7c
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aeda4:
    add r3, sp, #0x54
    mov r2, #0x6
L_020aedac:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020aedac
    add r3, sp, #0x60
    mov r2, #0x6
L_020aedd8:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020aedd8
    mov r10, #0x0
    ldr r9, =0x7fff000
    mov r8, r10
    mov r6, r10
    mov r11, r10
    mov r5, r10
    mov r4, #0x800
L_020aee18:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r9
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0x60]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r9
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, r11
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r8, [sp, #0x68]
    str r0, [sp, #0x64]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r9
    bl func_02014910
    mov ip, r0
    mov r3, ip, asr #0x1f
    mov r3, r3, lsl #0xd
    orr r3, r3, ip, lsr #0x13
    adds ip, r4, ip, lsl #0xd
    str r6, [sp, #0x0]
    adc r3, r3, r5
    mov ip, ip, lsr #0xc
    orr ip, ip, r3, lsl #0x14
    ldr r0, =0x10001
    add r1, sp, #0x54
    add r2, sp, #0x60
    add r3, ip, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    add r10, r10, #0x1
    cmp r10, #0xa
    blt L_020aee18
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aeef0:
    mov r0, #0x1000
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    mov r3, r6
    mov r0, #0x11
    str r7, [sp, #0x8]
    bl func_020a60cc
    cmp r0, #0x0
    add sp, sp, #0xcc
    strne r6, [r0, #0x44]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aef24:
    ldr r0, =data_020e4f10
    movs r5, r6, asr #0xc
    ldr r4, [r0, #0xc]
    bmi L_020aef3c
    cmp r5, #0x8
    blt L_020aef40
L_020aef3c:
    bl func_0200eb98
L_020aef40:
    mov r0, #0x24
    mul r0, r5, r0
    ldr r5, [sp, #0xc0]
    ldr r2, =data_020e54f0
    ldr r3, [sp, #0xc4]
    str r5, [r2, r0]
    ldr r1, =data_020e54f4
    ldr r5, [sp, #0xb4]
    str r3, [r1, r0]
    ldr r2, =data_020e54f8
    ldr r3, [sp, #0xb8]
    str r5, [r2, r0]
    ldr r1, =data_020e54fc
    ldr r2, =data_020e5500
    str r3, [r1, r0]
    str r4, [r2, r0]
    ldr r1, =data_020e5504
    ldr r4, [sp, #0xc8]
    str r7, [r1, r0]
    ldr r3, =data_020e5508
    ldr r2, [sp, #0xbc]
    ldr r1, =data_020e550c
    str r4, [r3, r0]
    str r2, [r1, r0]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aefa8:
    ldr r4, [sp, #0xc0]
    ldr r3, [sp, #0xc4]
    ldr r2, [sp, #0xb4]
    ldr r1, [sp, #0xc8]
    ldr r0, [sp, #0xbc]
    movs r9, r6, asr #0xc
    mov r8, r4, asr #0xc
    mov r7, r3, asr #0xc
    mov r6, r2, asr #0xc
    mov r5, r1, asr #0xc
    mov r4, r0, asr #0xc
    bmi L_020aefe0
    cmp r9, #0x2
    blt L_020aefe4
L_020aefe0:
    bl func_0200eb98
L_020aefe4:
    mov r0, #0xc0
    mul r0, r7, r0
    mov r1, r8, lsl #0x8
    ldr r7, =0x51eb851f
    mov r2, r1, lsr #0x1f
    smull r3, r1, r7, r1
    mov r6, r6, lsl #0x8
    str r5, [sp, #0x0]
    mov r3, r6, lsr #0x1f
    smull r5, r6, r7, r6
    add r1, r2, r1, asr #0x5
    add r6, r3, r6, asr #0x5
    sub r3, r6, r1
    mov r2, r3, asr #0x2
    add r5, r3, r2, lsr #0x1d
    smull r3, r2, r7, r0
    mov r3, r0, lsr #0x1f
    add r2, r3, r2, asr #0x5
    mov r0, r9
    mov r3, r5, asr #0x3
    str r4, [sp, #0x4]
    bl func_02076d60
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af044:
    movs r5, r6, asr #0xc
    bmi L_020af054
    cmp r5, #0x23
    blt L_020af058
L_020af054:
    bl func_0200eb98
L_020af058:
    mov r0, #0x18
    mul r4, r5, r0
    ldr r3, [sp, #0xc0]
    ldr r2, =data_020e5610
    ldr r1, [sp, #0xc4]
    str r3, [r2, r4]
    ldr r0, =data_020e5614
    ldr r3, [sp, #0xb4]
    str r1, [r0, r4]
    ldr r2, =data_020e5618
    ldr r1, [sp, #0xb8]
    str r3, [r2, r4]
    ldr r0, =data_020e561c
    ldr r2, =data_020e5620
    str r1, [r0, r4]
    ldr r1, [sp, #0xbc]
    ldr r0, =data_020e5624
    str r7, [r2, r4]
    add sp, sp, #0xcc
    str r1, [r0, r4]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af0ac:
    ldr r0, [sp, #0xb8]
    ldr r2, [sp, #0xc4]
    mov r0, r0, asr #0xc
    mov r1, #0xc0
    mul r4, r0, r1
    mov r2, r2, asr #0xc
    mul r3, r2, r1
    ldr r1, [sp, #0xb4]
    ldr r2, [sp, #0xc0]
    mov r1, r1, asr #0xc
    mov r5, r1, lsl #0x8
    mov r2, r2, asr #0xc
    ldr r0, =0x51eb851f
    mov r1, r4, lsr #0x1f
    smull r4, r7, r0, r4
    add r7, r1, r7, asr #0x5
    mov r2, r2, lsl #0x8
    str r7, [sp, #0x0]
    smull r4, r1, r0, r2
    ldr r7, [sp, #0xc8]
    mov r4, r7, asr #0xc
    mov r7, r2, lsr #0x1f
    smull r8, r2, r0, r3
    mov r8, r3, lsr #0x1f
    smull r9, r3, r0, r5
    str r4, [sp, #0x4]
    ldr r4, [sp, #0xbc]
    mov r0, r5, lsr #0x1f
    mov r4, r4, asr #0xc
    add r3, r0, r3, asr #0x5
    add r1, r7, r1, asr #0x5
    add r2, r8, r2, asr #0x5
    mov r0, r6, asr #0xc
    str r4, [sp, #0x8]
    bl func_02076c40
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af140:
    ldr r5, [sp, #0xc0]
    ldr r4, [sp, #0xc4]
    ldr r3, [sp, #0xb4]
    ldr r2, [sp, #0xb8]
    ldr r1, [sp, #0xc8]
    ldr r0, [sp, #0xbc]
    movs r10, r6, asr #0xc
    mov r9, r5, asr #0xc
    mov r8, r4, asr #0xc
    mov r7, r3, asr #0xc
    mov r6, r2, asr #0xc
    mov r5, r1, asr #0xc
    mov r4, r0, asr #0xc
    bmi L_020af180
    cmp r10, #0x3
    blt L_020af184
L_020af180:
    bl func_0200eb98
L_020af184:
    mov r0, #0xc0
    mul r0, r8, r0
    ldr r8, =0x51eb851f
    mov r3, r9, lsl #0x8
    str r6, [sp, #0x0]
    str r5, [sp, #0x4]
    smull r2, r1, r8, r3
    mov r5, r3, lsr #0x1f
    smull r3, r2, r8, r0
    mov r6, r0, lsr #0x1f
    mov r0, r10
    mov r3, r7
    add r1, r5, r1, asr #0x5
    add r2, r6, r2, asr #0x5
    str r4, [sp, #0x8]
    bl func_02076e38
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af1cc:
    ldr r0, =0x999
    mov r1, #0x0
    umull r3, r2, r6, r0
    mla r2, r6, r1, r2
    mov r5, r6, asr #0x1f
    adds r1, r3, #0x800
    mla r2, r5, r0, r2
    adc r0, r2, #0x0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =data_020e4f10
    ldr r3, =data_020b7490
    ldr r1, [r1, #0x60]
    mov r2, #0x800
    str r1, [sp, #0x28]
    ldr r1, =data_020e4f10
    ldr ip, [r1, #0x5c]
    ldr r1, [sp, #0x28]
    mov r1, r1, lsl #0x13
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x4
    mov r10, r1, lsl #0x1
    mov r1, ip, lsl #0x13
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x1
    add r1, r1, #0x1
    mov r9, r1, lsl #0x1
    ldrsh r9, [r3, r9]
    add r1, r2, #0x13c
    mov r11, r10, lsl #0x1
    mul r1, r9, r1
    ldrsh r3, [r3, r11]
    add r11, r1, #0x800
    add r1, r10, #0x1
    mov r9, r1, lsl #0x1
    ldr r1, =data_020b7490
    ldrsh r1, [r1, r9]
    add r9, r2, #0x13c
    smulbb r3, r3, r9
    add r3, r3, #0x800
    mov r3, r3, asr #0xc
    rsb r3, r3, r11, asr #0xc
    str r3, [sp, #0xb4]
    ldr r3, =data_020e4f10
    ldr r10, [r3, #0x64]
    mov r3, r9
    mul r3, r1, r3
    add r1, r3, #0x800
    mov r9, r1, asr #0xc
    mov r1, r10, lsl #0x13
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x4
    mov lr, r1, lsl #0x1
    add r1, lr, #0x1
    mov r3, r1, lsl #0x1
    ldr r1, =data_020b7490
    ldrsh r1, [r1, r3]
    mov r3, lr, lsl #0x1
    str r1, [sp, #0x2c]
    ldr r1, =data_020b7490
    ldrsh lr, [r1, r3]
    ldr r1, [sp, #0x2c]
    add r3, r2, #0x13c
    smulbb r1, r1, r3
    add r1, r1, #0x800
    add r1, r9, r1, asr #0xc
    str r1, [sp, #0xb8]
    mov r1, r9, lsl #0x1
    smulbb r3, lr, r3
    rsb r1, r1, #0x0
    add r1, r1, r11, asr #0xc
    add r3, r3, #0x800
    add r1, r1, r3, asr #0xc
    str r1, [sp, #0xbc]
    ldr r1, =0xccc
    umull r9, r3, r6, r1
    mov r1, #0x0
    mla r3, r6, r1, r3
    ldr r1, =0xccc
    mla r3, r5, r1, r3
    adds r5, r9, #0x800
    adc r1, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    sub r1, r3, r4
    smull r3, r1, r0, r1
    adds r3, r3, #0x800
    adc r0, r1, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r4, r4, r1
    ldr r0, =data_020e4f10
    ldr lr, =0x6e66
    ldr r0, [r0, #0x1c]
    ldr r5, =data_020e4f10
    umull r1, r9, r0, lr
    adds r1, r1, r2
    mov r11, r1, lsr #0xc
    mov r1, #0x0
    mla r9, r0, r1, r9
    add r6, ip, r0
    mov ip, r0, asr #0x1f
    mla r9, ip, lr, r9
    adc r9, r9, #0x0
    mov r3, #0x3280
    str r6, [r5, #0x5c]
    umull r6, r5, r0, r3
    adds r1, r6, r2
    ldr r2, [sp, #0x28]
    orr r11, r11, r9, lsl #0x14
    add r6, r2, r11
    ldr r2, =data_020e4f10
    mov r1, r1, lsr #0xc
    str r6, [r2, #0x60]
    mov r2, #0x0
    mla r5, r0, r2, r5
    mla r5, ip, r3, r5
    adc r2, r5, #0x0
    orr r1, r1, r2, lsl #0x14
    ldr r2, =data_020e4f10
    add r3, r10, r1
    add r0, sp, #0xb4
    mov r1, r0
    str r3, [r2, #0x64]
    bl func_01ff84a0
    str r4, [sp, #0x0]
    ldr r0, =0x20004000
    stmib sp, {r4, r7}
    ldr r3, =0x199
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    bl func_020a60cc
    ldr r1, [sp, #0xc0]
    ldr r0, [r8, #0x0]
    ldr r2, [sp, #0xc4]
    add r0, r1, r0
    str r0, [sp, #0xc0]
    ldr r0, [r8, #0x4]
    ldr r1, [sp, #0xc8]
    add r0, r2, r0
    str r0, [sp, #0xc4]
    ldr r0, [r8, #0x8]
    ldr r2, [sp, #0xb4]
    add r0, r1, r0
    ldr r1, [sp, #0xbc]
    str r0, [sp, #0xc8]
    str r1, [sp, #0xb4]
    str r2, [sp, #0xbc]
    str r4, [sp, #0x0]
    ldr r0, =0x20004000
    ldr r3, =0x199
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af454:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x667
    mov r2, #0x0
    umull r3, r4, r0, r1
    mla r4, r0, r2, r4
    adds r2, r3, #0x800
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    mov r2, r2, lsr #0xc
    adc r0, r4, #0x0
    orr r2, r2, r0, lsl #0x14
    add r0, r2, #0x99
    add r0, r0, #0x100
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x1a003
    mov r3, r6
    add r1, sp, #0xc0
    add r2, sp, #0xb4
    str r7, [sp, #0x8]
    bl func_020a60cc
    cmp r0, #0x0
    movne r1, #0x28
    strne r1, [r0, #0x44]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af4c8:
    ldr r0, [sp, #0xb4]
    ldr r1, [sp, #0xb8]
    str r0, [sp, #0x20]
    mov r0, r1, asr #0xc
    adds r10, r0, #0x1
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r9, r6, lsl #0x1
    mov r8, r9, asr #0x1f
L_020af4ec:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    umull r4, r3, r0, r9
    adds r1, r4, #0x800
    mla r3, r0, r8, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r9, r3
    mov r0, #0x0
    mov r1, r1, lsr #0xc
    adc r0, r3, r0
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, r6
    str r0, [sp, #0xb4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    umull r4, r3, r0, r9
    adds r1, r4, #0x800
    mla r3, r0, r8, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r9, r3
    mov r0, #0x0
    mov r1, r1, lsr #0xc
    adc r0, r3, r0
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, r6
    str r0, [sp, #0xb8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    umull ip, r4, r0, r9
    adds r5, ip, #0x800
    mla r4, r0, r8, r4
    mov r11, r0, asr #0x1f
    mla r4, r11, r9, r4
    mov r0, #0x0
    mov r5, r5, lsr #0xc
    adc r0, r4, r0
    orr r5, r5, r0, lsl #0x14
    sub r0, r5, r6
    str r0, [sp, #0xbc]
    ldr r0, [sp, #0x20]
    add r1, sp, #0xc0
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x5003
    add r2, sp, #0xb4
    mov r3, #0x1000
    bl func_020a60cc
    subs r10, r10, #0x1
    bne L_020af4ec
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af5d0:
    ldr r2, =0x555
    ldr r0, =data_020e59c8
    add r1, r6, #0x1000
    str r2, [r0, #0x0]
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    add r1, sp, #0xc0
    mov r0, #0x10000
    mov r2, #0x0
    mov r3, #0x2000
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af608:
    ldr r0, =0x10006000
    str r6, [sp, #0x0]
    add r1, sp, #0xc0
    mov r2, #0x0
    mov r3, #0x2000
    stmib sp, {r6, r7}
    bl func_020a60cc
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af62c:
    mov r0, #0x8
    ldr r5, =0x7fff000
    str r0, [sp, #0x18]
L_020af638:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r1, =0x2ccd
    mov r2, r0, asr #0x1f
    umull r4, r3, r0, r1
    adds r1, r4, #0x800
    mov r4, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    ldr r0, =0x2ccd
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r4, r4, r0, lsl #0x14
    add r0, r4, #0x33
    add r1, r0, #0x300
    ldr r0, =data_020e59c8
    str r1, [r0, #0x0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r1, #0x2800
    umull r4, r3, r0, r1
    adds r1, r4, #0x800
    mov r4, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    mov r2, r0, asr #0x1f
    mov r0, #0x2800
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r4, r4, r0, lsl #0x14
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r10, r0
    mov r3, #0x3000
    umull lr, ip, r10, r3
    mov r3, #0x0
    mla ip, r10, r3, ip
    mov r11, r10, asr #0x1f
    mov r3, #0x3000
    adds r10, lr, #0x800
    mla ip, r11, r3, ip
    ldr r0, [r8, #0x0]
    adc r3, ip, #0x0
    mov r10, r10, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    add r1, r4, #0x4000
    mov r2, r0
    sub r3, r10, #0x1800
    bl func_01ff87d0
    str r0, [sp, #0x48]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov ip, r0
    mov r3, #0x3000
    umull r11, r10, ip, r3
    mov r3, #0x0
    mla r10, ip, r3, r10
    ldr r0, [r8, #0x4]
    mov lr, ip, asr #0x1f
    mov r3, #0x3000
    mla r10, lr, r3, r10
    adds r11, r11, #0x800
    adc r3, r10, #0x0
    mov r10, r11, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    add r1, r4, #0x4000
    mov r2, r0
    sub r3, r10, #0x1800
    bl func_01ff87d0
    str r0, [sp, #0x4c]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov ip, r0
    mov r3, #0x3000
    umull r11, r10, ip, r3
    mov r3, #0x0
    mla r10, ip, r3, r10
    ldr r0, [r8, #0x8]
    mov lr, ip, asr #0x1f
    mov r3, #0x3000
    mla r10, lr, r3, r10
    adds r11, r11, #0x800
    adc r3, r10, #0x0
    mov r10, r11, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    add r1, r4, #0x4000
    mov r2, r0
    sub r3, r10, #0x1800
    bl func_01ff87d0
    str r0, [sp, #0x50]
    ldr r10, [r8, #0x0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r2, =0x4cc
    mov r1, r0, asr #0x1f
    umull ip, r2, r0, r2
    adds r3, ip, #0x800
    mov ip, #0x0
    mla r2, r0, ip, r2
    ldr r0, =0x4cc
    mov r3, r3, lsr #0xc
    mla r2, r1, r0, r2
    mov r0, ip
    adc r0, r2, r0
    orr r3, r3, r0, lsl #0x14
    smull r2, r1, r3, r10
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, ip
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    ldr r11, [r9, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r11, r1
    str r0, [sp, #0x3c]
    ldr r10, [r8, #0x4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r2, =0x4cc
    mov r1, r0, asr #0x1f
    umull ip, r2, r0, r2
    adds r3, ip, #0x800
    mov ip, #0x0
    mla r2, r0, ip, r2
    ldr r0, =0x4cc
    mov r3, r3, lsr #0xc
    mla r2, r1, r0, r2
    mov r0, ip
    adc r0, r2, r0
    orr r3, r3, r0, lsl #0x14
    smull r2, r1, r3, r10
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, ip
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    ldr r11, [r9, #0x4]
    orr r1, r1, r0, lsl #0x14
    add r0, r11, r1
    str r0, [sp, #0x40]
    ldr r0, [r8, #0x8]
    str r0, [sp, #0x14]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r10, =0x4cc
    add r3, r4, #0x4000
    umull ip, r11, r0, r10
    adds r10, ip, #0x800
    mov ip, r10, lsr #0xc
    mov r10, #0x0
    mla r11, r0, r10, r11
    mov lr, r0, asr #0x1f
    ldr r0, =0x4cc
    ldr r4, [r9, #0x8]
    mla r11, lr, r0, r11
    mov r0, r10
    adc r0, r11, r0
    orr ip, ip, r0, lsl #0x14
    ldr r0, [sp, #0x14]
    add r1, sp, #0x3c
    smull r11, r10, ip, r0
    mov r0, #0x800
    adds r11, r11, r0
    mov r0, #0x0
    adc r0, r10, r0
    mov r10, r11, lsr #0xc
    orr r10, r10, r0, lsl #0x14
    add r0, r4, r10
    str r0, [sp, #0x44]
    str r6, [sp, #0x0]
    ldr r0, =0x2103
    add r2, sp, #0x48
    stmib sp, {r6, r7}
    bl func_020a60cc
    ldr r0, [sp, #0x18]
    sub r0, r0, #0x1
    str r0, [sp, #0x18]
    cmp r0, #0x0
    bgt L_020af638
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af954:
    ldr r0, =data_020e4f10
    mov r1, #0x0
    ldr r4, [r0, #0x0]
    cmp r4, #0x0
    bls L_020afa58
    ldr r3, [sp, #0xc0]
    ldr r5, [sp, #0xc4]
    ldr r6, [sp, #0xc8]
    ldr r8, [sp, #0xb4]
    ldr r9, [sp, #0xb8]
    ldr r10, [sp, #0xbc]
    ldr r2, =data_020e59cc
    mov lr, r1
    mov r0, #0x1
L_020af98c:
    ldr r11, [r2, #0x0]
    cmp r11, #0x0
    moveq r11, r0
    movne r11, lr
    orrs r11, r11, #0x60000000
    beq L_020afa48
    ldr r11, [r2, #0xc]
    cmp r11, r3
    ldreq ip, [r2, #0x10]
    cmpeq ip, r5
    ldreq ip, [r2, #0x14]
    cmpeq ip, r6
    movne ip, #0x0
    moveq ip, #0x1
    cmp ip, #0x0
    beq L_020af9f8
    ldr ip, [r2, #0x18]
    cmp ip, r8
    ldreq ip, [r2, #0x1c]
    cmpeq ip, r9
    ldreq ip, [r2, #0x20]
    cmpeq ip, r10
    movne ip, #0x0
    moveq ip, #0x1
    cmp ip, #0x0
    addne sp, sp, #0xcc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020af9f8:
    cmp r11, r8
    ldreq r11, [r2, #0x10]
    cmpeq r11, r9
    ldreq r11, [r2, #0x14]
    cmpeq r11, r10
    movne r11, #0x0
    moveq r11, #0x1
    cmp r11, #0x0
    beq L_020afa48
    ldr r11, [r2, #0x18]
    cmp r11, r3
    ldreq r11, [r2, #0x1c]
    cmpeq r11, r5
    ldreq r11, [r2, #0x20]
    cmpeq r11, r6
    movne r11, #0x0
    moveq r11, #0x1
    cmp r11, #0x0
    addne sp, sp, #0xcc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afa48:
    add r2, r2, #0x5c
    add r1, r1, #0x1
    cmp r1, r4
    blo L_020af98c
L_020afa58:
    mov r0, #0x1000
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =0x199
    add r1, sp, #0xc0
    mov r0, #0x60000000
    mov r2, #0x0
    str r7, [sp, #0x8]
    bl func_020a60cc
    ldr r1, =data_020e59cc
    mov r0, #0x5c
    mla r0, r4, r0, r1
    add r3, sp, #0xb4
    add r4, r0, #0xc
    mov r2, #0x6
L_020afa94:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020afa94
    ldr r0, =data_020e4f10
    mov r2, #0x1
    add r1, r0, #0x10
    swpb r0, r2, [r1]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afad0:
    cmp r6, #0x28
    bgt L_020afaf0
    ldr r0, =data_020e4f10
    mov r2, #0x0
    add r1, r0, #0x12
    swpb r0, r2, [r1]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afaf0:
    ldr r0, =data_020e4f10
    mov r2, #0x1
    add r1, r0, #0x12
    swpb r0, r2, [r1]
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afb08:
    mov r0, r6
    mov r1, r7
    bl func_020b00e8
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afb1c:
    mov r0, r9
    mov r1, r8
    mov r2, r6
    bl func_020b00fc
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020afb34:
    cmp r6, #0x0
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r6, asr #0x1f
    mov r4, r0, lsl #0xb
    mov r0, #0x800
    adds r5, r0, r6, lsl #0xb
    orr r4, r4, r6, lsr #0x15
    add r3, sp, #0xb4
    ldr r8, [sp, #0xb4]
    ldr r6, [sp, #0xc0]
    add r9, sp, #0x84
    ldmia r3, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    sub r8, r8, r6
    ldr r6, [sp, #0xb8]
    ldr r2, [sp, #0xc4]
    ldr r1, [sp, #0xbc]
    sub r6, r6, r2
    ldr r0, [sp, #0xc8]
    str r8, [sp, #0xb4]
    sub r2, r1, r0
    mov r0, r3
    adc r3, r4, #0x0
    mov r1, r5, lsr #0xc
    orr r1, r1, r3, lsl #0x14
    str r6, [sp, #0xb8]
    str r2, [sp, #0xbc]
    str r1, [sp, #0xc]
    bl func_01ff8778
    cmp r0, #0x0
    addeq sp, sp, #0xcc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, sp, #0xb4
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0xb4
    add r1, sp, #0xa8
    add r2, sp, #0x9c
    bl func_020affb8
    ldr r0, [sp, #0xc]
    ldr r4, =0x7fff000
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x10]
    mov r0, #0x0
    str r0, [sp, #0x1c]
L_020afbec:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0x9c]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xa8]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r5
    str r0, [sp, #0x90]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xa0]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xac]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r5
    str r0, [sp, #0x94]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xa4]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0x10
    mov r1, #0x800
    adds r1, r1, r0, lsl #0x10
    orr r2, r2, r0, lsr #0x10
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xb0]
    sub r0, r1, #0x8000
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r5
    str r0, [sp, #0x98]
    add r0, sp, #0x90
    bl func_01ff8778
    cmp r0, #0x0
    beq L_020afed8
    bl func_02014834
    ldr r10, [sp, #0xc]
    ldr ip, [sp, #0x10]
    umull r11, r10, r0, r10
    mla r10, r0, ip, r10
    mov r9, r0, asr #0x1f
    ldr r0, [sp, #0xc]
    ldr r6, [sp, #0x90]
    mla r10, r9, r0, r10
    mov r0, #0x800
    adds r11, r11, r0
    mov r0, #0x0
    adc r9, r10, r0
    mov r0, r11, lsr #0xc
    orr r0, r0, r9, lsl #0x14
    smull r10, r9, r0, r6
    adds r10, r10, #0x800
    adc r6, r9, #0x0
    mov r9, r10, lsr #0xc
    ldr r8, [sp, #0x84]
    orr r9, r9, r6, lsl #0x14
    add r6, r8, r9
    ldr r3, [sp, #0x94]
    str r6, [sp, #0x90]
    smull r8, r6, r0, r3
    ldr r1, [sp, #0x98]
    ldr r5, [sp, #0x88]
    smull r3, r1, r0, r1
    mov r0, #0x800
    adds r8, r8, r0
    mov r0, #0x0
    adc r0, r6, r0
    mov r6, r8, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    add r0, r5, r6
    str r0, [sp, #0x94]
    mov r0, #0x800
    adds r3, r3, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r3, lsr #0xc
    ldr r2, [sp, #0x8c]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [sp, #0x98]
L_020afed8:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xa
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xa
    orr r2, r2, r0, lsr #0x16
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0xcc
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    mov r0, #0x12
    add r1, sp, #0x90
    add r2, sp, #0xc0
    mov r3, #0x2000
    bl func_020a60cc
    ldr r0, [sp, #0x1c]
    add r0, r0, #0x1
    str r0, [sp, #0x1c]
    cmp r0, #0xc
    blt L_020afbec
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aff48:
    mov r0, #0x1000
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x4010000
    add r1, sp, #0xc0
    mov r2, #0x0
    mov r3, #0x2000
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xcc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
