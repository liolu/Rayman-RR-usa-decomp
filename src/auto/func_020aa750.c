#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8778();
extern void func_02003b14();
extern void func_02009f7c();
extern void func_0200a3b8();
extern void func_0200a42c();
extern void func_0200a4bc();
extern void func_02014910();
extern void func_020a60cc();
extern void func_020a8e74();
extern void func_020a911c();
extern void func_020a93ac();
extern void func_020a95b0();
extern void func_020a97fc();
extern void func_020a9ad4();
extern void func_020a9cf8();
extern void func_020aa078();
extern void func_020ae230();
extern char data_020b7490[];
extern char data_020c04cc[];
extern char data_020dc19c[];
extern char data_020e4f10[];
extern char data_020e59b0[];
extern char data_020e59bc[];
extern char data_020e59c8[];
extern char data_020e59cc[];
// clang-format off
asm void func_020aa750(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xd4
    ldr r5, =data_020e59c8
    mov r10, #0x1000
    str r10, [r5, #0x0]
    ldr r6, [sp, #0xf8]
    mov r9, r1
    add r4, sp, #0xc8
    mov r8, r2
    mov r7, r3
    mov r5, #0x6
L_020aa77c:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs r5, r5, #0x1
    swpb r2, r2, [r4]
    add r4, r4, #0x1
    swpb r2, r3, [r4]
    add r4, r4, #0x1
    bne L_020aa77c
    add r5, sp, #0xbc
    mov r4, r8
    mov r3, #0x6
L_020aa7ac:
    ldrb r1, [r4, #0x0]
    ldrb r2, [r4, #0x1]
    add r4, r4, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r5]
    add r5, r5, #0x1
    swpb r1, r2, [r5]
    add r5, r5, #0x1
    bne L_020aa7ac
    ldr r3, =0x2a1
    cmp r0, r3
    bhi L_020aa97c
    bhs L_020ab29c
    cmp r0, #0x29c
    bhi L_020aa93c
    bhs L_020aad50
    sub r1, r3, #0x8
    cmp r0, r1
    bhi L_020aa918
    bhs L_020aaa70
    cmp r0, #0x43
    addls pc, pc, r0, lsl #0x2
    b L_020ae200
L_020aa808:
    b L_020ae200
    b L_020abeac
    b L_020abed8
    b L_020ae200
    b L_020ae200
    b L_020abf00
    b L_020ae200
    b L_020abf1c
    b L_020abff0
    b L_020ac00c
    b L_020ac1a8
    b L_020ac260
    b L_020ae200
    b L_020ae200
    b L_020ae200
    b L_020ac448
    b L_020ae214
    b L_020ae200
    b L_020ae200
    b L_020ac464
    b L_020ac4dc
    b L_020ac554
    b L_020ae200
    b L_020ac570
    b L_020ae200
    b L_020ae200
    b L_020ac804
    b L_020acad8
    b L_020acd0c
    b L_020acd28
    b L_020acf60
    b L_020ad100
    b L_020ae200
    b L_020ad288
    b L_020ae200
    b L_020ad320
    b L_020ae200
    b L_020ae200
    b L_020ae200
    b L_020ad33c
    b L_020ae200
    b L_020ae200
    b L_020ad388
    b L_020ae200
    b L_020ae200
    b L_020ad574
    b L_020ad790
    b L_020ad898
    b L_020ad8bc
    b L_020ad958
    b L_020ad9b0
    b L_020ad9e0
    b L_020adaa8
    b L_020ae200
    b L_020ae200
    b L_020ade28
    b L_020ae200
    b L_020ae200
    b L_020ae200
    b L_020ae200
    b L_020adf30
    b L_020ae200
    b L_020ae0d8
    b L_020ae200
    b L_020ae200
    b L_020ae0f4
    b L_020ae200
    b L_020ae1e4
L_020aa918:
    ldr r1, =0x29a
    cmp r0, r1
    bhi L_020aa92c
    beq L_020aaae0
    b L_020ae200
L_020aa92c:
    add r1, r1, #0x1
    cmp r0, r1
    beq L_020aac28
    b L_020ae200
L_020aa93c:
    sub r1, r3, #0x3
    cmp r0, r1
    bhi L_020aa95c
    bhs L_020aada4
    sub r1, r3, #0x4
    cmp r0, r1
    beq L_020aad74
    b L_020ae200
L_020aa95c:
    sub r1, r3, #0x2
    cmp r0, r1
    bhi L_020aa970
    beq L_020aaf6c
    b L_020ae200
L_020aa970:
    cmp r0, #0x2a0
    beq L_020aafac
    b L_020ae200
L_020aa97c:
    add r1, r3, #0x5
    cmp r0, r1
    bhi L_020aa9cc
    bhs L_020ab7a8
    add r1, r3, #0x2
    cmp r0, r1
    bhi L_020aa9ac
    bhs L_020ab528
    add r1, r3, #0x1
    cmp r0, r1
    beq L_020ab4e8
    b L_020ae200
L_020aa9ac:
    cmp r0, #0x2a4
    bhi L_020aa9bc
    beq L_020ab5cc
    b L_020ae200
L_020aa9bc:
    add r1, r3, #0x4
    cmp r0, r1
    beq L_020ab718
    b L_020ae200
L_020aa9cc:
    cmp r0, #0x2a8
    bhi L_020aa9e8
    bhs L_020abc54
    add r1, r3, #0x6
    cmp r0, r1
    beq L_020ab938
    b L_020ae200
L_020aa9e8:
    add r1, r3, #0x8
    cmp r0, r1
    bhi L_020aaa00
    addeq sp, sp, #0xd4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b L_020ae200
L_020aaa00:
    add r1, r3, #0x9
    cmp r0, r1
    beq L_020abd9c
    b L_020ae200
L_020aaa70:
    ldr r0, =data_020e4f10
    mov r4, #0x0
    ldr r3, [r0, #0x0]
    cmp r3, #0x0
    addls sp, sp, #0xd4
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =data_020e59cc
    ldr r2, [sp, #0xbc]
L_020aaa90:
    ldr r0, [r5, #0x58]
    and r0, r0, #0xff
    cmp r0, r2, asr #0xc
    bne L_020aaac8
    ldr r0, [r5, #0x0]
    bic r1, r0, #0x200000
    bic r0, r1, #0xf000
    orr r0, r0, #0x3000
    str r0, [r5, #0x0]
    ldr r0, [r5, #0x58]
    tst r0, #0x200
    ldrne r0, [r5, #0x0]
    orrne r0, r0, #0x1000000
    strne r0, [r5, #0x0]
L_020aaac8:
    add r4, r4, #0x1
    cmp r4, r3
    add r5, r5, #0x5c
    blo L_020aaa90
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aaae0:
    ldr r8, =0x7fff000
    mov r9, r6, asr #0x1f
    mov r10, #0x8
L_020aaaec:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r8
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
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r8
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
    str r0, [sp, #0xc0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r8
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
    str r0, [sp, #0xc4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r8
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xb
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xb
    orr r2, r2, r0, lsr #0x15
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add ip, r1, #0x1000
    mov r11, ip, asr #0x1f
    umull r5, r4, r6, ip
    mla r4, r6, r11, r4
    adds r11, r5, #0x800
    mla r4, r9, ip, r4
    adc r4, r4, #0x0
    mov r5, r11, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    str r5, [sp, #0x0]
    ldr r0, =0x1603
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r5, r7}
    bl func_020a60cc
    sub r10, r10, #0x1
    cmp r10, #0x0
    bgt L_020aaaec
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aac28:
    ldr r0, [sp, #0xcc]
    ldr r1, [sp, #0xc8]
    sub r0, r0, r6
    str r0, [sp, #0xcc]
    ldr r0, =0x40800000
    ldr r5, =0x7fff000
    str r1, [sp, #0xbc]
    mov r8, r6, asr #0x1f
    mov r9, #0x0
    sub r4, r0, #0xfb000000
L_020aac50:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [sp, #0xbc]
    sub r0, r2, #0x800
    add r0, r1, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [sp, #0xcc]
    add r0, r2, #0x1000
    add r0, r1, r0
    str r0, [sp, #0xcc]
    rsb r0, r9, #0x5
    bl func_0200a42c
    ldr r1, =0x40800000
    bl func_02009f7c
    mov r1, r0
    mov r0, r4
    bl func_0200a4bc
    bl func_0200a3b8
    umull r11, r10, r6, r0
    mov ip, r0, asr #0x1f
    mla r10, r6, ip, r10
    mla r10, r8, r0, r10
    adds r11, r11, #0x800
    mov r0, #0x0
    mov r11, r11, lsr #0xc
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    str r11, [sp, #0x0]
    str r11, [sp, #0x4]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    mov r0, #0x700
    str r7, [sp, #0x8]
    bl func_020a60cc
    add r9, r9, #0x1
    cmp r9, #0x4
    blt L_020aac50
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aad50:
    str r6, [sp, #0x0]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r0, #0x5400
    mov r3, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aad74:
    ldr r2, [sp, #0xbc]
    ldr r1, =data_020e59bc
    ldr r0, =0x105000
    str r2, [r1, #0x0]
    str r6, [sp, #0x0]
    add r1, sp, #0xc8
    mov r2, #0x0
    mov r3, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aada4:
    ldr r4, =0x7fff000
    ldr r8, =data_020e59bc
    ldr r6, =data_020e59b0
    mov r5, #0x5
L_020aadb4:
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
    str r0, [sp, #0xbc]
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
    str r0, [sp, #0xc0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r2, #0x1800
    umull r10, r2, r0, r2
    adds r3, r10, #0x800
    mov r10, #0x0
    mla r2, r0, r10, r2
    mov r1, r0, asr #0x1f
    mov r0, #0x1800
    mla r2, r1, r0, r2
    mov r0, r10
    mov r3, r3, lsr #0xc
    adc r0, r2, r0
    orr r3, r3, r0, lsl #0x14
    ldr r9, [r8, #0x8]
    add r0, r3, #0x800
    add r0, r9, r0
    str r0, [sp, #0xc4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r10, =0xccd
    mov r9, r0, asr #0x1f
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    ldr r0, =0xccd
    mov r11, r11, lsr #0xc
    mla r10, r9, r0, r10
    mov r0, ip
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0x33
    add ip, r0, #0xb00
    str ip, [r6, #0x8]
    ldr r9, [r6, #0x0]
    ldr r0, =0x101504
    smull r11, r10, ip, r9
    adds r11, r11, #0x800
    adc r9, r10, #0x0
    mov r10, r11, lsr #0xc
    orr r10, r10, r9, lsl #0x14
    str r10, [sp, #0x0]
    str r10, [sp, #0x4]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    str r7, [sp, #0x8]
    bl func_020a60cc
    ldr r1, [sp, #0xc0]
    ldr r0, [r8, #0x4]
    sub r0, r1, r0
    str r0, [sp, #0xc0]
    ldmib r6, {r0, r1}
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, =data_020e4f10
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r1, [r0, #0xc]
    ldr r0, =0x101504
    str r1, [sp, #0x8]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    bl func_020a60cc
    sub r5, r5, #0x1
    cmp r5, #0x0
    bgt L_020aadb4
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aaf6c:
    ldr r2, [sp, #0xbc]
    ldr r0, =data_020e59bc
    ldr r1, [sp, #0xc0]
    str r2, [r0, #0x0]
    mov r2, #0x0
    str r2, [r0, #0x4]
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r0, =0x900f00
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020aafac:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x667
    mov r4, #0x0
    umull r3, r2, r0, r1
    mla r2, r0, r4, r2
    mov r0, r0, asr #0x1f
    mla r2, r0, r1, r2
    adds r3, r3, #0x800
    adc r0, r2, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0xcc
    add r0, r0, #0xc00
    smull r1, r0, r6, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r10, r1, lsr #0xc
    ldr r6, =0x7fff000
    ldr r11, =data_020e59bc
    ldr r5, =data_020e59b0
    orr r10, r10, r0, lsl #0x14
L_020ab00c:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [r8, #0x0]
    sub r0, r2, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r1, r1, lsl #0xc
    mov ip, #0x800
    orr r1, r1, r0, lsr #0x14
    adds r0, ip, r0, lsl #0xc
    ldr r2, [r5, #0x8]
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    smull ip, r1, r2, r0
    mov r0, #0x800
    adds r2, ip, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    ldr r3, [r9, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [sp, #0xc8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    sub r0, r2, #0x800
    ldr r1, [r9, #0x4]
    add r2, sp, #0xbc
    add r0, r1, r0
    str r0, [sp, #0xcc]
    str r10, [sp, #0x0]
    str r10, [sp, #0x4]
    ldr r0, =0x20ae03
    str r7, [sp, #0x8]
    add r1, sp, #0xc8
    mov r3, #0x1000
    bl func_020a60cc
    cmp r0, #0x0
    ldrne r1, [r11, #0x8]
    add r4, r4, #0x1
    movne r1, r1, asr #0xc
    strne r1, [r0, #0x58]
    cmp r4, #0x8
    blt L_020ab00c
    cmp r4, #0x0
    addle sp, sp, #0xd4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r6, =0x7fff000
    ldr r11, =data_020e59bc
    ldr r5, =data_020e59b0
L_020ab15c:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    ldr r1, [r8, #0x0]
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    smull r3, r2, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r1, r1, lsl #0xc
    mov ip, #0x800
    orr r1, r1, r0, lsr #0x14
    adds r0, ip, r0, lsl #0xc
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    ldr r2, [r5, #0x8]
    sub r0, r0, #0x1000
    smull ip, r1, r2, r0
    mov r0, #0x800
    adds r2, ip, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    ldr r3, [r9, #0x0]
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [sp, #0xc8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r6
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xc
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xc
    orr r3, r3, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    sub r0, r2, #0x800
    ldr r1, [r9, #0x4]
    add r2, sp, #0xbc
    add r0, r1, r0
    str r0, [sp, #0xcc]
    str r10, [sp, #0x0]
    str r10, [sp, #0x4]
    ldr r0, =0x20ae03
    str r7, [sp, #0x8]
    add r1, sp, #0xc8
    mov r3, #0x1000
    bl func_020a60cc
    cmp r0, #0x0
    ldrne r1, [r11, #0x8]
    sub r4, r4, #0x1
    movne r1, r1, asr #0xc
    strne r1, [r0, #0x58]
    cmp r4, #0x0
    bgt L_020ab15c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab29c:
    mov r0, r6, asr #0x1f
    str r0, [sp, #0x20]
    mov r0, #0x0
    ldr r5, =0x7fff000
    str r0, [sp, #0x10]
L_020ab2b0:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r1, =0x667
    mov r2, r0, asr #0x1f
    umull r4, r3, r0, r1
    adds r1, r4, #0x800
    mov r4, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    ldr r0, =0x667
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r4, r4, r0, lsl #0x14
    add r0, r4, #0xcc
    add r1, r0, #0xc00
    mov r0, r1, asr #0x1f
    umull r3, r2, r6, r1
    mla r2, r6, r0, r2
    ldr r0, [sp, #0x20]
    mla r2, r0, r1, r2
    mov r0, #0x800
    adds r1, r3, r0
    mov r0, #0x0
    adc r0, r2, r0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r2, =0x667
    mov r1, r0, asr #0x1f
    umull r11, r2, r0, r2
    adds r3, r11, #0x800
    mov r11, #0x0
    mla r2, r0, r11, r2
    ldr r0, =0x667
    mov r3, r3, lsr #0xc
    mla r2, r1, r0, r2
    mov r0, r11
    adc r0, r2, r0
    orr r3, r3, r0, lsl #0x14
    add r0, r3, #0xcc
    ldr r10, [r8, #0x8]
    add r0, r0, #0xc00
    smull r2, r1, r10, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, r11
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0xc4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r2, =0x2998
    ldr r1, =data_020e59b0
    umull ip, r2, r0, r2
    adds r3, ip, #0x800
    mov ip, #0x0
    ldr r10, [r1, #0x8]
    mla r2, r0, ip, r2
    mov r1, r0, asr #0x1f
    ldr r0, =0x2998
    mov r3, r3, lsr #0xc
    mla r2, r1, r0, r2
    mov r0, ip
    adc r0, r2, r0
    orr r3, r3, r0, lsl #0x14
    ldr r0, =0xffffeb34
    ldr r11, [r9, #0x0]
    add r0, r3, r0
    smull r2, r1, r10, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, ip
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r11, r1
    str r0, [sp, #0xc8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r10, #0x6000
    umull r10, lr, r0, r10
    mov ip, #0x0
    adds r10, r10, #0x800
    mla lr, r0, ip, lr
    mov r11, r0, asr #0x1f
    mov r0, #0x6000
    mla lr, r11, r0, lr
    mov r0, ip
    mov r10, r10, lsr #0xc
    adc r0, lr, r0
    orr r10, r10, r0, lsl #0x14
    ldr r0, =data_020e59bc
    sub r10, r10, #0x3000
    str r10, [r0, #0x0]
    str r4, [sp, #0x0]
    ldr r0, =0x30ae03
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r4, r7}
    bl func_020a60cc
    mov r4, r0
    cmp r4, #0x0
    beq L_020ab4cc
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xe
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xe
    orr r3, r3, r0, lsr #0x12
    mov r0, #0x0
    ldr r1, [r4, #0x20]
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r4, #0x20]
    ldr r0, =data_020e59bc
    ldr r0, [r0, #0x8]
    mov r0, r0, asr #0xc
    str r0, [r4, #0x58]
L_020ab4cc:
    ldr r0, [sp, #0x10]
    add r0, r0, #0x1
    str r0, [sp, #0x10]
    cmp r0, #0xc
    blt L_020ab2b0
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab4e8:
    ldr r0, =0xa00f00
    str r6, [sp, #0x0]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    cmp r0, #0x0
    addeq sp, sp, #0xd4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020e59bc
    add sp, sp, #0xd4
    ldr r1, [r1, #0x8]
    mov r1, r1, asr #0xc
    str r1, [r0, #0x58]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab528:
    mov r10, #0x0
    ldr r4, =0x6488
    ldr r5, =data_020e59bc
    mov r9, r10
    mov r11, r10
L_020ab53c:
    ldr r1, [sp, #0xbc]
    ldr r0, [sp, #0xc0]
    stmia r5, {r1, r11}
    str r0, [sp, #0x0]
    ldr r1, [sp, #0xc4]
    ldr r0, =0x904900
    stmib sp, {r1, r7}
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    movs r8, r0
    beq L_020ab5b4
    mov r0, r9
    mov r1, #0x6000
    bl func_02014910
    mov r3, #0x0
    umull r2, r1, r0, r4
    mla r1, r0, r3, r1
    mov ip, r0, asr #0x1f
    mov r0, #0x800
    adds r2, r2, r0
    mla r1, ip, r4, r1
    mov r0, r3
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r8, #0x48]
    ldr r0, [sp, #0xc4]
    str r0, [r8, #0x34]
L_020ab5b4:
    add r9, r9, #0x1000
    add r10, r10, #0x1
    cmp r10, #0x6
    blt L_020ab53c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab5cc:
    mov r0, #0x0
    str r0, [sp, #0x60]
L_020ab5d4:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xe
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xe
    orr r3, r3, r0, lsr #0x12
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [r9, #0x0]
    sub r0, r2, #0x2000
    add r0, r1, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r5, =0x667
    mov r4, r0, asr #0x1f
    umull ip, r5, r0, r5
    adds r10, ip, #0x800
    mov ip, #0x0
    mla r5, r0, ip, r5
    ldr r0, =0x667
    mov r10, r10, lsr #0xc
    mla r5, r4, r0, r5
    mov r0, ip
    adc r0, r5, r0
    orr r10, r10, r0, lsl #0x14
    add r0, r10, #0xcc
    ldr r11, [r8, #0x8]
    add r0, r0, #0xc00
    smull r5, r4, r11, r0
    mov r0, #0x800
    adds r5, r5, r0
    mov r0, ip
    adc r0, r4, r0
    mov r4, r5, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    str r4, [sp, #0xc4]
    str r6, [sp, #0x0]
    ldr r0, =0x609e03
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    movs r4, r0
    beq L_020ab6fc
    ldr r0, =data_020e59bc
    ldr r0, [r0, #0x8]
    mov r0, r0, asr #0xc
    orr r0, r0, #0x100
    str r0, [r4, #0x58]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xd
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xd
    orr r3, r3, r0, lsr #0x13
    mov r0, #0x0
    ldr r1, [r4, #0x20]
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r4, #0x20]
L_020ab6fc:
    ldr r0, [sp, #0x60]
    add r0, r0, #0x1
    str r0, [sp, #0x60]
    cmp r0, #0x4
    blt L_020ab5d4
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab718:
    mov r8, #0x0
    ldr r9, =data_020e59bc
    mov r5, r6, asr #0x1f
    mov r4, r8
L_020ab728:
    tst r8, #0x1
    ldrne r0, [sp, #0xbc]
    mov r1, #0x3000
    ldreq r0, [sp, #0xbc]
    rsbeq r0, r0, #0x0
    str r0, [r9, #0x0]
    rsb r0, r8, #0x3
    mov r0, r0, lsl #0xc
    str r4, [r9, #0x4]
    bl func_02014910
    umull r11, r10, r6, r0
    mov ip, r0, asr #0x1f
    mla r10, r6, ip, r10
    mla r10, r5, r0, r10
    adds r11, r11, #0x800
    mov r0, #0x0
    mov r11, r11, lsr #0xc
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    str r11, [sp, #0x0]
    str r11, [sp, #0x4]
    ldr r0, =0x904100
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    str r7, [sp, #0x8]
    bl func_020a60cc
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_020ab728
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab7a8:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    adc r2, r2, #0x0
    mov r0, r1, lsr #0xc
    ldr r1, [r8, #0x0]
    orr r0, r0, r2, lsl #0x14
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    ldr r3, [r9, #0x0]
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [sp, #0xc8]
    ldr r1, [r8, #0x4]
    ldr r3, [r9, #0x4]
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [sp, #0xcc]
    ldr r1, =data_020e59bc
    ldr r5, [r9, #0x8]
    ldr r3, [r8, #0x8]
    ldr r2, [r1, #0x0]
    smull r4, r3, r0, r3
    str r2, [sp, #0xbc]
    adds r2, r4, #0x800
    adc r0, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r5, r2
    ldr r2, [r1, #0x4]
    str r0, [sp, #0xd0]
    ldr r0, =data_020e59b0
    str r2, [sp, #0xc0]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x0]
    str r1, [sp, #0xc4]
    add r4, r6, r0
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    sub r1, r4, r6
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r4, r6, r1
    mov r2, #0x0
    mov r1, #0x800
    ldr r3, =data_020e59b0
    mov r0, #0xc00
    ldr r8, [r3, #0x0]
    mov r5, r8, asr #0x1f
    umull r10, r9, r8, r0
    mla r9, r8, r2, r9
    mla r9, r5, r0, r9
    adds r5, r10, #0x800
    adc r0, r9, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    add r0, r6, r5
    cmp r4, r0
    ble L_020ab914
    ldr r3, [r3, #0x4]
    ldr r0, =data_020e4f10
    smull r5, r3, r4, r3
    adds r4, r5, r1
    adc r1, r3, r2
    mov r4, r4, lsr #0xc
    ldr r7, [r0, #0xc]
    orr r4, r4, r1, lsl #0x14
    str r4, [sp, #0x0]
    ldr r0, =0x4003
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r4, r7}
    bl func_020a60cc
L_020ab914:
    ldr r0, =0x5003
    str r4, [sp, #0x0]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ab938:
    ldr r0, =data_020e59bc
    ldr r5, =0x7fff000
    ldr r1, [r0, #0x0]
    mov r0, r6, asr #0x1f
    str r0, [sp, #0x28]
    ldr r0, =data_020e59b0
    str r1, [r0, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x14]
    ldr r0, =0x1999
    sub r0, r0, #0x1000
    str r0, [sp, #0x6c]
L_020ab968:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r4, r0
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r3, =data_020e59b0
    ldr r1, =data_020e59b0
    ldr r3, [r3, #0x0]
    mov r2, r0, asr #0x1f
    str r3, [sp, #0x40]
    ldr r3, [sp, #0x6c]
    ldr r11, [r1, #0x4]
    umull ip, r3, r0, r3
    adds r10, ip, #0x800
    mov ip, #0x0
    mla r3, r0, ip, r3
    ldr r0, [sp, #0x6c]
    mov r10, r10, lsr #0xc
    mla r3, r2, r0, r3
    mov r0, ip
    adc r0, r3, r0
    orr r10, r10, r0, lsl #0x14
    add r0, r10, #0x33
    add r0, r0, #0xb00
    smull r3, r2, r11, r0
    mov r0, #0x800
    adds r3, r3, r0
    mov r0, ip
    adc r0, r2, r0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r0, =data_020e59bc
    mov r1, r4, asr #0x1f
    mov r1, r1, lsl #0xc
    str r2, [r0, #0x0]
    mov r0, #0x800
    adds r2, r0, r4, lsl #0xc
    orr r1, r1, r4, lsr #0x14
    mov r0, ip
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r2, [r8, #0x0]
    ldr r0, [r9, #0x0]
    smull r4, r3, r1, r2
    adds r4, r4, #0x800
    mov r2, ip
    adc r2, r3, r2
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [sp, #0xc8]
    ldr r2, [r8, #0x4]
    ldr r0, [r9, #0x4]
    smull r4, r3, r1, r2
    adds r4, r4, #0x800
    mov r2, ip
    adc r2, r3, r2
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [sp, #0xcc]
    ldr r2, [r8, #0x8]
    ldr r0, [r9, #0x8]
    smull r3, r2, r1, r2
    adds r3, r3, #0x800
    mov r1, ip
    adc r1, r2, r1
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [sp, #0xd0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r3, r0, asr #0x1f
    mov r4, r3, lsl #0xd
    mov r3, #0x800
    adds r3, r3, r0, lsl #0xd
    orr r4, r4, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r4, r0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    ldr r1, [r8, #0x8]
    sub r0, r3, #0x1000
    smull r4, r3, r1, r0
    mov r0, #0x800
    adds r1, r4, r0
    mov r0, #0x0
    adc r0, r3, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x40]
    ldr r2, [sp, #0xc8]
    smull r4, r3, r1, r0
    mov r0, #0x800
    adds r1, r4, r0
    mov r0, #0x0
    adc r0, r3, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r2, r1
    str r0, [sp, #0xc8]
    ldr r0, =data_020e59b0
    ldr r4, [r0, #0x0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r3, r0, asr #0x1f
    mov r10, r3, lsl #0xd
    mov r3, #0x800
    adds r3, r3, r0, lsl #0xd
    orr r10, r10, r0, lsr #0x13
    mov r0, #0x0
    adc r0, r10, r0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    ldr r1, [r8, #0x0]
    sub r0, r3, #0x1000
    smull r10, r3, r1, r0
    mov r0, #0x800
    adds r1, r10, r0
    mov r0, #0x0
    adc r0, r3, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r4, r3, r1, r4
    mov r0, #0x800
    adds r1, r4, r0
    mov r0, #0x0
    ldr r2, [sp, #0xd0]
    adc r0, r3, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [sp, #0xd0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    mov r11, r0
    mov r2, #0x0
    ldr r4, =0x1999
    ldr r0, =data_020e59bc
    umull r10, r4, r11, r4
    ldr r1, [r0, #0x8]
    mov ip, r2
    str r1, [sp, #0x0]
    stmib sp, {r1, r7}
    mla r4, r11, ip, r4
    mov r3, r11, asr #0x1f
    ldr r11, =0x1999
    adds r10, r10, #0x800
    mla r4, r3, r11, r4
    mov r3, r2
    adc r3, r4, r3
    mov r4, r10, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    add r3, r4, #0x33
    add r11, r3, #0x300
    mov r10, r11, asr #0x1f
    umull r4, r3, r6, r11
    mla r3, r6, r10, r3
    ldr r10, [sp, #0x28]
    ldr r0, =0x100f00
    mla r3, r10, r11, r3
    adds r10, r4, #0x800
    mov r4, r2
    adc r4, r3, r4
    mov r3, r10, lsr #0xc
    add r1, sp, #0xc8
    orr r3, r3, r4, lsl #0x14
    bl func_020a60cc
    ldr r0, [sp, #0x14]
    add r0, r0, #0x1
    str r0, [sp, #0x14]
    cmp r0, #0x8
    blt L_020ab968
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abc54:
    mov r0, #0x0
    str r0, [sp, #0x64]
L_020abc5c:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xe
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xe
    orr r3, r3, r0, lsr #0x12
    mov r0, #0x0
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [r9, #0x0]
    sub r0, r2, #0x2000
    add r0, r1, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r5, =0x667
    mov r4, r0, asr #0x1f
    umull ip, r5, r0, r5
    adds r10, ip, #0x800
    mov ip, #0x0
    mla r5, r0, ip, r5
    ldr r0, =0x667
    mov r10, r10, lsr #0xc
    mla r5, r4, r0, r5
    mov r0, ip
    adc r0, r5, r0
    orr r10, r10, r0, lsl #0x14
    add r0, r10, #0xcc
    ldr r11, [r8, #0x8]
    add r0, r0, #0xc00
    smull r5, r4, r11, r0
    mov r0, #0x800
    adds r5, r5, r0
    mov r0, ip
    adc r0, r4, r0
    mov r4, r5, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    str r4, [sp, #0xc4]
    str r6, [sp, #0x0]
    ldr r0, =0x609e03
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x1000
    stmib sp, {r6, r7}
    bl func_020a60cc
    movs r4, r0
    beq L_020abd80
    ldr r0, =data_020e59bc
    ldr r0, [r0, #0x8]
    mov r0, r0, asr #0xc
    str r0, [r4, #0x58]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r2, r0, asr #0x1f
    mov r3, r2, lsl #0xd
    mov r2, #0x800
    adds r2, r2, r0, lsl #0xd
    orr r3, r3, r0, lsr #0x13
    mov r0, #0x0
    ldr r1, [r4, #0x20]
    adc r0, r3, r0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r4, #0x20]
L_020abd80:
    ldr r0, [sp, #0x64]
    add r0, r0, #0x1
    str r0, [sp, #0x64]
    cmp r0, #0x10
    blt L_020abc5c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abd9c:
    ldr r1, =data_020e59b0
    ldr r0, =data_020e4f10
    ldr r1, [r1, #0x0]
    ldr r4, [r0, #0x0]
    mov r1, r1, asr #0xc
    cmp r4, #0x0
    mov r2, #0x0
    bls L_020abde4
    ldr r3, =data_020e59cc
L_020abdc0:
    ldr r0, [r3, #0x58]
    and r0, r0, #0xff
    cmp r1, r0
    moveq r0, #0x1
    beq L_020abde8
    add r2, r2, #0x1
    cmp r2, r4
    add r3, r3, #0x5c
    blo L_020abdc0
L_020abde4:
    mov r0, #0x0
L_020abde8:
    cmp r0, #0x0
    addne sp, sp, #0xd4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0x0
    ldr r9, =data_020e59b0
    ldr r8, =0x3244
    ldr r10, =data_020e59bc
    mov r4, r5
L_020abe08:
    ldr r1, [r10, #0x4]
    ldr r0, =0x907903
    str r1, [sp, #0x0]
    ldr r2, [r10, #0x8]
    add r1, sp, #0xc8
    stmib sp, {r2, r7}
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    cmp r0, #0x0
    beq L_020abe94
    ldr r1, [r0, #0x58]
    mov r11, r4, asr #0x1f
    orr ip, r1, #0x200
    umull r3, r1, r4, r8
    str ip, [r0, #0x58]
    ldr r2, [r9, #0x0]
    orr r2, ip, r2, asr #0xc
    str r2, [r0, #0x58]
    adds r2, r3, #0x800
    mov r3, #0x0
    mla r1, r4, r3, r1
    mla r1, r11, r8, r1
    mov r2, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r2, r2, r1, lsl #0x14
    mov r1, r2, asr #0x1f
    mov r3, r1, lsl #0xb
    mov r1, #0x800
    orr r3, r3, r2, lsr #0x15
    adds r2, r1, r2, lsl #0xb
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r0, #0x48]
L_020abe94:
    add r4, r4, #0x1000
    add r5, r5, #0x1
    cmp r5, #0x2
    blt L_020abe08
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abeac:
    add r0, r6, #0x1000
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    add r1, sp, #0xc8
    mov r0, #0x10000
    mov r2, #0x0
    mov r3, #0x2000
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abed8:
    add r0, r6, #0x1000
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r3, [sp, #0xbc]
    add r1, sp, #0xc8
    mov r0, #0x10000
    mov r2, #0x0
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abf00:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a8e74
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abf1c:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr r4, [r1, #0x74]
    mov r1, #0x0
    umull r3, r2, r4, r0
    mla r2, r4, r1, r2
    mov r4, r1
    mla r2, r4, r0, r2
    ldr r1, =data_020e4f10
    mov r3, r3, lsr #0x5
    orr r3, r3, r2, lsl #0x1b
    sub r0, r0, #0x84
    str r7, [r1, #0x8]
    and r2, r3, r0
    str r2, [r1, #0x14]
    ldr r0, [r1, #0x2c]
    cmp r0, #0x0
    streq r2, [r1, #0x2c]
    ldr r1, =data_020e4f10
    ldr r0, [r1, #0x2c]
    cmp r0, r2
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r2, #0x33
    ldr r2, [sp, #0xbc]
    add r0, r0, #0x300
    cmp r2, #0x12c000
    str r0, [r1, #0x2c]
    movgt r0, #0xfa000
    strgt r0, [sp, #0xbc]
    ldr r0, =data_020e4f10
    add r2, sp, #0xbc
    ldrsb r0, [r0, #0x12]
    cmp r0, #0x0
    beq L_020abfcc
    ldr r1, [sp, #0xc4]
    ldr r0, =0x10003100
    str r1, [sp, #0x0]
    stmib sp, {r1, r7}
    ldr r3, [sp, #0xbc]
    add r1, sp, #0xc8
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abfcc:
    ldr r1, [sp, #0xc4]
    ldr r0, =0x10003300
    str r1, [sp, #0x0]
    stmib sp, {r1, r7}
    ldr r3, [sp, #0xbc]
    add r1, sp, #0xc8
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020abff0:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a911c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac00c:
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
    add r1, sp, #0xc8
    mov r3, r6
    bl func_020a60cc
    ldr r0, =0x6333
    ldr r4, =0x7fff000
    mov r5, #0x4
    rsb r8, r0, #0x6000
L_020ac070:
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
    str r0, [sp, #0xbc]
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
    str r0, [sp, #0xc0]
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
    str r0, [sp, #0xc4]
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
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    sub r5, r5, #0x1
    cmp r5, #0x0
    bgt L_020ac070
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac1a8:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr r4, [r1, #0x74]
    mov r1, #0x0
    umull r2, r3, r4, r0
    mla r3, r4, r1, r3
    mov r4, r1
    mla r3, r4, r0, r3
    mov r4, r2, lsr #0x5
    ldr r1, =data_020c04cc
    orr r4, r4, r3, lsl #0x1b
    ldr r2, [r1, #0x0]
    sub r0, r0, #0x84
    ldr r1, =data_020e4f10
    and r3, r4, r0
    str r3, [r1, #0x14]
    cmp r2, #0x0
    bne L_020ac1fc
    ldr r0, [r1, #0x4c]
    cmp r0, #0x0
    bne L_020ac204
L_020ac1fc:
    ldr r0, =data_020e4f10
    str r3, [r0, #0x4c]
L_020ac204:
    ldr r1, =data_020e4f10
    ldr r0, [r1, #0x4c]
    cmp r0, r3
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r3, #0x99
    mov r2, #0x0
    add r3, r0, #0x100
    str r3, [r1, #0x4c]
    ldr r0, =0x666
    str r2, [sp, #0xbc]
    str r2, [sp, #0xc0]
    str r2, [sp, #0xc4]
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x1605
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac260:
    ldr r0, [r8, #0x4]
    ldr r8, [r8, #0x0]
    mov r0, r0, asr #0xc
    str r0, [sp, #0x44]
    cmp r0, #0x0
    mov r0, #0x0
    str r0, [sp, #0x18]
    addle sp, sp, #0xd4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, r0
    ldr r0, [sp, #0x44]
    mov r5, r8, asr #0x1f
    mov r0, r0, lsl #0xc
    str r0, [sp, #0x2c]
    ldr r0, =0x187a
    add r0, r0, #0x4c00
    str r0, [sp, #0x70]
L_020ac2a4:
    ldr r0, [sp, #0x70]
    mov r2, r4, asr #0x1f
    umull r10, r3, r4, r0
    mov r0, #0x800
    adds r0, r10, r0
    mov r10, #0x0
    mla r3, r4, r10, r3
    ldr r10, [sp, #0x70]
    ldr r1, [sp, #0x2c]
    mla r3, r2, r10, r3
    mov r0, r0, lsr #0xc
    adc r2, r3, #0x0
    orr r0, r0, r2, lsl #0x14
    bl func_02014910
    mov r0, r0, lsl #0x13
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #0x4
    mov r10, r0, lsl #0x1
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r3, =data_020b7490
    mov r1, r10, lsl #0x1
    add r3, r3, r10, lsl #0x1
    ldr r10, =data_020b7490
    mov r2, r0, asr #0x1f
    ldrsh r1, [r10, r1]
    ldr r10, =0x2ccd
    ldrsh r3, [r3, #0x2]
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    ldr r0, =0x2ccd
    mov r11, r11, lsr #0xc
    mla r10, r2, r0, r10
    mov r0, ip
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0x33
    umull r11, r10, r8, r3
    mov ip, r3, asr #0x1f
    mla r10, r8, ip, r10
    add r2, r0, #0x300
    ldr r0, =data_020e59c8
    mla r10, r5, r3, r10
    adds r11, r11, #0x800
    str r2, [r0, #0x0]
    mov r0, r1, asr #0x1f
    adc r10, r10, #0x0
    mov r3, r11, lsr #0xc
    orr r3, r3, r10, lsl #0x14
    umull r11, r10, r8, r1
    mla r10, r8, r0, r10
    ldr r2, [r9, #0x0]
    mla r10, r5, r1, r10
    mov r0, #0x800
    adds r1, r11, r0
    add r2, r2, r3
    mov r0, #0x0
    str r2, [sp, #0xc8]
    ldr r2, [r9, #0x4]
    adc r0, r10, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [sp, #0xcc]
    ldr r0, [r9, #0x8]
    str r0, [sp, #0xd0]
    ldr r0, =0x187a
    str r3, [sp, #0xbc]
    str r1, [sp, #0xc0]
    str r0, [sp, #0xc4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    mov r0, #0x0
    adc r0, r2, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x3303
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    ldr r0, [sp, #0x18]
    add r4, r4, #0x1000
    add r1, r0, #0x1
    ldr r0, [sp, #0x44]
    str r1, [sp, #0x18]
    cmp r1, r0
    blt L_020ac2a4
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac448:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a97fc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac464:
    mov r0, r8
    bl func_01ff8778
    cmp r0, #0x4
    addle sp, sp, #0xd4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r8
    mov r1, r8
    bl func_01ff84a0
    add r3, sp, #0xbc
    mov r2, #0x6
L_020ac48c:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020ac48c
    mov r0, #0x800
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x20002100
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac4dc:
    mov r0, r8
    bl func_01ff8778
    cmp r0, #0x4
    addle sp, sp, #0xd4
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r8
    mov r1, r8
    bl func_01ff84a0
    add r3, sp, #0xbc
    mov r2, #0x6
L_020ac504:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020ac504
    mov r0, #0x800
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x20005400
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac554:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a9ad4
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac570:
    ldr r10, [sp, #0xbc]
    mov r0, #0x214
    umull r2, r3, r10, r0
    mov ip, #0x0
    mla r3, r10, ip, r3
    adds r2, r2, #0x800
    mov r4, r2, lsr #0xc
    ldr r11, [sp, #0xc0]
    mov r2, r10, asr #0x1f
    mov ip, #0x214
    mla r3, r2, ip, r3
    adc r2, r3, #0x0
    umull lr, r1, r11, r0
    ldr r8, [sp, #0xc8]
    orr r4, r4, r2, lsl #0x14
    add r2, r8, r4
    mov r8, #0x0
    mla r1, r11, r8, r1
    rsb r4, r10, #0x0
    str r2, [sp, #0x48]
    adds r2, lr, #0x800
    ldr r5, [sp, #0xc4]
    mov r10, r11, asr #0x1f
    mov r8, ip
    mla r1, r10, r8, r1
    sub r0, r0, #0x7b
    umull ip, r8, r5, r0
    str ip, [sp, #0x50]
    mov ip, #0x0
    mov r2, r2, lsr #0xc
    adc r1, r1, #0x0
    ldr r3, [sp, #0xcc]
    orr r2, r2, r1, lsl #0x14
    add r1, r3, r2
    str r1, [sp, #0x4c]
    ldr r1, [sp, #0xd0]
    mov r2, #0x800
    str r1, [sp, #0x68]
    mov r1, r5, asr #0x1f
    str r1, [sp, #0x54]
    mla r8, r5, ip, r8
    ldr r5, [sp, #0x54]
    mov r1, #0x800
    mla r8, r5, r0, r8
    ldr r0, [sp, #0x50]
    mov r3, r4, asr #0x1f
    adds r5, r0, #0x800
    str r3, [sp, #0x58]
    adc r0, r8, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    add r0, r5, #0x33
    add r5, r0, #0x300
    ldr r0, [sp, #0x68]
    sub r1, r1, #0x334
    add r0, r0, r5
    str r0, [sp, #0xd0]
    mov r0, ip
    umull r8, r5, r11, r1
    mla r5, r11, r0, r5
    mla r5, r10, r1, r5
    adds r1, r8, #0x800
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x48]
    sub r2, r2, #0x334
    add r0, r0, r1
    str r0, [sp, #0xc8]
    mov r0, ip
    umull r5, r1, r4, r2
    mla r1, r4, r0, r1
    ldr r0, [sp, #0x58]
    add r3, sp, #0xbc
    mla r1, r0, r2, r1
    adds r2, r5, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x4c]
    mov lr, #0x6
    add r0, r0, r1
    str r0, [sp, #0xcc]
L_020ac6bc:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs lr, lr, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020ac6bc
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0xcd
    mov r2, #0x0
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    adds r2, r4, #0x800
    mla r3, r0, r1, r3
    mov r2, r2, lsr #0xc
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    add r0, r2, #0x99
    add r4, r0, #0x100
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xbc]
    sub r0, r1, #0x1000
    add r0, r3, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xc0]
    sub r0, r1, #0x1000
    add r0, r3, r0
    str r0, [sp, #0xcc]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    ldr r5, [sp, #0xc4]
    mov r3, r6
    add r0, r5, r0
    str r0, [sp, #0xd0]
    str r4, [sp, #0x0]
    mov r0, #0xe
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ac804:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr r4, [r1, #0x74]
    mov r1, #0x0
    umull r2, r3, r4, r0
    mla r3, r4, r1, r3
    mov r4, r1
    mla r3, r4, r0, r3
    mov r4, r2, lsr #0x5
    ldr r1, =data_020c04cc
    orr r4, r4, r3, lsl #0x1b
    ldr r2, [r1, #0x0]
    sub r0, r0, #0x84
    ldr r1, =data_020e4f10
    and r3, r4, r0
    str r3, [r1, #0x14]
    cmp r2, #0x0
    bne L_020ac858
    ldr r0, [r1, #0x50]
    cmp r0, #0x0
    bne L_020ac860
L_020ac858:
    ldr r0, =data_020e4f10
    str r3, [r0, #0x50]
L_020ac860:
    ldr r0, =data_020e4f10
    ldr r0, [r0, #0x50]
    cmp r0, r3
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r3, r1, lsl #0xb
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xb
    orr r3, r3, r0, lsr #0x15
    ldr r2, =data_020e4f10
    b L_020ac918
L_020ac918:
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    ldr r3, [r2, #0x14]
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [r2, #0x50]
    ldr r0, [sp, #0xd0]
    cmp r0, r6
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x148
    mov r2, #0x0
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    adds r2, r4, #0x800
    mla r3, r0, r1, r3
    mov r2, r2, lsr #0xc
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    add r4, r2, #0x51
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xbc]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xc0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r5, #0x3000
    mov r8, #0x0
    umull r11, r10, r0, r5
    mla r10, r0, r8, r10
    mov r9, r0, asr #0x1f
    mla r10, r9, r5, r10
    adds r5, r11, #0x800
    adc r0, r10, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    add r0, r5, #0x1000
    str r0, [sp, #0xc4]
    str r4, [sp, #0x0]
    stmib sp, {r4, r7}
    ldr r0, =0x40807
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    ldr r0, [sp, #0xcc]
    ldr r1, [sp, #0xd0]
    add r0, r0, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0xcc]
    add r0, r1, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0xd0]
    cmp r0, r6
    bge L_020aca8c
    ldr r0, =0x40807
    str r4, [sp, #0x0]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    stmib sp, {r4, r7}
    bl func_020a60cc
L_020aca8c:
    ldr r0, [sp, #0xd0]
    ldr r1, [sp, #0xcc]
    add r0, r0, #0x99
    add r0, r0, #0x100
    sub r1, r1, #0x800
    str r1, [sp, #0xcc]
    str r0, [sp, #0xd0]
    cmp r0, r6
    addge sp, sp, #0xd4
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =0x40807
    str r4, [sp, #0x0]
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020acad8:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr r4, [r1, #0x74]
    mov r1, #0x0
    umull r2, r3, r4, r0
    mla r3, r4, r1, r3
    mov r4, r1
    mla r3, r4, r0, r3
    mov r4, r2, lsr #0x5
    ldr r1, =data_020c04cc
    orr r4, r4, r3, lsl #0x1b
    ldr r2, [r1, #0x0]
    sub r0, r0, #0x84
    ldr r1, =data_020e4f10
    and r3, r4, r0
    str r3, [r1, #0x14]
    cmp r2, #0x0
    bne L_020acb2c
    ldr r0, [r1, #0x54]
    cmp r0, #0x0
    bne L_020acb34
L_020acb2c:
    ldr r0, =data_020e4f10
    str r3, [r0, #0x54]
L_020acb34:
    ldr r0, =data_020e4f10
    ldr r0, [r0, #0x54]
    cmp r0, r3
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r3, r1, lsl #0xb
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xb
    orr r3, r3, r0, lsr #0x15
    adc r0, r3, #0x0
    ldr r2, =data_020e4f10
    mov r1, r1, lsr #0xc
    cmp r6, #0x7000
    ldr r3, [r2, #0x14]
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    str r0, [r2, #0x54]
    movgt r6, #0x7000
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x148
    mov r2, #0x0
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    adds r2, r4, #0x800
    mla r3, r0, r1, r3
    mov r2, r2, lsr #0xc
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    add r4, r2, #0x51
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xbc]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    str r0, [sp, #0xc0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x2000
    str r0, [sp, #0xc4]
    str r4, [sp, #0x0]
    stmib sp, {r4, r7}
    ldr r0, =0x10807
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    ldr r0, [sp, #0xcc]
    ldr r1, [sp, #0xd0]
    add r0, r0, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0xcc]
    add r0, r1, #0x33
    add r0, r0, #0x300
    str r0, [sp, #0xd0]
    str r4, [sp, #0x0]
    stmib sp, {r4, r7}
    ldr r0, =0x10807
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    ldr r1, [sp, #0xd0]
    ldr r0, [sp, #0xcc]
    add r1, r1, #0x99
    sub r0, r0, #0x800
    add r1, r1, #0x100
    str r0, [sp, #0xcc]
    str r1, [sp, #0xd0]
    str r4, [sp, #0x0]
    ldr r0, =0x10807
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020acd0c:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a9cf8
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020acd28:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r3, [r8, #0x0]
    mov r1, r0, asr #0x1f
    mov r2, r3, asr #0x1f
    mov r4, r2, lsl #0xf
    mov r2, r1, lsl #0xf
    mov r1, #0x800
    adds r5, r1, r3, lsl #0xf
    orr r4, r4, r3, lsr #0x11
    adc r3, r4, #0x0
    adds r1, r1, r0, lsl #0xf
    orr r2, r2, r0, lsr #0x11
    mov r4, r5, lsr #0xc
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r9, #0x0]
    orr r4, r4, r3, lsl #0x14
    add r2, r0, r4
    sub r0, r1, #0x4000
    add r0, r2, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r4, [r9, #0x4]
    ldr r3, [r8, #0x4]
    mov r1, #0x800
    mov r2, r3, asr #0x1f
    mov r2, r2, lsl #0xf
    orr r2, r2, r3, lsr #0x11
    adds r3, r1, r3, lsl #0xf
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r3, r4, r3
    adds r1, r1, r0, lsl #0xf
    mov r2, r1, lsr #0xc
    mov r1, r0, asr #0x1f
    mov r1, r1, lsl #0xf
    orr r1, r1, r0, lsr #0x11
    adc r0, r1, #0x0
    orr r2, r2, r0, lsl #0x14
    sub r0, r2, #0x4000
    add r0, r3, r0
    str r0, [sp, #0xcc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    ldr r4, [r9, #0x8]
    ldr r3, [r8, #0x8]
    mov r1, #0x800
    mov r2, r3, asr #0x1f
    mov r2, r2, lsl #0xf
    orr r2, r2, r3, lsr #0x11
    adds r3, r1, r3, lsl #0xf
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r3, r4, r3
    adds r1, r1, r0, lsl #0xf
    mov r2, r1, lsr #0xc
    mov r1, r0, asr #0x1f
    mov r1, r1, lsl #0xf
    orr r1, r1, r0, lsr #0x11
    adc r0, r1, #0x0
    orr r2, r2, r0, lsl #0x14
    sub r0, r2, #0x4000
    add r0, r3, r0
    str r0, [sp, #0xd0]
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
    sub r0, r1, #0x800
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
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
    str r0, [sp, #0xc0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xc
    orr r2, r2, r0, lsr #0x14
    mov r1, r1, lsr #0xc
    adc r0, r2, #0x0
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x800
    str r0, [sp, #0xc4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r4, =0x11f
    mov r5, #0x0
    umull r9, r8, r0, r4
    mla r8, r0, r5, r8
    mov r6, r0, asr #0x1f
    mla r8, r6, r4, r8
    adds r4, r9, #0x800
    adc r0, r8, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r0, r4, #0xeb
    add r0, r0, #0x100
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x87007
    mov r3, #0x800
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020acf60:
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
    add r1, sp, #0xc8
    mov r3, r6
    bl func_020a60cc
    movs r5, r6, asr #0xc
    addeq sp, sp, #0xd4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =0x3333
    ldr r4, =0x7fff000
    rsb r8, r0, #0x3000
L_020acfcc:
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
    str r0, [sp, #0xbc]
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
    str r0, [sp, #0xc0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    ldr r1, =0x3333
    mov r2, r0, asr #0x1f
    umull r9, r3, r0, r1
    adds r1, r9, #0x800
    mov r9, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    ldr r0, =0x3333
    mla r3, r2, r0, r3
    mov r0, r1
    adc r0, r3, r0
    orr r9, r9, r0, lsl #0x14
    add r0, r9, r8
    str r0, [sp, #0xc4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    mov r10, #0xcd
    umull ip, r10, r0, r10
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    mov r9, r0, asr #0x1f
    mov r0, #0xcd
    mla r10, r9, r0, r10
    mov r0, ip
    mov r11, r11, lsr #0xc
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0x99
    add r0, r0, #0x100
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x3001
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, r6
    bl func_020a60cc
    subs r5, r5, #0x1
    bne L_020acfcc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad100:
    ldr r1, =data_020dc19c
    mov r0, #0x83
    ldr r4, [r1, #0x74]
    mov r1, #0x0
    umull r2, r3, r4, r0
    mla r3, r4, r1, r3
    mov r4, r1
    mla r3, r4, r0, r3
    mov r4, r2, lsr #0x5
    ldr r1, =data_020c04cc
    orr r4, r4, r3, lsl #0x1b
    ldr r2, [r1, #0x0]
    sub r0, r0, #0x84
    ldr r1, =data_020e4f10
    and r3, r4, r0
    str r3, [r1, #0x14]
    cmp r2, #0x0
    bne L_020ad154
    ldr r0, [r1, #0x58]
    cmp r0, #0x0
    bne L_020ad15c
L_020ad154:
    ldr r0, =data_020e4f10
    str r3, [r0, #0x58]
L_020ad15c:
    ldr r0, =data_020e4f10
    ldr r1, [r0, #0x58]
    cmp r1, r3
    addgt sp, sp, #0xd4
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r3, #0x800
    str r1, [r0, #0x58]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xe
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xe
    orr r2, r2, r0, lsr #0x12
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x2000
    str r0, [sp, #0xbc]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xe
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xe
    orr r2, r2, r0, lsr #0x12
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x2000
    str r0, [sp, #0xc0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0x6000
    mov r2, #0x0
    umull r5, r4, r0, r1
    mla r4, r0, r2, r4
    mov r3, r0, asr #0x1f
    mla r4, r3, r1, r4
    adds r1, r5, #0x800
    adc r0, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0xc4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r4, =0x4cd
    mov r3, r6
    mov r5, #0x0
    umull r9, r8, r0, r4
    mla r8, r0, r5, r8
    mov r6, r0, asr #0x1f
    mla r8, r6, r4, r8
    adds r4, r9, #0x800
    adc r0, r8, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r0, r4, #0x99
    add r0, r0, #0x500
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x1008
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad288:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, r6, lsl #0x1
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    ldr r1, [r8, #0x4]
    sub r0, r2, r6
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    mov r3, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r3, r3, r1, lsl #0x14
    ldr r1, [sp, #0xc8]
    ldr r5, [sp, #0xcc]
    sub r1, r1, r3
    str r1, [sp, #0xc8]
    ldr r1, [r8, #0x0]
    mov r3, #0x2000
    smull r4, r1, r0, r1
    adds r4, r4, #0x800
    adc r0, r1, #0x0
    mov r1, r4, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r5, r1
    str r0, [sp, #0xcc]
    str r3, [sp, #0x0]
    mov r2, #0x0
    add r1, sp, #0xc8
    mov r0, #0x3000
    stmib sp, {r3, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad320:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a95b0
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad33c:
    ldr r2, [r8, #0x4]
    mov r0, #0x800
    mov r1, r2, asr #0x1f
    mov r1, r1, lsl #0xb
    adds r3, r0, r2, lsl #0xb
    orr r1, r1, r2, lsr #0x15
    adc r0, r1, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r0, =0x8001100
    add r1, sp, #0xc8
    mov r2, #0x0
    mov r3, #0x28
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad388:
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x1199
    mov r2, #0x0
    umull r4, r3, r0, r1
    adds r4, r4, #0x800
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adc r0, r3, #0x0
    mov r1, r4, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x33
    ldr r1, =data_020e59c8
    add r0, r0, #0xb00
    str r0, [r1, #0x0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x999
    mov r2, #0x0
    mov r3, r0, asr #0x1f
    umull r5, r4, r0, r1
    mla r4, r0, r2, r4
    mla r4, r3, r1, r4
    adds r1, r5, #0x800
    adc r0, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, #0x33
    add r4, r0, #0x300
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    ldr r3, [sp, #0xc8]
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    add r0, r3, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    ldr r3, [sp, #0xcc]
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xd
    orr r2, r2, r0, lsr #0x13
    mov r1, #0x800
    adds r1, r1, r0, lsl #0xd
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x1000
    add r0, r3, r0
    str r0, [sp, #0xcc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r5, r0, asr #0x1f
    mov r2, #0x0
    ldr r1, =0x666
    ldr r3, =0xfffffccd
    umull r8, r6, r0, r1
    mla r6, r0, r2, r6
    mla r6, r5, r1, r6
    adds r1, r8, #0x800
    adc r0, r6, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    ldr r1, =0x7fff000
    bl func_02014910
    mov r5, r0, asr #0x1f
    mov r2, #0x0
    ldr r1, =0x666
    ldr r3, =0xfffffccd
    umull r8, r6, r0, r1
    mla r6, r0, r2, r6
    mla r6, r5, r1, r6
    adds r1, r8, #0x800
    adc r0, r6, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    str r0, [sp, #0xc0]
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
    add r0, r1, #0x1000
    str r0, [sp, #0xc4]
    str r4, [sp, #0x0]
    ldr r0, =0x103
    add r1, sp, #0xc8
    add r2, sp, #0xbc
    mov r3, #0x28
    stmib sp, {r4, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad574:
    ldr r1, =0xccc
    mov r2, r6, asr #0x1f
    umull r10, r8, r6, r1
    mov ip, r2, lsl #0xd
    mov r1, #0x800
    ldr r0, =0xccc
    adds r1, r1, r6, lsl #0xd
    mov r3, r0, lsr #0x2
    orr ip, ip, r6, lsr #0x13
    mov r0, #0x6000
    adc ip, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    umull r0, r11, r6, r0
    mov ip, #0x0
    mla r11, r6, ip, r11
    mov ip, #0x6000
    adds r0, r0, #0x800
    mla r11, r2, ip, r11
    adc r11, r11, #0x0
    adds r10, r10, #0x800
    mov r10, r10, lsr #0xc
    str r10, [sp, #0x3c]
    mov r10, #0x0
    mla r8, r6, r10, r8
    ldr r10, =0xccc
    mov r0, r0, lsr #0xc
    mla r8, r2, r10, r8
    adc r10, r8, #0x0
    ldr r8, [sp, #0x3c]
    mov r9, #0x9
    orr r8, r8, r10, lsl #0x14
    mov r10, #0x0
    umull lr, r5, r6, r3
    mla r5, r6, r10, r5
    str r8, [sp, #0x3c]
    mla r5, r2, r3, r5
    adds r8, lr, #0x800
    orr r0, r0, r11, lsl #0x14
    mov r11, r8, lsr #0xc
    adc r3, r5, #0x0
    orr r11, r11, r3, lsl #0x14
    rsb r3, r11, #0x0
    rsb r4, r9, #0x298
    str r3, [sp, #0x38]
    mov r3, #0x0
    umull r10, r5, r6, r4
    mla r5, r6, r3, r5
    adds r3, r10, #0x800
    mla r5, r2, r4, r5
    adc r2, r5, #0x0
    mov r3, r3, lsr #0xc
    rsb r8, r1, #0x0
    orr r3, r3, r2, lsl #0x14
    ldr r2, [sp, #0x3c]
    sub r4, r1, r8
    ldr r1, [sp, #0x38]
    sub r2, r3, r2
    str r2, [sp, #0x30]
    mov r2, r2, asr #0x1f
    sub r0, r0, r1
    ldr r5, =0x7fff000
    str r2, [sp, #0x34]
    str r0, [sp, #0x5c]
L_020ad674:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    smull r2, r1, r0, r4
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r8, r1
    str r0, [sp, #0xbc]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    smull r2, r1, r0, r4
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r8, r1
    str r0, [sp, #0xc0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r1, [sp, #0x5c]
    smull r2, r1, r0, r1
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [sp, #0x38]
    add r0, r0, r1
    str r0, [sp, #0xc4]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r5
    bl func_02014910
    ldr r10, [sp, #0x30]
    mov lr, r0, asr #0x1f
    umull ip, r11, r0, r10
    adds r10, ip, #0x800
    mov ip, r10, lsr #0xc
    ldr r10, [sp, #0x34]
    add r1, sp, #0xc8
    mla r11, r0, r10, r11
    ldr r0, [sp, #0x30]
    add r2, sp, #0xbc
    mla r11, lr, r0, r11
    mov r0, #0x0
    adc r0, r11, r0
    orr ip, ip, r0, lsl #0x14
    ldr r0, [sp, #0x3c]
    mov r3, r6
    add r0, r0, ip
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x2501
    bl func_020a60cc
    sub r9, r9, #0x1
    cmp r9, #0x0
    bgt L_020ad674
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad790:
    mov r4, r6, asr #0x1f
    mov r1, r4, lsl #0xb
    mov r0, #0x800
    adds r2, r0, r6, lsl #0xb
    orr r1, r1, r6, lsr #0x15
    mov r5, r2, lsr #0xc
    adc r1, r1, #0x0
    orr r5, r5, r1, lsl #0x14
    ldr r3, =0xb33
    ldr r0, =data_020e59c8
    add r1, sp, #0xc8
    str r3, [r0, #0x0]
    str r5, [sp, #0x0]
    mov r2, #0x0
    mov r0, #0x100
    mov r3, #0x28
    stmib sp, {r5, r7}
    bl func_020a60cc
    mov r1, r4, lsl #0xd
    mov r0, #0x800
    adds r2, r0, r6, lsl #0xd
    orr r1, r1, r6, lsr #0x13
    adc r0, r1, #0x0
    mov r4, r2, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    rsb r6, r4, #0x0
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    sub r1, r4, r6
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r3, [sp, #0xc8]
    add r0, r6, r1
    add r0, r3, r0
    str r0, [sp, #0xc8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    sub r1, r4, r6
    smull r2, r1, r0, r1
    adds r2, r2, #0x800
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r6, r1
    ldr r1, [sp, #0xcc]
    mov r3, #0x1400
    add r0, r1, r0
    ldr r1, =data_020e59c8
    str r0, [sp, #0xcc]
    str r3, [r1, #0x0]
    str r5, [sp, #0x0]
    mov r2, #0x0
    mov r0, #0x100
    add r1, sp, #0xc8
    mov r3, #0x28
    stmib sp, {r5, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad898:
    str r6, [sp, #0x0]
    add r1, sp, #0xc8
    mov r0, #0x6400
    mov r2, #0x0
    mov r3, #0x28
    stmib sp, {r6, r7}
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad8bc:
    cmp r6, #0x9000
    mov r2, #0x0
    blt L_020ad910
    ldr r0, =0xb33
    mov r1, r6, asr #0x1f
    umull r5, r4, r6, r0
    mla r4, r6, r2, r4
    mla r4, r1, r0, r4
    adds r5, r5, #0x800
    adc r0, r4, #0x0
    mov r1, r5, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r0, =0x10002400
    add r1, sp, #0xc8
    sub r3, r3, #0x108
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad910:
    mov r3, #0xcc
    umull r4, r1, r6, r3
    mla r1, r6, r2, r1
    mov r0, r6, asr #0x1f
    mla r1, r0, r3, r1
    adds r4, r4, #0x800
    adc r0, r1, #0x0
    mov r1, r4, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r0, =0x10003400
    add r1, sp, #0xc8
    add r3, r3, #0xcd
    str r7, [sp, #0x8]
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad958:
    ldr r0, =0xb33
    mov r2, #0x0
    umull r4, r3, r6, r0
    mla r3, r6, r2, r3
    mov r1, r6, asr #0x1f
    mla r3, r1, r0, r3
    adds r4, r4, #0x800
    adc r0, r3, #0x0
    mov r1, r4, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    add r1, sp, #0xc8
    mov r0, #0x5a00
    mov r3, #0xff000
    str r7, [sp, #0x8]
    bl func_020a60cc
    cmp r0, #0x0
    movne r1, #0x12c000
    strne r1, [r0, #0x44]
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad9b0:
    ldr r3, =data_020e4f10
    add r0, sp, #0xc8
    add r4, sp, #0xbc
    ldr r6, =data_020e59bc
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldr r5, =data_020e59b0
    ldmia r4, {r0, r1, r2}
    add sp, sp, #0xd4
    stmia r5, {r0, r1, r2}
    str r7, [r3, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ad9e0:
    mov r0, #0x1000
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =0x50005000
    b L_020ada50
L_020ada50:
    add r1, sp, #0xc8
    sub r3, r3, #0x108
    mov r2, #0x0
    str r7, [sp, #0x8]
    bl func_020a60cc
    cmp r0, #0x0
    addeq sp, sp, #0xd4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, r0, #0xc
    add r3, r0, #0x24
    mov r2, #0x6
L_020ada7c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020ada7c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020adaa8:
    add r4, sp, #0xa4
    mov r3, r9
    mov r2, #0x6
L_020adab4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020adab4
    add r4, sp, #0xb0
    mov r3, r8
    mov r2, #0x6
L_020adae4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020adae4
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r2, =data_020e59bc
    ldr r1, =0x4cc
    ldr r5, [r2, #0x0]
    mov r2, #0x0
    umull r10, r6, r5, r1
    mla r6, r5, r2, r6
    mov r2, r5, asr #0x1f
    mla r6, r2, r1, r6
    adds r1, r10, #0x800
    ldr r4, [r8, #0x0]
    mov r3, r0, asr #0x1f
    mov r3, r3, lsl #0xf
    mov r2, r4, asr #0x1f
    adc r5, r6, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r5, lsl #0x14
    mov r5, r2, lsl #0xe
    mov r2, #0x800
    orr r5, r5, r4, lsr #0x12
    adds r6, r2, r4, lsl #0xe
    adc r4, r5, #0x0
    adds r2, r2, r0, lsl #0xf
    orr r3, r3, r0, lsr #0x11
    mov r5, r6, lsr #0xc
    ldr r10, [r9, #0x0]
    orr r5, r5, r4, lsl #0x14
    mov r2, r2, lsr #0xc
    adc r0, r3, #0x0
    orr r2, r2, r0, lsl #0x14
    add r4, r10, r5
    sub r0, r2, #0x4000
    add r0, r4, r0
    add r0, r1, r0
    str r0, [sp, #0xa4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =data_020e59bc
    ldr r3, [r8, #0x4]
    ldr r10, [r1, #0x4]
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xf
    mov r1, r3, asr #0x1f
    mov r4, r1, lsl #0xe
    ldr r1, =0x4cc
    mov r6, r10, asr #0x1f
    umull ip, r11, r10, r1
    mov r1, #0x0
    mla r11, r10, r1, r11
    ldr r1, =0x4cc
    mov lr, #0x800
    mla r11, r6, r1, r11
    adds r1, ip, #0x800
    adc r6, r11, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r6, lsl #0x14
    orr r4, r4, r3, lsr #0x12
    adds r6, lr, r3, lsl #0xe
    adc r3, r4, #0x0
    mov r4, r6, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    ldr r5, [r9, #0x4]
    orr r2, r2, r0, lsr #0x11
    adds r3, lr, r0, lsl #0xf
    adc r0, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r4, r5, r4
    sub r0, r2, #0x4000
    add r0, r4, r0
    add r0, r1, r0
    str r0, [sp, #0xa8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r2, =data_020e59bc
    ldr r6, [r8, #0x8]
    ldr r10, [r2, #0x8]
    ldr r2, =0x4cc
    ldr r1, [r9, #0x8]
    mov r5, r6, asr #0x1f
    mov r8, r5, lsl #0xe
    mov r5, r0, asr #0x1f
    mov r5, r5, lsl #0xf
    mov r4, #0x0
    umull ip, r11, r10, r2
    mla r11, r10, r4, r11
    mov r9, r10, asr #0x1f
    mla r11, r9, r2, r11
    adds r2, ip, #0x800
    mov r3, #0x800
    orr r8, r8, r6, lsr #0x12
    adc r4, r11, #0x0
    mov r2, r2, lsr #0xc
    adds r6, r3, r6, lsl #0xe
    orr r2, r2, r4, lsl #0x14
    adc r4, r8, #0x0
    mov r6, r6, lsr #0xc
    orr r6, r6, r4, lsl #0x14
    add r4, r1, r6
    adds r1, r3, r0, lsl #0xf
    orr r5, r5, r0, lsr #0x11
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0x4000
    add r0, r4, r0
    add r0, r2, r0
    str r0, [sp, #0xac]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =0x666
    mov r2, #0x0
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r4, r4, #0x800
    ldr r1, =data_020e59bc
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    ldr r0, =0xfffffccd
    orr r3, r3, r2, lsl #0x14
    ldr r1, [r1, #0x0]
    add r0, r3, r0
    add r0, r1, r0
    str r0, [sp, #0xb0]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r2, =data_020e59bc
    ldr r1, =0x666
    ldr r8, [r2, #0x4]
    mov r2, #0x0
    umull r6, r5, r0, r1
    mla r5, r0, r2, r5
    mov r4, r0, asr #0x1f
    mla r5, r4, r1, r5
    adds r1, r6, #0x800
    ldr r3, =0xfffffccd
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    add r0, r8, r0
    str r0, [sp, #0xb4]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    ldr r1, =data_020e59bc
    mov r2, #0x0
    ldr r8, [r1, #0x8]
    ldr r1, =0x666
    mov r4, r0, asr #0x1f
    umull r6, r5, r0, r1
    mla r5, r0, r2, r5
    mla r5, r4, r1, r5
    adds r1, r6, #0x800
    ldr r3, =0xfffffccd
    adc r0, r5, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r1, r3
    add r0, r8, r0
    str r0, [sp, #0xb8]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r4, #0xcd
    mov r5, #0x0
    umull r9, r8, r0, r4
    mla r8, r0, r5, r8
    mov r6, r0, asr #0x1f
    mla r8, r6, r4, r8
    adds r4, r9, #0x800
    adc r0, r8, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    add r0, r4, #0x66
    add r0, r0, #0x600
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x90003
    add r1, sp, #0xa4
    add r2, sp, #0xb0
    mov r3, #0x1000
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ade28:
    ldr r0, [sp, #0xbc]
    ldr r1, [sp, #0xc0]
    str r0, [sp, #0xc]
    mov r0, r1, asr #0xc
    adds r10, r0, #0x1
    addeq sp, sp, #0xd4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r9, r6, lsl #0x1
    mov r8, r9, asr #0x1f
L_020ade4c:
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
    str r0, [sp, #0xbc]
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
    str r0, [sp, #0xc0]
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
    str r0, [sp, #0xc4]
    ldr r0, [sp, #0xc]
    add r1, sp, #0xc8
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x3003
    add r2, sp, #0xbc
    mov r3, #0x1000
    bl func_020a60cc
    subs r10, r10, #0x1
    bne L_020ade4c
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020adf30:
    ldr r0, =data_020e4f10
    ldrsb r0, [r0, #0x12]
    cmp r0, #0x0
    addne sp, sp, #0xd4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r3, sp, #0x8c
    mov r2, #0x6
L_020adf4c:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020adf4c
    add r3, sp, #0x98
    mov r2, #0x6
L_020adf78:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020adf78
    mov r6, #0x6000
    ldr r4, =0x7fff000
    mov r5, #0x0
    mov r8, r6
    mov r9, #0x52
L_020adfb0:
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    umull r10, r3, r0, r6
    adds r1, r10, #0x800
    mov r10, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r6, r3
    mov r0, r1
    adc r0, r3, r0
    orr r10, r10, r0, lsl #0x14
    sub r0, r10, #0x3000
    str r0, [sp, #0x98]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    umull r10, r3, r0, r8
    adds r1, r10, #0x800
    mov r10, r1, lsr #0xc
    mov r1, #0x0
    mla r3, r0, r1, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r8, r3
    mov r0, r1
    adc r0, r3, r0
    orr r10, r10, r0, lsl #0x14
    sub r0, r10, #0x3000
    str r0, [sp, #0x9c]
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
    add r0, r1, #0x2000
    str r0, [sp, #0xa0]
    bl func_02003b14
    mov r0, r0, lsl #0xc
    mov r1, r4
    bl func_02014910
    umull ip, r10, r0, r9
    adds r11, ip, #0x800
    mov ip, #0x0
    mla r10, r0, ip, r10
    mov r3, r0, asr #0x1f
    mla r10, r3, r9, r10
    mov r0, ip
    mov r11, r11, lsr #0xc
    adc r0, r10, r0
    orr r11, r11, r0, lsl #0x14
    add r0, r11, #0x7a
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    ldr r0, =0x21001
    ldr r3, [sp, #0x94]
    add r1, sp, #0x8c
    add r2, sp, #0x98
    bl func_020a60cc
    add r5, r5, #0x1
    cmp r5, #0xa
    blt L_020adfb0
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae0d8:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020a93ac
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae0f4:
    add r3, sp, #0x74
    mov r2, #0x6
L_020ae0fc:
    ldrb r0, [r9, #0x0]
    ldrb r1, [r9, #0x1]
    add r9, r9, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020ae0fc
    add r3, sp, #0x80
    mov r2, #0x6
L_020ae128:
    ldrb r0, [r8, #0x0]
    ldrb r1, [r8, #0x1]
    add r8, r8, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020ae128
    mov r1, #0x0
    mov r0, #0x1000
    str r1, [sp, #0x80]
    str r0, [sp, #0x84]
    str r1, [sp, #0x88]
    bl func_02003b14
    ldr r1, =0x7fff000
    mov r0, r0, lsl #0xc
    bl func_02014910
    mov r1, #0xcd
    umull r2, r3, r0, r1
    mov r4, #0x0
    adds r2, r2, #0x800
    mov r5, r2, lsr #0xc
    mla r3, r0, r4, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r1, r3
    adc r0, r3, #0x0
    orr r5, r5, r0, lsl #0x14
    add r0, r5, #0x99
    add r0, r0, #0x100
    str r0, [sp, #0x0]
    stmib sp, {r0, r7}
    mov r3, #0x3000
    umull r8, r7, r6, r3
    mla r7, r6, r4, r7
    mov r5, r6, asr #0x1f
    mla r7, r5, r3, r7
    adds r3, r8, #0x800
    adc r4, r7, #0x0
    mov r3, r3, lsr #0xc
    mov r0, #0xc
    add r1, sp, #0x74
    add r2, sp, #0x80
    orr r3, r3, r4, lsl #0x14
    bl func_020a60cc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae1e4:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020aa078
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020ae200:
    mov r1, r9
    mov r2, r8
    mov r3, r7
    str r6, [sp, #0x0]
    bl func_020ae230
L_020ae214:
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
