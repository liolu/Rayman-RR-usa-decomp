#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _u32_div_f();
extern void func_0205eab8();
extern void func_0205ebc4();
extern char data_020dceec[];
extern char data_020dcef8[];
// clang-format off
asm void func_0205ed48(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, #0x0
    add r4, sp, #0x1
    swpb r2, r5, [r4]
    mov r10, r0
    add r2, sp, #0x0
    swpb r3, r5, [r2]
    mov r9, r1
    ldrsb r7, [r10, #0x0]
    mov r8, r5
    cmp r7, #0x0
    beq L_0205eeb0
    mov r11, r5
    swpb r0, r11, [r4]
L_0205ed80:
    cmp r7, #0x2f
    bne L_0205edc4
    add r10, r10, #0x1
    mov r0, r9
    mov r1, r10
    mov r2, r4
    add r3, sp, #0x0
    bl func_0205ebc4
    add r10, r10, r0
    ldrb r0, [sp, #0x1]
    cmp r0, #0x0
    beq L_0205eea4
    ldr r0, [r9, #0x0]
    cmp r8, r0
    movle r8, r0
    str r11, [r9, #0x0]
    b L_0205eea4
L_0205edc4:
    ldr r6, [r9, #0x1c]
    cmp r6, #0x0
    bne L_0205edf4
    ldr r0, =data_020dceec
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    moveq r6, #0x1000
    beq L_0205edf4
    mov r0, r5
    bl _u32_div_f
    ldr r0, =data_020dcef8
    ldr r6, [r0, r1, lsl #0x2]
L_0205edf4:
    add r5, r5, #0x1
    ldr r0, [r9, #0x14]
    cmp r0, #0x0
    beq L_0205ee30
    smull r2, r1, r6, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r9, #0x0]
    add r0, r0, r1
    str r0, [r9, #0x0]
    b L_0205eea0
L_0205ee30:
    cmp r7, #0x20
    movlt r7, #0x0
    blt L_0205ee70
    cmp r7, #0x61
    blt L_0205ee50
    cmp r7, #0x7a
    suble r7, r7, #0x40
    ble L_0205ee70
L_0205ee50:
    cmp r7, #0x41
    blt L_0205ee64
    cmp r7, #0x5a
    suble r7, r7, #0x20
    ble L_0205ee70
L_0205ee64:
    cmp r7, #0xa0
    subge r7, r7, #0x40
    sublt r7, r7, #0x20
L_0205ee70:
    and r0, r7, #0xff
    bl func_0205eab8
    smull r2, r1, r6, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0x0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r9, #0x0]
    add r0, r0, r1
    str r0, [r9, #0x0]
L_0205eea0:
    add r10, r10, #0x1
L_0205eea4:
    ldrsb r7, [r10, #0x0]
    cmp r7, #0x0
    bne L_0205ed80
L_0205eeb0:
    ldr r0, [r9, #0x0]
    cmp r0, r8
    movle r0, r8
    str r0, [r9, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
