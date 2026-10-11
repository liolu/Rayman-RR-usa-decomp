#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_01ff87ec();
extern void func_01ff8878();
extern void func_01ff88b4();
extern void func_02001588();
extern void func_02014910();
extern void func_0202dc64();
extern void func_0202e19c();
extern void func_02030c40();
extern void func_02030c98();
extern void func_020317f8();
extern void func_02031c40();
extern void func_02032220();
extern void func_02038be0();
extern void func_02039d88();
extern void func_0203d378();
extern void func_0203da20();
extern void func_0203e080();
extern char data_020bc554[];
extern char data_020cf994[];
extern char data_020cf99c[];
// clang-format off
asm void func_02039d88(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x198
    mov r4, r0
    mov r6, #0x0
    ldr r0, =0x10c1
    str r1, [sp, #0xc]
    str r2, [sp, #0x10]
    str r6, [sp, #0x1c]
    bl func_01ff8878
    mov r5, r0
    ldr r0, =0x10c1
    bl func_01ff88b4
    mov r1, r0
    mov r0, r5
    bl func_02014910
    str r0, [sp, #0x20]
    ldr r0, [r4, #0xc]
    tst r0, #0x10
    beq L_02039efc
    ldr r0, [r4, #0x1e4]
    add r5, r4, #0x1e4
    cmp r0, #0x0
    ldreq r0, [r5, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r5, #0x8]
    cmpeq r0, #0x0
    beq L_02039efc
    add r1, sp, #0x54
    add r2, sp, #0x58
    add r3, sp, #0x5c
    add r0, r4, #0xdc
    bl func_0202dc64
    ldr r3, [sp, #0x58]
    mov r2, #0x6
L_02039e10:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02039e10
    ldr r2, [sp, #0x58]
    mov r1, #0x1000
    mov r3, #0x0
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x54]
    mov r1, #0x0
    str r0, [r2, #0x0]
    ldr r2, [sp, #0x58]
    mov r3, #0x1000
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r2, [sp, #0x54]
    mov r1, #0x0
    str r0, [r2, #0x4]
    ldr r2, [sp, #0x58]
    mov r3, r1
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x54]
    str r0, [r1, #0x8]
    ldr r0, [sp, #0x58]
    ldr r2, [sp, #0x54]
    ldr r1, [r0, #0x8]
    ldr r3, [r0, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x5c]
    str r0, [r1, #0x0]
    ldr r0, [sp, #0x58]
    ldr r2, [sp, #0x54]
    ldr r1, [r0, #0x0]
    ldr r3, [r0, #0x8]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r1, [sp, #0x5c]
    str r0, [r1, #0x4]
    ldr r0, [sp, #0x58]
    ldr r2, [sp, #0x54]
    ldr r1, [r0, #0x4]
    ldr r3, [r0, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x5c]
    add r1, r4, #0xdc
    str r0, [r2, #0x8]
    mov r0, r4
    bl func_02031c40
L_02039efc:
    add r0, sp, #0x134
    add r1, r4, #0xdc
    mov r2, #0x64
    bl func_02001588
    add r0, sp, #0xd0
    add r1, r4, #0xdc
    mov r2, #0x64
    bl func_02001588
    ldr r2, [r4, #0xe0]
    ldr r1, [r4, #0x7c]
    mov r0, #0x0
    subs r1, r2, r1
    str r1, [sp, #0xac]
    add r11, r4, #0xe0
    add r2, r4, #0x7c
    str r2, [sp, #0x14]
    rsbmi r1, r1, #0x0
    ldr r3, [r11, #0x4]
    ldr r2, [r2, #0x4]
    mov r5, r0
    sub r2, r3, r2
    str r2, [sp, #0xb0]
    ldr r2, [sp, #0x14]
    ldr r3, [r11, #0x8]
    ldr r2, [r2, #0x8]
    cmp r1, #0x4
    sub r2, r3, r2
    str r2, [sp, #0xb4]
    bge L_02039f84
    ldr r1, [sp, #0xb0]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r5, #0x1
L_02039f84:
    cmp r5, #0x0
    beq L_02039fa0
    ldr r1, [sp, #0xb4]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_02039fa0:
    tst r0, #0xff
    bne L_02039fb8
    add r0, sp, #0x7c
    add r1, sp, #0xac
    bl func_01ff84a0
    b L_02039fc8
L_02039fb8:
    mov r0, #0x0
    str r0, [sp, #0x7c]
    str r0, [sp, #0x80]
    str r0, [sp, #0x84]
L_02039fc8:
    ldr r0, =data_020cf994
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    cmp r1, #0x5
    ble L_0203a028
    mov r3, #0x6
L_02039fe4:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r11]
    add r11, r11, #0x1
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    bne L_02039fe4
    mov r0, #0x0
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    add sp, sp, #0x198
    str r0, [r4, #0x44]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203a028:
    add r1, sp, #0x68
    add r2, sp, #0x64
    add r3, sp, #0x60
    add r0, r4, #0xdc
    bl func_0202dc64
    add r0, sp, #0xac
    add r1, r4, #0x1e4
    ldr r7, [r4, #0x1e4]
    bl VEC_DotProduct
    mov r5, r0
    add r0, sp, #0xac
    add r1, r4, #0x1e4
    ldr r8, [r4, #0x1e8]
    bl VEC_DotProduct
    mov r10, r0
    add r0, sp, #0xac
    add r1, r4, #0x1e4
    ldr r9, [r4, #0x1ec]
    bl VEC_DotProduct
    smull r2, r1, r5, r7
    smull r5, r3, r0, r9
    adds r0, r2, #0x800
    smull r8, r7, r10, r8
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    adds r2, r8, #0x800
    orr r0, r0, r1, lsl #0x14
    adc r1, r7, #0x0
    mov r7, r2, lsr #0xc
    adds r2, r5, #0x800
    orr r7, r7, r1, lsl #0x14
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    ldr r3, [sp, #0xac]
    ldr r1, [sp, #0xb0]
    sub r3, r3, r0
    sub r0, r1, r7
    str r0, [sp, #0xa4]
    ldr r0, =data_020cf994
    ldr r1, [sp, #0xb4]
    ldr r0, [r0, #0x0]
    sub r1, r1, r2
    str r3, [sp, #0xa0]
    str r1, [sp, #0xa8]
    cmp r0, #0x1
    bne L_0203a0f4
    ldr r3, =data_020cf99c
    add r0, sp, #0xa0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0203a0f4:
    ldr r2, [sp, #0xa0]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203a124
    ldr r2, [sp, #0xa4]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203a124:
    cmp r1, #0x0
    beq L_0203a140
    ldr r1, [sp, #0xa8]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_0203a140:
    tst r0, #0xff
    bne L_0203a158
    add r0, sp, #0x70
    add r1, sp, #0xa0
    bl func_01ff84a0
    b L_0203a168
L_0203a158:
    mov r0, #0x0
    str r0, [sp, #0x70]
    str r0, [sp, #0x74]
    str r0, [sp, #0x78]
L_0203a168:
    ldr r0, [r4, #0xc]
    tst r0, #0x10
    movne r7, #0xc00
    bne L_0203a198
    add r0, sp, #0xa0
    bl func_01ff8668
    ldr r1, [sp, #0x20]
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    adc r0, r0, #0x0
    mov r7, r1, lsr #0xc
    orr r7, r7, r0, lsl #0x14
L_0203a198:
    ldr r0, =0x733
    mov r8, #0x0
    cmp r7, r0
    movlt r7, r0
    ldr r0, [sp, #0x14]
    ldr r5, [sp, #0xa8]
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0xa0]
    mov r9, r8
    str r0, [sp, #0x28]
    add r1, r1, r0
    add r0, sp, #0xd0
    str r1, [r0, #0x4]
    ldr r0, [sp, #0x14]
    str r8, [sp, #0x18]
    ldr r2, [r0, #0x4]
    ldr r0, [sp, #0xa4]
    str r0, [sp, #0x2c]
    add r0, r2, r0
    add r2, sp, #0xd0
    str r0, [r2, #0x8]
    ldr r2, [sp, #0x14]
    ldr r2, [r2, #0x8]
    add r3, r2, r5
    add r2, sp, #0xd0
    str r3, [r2, #0xc]
    ldr r2, [r4, #0x1e4]
    smull r10, r2, r7, r2
    adds ip, r10, #0x800
    adc r10, r2, #0x0
    mov r2, ip, lsr #0xc
    orr r2, r2, r10, lsl #0x14
    str r2, [sp, #0xc4]
    add ip, r1, r2
    ldr r1, [r4, #0x1e8]
    smull r1, r10, r7, r1
    adds r1, r1, #0x800
    adc r10, r10, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r10, lsl #0x14
    str r1, [sp, #0xc8]
    add r0, r0, r1
    str r0, [sp, #0x44]
    ldr lr, [r4, #0x1ec]
    add r10, sp, #0xd0
    str ip, [r10, #0x4]
    mov ip, r10
    ldr r10, [sp, #0x44]
    add r0, sp, #0x6c
    str r10, [ip, #0x8]
    smull ip, r10, r7, lr
    adds r7, ip, #0x800
    adc r10, r10, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r10, lsl #0x14
    add r10, r3, r7
    add r3, sp, #0xd0
    str r10, [r3, #0xc]
    ldr r3, [sp, #0x14]
    str r7, [sp, #0xcc]
    ldr r10, [r3, #0x0]
    ldr r3, [sp, #0x28]
    ldr lr, =data_020bc554
    add r3, r10, r3
    sub r10, r3, r2
    add r2, sp, #0x134
    str r3, [r2, #0x4]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x2c]
    ldr ip, [r2, #0x4]
    mov r2, r4
    add r3, ip, r3
    add ip, sp, #0x134
    sub r1, r3, r1
    str r3, [ip, #0x8]
    ldr r3, [sp, #0x14]
    ldr ip, [r3, #0x8]
    ldr r3, [sp, #0xc]
    add r5, ip, r5
    sub r5, r5, r7
    add r7, sp, #0x134
    str r1, [r7, #0x8]
    mov r1, r7
    str r5, [r1, #0xc]
    str r10, [r7, #0x4]
    add r1, sp, #0xd0
    str r1, [sp, #0x0]
    mov r1, r7
    str r1, [sp, #0x4]
    mov r1, #0x1
    str r1, [sp, #0x8]
    ldr r1, [lr, #0x0]
    bl func_0203d378
    cmp r0, #0x0
    beq L_0203b07c
    ldr r1, =data_020bc554
    ldr r0, [sp, #0x6c]
    ldr r1, [r1, #0x0]
    add r3, sp, #0x70
    mov r2, r4
    bl func_02032220
    mov r5, r8
    mvn r0, #0x0
    mov r10, r5
    str r0, [sp, #0x30]
    b L_0203a3dc
L_0203a340:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r7, r0, r10
    ldrsh r0, [r7, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203a3d4
    ldr r1, [r7, #0x20]
    ldr r2, [sp, #0x30]
    ldr r1, [r1, #0xc]
    mov r0, #0x0
    cmp r1, r2
    beq L_0203a38c
    ldrh r2, [r1, #0x2]
    and r2, r2, #0x40
    cmp r2, #0x40
    moveq r0, #0x1
L_0203a38c:
    tst r0, #0xff
    beq L_0203a3d4
    ldr r0, [sp, #0x30]
    cmp r1, r0
    beq L_0203a3b4
    ldrh r0, [r1, #0x2]
    and r0, r0, #0x8000
    cmp r0, #0x8000
    moveq r0, #0x1
    beq L_0203a3b8
L_0203a3b4:
    mov r0, #0x0
L_0203a3b8:
    tst r0, #0xff
    bne L_0203a3d4
    mov r0, r4
    add r1, r7, #0x4
    bl func_02030c40
    cmp r0, #0x0
    movne r8, r7
L_0203a3d4:
    add r10, r10, #0x68
    add r5, r5, #0x1
L_0203a3dc:
    ldr r0, [sp, #0x6c]
    cmp r5, r0
    bge L_0203a3f0
    cmp r8, #0x0
    beq L_0203a340
L_0203a3f0:
    mov r7, #0x0
    mov r5, r7
    b L_0203a45c
L_0203a3fc:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r10, r0, r5
    ldrsh r0, [r10, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203a454
    mov r0, r4
    add r1, r10, #0x4
    bl func_02030c98
    cmp r0, #0x0
    beq L_0203a454
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r1, [sp, #0xc]
    mov r3, r10
    mov r0, r4
    mov r2, #0x1
    str r10, [sp, #0x18]
    bl func_0203da20
L_0203a454:
    add r5, r5, #0x68
    add r7, r7, #0x1
L_0203a45c:
    ldr r0, [sp, #0x6c]
    cmp r7, r0
    bge L_0203a474
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0203a3fc
L_0203a474:
    cmp r8, #0x0
    beq L_0203a5d4
    mvn r0, #0x0
    str r0, [sp, #0x3c]
    rsb r0, r0, #0x198
    str r0, [sp, #0x38]
    mov r6, #0x0
    ldr r0, [sp, #0x3c]
    str r6, [sp, #0x24]
    add r0, r0, #0xb50
    mov r5, r6
    str r0, [sp, #0x34]
    b L_0203a5bc
L_0203a4a8:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r10, r0, r5
    ldrsh r0, [r10, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203a5b4
    add r0, r10, #0x4
    add r1, r8, #0x4
    bl VEC_DotProduct
    ldr r1, [sp, #0x34]
    cmp r0, r1
    bge L_0203a5b4
    ldr r2, [r10, #0x10]
    ldr r1, [r8, #0x10]
    add r0, sp, #0xc4
    sub r1, r2, r1
    str r1, [sp, #0xc4]
    ldr r3, [r10, #0x14]
    ldr r2, [r8, #0x14]
    add r1, r8, #0x4
    sub r2, r3, r2
    str r2, [sp, #0xc8]
    ldr r3, [r10, #0x18]
    ldr r2, [r8, #0x18]
    sub r2, r3, r2
    str r2, [sp, #0xcc]
    bl VEC_DotProduct
    ldr r1, [sp, #0x38]
    cmp r0, r1
    ble L_0203a5b4
    add r0, sp, #0x70
    add r1, r10, #0x4
    bl VEC_DotProduct
    ldr r2, [r10, #0x20]
    ldr r3, [sp, #0x3c]
    ldr r2, [r2, #0xc]
    mov r1, #0x0
    cmp r2, r3
    beq L_0203a560
    ldrh r3, [r2, #0x2]
    and r3, r3, #0x40
    cmp r3, #0x40
    moveq r1, #0x1
L_0203a560:
    tst r1, #0xff
    beq L_0203a5a4
    ldr r1, [sp, #0x3c]
    cmp r2, r1
    beq L_0203a588
    ldrh r1, [r2, #0x2]
    and r1, r1, #0x8000
    cmp r1, #0x8000
    moveq r1, #0x1
    beq L_0203a58c
L_0203a588:
    mov r1, #0x0
L_0203a58c:
    tst r1, #0xff
    bne L_0203a5a4
    mov r0, #0x1
    mov r9, #0x0
    str r0, [sp, #0x24]
    b L_0203a5b4
L_0203a5a4:
    ldr r1, [sp, #0x1c]
    cmp r0, r1
    strlt r0, [sp, #0x1c]
    movlt r9, r10
L_0203a5b4:
    add r5, r5, #0x68
    add r6, r6, #0x1
L_0203a5bc:
    ldr r0, [sp, #0x6c]
    cmp r6, r0
    bge L_0203a5d4
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_0203a4a8
L_0203a5d4:
    cmp r9, #0x0
    beq L_0203a660
    ldr r0, [r9, #0x20]
    mov r1, #0x0
    ldr r2, [r0, #0xc]
    sub r0, r1, #0x1
    cmp r2, r0
    beq L_0203a604
    ldrh r0, [r2, #0x2]
    and r0, r0, #0x40
    cmp r0, #0x40
    moveq r1, #0x1
L_0203a604:
    tst r1, #0xff
    beq L_0203a660
    mvn r0, #0x0
    cmp r2, r0
    beq L_0203a62c
    ldrh r0, [r2, #0x2]
    and r0, r0, #0x8000
    cmp r0, #0x8000
    moveq r0, #0x1
    beq L_0203a630
L_0203a62c:
    mov r0, #0x0
L_0203a630:
    tst r0, #0xff
    bne L_0203a660
    mov r0, r4
    add r1, r9, #0x4
    bl func_02030c40
    cmp r0, #0x0
    beq L_0203a660
    add r0, r9, #0x4
    add r1, r8, #0x4
    bl VEC_DotProduct
    cmp r0, #0x0
    movne r9, #0x0
L_0203a660:
    ldr r1, [r4, #0xc]
    tst r1, #0x4000
    beq L_0203a7a0
    ldr r0, [r4, #0x168]
    ldr r0, [r0, #0x0]
    and r0, r0, #0x1
    cmp r0, #0x1
    beq L_0203a7a0
    tst r1, #0x10
    bne L_0203a7a0
    ldr r0, [sp, #0xa8]
    cmp r0, #0x0
    bge L_0203a7a0
    ldr r0, [sp, #0x6c]
    mov r10, #0x0
    cmp r0, #0x0
    ble L_0203a7a0
    mvn r0, #0x0
    mov r5, r10
    str r0, [sp, #0x40]
L_0203a6b0:
    ldr r0, =data_020bc554
    ldr r0, [r0, #0x0]
    add r1, r0, r5
    ldrsh r0, [r1, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203a78c
    ldr r2, [r1, #0x20]
    mov r0, #0x0
    ldr r3, [r2, #0xc]
    ldr r2, [sp, #0x40]
    cmp r3, r2
    beq L_0203a6fc
    ldrh r2, [r3, #0x2]
    and r2, r2, #0x8000
    cmp r2, #0x8000
    moveq r0, #0x1
L_0203a6fc:
    tst r0, #0xff
    bne L_0203a78c
    add r1, r1, #0x4
    mov r0, r4
    bl func_02030c98
    cmp r0, #0x0
    beq L_0203a78c
    mov r3, #0x6
L_0203a71c:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r11]
    add r11, r11, #0x1
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    bne L_0203a71c
    mov r0, #0x0
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    str r0, [r4, #0x44]
    ldr r1, [r4, #0xc]
    sub r0, r6, #0x1
    orr r1, r1, #0x10000
    str r1, [r4, #0xc]
    str r0, [sp, #0x0]
    ldr r0, =data_020bc554
    ldr r2, [sp, #0x6c]
    ldr r3, [r0, #0x0]
    ldr r1, [sp, #0xc]
    mov r0, r4
    bl func_0203da20
    add sp, sp, #0x198
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203a78c:
    add r5, r5, #0x68
    add r10, r10, #0x1
    ldr r0, [sp, #0x6c]
    cmp r10, r0
    blt L_0203a6b0
L_0203a7a0:
    cmp r9, #0x0
    beq L_0203a7b0
    cmp r6, r7
    movgt r7, r6
L_0203a7b0:
    sub r0, r7, #0x1
    str r0, [sp, #0x0]
    ldr r0, =data_020bc554
    ldr r2, [sp, #0x6c]
    ldr r3, [r0, #0x0]
    ldr r1, [sp, #0xc]
    mov r0, r4
    bl func_0203da20
    cmp r8, #0x0
    beq L_0203ac64
    add r5, r4, #0x1e4
    add r3, r8, #0x4
    mov r2, #0x6
L_0203a7e4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_0203a7e4
    cmp r9, #0x0
    bne L_0203a97c
    ldrsh r0, [r8, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    bne L_0203a870
    ldr r1, [r8, #0x30]
    add r0, sp, #0x134
    ldmib r0, {r2, r3}
    add r0, r2, r1
    str r0, [sp, #0xc4]
    add r0, sp, #0x134
    ldr r1, [r8, #0x34]
    ldr r2, [r0, #0xc]
    add r0, r3, r1
    str r0, [sp, #0xc8]
    ldr r0, [r8, #0x38]
    add r1, sp, #0xc4
    add r2, r2, r0
    add r0, r4, #0xdc
    str r2, [sp, #0xcc]
    bl func_0202e19c
    b L_0203aeb8
L_0203a870:
    mov r7, #0x0
    mov r6, r7
    mov r11, #0x1
    ldr r5, =data_020bc554
    b L_0203a8dc
L_0203a884:
    ldr r0, [r5, #0x0]
    add r10, r0, r6
    ldrsh r0, [r10, #0x2e]
    cmp r0, #0x63
    movne r0, r11
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203a8d4
    mov r0, r4
    add r1, r10, #0x4
    bl func_02030c40
    cmp r0, #0x0
    beq L_0203a8d4
    ldrsh r0, [r10, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    moveq r9, r10
L_0203a8d4:
    add r6, r6, #0x68
    add r7, r7, #0x1
L_0203a8dc:
    ldr r0, [sp, #0x6c]
    cmp r7, r0
    bge L_0203a8f0
    cmp r9, #0x0
    beq L_0203a884
L_0203a8f0:
    cmp r9, #0x0
    add r0, sp, #0x134
    beq L_0203a93c
    ldr r1, [r9, #0x30]
    ldmib r0, {r2, r3}
    add r0, r2, r1
    str r0, [sp, #0xc4]
    add r0, sp, #0x134
    ldr r1, [r9, #0x34]
    ldr r2, [r0, #0xc]
    add r0, r3, r1
    str r0, [sp, #0xc8]
    ldr r0, [r9, #0x38]
    add r1, sp, #0xc4
    add r2, r2, r0
    add r0, r4, #0xdc
    str r2, [sp, #0xcc]
    bl func_0202e19c
    b L_0203aeb8
L_0203a93c:
    ldr r1, [r8, #0x30]
    ldmib r0, {r2, r3}
    add r0, r2, r1
    str r0, [sp, #0xc4]
    add r0, sp, #0x134
    ldr r1, [r8, #0x34]
    ldr r2, [r0, #0xc]
    add r0, r3, r1
    str r0, [sp, #0xc8]
    ldr r0, [r8, #0x38]
    add r1, sp, #0xc4
    add r2, r2, r0
    add r0, r4, #0xdc
    str r2, [sp, #0xcc]
    bl func_0202e19c
    b L_0203aeb8
L_0203a97c:
    beq L_0203ab04
    ldr r0, [r9, #0x0]
    cmp r0, #0x0
    movlt r0, #0x1
    movge r0, #0x0
    tst r0, #0xff
    beq L_0203ab04
    ldr r0, =data_020cf994
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bgt L_0203a9b4
    ldr r0, [r4, #0xc]
    tst r0, #0x10
    beq L_0203ab04
L_0203a9b4:
    sub r0, r7, #0x1
    str r0, [sp, #0x0]
    ldr r0, =data_020bc554
    ldr r2, [sp, #0x6c]
    ldr r3, [r0, #0x0]
    add r0, sp, #0xb8
    mov r1, r4
    bl func_0203e080
    add r0, sp, #0xb8
    add r1, r8, #0x4
    bl VEC_DotProduct
    ldr r2, [r8, #0x4]
    ldr r1, [sp, #0xb8]
    smull r3, r2, r0, r2
    adds r3, r3, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [sp, #0xc4]
    sub r5, r1, r3
    ldr r2, [r8, #0x8]
    ldr r1, [sp, #0xbc]
    smull r3, r2, r0, r2
    adds r3, r3, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    sub r1, r1, r3
    str r3, [sp, #0xc8]
    ldr r3, [r8, #0xc]
    ldr r2, [sp, #0xc0]
    smull r6, r3, r0, r3
    adds r6, r6, #0x800
    adc r0, r3, #0x0
    mov r3, r6, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    sub r0, r2, r3
    add r2, sp, #0x134
    str r5, [sp, #0xb8]
    str r1, [sp, #0xbc]
    str r0, [sp, #0xc0]
    str r3, [sp, #0xcc]
    ldr r3, [r8, #0x30]
    ldr r2, [r2, #0x4]
    add r3, r5, r3
    str r3, [sp, #0xb8]
    ldr r5, [r8, #0x34]
    add r2, r2, r3
    add r3, sp, #0x134
    add r5, r1, r5
    ldr r3, [r3, #0x8]
    str r5, [sp, #0xbc]
    add r1, r3, r5
    ldr r6, [r8, #0x38]
    add r3, sp, #0x134
    add r6, r0, r6
    ldr r3, [r3, #0xc]
    str r2, [sp, #0x88]
    add r0, r3, r6
    ldr r3, [sp, #0x14]
    str r1, [sp, #0x8c]
    str r0, [sp, #0x90]
    str r6, [sp, #0xc0]
    ldr r6, [r3, #0x0]
    ldr r5, [sp, #0xac]
    sub r2, r2, r6
    sub r5, r5, r2
    str r2, [sp, #0xc4]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0xb0]
    ldr r6, [r2, #0x4]
    ldr r2, [sp, #0xb4]
    sub r1, r1, r6
    sub r3, r3, r1
    str r1, [sp, #0xc8]
    ldr r1, [sp, #0x14]
    ldr r1, [r1, #0x8]
    sub r1, r0, r1
    sub r0, r2, r1
    str r5, [sp, #0xac]
    str r3, [sp, #0xb0]
    str r1, [sp, #0xcc]
    str r0, [sp, #0xb4]
    b L_0203ab38
L_0203ab04:
    add r1, sp, #0x88
    mov r0, #0x6
L_0203ab0c:
    ldr r2, [sp, #0x14]
    subs r0, r0, #0x1
    ldrb r5, [r2, #0x0]
    ldrb r3, [r2, #0x1]
    add r2, r2, #0x2
    str r2, [sp, #0x14]
    swpb r2, r5, [r1]
    add r1, r1, #0x1
    swpb r2, r3, [r1]
    add r1, r1, #0x1
    bne L_0203ab0c
L_0203ab38:
    add r5, sp, #0x88
    mov r3, r11
    mov r2, #0x6
L_0203ab44:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0203ab44
    add r0, r9, #0x4
    str r0, [sp, #0x0]
    ldr r3, [sp, #0x10]
    add r0, sp, #0x94
    str r3, [sp, #0x4]
    mov r5, #0x1
    add r2, sp, #0xac
    mov r1, r4
    add r3, r8, #0x4
    str r5, [sp, #0x8]
    bl func_02038be0
    ldr r0, =data_020cf99c
    add r1, sp, #0x94
    bl VEC_DotProduct
    ldr r3, [sp, #0x94]
    mov r1, #0x0
    cmp r3, #0x0
    rsblt r3, r3, #0x0
    mov r2, r1
    cmp r3, #0x4
    bge L_0203abd0
    ldr r3, [sp, #0x98]
    cmp r3, #0x0
    rsblt r3, r3, #0x0
    cmp r3, #0x4
    movlt r2, #0x1
L_0203abd0:
    cmp r2, #0x0
    beq L_0203abec
    ldr r2, [sp, #0x9c]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203abec:
    tst r1, #0xff
    bne L_0203ac20
    cmp r0, #0x0
    blt L_0203ac20
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    mov r0, r4
    bl func_02039d88
    ldr r1, [sp, #0x10]
    mov r0, r4
    bl func_020317f8
    add sp, sp, #0x198
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203ac20:
    add r3, sp, #0x88
    mov r2, #0x6
L_0203ac28:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r11]
    add r11, r11, #0x1
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    bne L_0203ac28
    b L_0203aeb8
L_0203ac64:
    cmp r9, #0x0
    beq L_0203ae74
    ldr r0, =data_020bc554
    str r7, [sp, #0x0]
    ldr r3, [r0, #0x0]
    ldr r2, [sp, #0x6c]
    add r0, sp, #0xb8
    mov r1, r4
    bl func_0203e080
    add r0, sp, #0x134
    ldr r3, [r0, #0x4]
    ldr r2, [r0, #0x8]
    ldr r0, [sp, #0xbc]
    ldr r1, [sp, #0xb8]
    add r0, r2, r0
    add r1, r3, r1
    add r2, sp, #0x134
    ldr r3, [r2, #0xc]
    ldr r2, [sp, #0xc0]
    str r1, [sp, #0x88]
    add r2, r3, r2
    ldr r3, [sp, #0x14]
    str r0, [sp, #0x8c]
    str r2, [sp, #0x90]
    ldr r3, [r3, #0x0]
    ldr r6, [sp, #0xac]
    sub r1, r1, r3
    ldr r3, [sp, #0x14]
    str r1, [sp, #0xc4]
    ldr r3, [r3, #0x4]
    sub r6, r6, r1
    sub r0, r0, r3
    ldr r3, [sp, #0x14]
    str r0, [sp, #0xc8]
    ldr r3, [r3, #0x8]
    ldr r5, [sp, #0xb0]
    sub r7, r2, r3
    sub r2, r5, r0
    ldr r1, [sp, #0xb4]
    str r2, [sp, #0xb0]
    sub r0, r1, r7
    add r5, sp, #0x88
    mov r3, r11
    str r7, [sp, #0xcc]
    str r6, [sp, #0xac]
    str r0, [sp, #0xb4]
    mov r2, #0x6
L_0203ad20:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0203ad20
    add r0, r9, #0x4
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x10]
    add r2, sp, #0xac
    str r0, [sp, #0x4]
    mov r0, #0x1
    str r0, [sp, #0x8]
    ldr r3, [sp, #0x64]
    add r0, sp, #0x94
    mov r1, r4
    bl func_02038be0
    ldr r0, =data_020cf99c
    add r1, sp, #0x94
    bl VEC_DotProduct
    cmp r0, #0x0
    bge L_0203adcc
    mov r3, #0x6
L_0203ad88:
    ldr r0, [sp, #0x14]
    subs r3, r3, #0x1
    ldrb r2, [r0, #0x0]
    ldrb r1, [r0, #0x1]
    add r0, r0, #0x2
    str r0, [sp, #0x14]
    swpb r0, r2, [r11]
    add r11, r11, #0x1
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    bne L_0203ad88
    mov r0, #0x0
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    add sp, sp, #0x198
    str r0, [r4, #0x44]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203adcc:
    ldr r2, [sp, #0x94]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    cmp r2, #0x4
    bge L_0203adfc
    ldr r2, [sp, #0x98]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203adfc:
    cmp r1, #0x0
    beq L_0203ae18
    ldr r1, [sp, #0x9c]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_0203ae18:
    tst r0, #0xff
    bne L_0203ae44
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    mov r0, r4
    bl func_02039d88
    ldr r1, [sp, #0x10]
    mov r0, r4
    bl func_020317f8
    add sp, sp, #0x198
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203ae44:
    add r3, sp, #0x88
    mov r2, #0x6
L_0203ae4c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r11]
    add r11, r11, #0x1
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    bne L_0203ae4c
    b L_0203aeb8
L_0203ae74:
    add r0, r4, #0xdc
    add r1, r4, #0x78
    mov r2, #0x64
    bl func_02001588
    mov r0, #0x0
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    str r0, [r4, #0x44]
    ldr r0, [r4, #0xc]
    add sp, sp, #0x198
    orr r0, r0, #0x10000
    str r0, [r4, #0xc]
    tst r0, #0x4000
    ldrne r1, [r4, #0x168]
    ldrne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203aeb8:
    cmp r8, #0x0
    beq L_0203b068
    ldrsh r0, [r8, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    bne L_0203b068
    ldr r2, [sp, #0x64]
    mov r3, #0x0
    ldr r1, [r8, #0x4]
    ldr r0, [r2, #0x0]
    add r5, r8, #0x4
    subs r7, r1, r0
    str r7, [sp, #0xc4]
    ldr r1, [r5, #0x4]
    ldr r0, [r2, #0x4]
    rsbmi r7, r7, #0x0
    sub r0, r1, r0
    str r0, [sp, #0xc8]
    ldr r1, [r5, #0x8]
    ldr r0, [r2, #0x8]
    mov r6, r3
    sub r0, r1, r0
    str r0, [sp, #0xcc]
    cmp r7, #0x4
    bge L_0203af3c
    ldr r0, [sp, #0xc8]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r6, #0x1
L_0203af3c:
    cmp r6, #0x0
    beq L_0203af58
    ldr r0, [sp, #0xcc]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_0203af58:
    tst r3, #0xff
    bne L_0203b068
    add r1, sp, #0x48
    add r2, sp, #0x4c
    add r3, sp, #0x50
    add r0, r4, #0xdc
    bl func_0202dc64
    ldr r3, [sp, #0x4c]
    mov r2, #0x6
L_0203af7c:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_0203af7c
    ldr r2, [sp, #0x4c]
    mov r1, #0x1000
    mov r3, #0x0
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x48]
    mov r1, #0x0
    str r0, [r2, #0x0]
    ldr r2, [sp, #0x4c]
    mov r3, #0x1000
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r2, [sp, #0x48]
    mov r1, #0x0
    str r0, [r2, #0x4]
    ldr r2, [sp, #0x4c]
    mov r3, r1
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x48]
    str r0, [r1, #0x8]
    ldr r0, [sp, #0x4c]
    ldr r2, [sp, #0x48]
    ldr r1, [r0, #0x8]
    ldr r3, [r0, #0x4]
    ldmib r2, {r0, r2}
    bl func_01ff87ec
    ldr r1, [sp, #0x50]
    str r0, [r1, #0x0]
    ldr r0, [sp, #0x4c]
    ldr r2, [sp, #0x48]
    ldr r1, [r0, #0x0]
    ldr r3, [r0, #0x8]
    ldr r0, [r2, #0x8]
    ldr r2, [r2, #0x0]
    bl func_01ff87ec
    ldr r1, [sp, #0x50]
    str r0, [r1, #0x4]
    ldr r0, [sp, #0x4c]
    ldr r2, [sp, #0x48]
    ldr r1, [r0, #0x4]
    ldr r3, [r0, #0x0]
    ldmia r2, {r0, r2}
    bl func_01ff87ec
    ldr r2, [sp, #0x50]
    add r1, r4, #0xdc
    str r0, [r2, #0x8]
    mov r0, r4
    bl func_02031c40
L_0203b068:
    ldr r1, [sp, #0x10]
    mov r0, r4
    bl func_020317f8
    add sp, sp, #0x198
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203b07c:
    add r0, r4, #0xdc
    add r1, r4, #0x78
    mov r2, #0x64
    bl func_02001588
    mov r0, r8
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    str r0, [r4, #0x44]
    ldr r0, [r4, #0xc]
    orr r0, r0, #0x10000
    str r0, [r4, #0xc]
    tst r0, #0x4000
    ldrne r1, [r4, #0x168]
    ldrne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    add sp, sp, #0x198
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
