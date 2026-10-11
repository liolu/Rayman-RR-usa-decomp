#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff87ec();
extern void func_01ff8878();
extern void func_01ff88b4();
extern void func_02001588();
extern void func_0201c454();
extern void func_0201c67c();
extern void func_0202c700();
extern void func_0202c820();
extern void func_0202c8a4();
extern void func_0202d570();
extern void func_0202d70c();
extern void func_0202d964();
extern void func_0202dc18();
extern void func_0202dc80();
extern void func_0202e19c();
extern void func_0202e1e0();
extern void func_020372e4();
extern void func_02037554();
extern void func_02067900();
extern void func_0206b3c4();
extern void func_0206b3f4();
extern void func_02084248();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
extern char data_020c49d8[];
// clang-format off
asm void func_0209ed00(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x118
    mov r6, r1
    ldr r4, [r6, #-0x8]
    mov r9, #0x0
    str r9, [sp, #0xc]
    mov r5, r0
    str r9, [sp, #0x8]
    mov r0, r4
    mov r11, r9
    str r5, [sp, #0x10]
    mov r8, #0xff
    bl func_020931d8
    add r2, sp, #0x10
    mov r1, r5
    bl func_0209c740
    ldr r0, [sp, #0x10]
    mov r1, r6
    str r0, [sp, #0x0]
    ldr r2, [sp, #0x0]
    mov r0, r5
    ldr r2, [r2, #0x24]
    str r2, [sp, #0x4]
    ldr r2, [sp, #0x0]
    ldr r3, [r2, #0x4]
    add r2, sp, #0xa4
    ldr r10, [r3, #0x8]
    bl func_02084450
    cmp r4, #0x8b
    mov r7, r0
    bgt L_0209ee00
    cmp r4, #0x8b
    bge L_0209f118
    cmp r4, #0x88
    bgt L_0209ede4
    bge L_0209f264
    sub r0, r4, #0x61
    cmp r0, #0x10
    addls pc, pc, r0, lsl #0x2
    b L_0209f2e8
L_0209eda0:
    b L_0209f1c0
    b L_0209ef98
    b L_0209f2e8
    b L_0209f22c
    b L_0209f1e0
    b L_0209f1e0
    b L_0209f174
    b L_0209f174
    b L_0209f174
    b L_0209ef24
    b L_0209ee88
    b L_0209f0a4
    b L_0209f0a4
    b L_0209f0a4
    b L_0209f2e8
    b L_0209f2e8
    b L_0209f08c
L_0209ede4:
    cmp r4, #0x89
    bgt L_0209edf4
    beq L_0209f264
    b L_0209f2e8
L_0209edf4:
    cmp r4, #0x8a
    beq L_0209f264
    b L_0209f2e8
L_0209ee00:
    cmp r4, #0x8d
    bgt L_0209ee18
    bge L_0209f118
    cmp r4, #0x8c
    beq L_0209f118
    b L_0209f2e8
L_0209ee18:
    cmp r4, #0x8e
    bgt L_0209ee28
    beq L_0209ee34
    b L_0209f2e8
L_0209ee28:
    cmp r4, #0x90
    beq L_0209f038
    b L_0209f2e8
L_0209ee34:
    ldr r1, [sp, #0xa4]
    and r8, r1, #0xff
    cmp r8, #0xff
    bne L_0209ee50
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209ee50:
    ldr r0, [sp, #0x10]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    beq L_0209ee74
    mov r0, #0x14
    mul r0, r8, r0
    ldr r9, [r1, r0]
L_0209ee74:
    add r2, sp, #0xa4
    mov r0, r5
    mov r1, r7
    bl func_02084450
    mov r7, r0
L_0209ee88:
    add r6, sp, #0xa4
    add r3, sp, #0x98
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r7
    mov r2, r6
    bl func_02084450
    ldr r1, [sp, #0xb0]
    mov r6, r0
    cmp r1, #0x8
    ldreq r11, [sp, #0xa4]
    ldrne r0, [sp, #0xa4]
    ldr ip, =0x8efa35
    movne r11, r0, lsl #0xc
    umull r0, r3, r11, ip
    mov r2, #0x0
    mov r7, r0, lsr #0x1c
    mov r0, r5
    mla r3, r11, r2, r3
    mov r5, r11, asr #0x1f
    mla r3, r5, ip, r3
    orr r7, r7, r3, lsl #0x4
    adds r5, r7, #0x1
    adc r2, r2, r3, asr #0x1c
    mov r3, r5, lsr #0x1
    orr r3, r3, r2, lsl #0x1f
    mov r1, r6
    add r2, sp, #0xa4
    rsb r11, r3, #0x0
    bl func_02084450
    mov r5, #0x1
    mov r7, r0
    add r0, sp, #0xa4
    str r5, [sp, #0xc]
    add r3, sp, #0x80
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209f2f4
L_0209ef24:
    add r6, sp, #0xa4
    add r3, sp, #0x98
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r2, r6
    mov r1, r7
    bl func_02084450
    ldr r1, [sp, #0xb0]
    mov r7, r0
    cmp r1, #0x8
    ldreq r6, [sp, #0xa4]
    ldrne r0, [sp, #0xa4]
    mov r1, #0x0
    movne r6, r0, lsl #0xc
    ldr r0, =0x8efa35
    umull r2, r3, r6, r0
    mov r5, r2, lsr #0x1c
    mla r3, r6, r1, r3
    mov r2, r6, asr #0x1f
    mla r3, r2, r0, r3
    orr r5, r5, r3, lsl #0x4
    adds r2, r5, #0x1
    adc r0, r1, r3, asr #0x1c
    mov r1, r2, lsr #0x1
    orr r1, r1, r0, lsl #0x1f
    rsb r11, r1, #0x0
    mov r5, #0x1
    b L_0209f2f4
L_0209ef98:
    ldr r0, [sp, #0xa4]
    ldr r0, [r0, #0x4]
    bl func_0206b3c4
    ldr r1, [sp, #0x10]
    mov r5, r0
    cmp r5, r1
    bne L_0209efc4
    mov r0, r7
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209efc4:
    add r2, sp, #0xa4
    mov r1, r7
    bl func_02084450
    ldr r1, [sp, #0xa4]
    mov r7, r0
    and r2, r1, #0xff
    cmp r2, #0xff
    bne L_0209eff0
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209eff0:
    ldr r0, [r5, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    beq L_0209f010
    mov r0, #0x14
    mul r0, r2, r0
    ldr r9, [r1, r0]
L_0209f010:
    cmp r9, #0x0
    bne L_0209f028
    mov r0, r7
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209f028:
    mov r5, #0x1
    str r5, [sp, #0xc]
    mov r8, #0xff
    b L_0209f2f4
L_0209f038:
    ldr r1, [sp, #0xa4]
    and r8, r1, #0xff
    cmp r8, #0xff
    bne L_0209f054
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209f054:
    ldr r0, [sp, #0x10]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    beq L_0209f078
    mov r0, #0x14
    mul r0, r8, r0
    ldr r9, [r1, r0]
L_0209f078:
    add r2, sp, #0xa4
    mov r0, r5
    mov r1, r7
    bl func_02084450
    mov r7, r0
L_0209f08c:
    add r0, sp, #0xa4
    add r3, sp, #0x98
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r5, #0x1
    b L_0209f2f4
L_0209f0a4:
    ldr r0, [sp, #0xb0]
    ldr r6, =0x8efa35
    cmp r0, #0x8
    ldreq r3, [sp, #0xa4]
    ldrne r0, [sp, #0xa4]
    mov r11, #0x0
    movne r3, r0, lsl #0xc
    umull r0, r1, r3, r6
    mov r2, r0, lsr #0x1c
    mov r0, r5
    mla r1, r3, r11, r1
    mov r5, r3, asr #0x1f
    mla r1, r5, r6, r1
    orr r2, r2, r1, lsl #0x4
    adds r2, r2, #0x1
    adc r1, r11, r1, asr #0x1c
    mov r11, r2, lsr #0x1
    orr r11, r11, r1, lsl #0x1f
    mov r1, r7
    add r2, sp, #0xa4
    bl func_02084450
    mov r5, #0x1
    mov r7, r0
    add r0, sp, #0xa4
    str r5, [sp, #0xc]
    add r3, sp, #0x98
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209f2f4
L_0209f118:
    ldr r0, [sp, #0xa4]
    and r8, r0, #0xff
    cmp r8, #0xff
    bne L_0209f138
    mov r0, r7
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209f138:
    ldr r0, [sp, #0x10]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    moveq r9, #0x0
    beq L_0209f160
    mov r0, #0x14
    mul r0, r8, r0
    ldr r9, [r1, r0]
L_0209f160:
    add r2, sp, #0xa4
    mov r0, r5
    mov r1, r7
    bl func_02084450
    mov r7, r0
L_0209f174:
    ldr r0, [sp, #0xb0]
    mov r1, #0x0
    cmp r0, #0x8
    ldreq r6, [sp, #0xa4]
    ldrne r0, [sp, #0xa4]
    movne r6, r0, lsl #0xc
    ldr r0, =0x8efa35
    umull r2, r3, r6, r0
    mov r5, r2, lsr #0x1c
    mla r3, r6, r1, r3
    mov r2, r6, asr #0x1f
    mla r3, r2, r0, r3
    orr r5, r5, r3, lsl #0x4
    adds r2, r5, #0x1
    adc r0, r1, r3, asr #0x1c
    mov r11, r2, lsr #0x1
    orr r11, r11, r0, lsl #0x1f
    mov r5, #0x1
    b L_0209f2f4
L_0209f1c0:
    mov r0, #0x1
    add r1, sp, #0xa4
    str r0, [sp, #0xc]
    add r3, sp, #0x98
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r5, [sp, #0xc]
    b L_0209f2f4
L_0209f1e0:
    add r6, sp, #0xa4
    add r3, sp, #0x98
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    cmp r4, #0x66
    bne L_0209f224
    mov r0, r5
    mov r1, r7
    mov r2, r6
    bl func_02084450
    mov r1, r6
    mov r7, r0
    add r3, sp, #0x80
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x1
    str r0, [sp, #0xc]
L_0209f224:
    mov r5, #0x1
    b L_0209f2f4
L_0209f22c:
    add r6, sp, #0xa4
    add r3, sp, #0x98
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r2, r6
    mov r1, r7
    bl func_02084450
    ldr r1, [sp, #0xa4]
    mov r7, r0
    mov r0, #0x1
    and r5, r1, #0xff
    str r0, [sp, #0xc]
    b L_0209f2f4
L_0209f264:
    add r6, sp, #0xa4
    add r3, sp, #0x98
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, r7
    mov r2, r6
    bl func_02084450
    ldr r2, [sp, #0xa4]
    mov r1, r0
    and r8, r2, #0xff
    cmp r8, #0xff
    bne L_0209f2a4
    bl func_02084248
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209f2a4:
    ldr r0, [sp, #0x10]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x9c]
    cmp r2, #0x0
    moveq r9, #0x0
    beq L_0209f2cc
    mov r0, #0x14
    mul r0, r8, r0
    ldr r9, [r2, r0]
L_0209f2cc:
    add r2, sp, #0xa4
    mov r0, r5
    bl func_02084450
    ldr r1, [sp, #0xa4]
    mov r7, r0
    and r5, r1, #0xff
    b L_0209f2f4
L_0209f2e8:
    add sp, sp, #0x118
    mov r0, r7
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209f2f4:
    cmp r8, #0xff
    beq L_0209f310
    cmp r9, #0x0
    addeq sp, sp, #0x118
    moveq r0, r7
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r9, [sp, #0x10]
L_0209f310:
    ldr r0, [sp, #0x10]
    cmp r5, #0x0
    ldr r6, [r0, #0x24]
    bne L_0209f330
    ldr r1, [sp, #0x4]
    add r0, sp, #0xb4
    mov r2, #0x64
    bl func_02001588
L_0209f330:
    cmp r4, #0x8b
    bgt L_0209f3b8
    bge L_0209f51c
    cmp r4, #0x88
    bgt L_0209f39c
    bge L_0209f6b4
    sub r0, r4, #0x61
    cmp r0, #0x10
    addls pc, pc, r0, lsl #0x2
    b L_0209faf4
L_0209f358:
    b L_0209fa0c
    b L_0209f468
    b L_0209faf4
    b L_0209f99c
    b L_0209f6b4
    b L_0209f6a4
    b L_0209f51c
    b L_0209f51c
    b L_0209f51c
    b L_0209f3fc
    b L_0209f3ec
    b L_0209f50c
    b L_0209f50c
    b L_0209f50c
    b L_0209faf4
    b L_0209faf4
    b L_0209f47c
L_0209f39c:
    cmp r4, #0x89
    bgt L_0209f3ac
    beq L_0209f9f4
    b L_0209faf4
L_0209f3ac:
    cmp r4, #0x8a
    beq L_0209f99c
    b L_0209faf4
L_0209f3b8:
    cmp r4, #0x8d
    bgt L_0209f3d0
    bge L_0209f51c
    cmp r4, #0x8c
    beq L_0209f51c
    b L_0209faf4
L_0209f3d0:
    cmp r4, #0x8e
    bgt L_0209f3e0
    beq L_0209f3ec
    b L_0209faf4
L_0209f3e0:
    cmp r4, #0x90
    beq L_0209f484
    b L_0209faf4
L_0209f3ec:
    add r0, sp, #0x8c
    add r2, sp, #0x80
    mov r1, r6
    bl func_0202c820
L_0209f3fc:
    add r0, sp, #0x98
    mov r1, r0
    bl func_01ff84a0
    add r1, sp, #0x98
    mov r2, r11
    mov r0, r6
    bl func_0202d570
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0209fa48
    add r0, sp, #0x98
    add r2, sp, #0x80
    mov r1, r6
    bl func_0202c820
    ldr r3, [sp, #0x8c]
    ldr r2, [sp, #0x98]
    ldr r1, [sp, #0x90]
    sub r3, r3, r2
    ldr r0, [sp, #0x9c]
    str r3, [sp, #0x98]
    sub r2, r1, r0
    ldr r1, [sp, #0x94]
    ldr r0, [sp, #0xa0]
    str r2, [sp, #0x9c]
    sub r0, r1, r0
    str r0, [sp, #0xa0]
    b L_0209f99c
L_0209f468:
    ldr r1, [r9, #0x24]
    mov r0, r6
    mov r2, #0x64
    bl func_02001588
    b L_0209fa48
L_0209f47c:
    mov r0, #0x1
    str r0, [sp, #0x8]
L_0209f484:
    ldr r0, [sp, #0x10]
    ldr r1, [r0, #0x30]
    and r0, r1, #0x4
    tst r0, #0xff
    addne sp, sp, #0x118
    movne r0, r7
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    tst r1, #0x8
    ldrne r0, [sp, #0x98]
    strne r0, [sp, #0x9c]
    strne r0, [sp, #0xa0]
    cmp r8, #0xff
    bne L_0209f4c0
    cmp r10, #0x0
    bne L_0209fa48
L_0209f4c0:
    ldr r11, [sp, #0x98]
    mov r9, #0x0
    ldr r5, [sp, #0x9c]
    ldr r4, [sp, #0xa0]
    add r1, sp, #0x74
    add r2, sp, #0x68
    add r3, sp, #0x5c
    mov r0, r6
    str r11, [sp, #0x74]
    str r9, [sp, #0x78]
    str r9, [sp, #0x7c]
    str r9, [sp, #0x68]
    str r5, [sp, #0x6c]
    str r9, [sp, #0x70]
    str r9, [sp, #0x5c]
    str r9, [sp, #0x60]
    str r4, [sp, #0x64]
    bl func_0202dc80
    b L_0209fa48
L_0209f50c:
    add r0, sp, #0x8c
    add r2, sp, #0x98
    mov r1, r6
    bl func_0202c820
L_0209f51c:
    mov r0, r11
    bl func_01ff8878
    mov r9, r0
    mov r0, r11
    bl func_01ff88b4
    cmp r4, #0x8b
    mov r1, #0x0
    bgt L_0209f574
    cmp r4, #0x8b
    bge L_0209f590
    sub r2, r4, #0x67
    cmp r2, #0x7
    addls pc, pc, r2, lsl #0x2
    b L_0209f608
L_0209f554:
    b L_0209f590
    b L_0209f5c4
    b L_0209f5f8
    b L_0209f608
    b L_0209f608
    b L_0209f590
    b L_0209f5c4
    b L_0209f5f8
L_0209f574:
    cmp r4, #0x8c
    bgt L_0209f584
    beq L_0209f5c4
    b L_0209f608
L_0209f584:
    cmp r4, #0x8d
    beq L_0209f5f8
    b L_0209f608
L_0209f590:
    mov r3, #0x0
    rsb r2, r9, #0x0
    str r9, [sp, #0x4c]
    mov r9, #0x1000
    str r9, [sp, #0x50]
    str r3, [sp, #0x54]
    str r3, [sp, #0x58]
    str r3, [sp, #0x44]
    str r0, [sp, #0x48]
    str r3, [sp, #0x38]
    str r2, [sp, #0x3c]
    str r0, [sp, #0x40]
    b L_0209f608
L_0209f5c4:
    mov r11, #0x0
    rsb r2, r9, #0x0
    str r9, [sp, #0x58]
    mov r3, #0x1000
    str r3, [sp, #0x48]
    str r0, [sp, #0x50]
    str r11, [sp, #0x54]
    str r11, [sp, #0x44]
    str r11, [sp, #0x4c]
    str r2, [sp, #0x38]
    str r11, [sp, #0x3c]
    str r0, [sp, #0x40]
    b L_0209f608
L_0209f5f8:
    mov r0, r6
    mov r1, r11
    bl func_0202d70c
    mov r1, #0x1
L_0209f608:
    cmp r1, #0x0
    bne L_0209f654
    add r0, sp, #0x50
    mov r1, r6
    mov r2, r0
    bl func_0202c8a4
    add r0, sp, #0x44
    mov r1, r6
    mov r2, r0
    bl func_0202c8a4
    add r0, sp, #0x38
    mov r1, r6
    mov r2, r0
    bl func_0202c8a4
    mov r0, r6
    add r1, sp, #0x50
    add r2, sp, #0x44
    add r3, sp, #0x38
    bl func_0202d964
L_0209f654:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0209fa48
    add r0, sp, #0x98
    mov r1, r6
    mov r2, r0
    bl func_0202c820
    ldr r3, [sp, #0x8c]
    ldr r2, [sp, #0x98]
    ldr r1, [sp, #0x90]
    sub r3, r3, r2
    ldr r0, [sp, #0x9c]
    str r3, [sp, #0x98]
    sub r2, r1, r0
    ldr r1, [sp, #0x94]
    ldr r0, [sp, #0xa0]
    str r2, [sp, #0x9c]
    sub r0, r1, r0
    str r0, [sp, #0xa0]
    b L_0209f99c
L_0209f6a4:
    add r0, sp, #0xa4
    add r2, sp, #0x80
    mov r1, r6
    bl func_0202c820
L_0209f6b4:
    add r1, sp, #0x2c
    add r2, sp, #0x8c
    add r3, sp, #0x14
    mov r0, r6
    bl func_0202dc18
    ldr r2, [sp, #0x98]
    cmp r2, #0x0
    ldreq r0, [sp, #0x9c]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0xa0]
    cmpeq r0, #0x0
    bne L_0209f6f8
    add r0, sp, #0x8c
    add r3, sp, #0x20
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209f73c
L_0209f6f8:
    ldr r1, [sp, #0x9c]
    ldr r0, [sp, #0xa0]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x98]
    str r1, [sp, #0x9c]
    str r0, [sp, #0xa0]
    cmp r5, #0x0
    bne L_0209f730
    add r0, sp, #0x98
    add r1, sp, #0xb4
    mov r2, r0
    bl func_0202c820
L_0209f730:
    add r0, sp, #0x20
    add r1, sp, #0x98
    bl func_01ff84a0
L_0209f73c:
    ldr r1, [sp, #0x20]
    cmp r1, #0x0
    movge r0, r1
    rsblt r0, r1, #0x0
    cmp r0, #0x10
    bge L_0209f7a8
    ldr r3, [sp, #0x24]
    cmp r3, #0x0
    movge r0, r3
    rsblt r0, r3, #0x0
    cmp r0, #0x10
    bge L_0209f7a8
    ldr r0, [sp, #0x8c]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_0209f7c8
    ldr r0, [sp, #0x90]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x10
    bge L_0209f7c8
    add r0, sp, #0x14
    add r9, sp, #0x8c
    ldmia r0, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    b L_0209f7c8
L_0209f7a8:
    ldr r3, [sp, #0x24]
    ldr r0, [sp, #0x28]
    rsb r2, r1, #0x0
    rsb r1, r3, #0x0
    add r0, r0, #0x3000
    str r2, [sp, #0x8c]
    str r1, [sp, #0x90]
    str r0, [sp, #0x94]
L_0209f7c8:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0209f7e4
    cmp r0, #0x0
    mov r0, #0x1000
    rsble r0, r0, #0x0
L_0209f7e4:
    cmp r0, #0x0
    movgt r9, #0x1
    movle r9, #0x0
    ldr r0, [sp, #0x90]
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x94]
    and r9, r9, #0xff
    bl func_01ff87ec
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x94]
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x8c]
    ldr r3, [sp, #0x28]
    bl func_01ff87ec
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x8c]
    ldr r1, [sp, #0x24]
    ldr r2, [sp, #0x90]
    ldr r3, [sp, #0x20]
    bl func_01ff87ec
    mov r2, #0x0
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x28]
    ldr r3, [sp, #0x24]
    str r2, [sp, #0x34]
    bl func_01ff87ec
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x34]
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x28]
    bl func_01ff87ec
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x2c]
    ldr r1, [sp, #0x24]
    ldr r2, [sp, #0x30]
    ldr r3, [sp, #0x20]
    bl func_01ff87ec
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_0209f898
    cmp r0, #0x0
    mov r0, #0x1000
    rsble r0, r0, #0x0
L_0209f898:
    cmp r0, #0x0
    movgt r0, #0x1
    movle r0, #0x0
    cmp r9, r0
    beq L_0209f8d0
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
L_0209f8d0:
    add r0, sp, #0x20
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x14
    mov r1, r0
    bl func_01ff84a0
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x1c]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x18]
    bl func_01ff87ec
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x28]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x1c]
    bl func_01ff87ec
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x18]
    ldr r2, [sp, #0x24]
    ldr r3, [sp, #0x14]
    bl func_01ff87ec
    str r0, [sp, #0x34]
    add r0, sp, #0x2c
    mov r1, r0
    bl func_01ff84a0
    mov r0, r6
    add r1, sp, #0x2c
    add r2, sp, #0x20
    add r3, sp, #0x14
    bl func_0202d964
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0209fa48
    add r0, sp, #0x80
    mov r1, r6
    mov r2, r0
    bl func_0202c820
    ldr r3, [sp, #0xa4]
    ldr r2, [sp, #0x80]
    ldr r1, [sp, #0xa8]
    sub r3, r3, r2
    ldr r0, [sp, #0x84]
    str r3, [sp, #0x98]
    sub r2, r1, r0
    ldr r1, [sp, #0xac]
    ldr r0, [sp, #0x88]
    str r2, [sp, #0x9c]
    sub r0, r1, r0
    str r0, [sp, #0xa0]
L_0209f99c:
    cmp r5, #0x0
    bne L_0209f9b4
    add r0, sp, #0x98
    add r1, sp, #0xb4
    mov r2, r0
    bl func_0202c820
L_0209f9b4:
    add r1, sp, #0x8c
    mov r0, r6
    bl func_0202e1e0
    ldr r3, [sp, #0x98]
    ldr r2, [sp, #0x8c]
    ldr r1, [sp, #0x9c]
    add r3, r3, r2
    ldr r0, [sp, #0x90]
    str r3, [sp, #0x98]
    add r2, r1, r0
    ldr r1, [sp, #0xa0]
    ldr r0, [sp, #0x94]
    str r2, [sp, #0x9c]
    add r0, r1, r0
    str r0, [sp, #0xa0]
    b L_0209fa0c
L_0209f9f4:
    cmp r5, #0x0
    bne L_0209fa0c
    add r0, sp, #0x98
    add r1, sp, #0xb4
    mov r2, r0
    bl func_0202c700
L_0209fa0c:
    add r1, sp, #0x80
    mov r0, r6
    bl func_0202e1e0
    add r1, sp, #0x98
    mov r0, r6
    bl func_0202e19c
    cmp r4, #0x61
    cmpne r4, #0x64
    bne L_0209fa48
    cmp r10, #0x0
    beq L_0209fa48
    mov r0, r10
    bl func_02067900
    add r1, sp, #0x98
    bl func_02037554
L_0209fa48:
    ldr r0, =data_020c49d8
    ldr r1, [sp, #0x10]
    ldr r0, [r0, #0x0]
    str r0, [r1, #0x28]
    ldr r0, [sp, #0x10]
    bl func_0201c454
    ldr r0, [sp, #0x10]
    ldr r1, [r0, #0x0]
    cmp r1, #0x2
    bne L_0209fa8c
    bl func_0206b3f4
    tst r0, #0x2
    beq L_0209fa94
    cmp r10, #0x0
    beq L_0209fa8c
    tst r0, #0x8000
    beq L_0209fa94
L_0209fa8c:
    ldr r0, [sp, #0x10]
    bl func_0201c67c
L_0209fa94:
    cmp r8, #0xff
    bne L_0209faf4
    cmp r10, #0x0
    beq L_0209faf4
    ldr r0, [sp, #0x8]
    cmp r0, #0x0
    beq L_0209fae4
    mov r0, r10
    bl func_02067900
    cmp r0, #0x0
    beq L_0209fae4
    ldr r1, [sp, #0x98]
    str r1, [r0, #0x48]
    ldr r1, [sp, #0x9c]
    str r1, [r0, #0x4c]
    ldr r1, [sp, #0xa0]
    str r1, [r0, #0x50]
    ldr r1, [r0, #0xc]
    orr r1, r1, #0x1000
    str r1, [r0, #0xc]
L_0209fae4:
    mov r0, r10
    bl func_02067900
    mov r1, r6
    bl func_020372e4
L_0209faf4:
    cmp r8, #0xff
    beq L_0209fb14
    ldr r0, [sp, #0x0]
    mov r2, #0x1
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    add r1, r0, #0xf4
    swpb r0, r2, [r1]
L_0209fb14:
    mov r0, r7
    add sp, sp, #0x118
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
