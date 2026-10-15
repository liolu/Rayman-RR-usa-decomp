#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8668();
extern void func_02001588();
extern void FX_Div();
extern void func_0201bdd0();
extern void func_0201c454();
extern void func_0201c67c();
extern void func_0202c664();
extern void func_0202c8a4();
extern void func_0202cb6c();
extern void func_0202dc64();
extern void func_0202dde8();
extern void func_0202e1e0();
extern void func_0202e4e8();
extern void func_02030d6c();
extern void func_02030ed4();
extern void func_020317f8();
extern void func_02031898();
extern void func_020318e0();
extern void func_02031948();
extern void func_02031b70();
extern void func_02031c0c();
extern void func_02031cfc();
extern void func_0203288c();
extern void func_020329a4();
extern void func_02032b18();
extern void func_02032bdc();
extern void func_02032cdc();
extern void func_02032e54();
extern void func_02035ea0();
extern void func_02035f6c();
extern void func_02038fd8();
extern void func_020390b4();
extern void func_02039d88();
extern void func_0203ce08();
extern void func_0203cf3c();
extern void func_0203df54();
extern void func_0203eec8();
extern void func_0203ef18();
extern void func_0203f01c();
extern void func_0203f230();
extern void func_0203f340();
extern void func_0203f4b0();
extern void func_0203f638();
extern void func_0203f7a8();
extern void func_0203f804();
extern void func_0203f870();
extern void func_0203f8a4();
extern void func_0203f970();
extern void func_0203fbac();
extern void func_0203fe60();
extern void func_0203fee0();
extern void func_02066f6c();
extern void func_02066fb4();
extern void func_0206b3f4();
extern void func_0206b414();
extern char data_020bc550[];
extern char data_020c76a4[];
extern char data_020cf718[];
extern char data_020cf71c[];
extern char data_020cf784[];
extern char data_020cf98c[];
extern char data_020cf994[];
extern char data_020cf998[];
extern char data_020dc19c[];
// clang-format off
asm void func_02036024(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x288
    mov r10, r0
    ldr r2, [r10, #0xc]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    mov r9, r1
    str r0, [sp, #0x4]
    tst r2, #0x4
    ldr r8, [sp, #0x2b0]
    beq L_02036078
    tst r2, #0x4000
    beq L_02036078
    str r0, [sp, #0x3c]
    str r0, [sp, #0x40]
    str r0, [sp, #0x44]
    str r0, [sp, #0x48]
    str r0, [sp, #0x4c]
    str r0, [sp, #0x50]
    str r0, [sp, #0x54]
L_02036078:
    ldr r0, [r10, #0xc]
    tst r0, #0x4000
    beq L_020360b0
    ldr r0, [r10, #0x168]
    str r0, [sp, #0xc]
    ldr r0, [r0, #0x4]
    tst r0, #0x80
    ldreq r0, [sp, #0xc]
    moveq r1, #0x0
    streq r1, [r0, #0x4]
    beq L_020360b0
    ldr r0, [sp, #0xc]
    mov r1, #0x10000
    str r1, [r0, #0x4]
L_020360b0:
    ldr r1, [r10, #0xc]
    mov r0, r9
    orr r1, r1, #0x2000
    bic r1, r1, #0x1000000
    str r1, [r10, #0xc]
    bl func_02066f6c
    cmp r0, #0x0
    bne L_020360fc
    mov r0, r10
    bl func_02032b18
    cmp r0, #0x0
    beq L_020360fc
    ldr r0, [r10, #0xc]
    tst r0, #0x80
    bne L_020360fc
    tst r0, #0x1000
    addeq sp, sp, #0x288
    moveq r0, r10
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020360fc:
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_02036118
    add r0, r10, #0x304
    str r0, [sp, #0x14]
    add r0, r10, #0x2a0
    str r0, [sp, #0x10]
L_02036118:
    ldr r1, =data_020c76a4
    add r0, sp, #0x224
    ldr r1, [r1, #0x0]
    mov r2, #0x64
    bl func_02001588
    ldr r1, =data_020c76a4
    add r0, sp, #0x15c
    ldr r1, [r1, #0x0]
    mov r2, #0x64
    bl func_02001588
    ldr r1, [r9, #0x24]
    add r0, sp, #0x94
    str r1, [sp, #0x0]
    bl func_0202c664
    ldr r0, [r10, #0xc]
    ldr r1, =data_020cf718
    orr r0, r0, #0x800
    str r0, [r10, #0xc]
    mov r2, #0x0
    ldr r0, =data_020cf994
    str r2, [r1, #0x0]
    ldr r1, =data_020cf998
    str r2, [r0, #0x0]
    swpb r0, r2, [r1]
    add r4, sp, #0x94
    ldr r0, [r10, #0xc]
    add r7, sp, #0xf8
    tst r0, #0x80
    beq L_02036268
    ldr r1, [sp, #0x0]
    add r0, r10, #0xdc
    mov r2, #0x64
    bl func_02001588
    ldr r1, [sp, #0x0]
    add r0, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_020361d8
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x0]
    mov r2, #0x64
    bl func_02001588
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x0]
    mov r2, #0x64
    bl func_02001588
L_020361d8:
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_02036214
    add r5, r10, #0x1c0
    add r3, r10, #0xe0
    mov r2, #0x6
L_020361f0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_020361f0
L_02036214:
    ldr r0, [r10, #0xc]
    tst r0, #0x1000
    bne L_0203624c
    ldr r0, [sp, #0x0]
    add r1, sp, #0x70
    add r2, sp, #0x64
    add r3, sp, #0x58
    bl func_0202dde8
    ldr r0, [sp, #0x70]
    str r0, [r10, #0x48]
    ldr r0, [sp, #0x68]
    str r0, [r10, #0x4c]
    ldr r0, [sp, #0x60]
    str r0, [r10, #0x50]
L_0203624c:
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x80
    str r0, [r10, #0xc]
L_02036268:
    ldr r0, [r10, #0xc]
    tst r0, #0x10
    beq L_02036284
    tst r0, #0x4
    beq L_02036284
    mov r0, r10
    bl func_0203f230
L_02036284:
    mov r0, r4
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r10, #0x8]
    tst r0, #0x20000000
    beq L_020362ac
    mov r0, r4
    add r1, r10, #0x140
    bl func_0202e4e8
L_020362ac:
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_020362d8
    add r0, r10, #0x100
    ldrsb r0, [r0, #0xf0]
    cmp r0, #0x0
    bgt L_020362d8
    mov r0, r9
    bl func_02066fb4
    add r1, r10, #0x1f0
    swpb r0, r0, [r1]
L_020362d8:
    ldr r0, [r10, #0xc]
    tst r0, #0x200
    beq L_02036678
    ldr r0, [r10, #0x8]
    add r1, sp, #0x30
    tst r0, #0x20000000
    ldr r0, [r10, #0x3c]
    movne r2, #0x1
    smull r3, r0, r8, r0
    moveq r2, #0x0
    adds r3, r3, #0x800
    adc r0, r0, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [sp, #0x30]
    ldr r3, [r10, #0x40]
    and r11, r2, #0xff
    smull r5, r3, r8, r3
    adds r5, r5, #0x800
    adc r3, r3, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    str r5, [sp, #0x34]
    ldr r3, [r10, #0x44]
    mov r0, r10
    smull r3, r2, r8, r3
    adds r3, r3, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [sp, #0x38]
    bl func_0203288c
    add r0, sp, #0x224
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r10, #0x8]
    tst r0, #0xe0000
    beq L_0203639c
    mov r0, r10
    mov r1, r8
    mov r2, r4
    mov r3, r7
    bl func_0203f340
    ldr r0, [r10, #0x8]
    bic r1, r0, #0x20000
    bic r0, r1, #0x40000
    bic r0, r0, #0x80000
    str r0, [r10, #0x8]
L_0203639c:
    cmp r11, #0x0
    beq L_020363b8
    mov r0, r10
    bl func_0203f804
    ldr r0, [r10, #0x8]
    bic r0, r0, #0x20000000
    str r0, [r10, #0x8]
L_020363b8:
    ldr r0, [r10, #0x8]
    tst r0, #0x2
    beq L_02036568
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_020364d0
    add r2, r10, #0x100
    ldrsb r0, [r2, #0xf0]
    add r1, r10, #0x1f0
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0xf0]
    cmp r0, #0x0
    bne L_02036568
    ldr r0, [r10, #0xc]
    tst r0, #0x4000000
    bne L_0203640c
    ldr r0, =data_020cf98c
    ldr r3, [r0, #0x0]
    cmp r3, #0x0
    bne L_02036420
L_0203640c:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    b L_0203648c
L_02036420:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035ea0
    mov r6, r0
    mov r0, r10
    mov r1, r6
    bl func_02032bdc
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    cmp r6, #0x1
    mov r5, #0x1
    ble L_02036480
L_0203645c:
    mov r0, r10
    bl func_02032e54
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    add r5, r5, #0x1
    cmp r5, r6
    blt L_0203645c
L_02036480:
    mov r0, r10
    mov r1, r6
    bl func_02032cdc
L_0203648c:
    mov r0, r9
    bl func_02066fb4
    cmp r0, #0x1
    bls L_02036568
    add r5, r10, #0x1c0
    add r3, r10, #0xe0
    mov r2, #0x6
L_020364a8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_020364a8
    b L_02036568
L_020364d0:
    tst r0, #0x4000000
    bne L_020364e8
    ldr r0, =data_020cf98c
    ldr r3, [r0, #0x0]
    cmp r3, #0x0
    bne L_020364fc
L_020364e8:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    b L_02036568
L_020364fc:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035ea0
    mov r6, r0
    mov r0, r10
    mov r1, r6
    bl func_02032bdc
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    cmp r6, #0x1
    mov r5, #0x1
    ble L_0203655c
L_02036538:
    mov r0, r10
    bl func_02032e54
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    add r5, r5, #0x1
    cmp r5, r6
    blt L_02036538
L_0203655c:
    mov r0, r10
    mov r1, r6
    bl func_02032cdc
L_02036568:
    mov r0, r10
    mov r1, r8
    bl func_020317f8
    mov r0, r10
    add r1, r10, #0xdc
    bl func_020318e0
    ldr r0, [sp, #0x0]
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    bne L_020365ac
    ldr r0, [sp, #0x0]
    add r1, r10, #0xdc
    mov r2, #0x64
    bl func_02001588
    mov r0, r9
    bl func_0201c454
L_020365ac:
    mov r0, r9
    bl func_0206b414
    cmp r0, #0x0
    beq L_02036630
    add r0, r10, #0x78
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    bne L_0203665c
    mov r0, r9
    bl func_0201c67c
    cmp r11, #0x0
    beq L_020365f4
    add r7, sp, #0x1c0
    add r1, sp, #0x224
    mov r0, r7
    bl func_0202cb6c
    b L_02036618
L_020365f4:
    ldr r0, [r10, #0xc]
    tst r0, #0x800
    beq L_02036618
    mov r0, r7
    mov r1, r4
    bl func_0202cb6c
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x800
    str r0, [r10, #0xc]
L_02036618:
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x224
    mov r3, r7
    bl func_0203fe60
    b L_0203665c
L_02036630:
    mov r0, r9
    bl func_0206b3f4
    tst r0, #0x2
    beq L_0203665c
    add r0, r10, #0x78
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    bne L_0203665c
    mov r0, r9
    bl func_0201c67c
L_0203665c:
    mov r0, r10
    bl func_02031898
    mov r0, r10
    bl func_0203df54
    add sp, sp, #0x288
    mov r0, r10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02036678:
    ldr r1, =data_020dc19c
    mov r0, r8
    ldr r5, [r1, #0xc4]
    mov r1, r5
    bl FX_Div
    add r0, r0, #0x800
    mov r6, r0, asr #0xc
    add r0, r10, #0x78
    add r1, sp, #0x7c
    bl func_0202e1e0
    add r0, sp, #0x224
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_020366cc
    ldr r1, [sp, #0x14]
    add r0, sp, #0x15c
    mov r2, #0x64
    bl func_02001588
L_020366cc:
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x20
    bic r0, r0, #0x40
    str r0, [r10, #0xc]
    ldr r0, [r10, #0x8]
    tst r0, #0x2000
    beq L_0203674c
    ldr r0, [r10, #0x48]
    mov r1, #0x1
    subs r0, r0, #0x1000
    rsbmi r0, r0, #0x0
    mov r2, r1
    cmp r0, #0x4
    bge L_02036718
    ldr r0, [r10, #0x4c]
    subs r0, r0, #0x1000
    rsbmi r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x0
L_02036718:
    cmp r2, #0x0
    bne L_02036734
    ldr r0, [r10, #0x50]
    subs r0, r0, #0x1000
    rsbmi r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x0
L_02036734:
    tst r1, #0xff
    beq L_0203674c
    mov r0, r10
    mov r1, r4
    mov r2, r7
    bl func_0203fbac
L_0203674c:
    ldr r1, [r10, #0x54]
    add r0, r10, #0x54
    smull r2, r1, r5, r1
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r10, #0x54]
    ldr r2, [r10, #0x58]
    add r1, r10, #0xdc
    smull r3, r2, r5, r2
    adds r3, r3, #0x800
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r10, #0x58]
    ldr r3, [r10, #0x5c]
    mov r2, r0
    smull r11, r3, r5, r3
    adds r11, r11, #0x800
    adc r3, r3, #0x0
    mov r11, r11, lsr #0xc
    orr r11, r11, r3, lsl #0x14
    str r11, [r10, #0x5c]
    bl func_0202c8a4
    mov r11, r6, lsl #0xc
    ldr r0, [r10, #0x6c]
    mov r1, r11
    bl FX_Div
    str r0, [r10, #0x6c]
    ldr r0, [r10, #0x70]
    mov r1, r11
    bl FX_Div
    str r0, [r10, #0x70]
    ldr r0, [r10, #0x74]
    mov r1, r11
    bl FX_Div
    str r0, [r10, #0x74]
    mov r0, r10
    add r1, sp, #0x24
    bl func_02031b70
    cmp r6, #0x0
    mov r11, #0x0
    ble L_020369b8
L_020367fc:
    ldr r0, [r10, #0x8]
    tst r0, #0x1
    beq L_02036814
    mov r0, r10
    add r1, r10, #0x54
    bl func_0203288c
L_02036814:
    ldr r0, [r10, #0x8]
    tst r0, #0x700000
    beq L_02036834
    mov r0, r10
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0203f638
L_02036834:
    ldr r0, [r10, #0x8]
    tst r0, #0x800
    beq L_0203685c
    ldr r0, [r10, #0x178]
    cmp r0, #0x0
    bne L_0203685c
    mov r0, r10
    mov r1, r5
    mov r2, #0x1
    bl func_0203f7a8
L_0203685c:
    mov r0, r10
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0203ef18
    ldr r0, [r10, #0x8]
    tst r0, #0x4
    beq L_02036888
    mov r0, r10
    mov r1, r5
    bl func_0203eec8
L_02036888:
    ldr r0, [r10, #0x8]
    tst r0, #0xe0000
    beq L_020368a8
    mov r0, r10
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0203f340
L_020368a8:
    ldr r0, [r10, #0x8]
    tst r0, #0x3800000
    beq L_020368c8
    mov r0, r10
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0203f4b0
L_020368c8:
    ldr r0, [r10, #0x8]
    tst r0, #0x20000000
    beq L_020368e8
    mov r0, r10
    bl func_0203f804
    mov r0, r10
    bl func_0203f870
    b L_020368f8
L_020368e8:
    tst r0, #0x80000000
    beq L_020368f8
    mov r0, r10
    bl func_0203f870
L_020368f8:
    ldr r0, [r10, #0x8]
    tst r0, #0x800
    beq L_02036920
    ldr r0, [r10, #0x178]
    cmp r0, #0x1000
    bne L_02036920
    mov r0, r10
    mov r1, r5
    mov r2, #0x0
    bl func_0203f7a8
L_02036920:
    ldr r0, [r10, #0x8]
    tst r0, #0x200
    beq L_02036940
    mov r0, r10
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0203f970
L_02036940:
    mov r0, r10
    mov r1, r5
    bl func_020317f8
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_02036964
    mov r0, r10
    mov r1, r5
    bl func_020329a4
L_02036964:
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_02036980
    ldr r0, [sp, #0x14]
    add r1, r10, #0x78
    mov r2, #0x64
    bl func_02001588
L_02036980:
    add r0, r10, #0x78
    add r1, r10, #0xdc
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r10, #0x3c]
    cmp r0, #0x0
    ldreq r0, [r10, #0x40]
    cmpeq r0, #0x0
    ldreq r0, [r10, #0x44]
    cmpeq r0, #0x0
    moveq r11, r6
    add r11, r11, #0x1
    cmp r11, r6
    blt L_020367fc
L_020369b8:
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_020369d4
    ldr r0, [sp, #0x14]
    add r1, sp, #0x15c
    mov r2, #0x64
    bl func_02001588
L_020369d4:
    add r1, sp, #0x224
    add r0, r10, #0x78
    mov r2, #0x64
    bl func_02001588
    mov r0, r10
    add r1, sp, #0x24
    bl func_02031c0c
    mov r0, r10
    mov r1, r8
    bl func_02031cfc
    ldr r0, [r10, #0x8]
    tst r0, #0x8
    beq L_02036a14
    mov r0, r10
    mov r1, r8
    bl func_0203f01c
L_02036a14:
    mov r0, r10
    bl func_02030d6c
    ldr r1, [r10, #0xc]
    and r5, r0, #0xff
    tst r1, #0x4
    beq L_02036a38
    ldr r0, [r10, #0x29c]
    bl func_0201bdd0
    str r0, [sp, #0x8]
L_02036a38:
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x8000
    str r0, [r10, #0xc]
    tst r0, #0x2
    beq L_02036c74
    add r2, r10, #0x100
    ldrsb r0, [r2, #0xf0]
    add r1, r10, #0x1f0
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0xf0]
    cmp r0, #0x0
    bne L_02036c40
    cmp r5, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    bne L_02036a8c
    mov r0, r9
    bl func_02066f6c
    cmp r0, #0x0
    beq L_02036bfc
L_02036a8c:
    ldr r1, [r10, #0x8]
    tst r1, #0x10
    beq L_02036aac
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_020390b4
    b L_02036bfc
L_02036aac:
    tst r1, #0x40
    beq L_02036b20
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02039d88
    add r0, r10, #0x3c
    bl func_01ff8668
    ldr r1, =data_020bc550
    ldr r1, [r1, #0x0]
    cmp r0, r1
    bge L_02036bfc
    add r5, r10, #0xe0
    add r3, r10, #0x7c
    mov r2, #0x6
L_02036ae8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_02036ae8
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    b L_02036bfc
L_02036b20:
    tst r1, #0x20
    beq L_02036b3c
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035f6c
    b L_02036bfc
L_02036b3c:
    ldr r0, [r10, #0xc]
    tst r0, #0x100
    beq L_02036b5c
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_0203cf3c
    b L_02036bfc
L_02036b5c:
    tst r1, #0x2
    beq L_02036bfc
    tst r0, #0x4000000
    bne L_02036b7c
    ldr r0, =data_020cf98c
    ldr r3, [r0, #0x0]
    cmp r3, #0x0
    bne L_02036b90
L_02036b7c:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    b L_02036bfc
L_02036b90:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035ea0
    mov r11, r0
    mov r0, r10
    mov r1, r11
    bl func_02032bdc
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    cmp r11, #0x1
    mov r5, #0x1
    ble L_02036bf0
L_02036bcc:
    mov r0, r10
    bl func_02032e54
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    add r5, r5, #0x1
    cmp r5, r11
    blt L_02036bcc
L_02036bf0:
    mov r0, r10
    mov r1, r11
    bl func_02032cdc
L_02036bfc:
    mov r0, r9
    bl func_02066fb4
    cmp r0, #0x1
    bls L_02036dfc
    add r5, r10, #0x1c0
    add r3, r10, #0xe0
    mov r2, #0x6
L_02036c18:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_02036c18
    b L_02036dfc
L_02036c40:
    ldr r0, [r10, #0x8]
    tst r0, #0x20
    beq L_02036c58
    mov r0, r10
    mov r1, r8
    bl func_0203ce08
L_02036c58:
    ldr r0, [r10, #0xc]
    tst r0, #0x4000
    beq L_02036dfc
    ldr r0, [sp, #0xc]
    ldr r1, [r0, #0x0]
    str r1, [r0, #0x4]
    b L_02036dfc
L_02036c74:
    cmp r5, #0x0
    bne L_02036c8c
    mov r0, r9
    bl func_02066f6c
    cmp r0, #0x0
    beq L_02036dfc
L_02036c8c:
    ldr r1, [r10, #0x8]
    tst r1, #0x10
    beq L_02036cac
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_020390b4
    b L_02036dfc
L_02036cac:
    tst r1, #0x40
    beq L_02036d20
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02039d88
    add r0, r10, #0x3c
    bl func_01ff8668
    ldr r1, =data_020bc550
    ldr r1, [r1, #0x0]
    cmp r0, r1
    bge L_02036dfc
    add r5, r10, #0xe0
    add r3, r10, #0x7c
    mov r2, #0x6
L_02036ce8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, r1, [r5]
    add r5, r5, #0x1
    bne L_02036ce8
    mov r0, #0x0
    str r0, [r10, #0x3c]
    str r0, [r10, #0x40]
    str r0, [r10, #0x44]
    b L_02036dfc
L_02036d20:
    tst r1, #0x20
    beq L_02036d3c
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035f6c
    b L_02036dfc
L_02036d3c:
    ldr r0, [r10, #0xc]
    tst r0, #0x100
    beq L_02036d5c
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_0203cf3c
    b L_02036dfc
L_02036d5c:
    tst r1, #0x2
    beq L_02036dfc
    tst r0, #0x4000000
    bne L_02036d7c
    ldr r0, =data_020cf98c
    ldr r3, [r0, #0x0]
    cmp r3, #0x0
    bne L_02036d90
L_02036d7c:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    b L_02036dfc
L_02036d90:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02035ea0
    mov r11, r0
    mov r0, r10
    mov r1, r11
    bl func_02032bdc
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    cmp r11, #0x1
    mov r5, #0x1
    ble L_02036df0
L_02036dcc:
    mov r0, r10
    bl func_02032e54
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_02038fd8
    add r5, r5, #0x1
    cmp r5, r11
    blt L_02036dcc
L_02036df0:
    mov r0, r10
    mov r1, r11
    bl func_02032cdc
L_02036dfc:
    add r1, sp, #0x7c
    mov r0, r10
    bl func_0203f8a4
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_02036e24
    mov r0, r10
    mov r1, r9
    bl func_0203fee0
    str r0, [sp, #0x4]
L_02036e24:
    mov r0, r10
    add r1, r10, #0xdc
    bl func_020318e0
    ldr r0, [r10, #0xc]
    add r5, r10, #0xe0
    tst r0, #0x4
    beq L_02036f78
    tst r0, #0x4000
    beq L_02036f78
    ldr r0, [sp, #0x10]
    ldmia r5, {r1, r2}
    ldr r0, [r0, #0x4]
    ldr r3, [r5, #0x8]
    sub r0, r1, r0
    ldr r1, [sp, #0x10]
    str r0, [sp, #0x88]
    ldr r1, [r1, #0x8]
    sub r1, r2, r1
    str r1, [sp, #0x8c]
    ldr r1, [sp, #0x10]
    ldr r2, [r1, #0xc]
    mov r1, r8
    sub r2, r3, r2
    str r2, [sp, #0x90]
    bl FX_Div
    str r0, [sp, #0x88]
    ldr r0, [sp, #0x8c]
    mov r1, r8
    bl FX_Div
    str r0, [sp, #0x8c]
    ldr r0, [sp, #0x90]
    mov r1, r8
    bl FX_Div
    str r0, [sp, #0x90]
    ldr r0, [sp, #0x10]
    add r1, sp, #0x20
    add r2, sp, #0x1c
    add r3, sp, #0x18
    bl func_0202dc64
    mov r0, #0x1000
    ldr r3, [sp, #0x1c]
    str r0, [sp, #0x48]
    add r8, sp, #0x4c
    mov r2, #0x6
L_02036ed4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_02036ed4
    add r0, sp, #0x88
    add r3, sp, #0x3c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r10, #0x168]
    mov r2, #0x6
    add r8, r0, #0x114
L_02036f14:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_02036f14
    ldr r1, [sp, #0x48]
    ldr r0, [r10, #0x168]
    add r3, sp, #0x4c
    str r1, [r0, #0x120]
    ldr r0, [r10, #0x168]
    mov r2, #0x6
    add r8, r0, #0x124
L_02036f54:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r8]
    add r8, r8, #0x1
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    bne L_02036f54
L_02036f78:
    ldr r0, [sp, #0x0]
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    beq L_02036f98
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_02036fbc
L_02036f98:
    ldr r0, [sp, #0x0]
    add r1, r10, #0xdc
    mov r2, #0x64
    bl func_02001588
    mov r0, r9
    bl func_0201c454
    ldr r0, [r10, #0xc]
    orr r0, r0, #0x1000000
    str r0, [r10, #0xc]
L_02036fbc:
    mov r0, r9
    bl func_0206b414
    cmp r0, #0x0
    beq L_02037060
    add r0, r10, #0x78
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    bne L_0203708c
    mov r0, r9
    bl func_0201c67c
    ldr r0, [r10, #0x8]
    tst r0, #0x20000000
    beq L_02037008
    add r7, sp, #0x1c0
    add r1, sp, #0x224
    mov r0, r7
    bl func_0202cb6c
    b L_0203702c
L_02037008:
    ldr r0, [r10, #0xc]
    tst r0, #0x800
    beq L_0203702c
    mov r0, r7
    mov r1, r4
    bl func_0202cb6c
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x800
    str r0, [r10, #0xc]
L_0203702c:
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x224
    mov r3, r7
    bl func_0203fe60
    b L_0203708c
L_02037060:
    mov r0, r9
    bl func_0206b3f4
    tst r0, #0x2
    beq L_0203708c
    add r0, r10, #0x78
    add r1, r10, #0xdc
    bl func_02031948
    cmp r0, #0x0
    bne L_0203708c
    mov r0, r9
    bl func_0201c67c
L_0203708c:
    mov r0, r10
    bl func_02031898
    ldr r0, [r10, #0xc]
    tst r0, #0x4
    beq L_02037168
    tst r0, #0x4000
    beq L_02037168
    add r3, sp, #0x30
    mov r2, #0x6
L_020370b0:
    ldrb r0, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r5, r5, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020370b0
    mov r1, #0x0
    add r0, sp, #0x30
    add r3, sp, #0x3c
    str r1, [sp, #0x48]
    str r1, [sp, #0x4c]
    str r1, [sp, #0x50]
    str r1, [sp, #0x54]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r10, #0x168]
    mov r2, #0x6
    add r4, r0, #0x14c
L_02037104:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02037104
    ldr r1, [sp, #0x48]
    ldr r0, [r10, #0x168]
    add r3, sp, #0x4c
    str r1, [r0, #0x158]
    ldr r0, [r10, #0x168]
    mov r2, #0x6
    add r4, r0, #0x15c
L_02037144:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02037144
L_02037168:
    mov r0, r10
    bl func_0203df54
    ldr r0, [r10, #0xc]
    tst r0, #0x4000
    ldrne r0, [sp, #0xc]
    ldrne r1, [r0, #0x4]
    strne r1, [r0, #0x0]
    add r1, r10, #0x164
    swpb r0, r6, [r1]
    mov r0, #0x0
    str r0, [r10, #0x24]
    str r0, [r10, #0x28]
    str r0, [r10, #0x2c]
    str r0, [r10, #0x30]
    str r0, [r10, #0x34]
    str r0, [r10, #0x38]
    str r0, [r10, #0x54]
    str r0, [r10, #0x58]
    str r0, [r10, #0x5c]
    str r0, [r10, #0x6c]
    str r0, [r10, #0x70]
    str r0, [r10, #0x74]
    ldr r1, [r10, #0x8]
    bic r4, r1, #0x4000
    bic r7, r4, #0x8000
    bic r2, r7, #0x10000
    bic r6, r2, #0x20000
    bic r3, r6, #0x40000
    bic r5, r3, #0x80000
    bic r1, r5, #0x100000
    bic r4, r1, #0x200000
    bic r2, r4, #0x400000
    bic r3, r2, #0x800000
    bic r1, r3, #0x1000000
    bic r2, r1, #0x2000000
    bic r1, r2, #0x20000000
    bic r1, r1, #0x80000000
    str r1, [r10, #0x8]
    ldr r1, [r10, #0xc]
    bic r1, r1, #0x10
    str r1, [r10, #0xc]
    ldr r2, [r10, #0xc]
    ldr r1, =data_020cf98c
    bic r2, r2, #0x1000
    str r2, [r10, #0xc]
    str r0, [r1, #0x0]
    str r0, [r1, #0x4]
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_0203725c
    ldr r1, =data_020cf71c
    cmp r1, #0x0
    ldrne r0, =data_020cf718
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    moveq r0, #0x0
    streq r0, [r10, #0x18c]
    beq L_0203725c
    mov r0, r10
    bl func_02030ed4
    str r0, [r10, #0x18c]
L_0203725c:
    ldr r1, =data_020cf784
    cmp r1, #0x0
    beq L_0203729c
    ldr r0, =data_020cf718
    ldr r0, [r0, #0x0]
    and r0, r0, #0x1
    cmp r0, #0x1
    bne L_0203729c
    mov r0, r10
    bl func_02030ed4
    cmp r0, #0x0
    beq L_0203729c
    ldr r0, [r10, #0xc]
    orr r0, r0, #0x20000
    str r0, [r10, #0xc]
    b L_020372a8
L_0203729c:
    ldr r0, [r10, #0xc]
    bic r0, r0, #0x20000
    str r0, [r10, #0xc]
L_020372a8:
    ldr r0, [r10, #0xc]
    tst r0, #0x2
    beq L_020372d0
    mov r0, #0x0
    str r0, [r10, #0x1a8]
    str r0, [r10, #0x1ac]
    str r0, [r10, #0x1b0]
    str r0, [r10, #0x19c]
    str r0, [r10, #0x1a0]
    str r0, [r10, #0x1a4]
L_020372d0:
    mov r0, r10
    add sp, sp, #0x288
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
