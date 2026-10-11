#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ab28();
extern void func_0200eb98();
extern void func_02014910();
extern char data_020bc96c[];
extern char data_020bc990[];
extern char data_020c75b9[];
extern char data_020db928[];
extern char data_020db940[];
extern char data_020db950[];
extern char data_020db954[];
extern char data_020db958[];
extern char data_020db978[];
extern char data_020db97c[];
extern char data_020db980[];
extern char data_020db9d8[];
extern char data_020dba14[];
extern char data_020dba28[];
extern char data_020dba2c[];
// clang-format off
asm void func_0204a298(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r7, =data_020db928
    mov r10, r0
    ldr r0, [r7, #0x8]
    mov r6, r1
    mov r5, r2
    mov r4, r3
    cmp r0, #0x0
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r7, #0xc]
    cmp r0, #0x0
    beq L_0204a2e4
    ldr r0, =data_020bc96c
    ldr r1, =data_020db940
    ldr r10, [r7, #0x10]
    ldr r6, [r0, #0xc]
    ldr r5, [r0, #0x14]
    ldr r4, [r0, #0x10]
    str r1, [sp, #0x2c]
L_0204a2e4:
    ldr r0, =data_020bc96c
    ldr r0, [r0, #0x0]
    cmp r6, r0
    movlt r6, r0
    cmp r6, r4
    blt L_0204a300
    bl func_0200eb98
L_0204a300:
    sub r0, r10, #0x1e000
    cmp r0, r5
    blt L_0204a310
    bl func_0200eb98
L_0204a310:
    sub r2, r10, #0x1e000
    mov r0, r2, asr #0x1f
    mov r3, r0, lsl #0xb
    mov r1, r5, asr #0x1f
    mov r0, #0x800
    adds r7, r0, r2, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r1, r1, lsl #0xb
    adc r3, r3, #0x0
    mov r10, r7, lsr #0xc
    orr r1, r1, r5, lsr #0x15
    adds r2, r0, r5, lsl #0xb
    orr r10, r10, r3, lsl #0x14
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    cmp r10, #0x0
    orr r5, r5, r1, lsl #0x14
    mov r1, #0x0
    bge L_0204a38c
    cmp r5, #0x0
    ble L_0204a38c
    sub r2, r4, r6
    smull r3, r2, r10, r2
    adds r0, r3, r0
    adc r1, r2, r1
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    sub r1, r5, r10
    bl func_02014910
    sub r6, r6, r0
    mov r10, #0x0
L_0204a38c:
    cmp r10, #0x7f000
    bge L_0204a3c8
    cmp r5, #0x7f000
    ble L_0204a3c8
    sub r1, r5, #0x7f000
    sub r0, r4, r6
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    sub r1, r5, r10
    bl func_02014910
    sub r4, r4, r0
    mov r5, #0x7f000
L_0204a3c8:
    ldr r0, =data_020bc96c
    ldr r0, [r0, #0x4]
    cmp r0, #0x200000
    bge L_0204a3fc
    movs r1, r6, lsl #0x3
    rsbmi r1, r1, #0x0
    ldr r0, =data_020dba2c
    mov r1, r1, asr #0xc
    str r1, [r0, #0x0]
    movs r1, r4, lsl #0x3
    rsbmi r1, r1, #0x0
    ldr r0, =data_020dba28
    b L_0204a41c
L_0204a3fc:
    movs r1, r6, lsl #0x3
    rsbmi r1, r1, #0x0
    ldr r0, =data_020dba2c
    mov r1, r1, asr #0xc
    str r1, [r0, #0x0]
    movs r1, r4, lsl #0x3
    ldr r0, =data_020dba28
    rsbmi r1, r1, #0x0
L_0204a41c:
    mov r1, r1, asr #0xc
    str r1, [r0, #0x0]
    ldr r0, =data_020dba28
    ldr r1, =0x7fff
    ldr r2, [r0, #0x0]
    cmp r2, r1
    strgt r1, [r0, #0x0]
    ldr r0, =data_020dba2c
    ldr r2, =data_020bc96c
    ldr r0, [r0, #0x0]
    ldr r1, [r2, #0x18]
    cmp r0, r1
    bne L_0204a464
    ldr r1, =data_020dba28
    ldr r2, [r2, #0x1c]
    ldr r1, [r1, #0x0]
    cmp r1, r2
    beq L_0204a54c
L_0204a464:
    ldr r1, =data_020dba28
    ldr r2, =data_020bc96c
    ldr r7, [r1, #0x0]
    ldr r1, [r2, #0x24]
    sub r4, r7, r0
    str r1, [sp, #0x0]
    mov r6, #0x0
    mov r2, #0x400
L_0204a484:
    add r1, r6, #0x1
    mov r3, r2, asr r1
    cmp r4, r3, lsl #0x5
    ble L_0204a510
    mov r1, r2, asr r6
    sub r0, r7, r0
    mov r5, r5, asr #0xc
    bl func_0200ab28
    mov r4, #0x0
    ldr r1, =data_020bc990
    ldr r7, =data_020db958
    ldr r1, [r1, r6, lsl #0x2]
    mov r6, r0
    str r1, [sp, #0x0]
    mov r8, r4
    sub r9, r5, r10, asr #0xc
    mov r11, r4
L_0204a4c8:
    cmp r4, r6
    movge r0, r5
    bge L_0204a4e4
    mov r0, r8
    mov r1, r6
    bl func_0200ab28
    add r0, r0, r10, asr #0xc
L_0204a4e4:
    cmp r0, #0x0
    movlt r0, r11
    cmp r0, #0x7f
    movgt r0, #0x7f
    add r4, r4, #0x1
    swpb r0, r0, [r7]
    cmp r4, #0x20
    add r7, r7, #0x1
    add r8, r8, r9
    blt L_0204a4c8
    b L_0204a51c
L_0204a510:
    mov r6, r1
    cmp r1, #0xb
    blt L_0204a484
L_0204a51c:
    ldr r1, =data_020dba2c
    ldr r0, =data_020dba28
    ldr r5, [r1, #0x0]
    ldr r2, =data_020db978
    ldr r1, =data_020bc96c
    ldr r4, [r0, #0x0]
    ldr r3, =data_020db97c
    ldr r0, [sp, #0x0]
    str r5, [r2, #0x0]
    str r0, [r3, #0x0]
    str r5, [r1, #0x18]
    str r4, [r1, #0x1c]
L_0204a54c:
    ldr r0, [sp, #0x2c]
    ldr r4, =data_020dba14
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, [r4, #0x0]
    mov r2, #0xff000
    umull r5, r1, r0, r2
    mov r3, #0x0
    mla r1, r0, r3, r1
    mov r0, r0, asr #0x1f
    mla r1, r0, r2, r1
    adds r5, r5, #0x800
    adc r1, r1, #0x0
    mov r0, r5, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    str r0, [r4, #0x0]
    ldr r5, [r4, #0x4]
    mov r1, #0x8000
    umull r7, r6, r5, r2
    mla r6, r5, r3, r6
    mov r5, r5, asr #0x1f
    mla r6, r5, r2, r6
    adds r7, r7, #0x800
    adc r5, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r5, lsl #0x14
    str r6, [r4, #0x4]
    ldr r6, [r4, #0x8]
    umull r8, r7, r6, r2
    mla r7, r6, r3, r7
    mov r5, r6, asr #0x1f
    adds r3, r8, #0x800
    mla r7, r5, r2, r7
    adc r2, r7, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r4, #0x8]
    bl func_02014910
    mov r1, #0x1000
    rsb r1, r1, #0x0
    and r1, r0, r1
    mov r0, r1, asr #0x1f
    mov r2, r0, lsl #0xf
    mov r0, #0x800
    orr r2, r2, r1, lsr #0x11
    adds r1, r0, r1, lsl #0xf
    adc r0, r2, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    mov r0, r4
    str r2, [r0, #0x0]
    ldr r0, [r0, #0x4]
    mov r1, #0x8000
    bl func_02014910
    mov r1, #0x1000
    rsb r1, r1, #0x0
    and r1, r0, r1
    mov r0, r1, asr #0x1f
    mov r2, r0, lsl #0xf
    mov r0, #0x800
    orr r2, r2, r1, lsr #0x11
    adds r1, r0, r1, lsl #0xf
    adc r0, r2, #0x0
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    mov r0, r4
    str r2, [r0, #0x4]
    ldr r0, [r0, #0x8]
    mov r1, #0x8000
    bl func_02014910
    mov r1, #0x1000
    rsb r1, r1, #0x0
    and r1, r0, r1
    mov r0, r1, asr #0x1f
    mov r2, r0, lsl #0xf
    mov r0, #0x800
    orr r2, r2, r1, lsr #0x11
    adds r1, r0, r1, lsl #0xf
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r4
    str r1, [r0, #0x8]
    ldr r1, [r0, #0x0]
    ldr r0, =data_020dba14
    cmp r1, #0xff000
    movge r1, #0xff000
    str r1, [r0, #0x0]
    ldr r1, [r0, #0x4]
    ldr r0, =data_020dba14
    cmp r1, #0xff000
    movge r1, #0xff000
    str r1, [r0, #0x4]
    ldr r1, [r0, #0x8]
    cmp r1, #0xff000
    movge r1, #0xff000
    ldr r0, =data_020dba14
    mov r7, #0x1f
    str r1, [r0, #0x8]
    ldr r1, [r0, #0x0]
    ldr r0, =data_020dba14
    cmp r1, #0x0
    movle r1, #0x0
    str r1, [r0, #0x0]
    ldr r1, [r0, #0x4]
    ldr r0, =data_020dba14
    cmp r1, #0x0
    movle r1, #0x0
    str r1, [r0, #0x4]
    ldr r2, [r0, #0x8]
    ldr r1, =data_020dba14
    cmp r2, #0x0
    movle r2, #0x0
    ldr r0, =data_020c75b9
    str r2, [r1, #0x8]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r4, =data_020db9d8
    ldmneia r1, {r0, r1, r2, r3}
    stmneia r4, {r0, r1, r2, r3}
    ldr r2, =data_020dba14
    ldr r3, =data_020bc96c
    ldmia r2, {r0, r4}
    mov r0, r0, asr #0xc
    add r1, r3, #0x8
    swpb r0, r0, [r1]
    add r1, r3, #0x9
    mov r0, r4, asr #0xc
    swpb r0, r0, [r1]
    add r1, r3, #0xa
    ldr r0, [r2, #0x8]
    add r2, r3, #0xb
    mov r0, r0, asr #0xc
    swpb r0, r0, [r1]
    ldr r1, =data_020dba2c
    mov r0, #0xff
    swpb r0, r0, [r2]
    ldr r4, [r3, #0x8]
    ldr r0, =data_020dba28
    mov r3, r4, lsr #0x3
    mov r2, r4, lsr #0xb
    mov r6, r4, lsr #0x13
    ldr r5, [r1, #0x0]
    ldr r4, [r0, #0x0]
    mov r1, r6, lsl #0x1b
    and r3, r3, #0x1f
    mov r2, r2, lsl #0x1b
    orr r0, r3, r2, lsr #0x16
    orr r8, r0, r1, lsr #0x11
    ldr r3, =data_020db954
    ldr r2, =data_020db980
    ldr r1, =data_020db928
    mov r6, #0x1
    ldr r0, =data_020db950
    orr r4, r4, r5, lsl #0x10
    strh r8, [r3, #0x0]
    str r7, [r2, #0x0]
    str r6, [r1, #0x8]
    str r4, [r0, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
