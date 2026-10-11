#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff8668();
extern void func_02001588();
extern void func_0202e19c();
extern void func_02030ce0();
extern void func_020317f8();
extern void func_020320a0();
extern void func_02038be0();
extern void func_020390b4();
extern void func_0203d378();
extern void func_0203da20();
extern void func_0203e080();
extern char data_020bc554[];
extern char data_020cf994[];
// clang-format off
asm void func_020390b4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x140
    mov r10, r0
    mov r0, #0x0
    str r0, [sp, #0x24]
    ldr r4, [r10, #0x14]
    ldr r3, [sp, #0x24]
    str r1, [sp, #0xc]
    str r3, [sp, #0x20]
    str r2, [sp, #0x10]
    mov r5, #0x1000
    add r0, sp, #0xdc
    add r1, r10, #0xdc
    mov r2, #0x64
    str r5, [sp, #0x50]
    str r3, [sp, #0x48]
    str r3, [sp, #0x4c]
    bl func_02001588
    add r0, sp, #0x78
    add r1, r10, #0xdc
    mov r2, #0x64
    bl func_02001588
    add r0, r10, #0x7c
    str r0, [sp, #0x14]
    ldr r2, [r10, #0xe0]
    ldr r0, [r10, #0x7c]
    add r8, r10, #0xe0
    sub r0, r2, r0
    str r0, [sp, #0x60]
    ldr r0, [sp, #0x14]
    ldr r1, =data_020cf994
    ldr r2, [r0, #0x4]
    ldr r3, [r8, #0x4]
    ldr r0, [r1, #0x0]
    sub r2, r3, r2
    str r2, [sp, #0x64]
    add r2, r0, #0x1
    ldr r0, [sp, #0x14]
    ldr r3, [r8, #0x8]
    ldr r0, [r0, #0x8]
    cmp r2, #0x5
    sub r0, r3, r0
    str r2, [r1, #0x0]
    str r0, [sp, #0x68]
    ble L_020391b0
    mov r3, #0x6
L_0203916c:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_0203916c
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    add sp, sp, #0x140
    str r0, [r10, #0x44]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020391b0:
    add r0, sp, #0x60
    bl func_01ff8668
    smull r0, r1, r4, r0
    adds r2, r0, #0x800
    mov r0, #0x800
    adc r1, r1, #0x0
    mov r4, r2, lsr #0xc
    orr r4, r4, r1, lsl #0x14
    sub r1, r0, #0xcd
    cmp r4, r1
    ldr r0, [r10, #0x168]
    movlt r4, r1
    adds r1, r0, #0xd0
    addeq r0, sp, #0x48
    mov r6, #0x0
    streq r0, [sp, #0x1c]
    beq L_02039200
    add r0, r1, #0x4
    str r0, [sp, #0x1c]
    add r6, r1, #0x10
L_02039200:
    ldr r1, [sp, #0x1c]
    add r0, sp, #0x60
    mov r2, r1
    ldr r5, [r2, #0x0]
    bl VEC_DotProduct
    mov r11, r0
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x1c]
    ldr r7, [r0, #0x4]
    add r0, sp, #0x60
    bl VEC_DotProduct
    str r0, [sp, #0x28]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x1c]
    ldr r9, [r0, #0x8]
    add r0, sp, #0x60
    bl VEC_DotProduct
    smull r5, r3, r11, r5
    ldr r11, [sp, #0x28]
    smull r2, r1, r11, r7
    smull r9, r7, r0, r9
    adds r0, r5, #0x800
    adc r3, r3, #0x0
    mov r0, r0, lsr #0xc
    adds r2, r2, #0x800
    orr r0, r0, r3, lsl #0x14
    adc r1, r1, #0x0
    mov r3, r2, lsr #0xc
    adds r2, r9, #0x800
    mov r5, r2, lsr #0xc
    ldr r2, [sp, #0x60]
    orr r3, r3, r1, lsl #0x14
    adc r1, r7, #0x0
    orr r5, r5, r1, lsl #0x14
    ldr r1, [sp, #0x64]
    sub r2, r2, r0
    ldr r0, [sp, #0x1c]
    sub r3, r1, r3
    ldr r1, [sp, #0x68]
    ldr r0, [r0, #0x0]
    sub r5, r1, r5
    smull r1, r0, r4, r0
    adds r1, r1, #0x800
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x6c]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x14]
    ldr r0, [r0, #0x4]
    smull r7, r0, r4, r0
    adds r7, r7, #0x800
    adc r0, r0, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    ldr r0, [sp, #0x1c]
    str r7, [sp, #0x70]
    ldr r7, [r0, #0x8]
    add r0, sp, #0x78
    smull r9, r7, r4, r7
    adds r9, r9, #0x800
    adc r4, r7, #0x0
    mov r7, r9, lsr #0xc
    orr r7, r7, r4, lsl #0x14
    add r0, r0, #0x4
    str r7, [sp, #0x74]
    mov r9, #0x6
L_0203930c:
    ldrb r4, [r1, #0x0]
    ldrb r7, [r1, #0x1]
    add r1, r1, #0x2
    subs r9, r9, #0x1
    swpb r4, r4, [r0]
    add r0, r0, #0x1
    swpb r4, r7, [r0]
    add r0, r0, #0x1
    bne L_0203930c
    add r0, sp, #0x78
    ldr r1, [r0, #0x4]
    ldr r0, [r0, #0x8]
    add r7, r1, r2
    ldr r4, [sp, #0x6c]
    add r1, r0, r3
    add r0, sp, #0x78
    ldr r0, [r0, #0xc]
    add r7, r7, r4
    add r4, sp, #0x78
    str r7, [r4, #0x4]
    ldr r7, [sp, #0x70]
    ldr r4, [sp, #0x74]
    add r0, r0, r5
    add r7, r1, r7
    add r1, r0, r4
    add r0, sp, #0x78
    str r7, [r0, #0x8]
    str r1, [r0, #0xc]
    add r1, sp, #0xdc
    ldr r0, [sp, #0x14]
    add r9, r1, #0x4
    mov r7, #0x6
L_0203938c:
    ldrb r1, [r0, #0x0]
    ldrb r4, [r0, #0x1]
    add r0, r0, #0x2
    subs r7, r7, #0x1
    swpb r1, r1, [r9]
    add r9, r9, #0x1
    swpb r1, r4, [r9]
    add r9, r9, #0x1
    bne L_0203938c
    add r0, sp, #0xdc
    ldr r1, [r0, #0x4]
    ldr r0, [r0, #0x8]
    add r4, r1, r2
    add r2, r0, r3
    add r0, sp, #0xdc
    ldr r1, [r0, #0xc]
    ldr r0, [sp, #0x6c]
    add r3, r1, r5
    sub r1, r4, r0
    add r0, sp, #0xdc
    str r1, [r0, #0x4]
    ldr r1, [sp, #0x70]
    ldr r0, [sp, #0x74]
    sub r2, r2, r1
    sub r1, r3, r0
    add r0, sp, #0xdc
    str r2, [r0, #0x8]
    str r1, [r0, #0xc]
    add r0, sp, #0x78
    str r0, [sp, #0x0]
    add r0, sp, #0xdc
    str r0, [sp, #0x4]
    mov r1, #0x1
    mov r7, #0x0
    ldr r0, =data_020bc554
    str r1, [sp, #0x8]
    ldr r1, [r0, #0x0]
    ldr r3, [sp, #0xc]
    add r0, sp, #0x38
    mov r2, r10
    str r7, [sp, #0x18]
    bl func_0203d378
    cmp r0, #0x0
    beq L_02039d34
    ldr r1, =data_020bc554
    ldr r0, [sp, #0x38]
    ldr r1, [r1, #0x0]
    mov r2, r10
    add r3, sp, #0x60
    bl func_020320a0
    mov r4, r7
    mov r9, r4
    mvn r11, #0x0
    b L_02039520
L_02039464:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r5, r0, r9
    ldrsh r0, [r5, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_02039518
    ldr r0, [r5, #0x20]
    mov r1, #0x0
    ldr r2, [r0, #0xc]
    cmp r2, r11
    beq L_020394ac
    ldrh r0, [r2, #0x2]
    and r0, r0, #0x20
    cmp r0, #0x20
    moveq r1, #0x1
L_020394ac:
    tst r1, #0xff
    beq L_02039518
    cmp r2, r11
    beq L_020394d0
    ldrh r0, [r2, #0x2]
    and r0, r0, #0x8000
    cmp r0, #0x8000
    moveq r0, #0x1
    beq L_020394d4
L_020394d0:
    mov r0, #0x0
L_020394d4:
    tst r0, #0xff
    bne L_02039518
    mov r0, r10
    mov r1, r5
    bl func_02030ce0
    cmp r0, #0x0
    beq L_02039518
    ldrsh r0, [r5, #0x2e]
    cmp r7, #0x0
    mov r1, #0x1
    moveq r7, r5
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    moveq r0, #0x1
    streq r0, [sp, #0x20]
L_02039518:
    add r9, r9, #0x68
    add r4, r4, #0x1
L_02039520:
    ldr r0, [sp, #0x38]
    cmp r4, r0
    bge L_0203953c
    cmp r7, #0x0
    ldrne r0, [sp, #0x20]
    cmpne r0, #0x0
    beq L_02039464
L_0203953c:
    cmp r7, #0x0
    addne r0, r7, #0x4
    strne r0, [sp, #0x1c]
    mvn r0, #0x0
    str r0, [sp, #0x2c]
    sub r0, r0, #0x27
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x2c]
    mov r5, #0x0
    add r0, r0, #0xb50
    addne r6, r7, #0x10
    mov r11, r5
    str r0, [sp, #0x30]
    b L_0203965c
L_02039574:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r9, r0, r11
    ldrsh r0, [r9, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_02039654
    ldr r1, [r9, #0x20]
    ldr r2, [sp, #0x2c]
    ldr r1, [r1, #0xc]
    mov r0, #0x0
    cmp r1, r2
    beq L_020395c0
    ldrh r2, [r1, #0x2]
    and r2, r2, #0x20
    cmp r2, #0x20
    moveq r0, #0x1
L_020395c0:
    tst r0, #0xff
    beq L_020395f4
    ldr r0, [sp, #0x2c]
    cmp r1, r0
    beq L_020395e8
    ldrh r0, [r1, #0x2]
    and r0, r0, #0x8000
    cmp r0, #0x8000
    moveq r0, #0x1
    beq L_020395ec
L_020395e8:
    mov r0, #0x0
L_020395ec:
    tst r0, #0xff
    beq L_02039654
L_020395f4:
    ldr r1, [sp, #0x1c]
    add r0, r9, #0x4
    bl VEC_DotProduct
    ldr r1, [sp, #0x30]
    cmp r0, r1
    bge L_02039654
    ldr r2, [r9, #0x10]
    ldr r1, [r6, #0x0]
    add r0, sp, #0x6c
    sub r1, r2, r1
    str r1, [sp, #0x6c]
    ldr r3, [r9, #0x14]
    ldr r2, [r6, #0x4]
    ldr r1, [sp, #0x1c]
    sub r2, r3, r2
    str r2, [sp, #0x70]
    ldr r3, [r9, #0x18]
    ldr r2, [r6, #0x8]
    sub r2, r3, r2
    str r2, [sp, #0x74]
    bl VEC_DotProduct
    ldr r1, [sp, #0x34]
    cmp r0, r1
    strgt r9, [sp, #0x18]
L_02039654:
    add r11, r11, #0x68
    add r5, r5, #0x1
L_0203965c:
    ldr r2, [sp, #0x38]
    cmp r5, r2
    bge L_02039674
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02039574
L_02039674:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02039688
    cmp r5, r4
    movgt r4, r5
L_02039688:
    sub r0, r4, #0x1
    str r0, [sp, #0x0]
    ldr r3, =data_020bc554
    ldr r1, [sp, #0xc]
    ldr r3, [r3, #0x0]
    mov r0, r10
    bl func_0203da20
    cmp r7, #0x0
    beq L_02039838
    ldrsh r0, [r7, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    beq L_02039838
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    ldreq r0, [sp, #0x20]
    cmpeq r0, #0x0
    bne L_02039838
    ldr r3, [sp, #0x38]
    mov r5, #0x0
    cmp r3, #0x0
    ble L_020397a4
    ldr r0, =data_020bc554
    mov lr, r5
    ldr r2, [r0, #0x0]
L_020396f8:
    ldrsh r0, [r2, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_02039794
    ldr r9, [r6, #0x0]
    ldr r1, [r2, #0x10]
    mov r0, lr
    subs r9, r9, r1
    str r9, [sp, #0x6c]
    ldr ip, [r6, #0x4]
    ldr r11, [r2, #0x14]
    rsbmi r9, r9, #0x0
    sub r11, ip, r11
    str r11, [sp, #0x70]
    ldr ip, [r6, #0x8]
    ldr r11, [r2, #0x18]
    mov r1, lr
    sub r11, ip, r11
    str r11, [sp, #0x74]
    cmp r9, #0x4
    bge L_02039768
    ldr r9, [sp, #0x70]
    cmp r9, #0x0
    rsblt r9, r9, #0x0
    cmp r9, #0x4
    movlt r1, #0x1
L_02039768:
    cmp r1, #0x0
    beq L_02039784
    ldr r1, [sp, #0x74]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02039784:
    tst r0, #0xff
    ldrne r0, [sp, #0x24]
    addne r0, r0, #0x1
    strne r0, [sp, #0x24]
L_02039794:
    add r2, r2, #0x68
    add r5, r5, #0x1
    cmp r5, r3
    blt L_020396f8
L_020397a4:
    ldr r0, [sp, #0x24]
    cmp r0, #0x1
    bne L_02039838
    ldr r0, [r7, #0x28]
    and r0, r0, #0x4
    cmp r0, #0x4
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    bne L_02039838
    ldr r0, [r10, #0xc]
    mov r3, #0x6
    tst r0, #0x10
    orreq r0, r0, #0x10000
    streq r0, [r10, #0xc]
L_020397e0:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_020397e0
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    ldr r0, [r10, #0xc]
    add sp, sp, #0x140
    tst r0, #0x4000
    ldrne r1, [r10, #0x168]
    ldrne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02039838:
    cmp r7, #0x0
    beq L_02039ab4
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    bne L_02039890
    ldr r1, [r7, #0x30]
    add r0, sp, #0xdc
    ldmib r0, {r2, r3}
    add r0, r2, r1
    str r0, [sp, #0x6c]
    add r0, sp, #0xdc
    ldr r1, [r7, #0x34]
    ldr r2, [r0, #0xc]
    add r0, r3, r1
    str r0, [sp, #0x70]
    ldr r0, [r7, #0x38]
    add r1, sp, #0x6c
    add r2, r2, r0
    add r0, r10, #0xdc
    str r2, [sp, #0x74]
    bl func_0202e19c
    b L_02039d20
L_02039890:
    beq L_020399a8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    movlt r0, #0x1
    movge r0, #0x0
    tst r0, #0xff
    beq L_020399a8
    ldr r0, =data_020cf994
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    ble L_020399a8
    ldr r0, =data_020bc554
    str r4, [sp, #0x0]
    ldr r3, [r0, #0x0]
    ldr r2, [sp, #0x38]
    add r0, sp, #0x3c
    mov r1, r10
    bl func_0203e080
    add r0, sp, #0xdc
    ldr r2, [r0, #0x4]
    ldr r0, [sp, #0x3c]
    mov r1, r8
    add r0, r2, r0
    str r0, [r8, #0x0]
    add r0, sp, #0xdc
    ldr r3, [r0, #0x8]
    ldr r2, [sp, #0x40]
    ldr r0, [sp, #0x14]
    add r2, r3, r2
    str r2, [r8, #0x4]
    add r2, sp, #0xdc
    ldr r3, [r2, #0xc]
    ldr r2, [sp, #0x44]
    mov r4, #0x6
    add r2, r3, r2
    str r2, [r8, #0x8]
    mov r2, r0
    ldr r5, [r8, #0x0]
    ldr r2, [r2, #0x0]
    ldr r3, [sp, #0x60]
    sub r5, r5, r2
    str r5, [sp, #0x6c]
    mov r2, r0
    ldr r6, [r8, #0x4]
    ldr r2, [r2, #0x4]
    sub r5, r3, r5
    sub r3, r6, r2
    str r3, [sp, #0x70]
    ldr r2, [sp, #0x64]
    ldr r9, [r8, #0x8]
    sub r3, r2, r3
    mov r2, r0
    ldr r6, [r2, #0x8]
    ldr r2, [sp, #0x68]
    sub r6, r9, r6
    sub r2, r2, r6
    str r5, [sp, #0x60]
    str r6, [sp, #0x74]
    str r3, [sp, #0x64]
    str r2, [sp, #0x68]
L_02039980:
    ldrb r2, [r1, #0x0]
    ldrb r3, [r1, #0x1]
    add r1, r1, #0x2
    subs r4, r4, #0x1
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    swpb r2, r3, [r0]
    add r0, r0, #0x1
    bne L_02039980
    b L_020399d8
L_020399a8:
    ldr r4, [sp, #0x14]
    mov r3, r8
    mov r2, #0x6
L_020399b4:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020399b4
L_020399d8:
    ldr r0, [sp, #0x18]
    mov r3, #0x0
    add r0, r0, #0x4
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x10]
    add r2, sp, #0x60
    str r0, [sp, #0x4]
    str r3, [sp, #0x8]
    add r0, sp, #0x54
    mov r1, r10
    add r3, r7, #0x4
    bl func_02038be0
    ldr r2, [sp, #0x54]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_02039a38
    ldr r2, [sp, #0x58]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_02039a38:
    cmp r1, #0x0
    beq L_02039a54
    ldr r1, [sp, #0x5c]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02039a54:
    tst r0, #0xff
    bne L_02039a80
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    mov r0, r10
    bl func_020390b4
    ldr r1, [sp, #0x10]
    mov r0, r10
    bl func_020317f8
    add sp, sp, #0x140
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02039a80:
    mov r3, #0x6
L_02039a84:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_02039a84
    b L_02039d20
L_02039ab4:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02039cd4
    beq L_02039bc8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    movlt r0, #0x1
    movge r0, #0x0
    tst r0, #0xff
    beq L_02039bc8
    ldr r0, =data_020bc554
    str r4, [sp, #0x0]
    ldr r3, [r0, #0x0]
    ldr r2, [sp, #0x38]
    add r0, sp, #0x3c
    mov r1, r10
    bl func_0203e080
    add r0, sp, #0xdc
    ldr r2, [r0, #0x4]
    ldr r1, [sp, #0x3c]
    ldr r4, [sp, #0x14]
    add r1, r2, r1
    str r1, [r8, #0x0]
    add r1, sp, #0xdc
    ldr r2, [r1, #0x8]
    ldr r1, [sp, #0x40]
    mov r0, r8
    add r1, r2, r1
    str r1, [r8, #0x4]
    add r1, sp, #0xdc
    ldr r2, [r1, #0xc]
    ldr r1, [sp, #0x44]
    mov r3, #0x6
    add r1, r2, r1
    str r1, [r8, #0x8]
    mov r1, r4
    ldr r5, [r8, #0x0]
    ldr r1, [r1, #0x0]
    ldr r2, [sp, #0x60]
    sub r5, r5, r1
    str r5, [sp, #0x6c]
    mov r1, r4
    ldr r6, [r8, #0x4]
    ldr r1, [r1, #0x4]
    sub r5, r2, r5
    sub r2, r6, r1
    str r2, [sp, #0x70]
    ldr r1, [sp, #0x64]
    ldr r7, [r8, #0x8]
    sub r2, r1, r2
    mov r1, r4
    ldr r6, [r1, #0x8]
    ldr r1, [sp, #0x68]
    sub r6, r7, r6
    sub r1, r1, r6
    str r5, [sp, #0x60]
    str r6, [sp, #0x74]
    str r2, [sp, #0x64]
    str r1, [sp, #0x68]
L_02039ba0:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r4]
    add r4, r4, #0x1
    swpb r1, r2, [r4]
    add r4, r4, #0x1
    bne L_02039ba0
    b L_02039bf8
L_02039bc8:
    ldr r4, [sp, #0x14]
    mov r3, r8
    mov r2, #0x6
L_02039bd4:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02039bd4
L_02039bf8:
    ldr r0, [sp, #0x18]
    mov r4, #0x0
    add r0, r0, #0x4
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x10]
    ldr r3, [sp, #0x1c]
    str r0, [sp, #0x4]
    add r0, sp, #0x54
    add r2, sp, #0x60
    mov r1, r10
    str r4, [sp, #0x8]
    bl func_02038be0
    ldr r2, [sp, #0x54]
    mov r0, r4
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_02039c58
    ldr r2, [sp, #0x58]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_02039c58:
    cmp r1, #0x0
    beq L_02039c74
    ldr r1, [sp, #0x5c]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02039c74:
    tst r0, #0xff
    bne L_02039ca0
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    mov r0, r10
    bl func_020390b4
    ldr r1, [sp, #0x10]
    mov r0, r10
    bl func_020317f8
    add sp, sp, #0x140
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02039ca0:
    mov r3, #0x6
L_02039ca4:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_02039ca4
    b L_02039d20
L_02039cd4:
    add r0, r10, #0xdc
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    ldr r0, [r10, #0xc]
    add sp, sp, #0x140
    tst r0, #0x10
    orreq r0, r0, #0x10000
    streq r0, [r10, #0xc]
    ldr r0, [r10, #0xc]
    tst r0, #0x4000
    ldrne r1, [r10, #0x168]
    ldrne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02039d20:
    ldr r1, [sp, #0x10]
    mov r0, r10
    bl func_020317f8
    add sp, sp, #0x140
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02039d34:
    add r0, r10, #0xdc
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    mov r0, r7
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    ldr r0, [r10, #0xc]
    tst r0, #0x10
    orreq r0, r0, #0x10000
    streq r0, [r10, #0xc]
    ldr r0, [r10, #0xc]
    tst r0, #0x4000
    ldrne r1, [r10, #0x168]
    ldrne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    add sp, sp, #0x140
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
