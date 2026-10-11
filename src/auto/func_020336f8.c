#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff8668();
extern void func_0202dc18();
extern void func_0202e1e0();
extern void func_020332f0();
extern void func_020333ec();
extern void func_02033660();
extern void func_02035a48();
extern void func_02035bec();
// clang-format off
asm void func_020336f8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    ldr r7, [r1, #0x24]
    str r0, [sp, #0x18]
    mov r10, r2
    ldr r2, [sp, #0x18]
    add r1, sp, #0x80
    mov r0, r7
    add r4, r2, #0x220
    ldr r5, [r2, #0x168]
    bl func_0202e1e0
    add r6, sp, #0x74
    add r3, r4, #0x10
    mov r2, #0x6
L_02033730:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r6]
    add r6, r6, #0x1
    bne L_02033730
    ldr r9, [sp, #0xb0]
    ldr r0, [r4, #0x38]
    add r2, sp, #0x5c
    smull r3, r1, r0, r9
    adds r3, r3, #0x800
    adc r0, r1, #0x0
    mov r11, r3, lsr #0xc
    orr r11, r11, r0, lsl #0x14
    mov r8, r9, asr #0x1f
    add r1, r5, #0xf8
    mov r0, #0x6
L_02033780:
    ldrb r3, [r1, #0x0]
    ldrb r6, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r6, [r2]
    add r2, r2, #0x1
    bne L_02033780
    add r2, sp, #0x44
    mov r1, r10
    mov r0, #0x6
L_020337b0:
    ldrb r3, [r1, #0x0]
    ldrb r6, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r6, [r2]
    add r2, r2, #0x1
    bne L_020337b0
    ldrh r6, [r4, #0x56]
    add r0, sp, #0x5c
    bl func_01ff8668
    and r1, r6, #0x1
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    str r1, [sp, #0x0]
    and r1, r6, #0x2
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    str r1, [sp, #0x4]
    add r1, sp, #0x80
    str r1, [sp, #0x8]
    add r2, sp, #0x74
    mov r3, r0
    add r1, sp, #0x44
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    add r1, sp, #0x68
    str r1, [sp, #0x14]
    ldr r1, [r4, #0x3c]
    ldr r2, [r4, #0x40]
    mov r0, r11
    bl func_020333ec
    add r6, sp, #0x44
    mov r3, r10
    mov r2, #0x6
L_02033840:
    ldrb r0, [r6, #0x0]
    ldrb r1, [r6, #0x1]
    add r6, r6, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02033840
    ldrh r0, [r4, #0x56]
    tst r0, #0x4
    bne L_02033ac4
    ldr r0, [r4, #0x48]
    ldr r6, [r4, #0x58]
    umull r1, r11, r0, r9
    mla r11, r0, r8, r11
    mov r0, r0, asr #0x1f
    mla r11, r0, r9, r11
    adds r1, r1, #0x800
    adc r0, r11, #0x0
    mov r11, r1, lsr #0xc
    ldr r3, [sp, #0x80]
    orr r11, r11, r0, lsl #0x14
    subs r3, r6, r3
    str r3, [sp, #0x5c]
    rsbmi r3, r3, #0x0
    ldr r6, [r4, #0x5c]
    ldr r1, [sp, #0x84]
    ldr r0, [sp, #0x88]
    sub r1, r6, r1
    str r1, [sp, #0x60]
    ldr r1, [r4, #0x60]
    mov r2, #0x0
    sub r0, r1, r0
    mov r6, r2
    str r0, [sp, #0x64]
    cmp r3, #0x4
    bge L_020338ec
    ldr r0, [sp, #0x60]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r6, #0x1
L_020338ec:
    cmp r6, #0x0
    beq L_02033908
    ldr r0, [sp, #0x64]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x1
L_02033908:
    tst r2, #0xff
    bne L_0203391c
    add r0, sp, #0x5c
    mov r1, r0
    bl func_01ff84a0
L_0203391c:
    add r2, sp, #0x44
    add r1, r4, #0x58
    mov r0, #0x6
L_02033928:
    ldrb r3, [r1, #0x0]
    ldrb r6, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r6, [r2]
    add r2, r2, #0x1
    bne L_02033928
    add r2, sp, #0x38
    mov r1, r10
    mov r0, #0x6
L_02033958:
    ldrb r3, [r1, #0x0]
    ldrb r6, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, r6, [r2]
    add r2, r2, #0x1
    bne L_02033958
    ldr r3, [sp, #0x44]
    ldr r1, [sp, #0x38]
    ldr r2, [sp, #0x48]
    sub r1, r3, r1
    ldr r0, [sp, #0x3c]
    ldr r3, [sp, #0x4c]
    sub r6, r2, r0
    ldr r2, [sp, #0x40]
    add r0, sp, #0x44
    sub r2, r3, r2
    str r1, [sp, #0x44]
    str r6, [sp, #0x48]
    str r2, [sp, #0x4c]
    bl func_01ff8668
    movs r6, r0
    beq L_020339c8
    add r0, sp, #0x44
    mov r1, r0
    bl func_01ff84a0
L_020339c8:
    add r0, sp, #0x28
    add r1, sp, #0x5c
    add r2, sp, #0x44
    bl func_02035a48
    ldrh r1, [r4, #0x56]
    ldr r3, [r10, #0xc]
    mov r0, r11
    and r2, r1, #0x4
    mov r2, r2, lsl #0x18
    and r1, r1, #0x8
    mov r1, r1, lsl #0x18
    str r3, [sp, #0x0]
    mov r2, r2, asr #0x18
    str r2, [sp, #0x4]
    mov r1, r1, asr #0x18
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x4c]
    ldr r2, [r4, #0x50]
    ldr r3, [sp, #0x28]
    bl func_02033660
    movs r3, r0
    str r0, [r10, #0xc]
    beq L_02033a38
    add r1, sp, #0x5c
    add r0, sp, #0x28
    mov r2, r1
    str r3, [sp, #0x28]
    bl func_02035bec
L_02033a38:
    ldr r1, [sp, #0x5c]
    ldr r0, [sp, #0x60]
    ldr r3, [sp, #0x64]
    smull r1, r11, r6, r1
    adds r2, r1, #0x800
    smull r1, r0, r6, r0
    adc r11, r11, #0x0
    adds r1, r1, #0x800
    mov r2, r2, lsr #0xc
    orr r2, r2, r11, lsl #0x14
    rsb r2, r2, #0x0
    smull r11, r3, r6, r3
    adc r0, r0, #0x0
    adds r6, r11, #0x800
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    rsb r1, r1, #0x0
    adc r0, r3, #0x0
    mov r3, r6, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    rsb r0, r3, #0x0
    str r2, [sp, #0x5c]
    str r1, [sp, #0x60]
    str r0, [sp, #0x64]
    ldr r0, [r4, #0x58]
    add r0, r2, r0
    str r0, [r10, #0x0]
    ldr r1, [sp, #0x60]
    ldr r0, [r4, #0x5c]
    add r0, r1, r0
    str r0, [r10, #0x4]
    ldr r1, [sp, #0x64]
    ldr r0, [r4, #0x60]
    add r0, r1, r0
    str r0, [r10, #0x8]
L_02033ac4:
    ldrh r0, [r4, #0x56]
    tst r0, #0x1
    beq L_02033ad8
    tst r0, #0x4
    bne L_02033b48
L_02033ad8:
    ldr r2, [r10, #0x0]
    ldr r1, [sp, #0x80]
    ldr r0, [sp, #0x84]
    sub r1, r2, r1
    str r1, [sp, #0x5c]
    ldr r2, [r10, #0x4]
    ldr r1, [sp, #0x88]
    sub r0, r2, r0
    str r0, [sp, #0x60]
    ldr r2, [r10, #0x8]
    add r0, sp, #0x5c
    sub r1, r2, r1
    str r1, [sp, #0x64]
    ldr r2, [r4, #0x64]
    add r1, r5, #0xf8
    bl func_020332f0
    ldr r1, [sp, #0x5c]
    ldr r0, [sp, #0x80]
    add r0, r1, r0
    str r0, [r10, #0x0]
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x84]
    add r0, r1, r0
    str r0, [r10, #0x4]
    ldr r1, [sp, #0x64]
    ldr r0, [sp, #0x88]
    add r0, r1, r0
    str r0, [r10, #0x8]
L_02033b48:
    ldrh r0, [r4, #0x56]
    tst r0, #0x80
    beq L_02033c18
    add r1, sp, #0x5c
    add r2, sp, #0x50
    mov r0, r7
    mov r3, r1
    bl func_0202dc18
    ldr r2, [sp, #0x50]
    ldr r1, [sp, #0x54]
    rsb r4, r2, #0x0
    rsb r3, r1, #0x0
    ldr r0, [sp, #0x58]
    add r1, sp, #0x5c
    rsb r2, r0, #0x0
    mov r0, r7
    str r4, [sp, #0x50]
    str r3, [sp, #0x54]
    str r2, [sp, #0x58]
    bl func_0202e1e0
    ldr r2, [sp, #0x50]
    ldr r0, [sp, #0x5c]
    mov r1, #0x0
    add r0, r2, r0
    str r0, [r10, #0x10]
    ldr r2, [sp, #0x54]
    ldr r0, [sp, #0x60]
    add r4, sp, #0x1c
    add r0, r2, r0
    str r0, [r10, #0x14]
    ldr r3, [sp, #0x58]
    ldr r2, [sp, #0x64]
    add r0, sp, #0x68
    add r2, r3, r2
    str r2, [r10, #0x18]
    str r1, [sp, #0x68]
    str r1, [sp, #0x6c]
    str r1, [sp, #0x70]
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x130
    mov r2, #0x6
L_02033bf0:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02033bf0
    b L_02033dcc
L_02033c18:
    add r6, sp, #0x80
    add r3, r10, #0x10
    mov r2, #0x6
L_02033c24:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r6]
    add r6, r6, #0x1
    bne L_02033c24
    ldr r2, [r4, #0x4]
    ldr r0, [sp, #0x80]
    ldr r1, [sp, #0x84]
    sub r0, r2, r0
    str r0, [sp, #0x74]
    ldr r2, [r4, #0x8]
    ldr r0, [sp, #0x88]
    sub r1, r2, r1
    str r1, [sp, #0x78]
    ldr r1, [r4, #0xc]
    add r7, sp, #0x5c
    sub r0, r1, r0
    str r0, [sp, #0x7c]
    ldr r0, [r4, #0x1c]
    add r3, r5, #0x130
    umull r2, r1, r0, r9
    mla r1, r0, r8, r1
    mov r0, r0, asr #0x1f
    adds r2, r2, #0x800
    mla r1, r0, r9, r1
    mov r6, r2, lsr #0xc
    adc r0, r1, #0x0
    orr r6, r6, r0, lsl #0x14
    mov r2, #0x6
L_02033ca8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_02033ca8
    add r7, sp, #0x44
    add r3, r10, #0x10
    mov r2, #0x6
L_02033cd8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r1, [r7]
    add r7, r7, #0x1
    bne L_02033cd8
    ldrh r7, [r4, #0x56]
    add r0, sp, #0x5c
    bl func_01ff8668
    and r1, r7, #0x10
    mov r1, r1, lsl #0x18
    mov r3, r1, asr #0x18
    and r2, r7, #0x20
    mov r1, r2, lsl #0x18
    str r3, [sp, #0x0]
    mov r2, r1, asr #0x18
    mov r3, r0
    add r1, sp, #0x80
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    add r0, sp, #0x74
    str r0, [sp, #0xc]
    add r1, sp, #0x44
    add r0, sp, #0x68
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
    ldr r1, [r4, #0x20]
    ldr r2, [r4, #0x24]
    mov r0, r6
    bl func_020333ec
    ldr r2, [r4, #0x74]
    add r0, sp, #0x68
    add r1, r5, #0x130
    bl func_020332f0
    ldr r1, [sp, #0x68]
    ldr r0, [sp, #0x80]
    add r3, sp, #0x68
    add r0, r1, r0
    str r0, [r10, #0x10]
    ldr r1, [sp, #0x6c]
    ldr r0, [sp, #0x84]
    add r4, r5, #0x130
    add r0, r1, r0
    str r0, [r10, #0x14]
    ldr r1, [sp, #0x70]
    ldr r0, [sp, #0x88]
    mov r2, #0x6
    add r0, r1, r0
    str r0, [r10, #0x18]
L_02033da8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02033da8
L_02033dcc:
    ldr r0, [sp, #0x18]
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
