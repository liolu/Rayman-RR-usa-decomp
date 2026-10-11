#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201ad68();
extern void func_0201c438();
extern void func_0201c448();
extern void func_0201cfe8();
extern void func_0201cfec();
extern void func_0204a1b0();
extern void func_0204a1f4();
extern void func_0204a908();
extern void func_020538d0();
extern void func_02068a30();
extern void func_02068a8c();
extern void func_0206b3f4();
// clang-format off
asm void func_0201ad68(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r5, r2
    mov r4, r3
    bl func_0201c438
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    bne L_0201af94
    ldr r0, [r6, #0x10]
    cmp r0, #0x0
    ble L_0201b014
    ldr r1, [r6, #0x4]
    ldr r0, [r6, #0x34]
    ldr r9, [r1, #0x4]
    cmp r0, #0x0
    beq L_0201ade8
    add ip, sp, #0xc
    mov r8, r0
    mov r3, #0x6
L_0201adc0:
    ldrb r1, [r8, #0x0]
    ldrb r2, [r8, #0x1]
    add r8, r8, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    bne L_0201adc0
    ldr r8, [r0, #0xc]
L_0201ade8:
    cmp r4, #0x7f
    cmpne r0, #0x0
    moveq r4, #0x7f
    beq L_0201ae14
    str r4, [sp, #0x0]
    ldr r3, [r6, #0x24]
    add r1, sp, #0xc
    mov r0, r7
    mov r2, r8
    bl func_020538d0
    mov r4, r0
L_0201ae14:
    ldr r0, =0xfc65f7fb
    ldr r1, [r6, #0x2c]
    orr r2, r5, r0
    mov r0, r6
    and r5, r2, r1
    bl func_0206b3f4
    tst r5, #0x800000
    beq L_0201ae3c
    tst r5, #0x2000000
    bne L_0201ae4c
L_0201ae3c:
    tst r5, #0x1000000
    beq L_0201ae80
    tst r5, #0x2000000
    bne L_0201ae80
L_0201ae4c:
    ldr r1, [r6, #0x30]
    and r1, r1, #0x2
    tst r1, #0xff
    bne L_0201ae80
    cmp r4, #0x0
    beq L_0201ae80
    ldrb r1, [r9, #0x25]
    add r2, r9, #0x25
    bic r0, r0, #0x800
    orr r1, r1, #0x20
    swpb r1, r1, [r2]
    mov r1, #0x1
    b L_0201ae98
L_0201ae80:
    ldrb r1, [r9, #0x25]
    add r2, r9, #0x25
    orr r0, r0, #0x800
    bic r1, r1, #0x20
    swpb r1, r1, [r2]
    mov r1, #0x0
L_0201ae98:
    str r0, [r9, #0x20]
    cmp r1, #0x0
    beq L_0201b014
    ldr r0, [r6, #0x30]
    and r0, r0, #0x20000
    mov r0, r0, lsr #0x10
    tst r0, #0xff
    beq L_0201aec0
    mov r0, #0x0
    bl func_0204a908
L_0201aec0:
    mov r0, r6
    bl func_02068a8c
    movs r9, r0
    beq L_0201aedc
    mov r0, r7
    mov r1, r9
    bl func_0204a1b0
L_0201aedc:
    add r1, sp, #0x5
    add r2, sp, #0x4
    add r3, sp, #0x8
    mov r0, r6
    bl func_02068a30
    ldrb r1, [sp, #0x5]
    ldrb r2, [sp, #0x4]
    ldr r3, [sp, #0x8]
    bl func_0201cfe8
    ldr r8, [r6, #0x8]
    cmp r8, #0x0
    beq L_0201af4c
L_0201af0c:
    ldr r0, [r8, #0x0]
    cmp r0, #0x2
    beq L_0201af40
    ldr r0, [r6, #0x30]
    mov r1, r8
    tst r0, #0x400
    ldrne r0, [r8, #0x30]
    mov r2, r5
    orrne r0, r0, #0x400
    strne r0, [r8, #0x30]
    mov r0, r7
    mov r3, r4
    bl func_0201ad68
L_0201af40:
    ldr r8, [r8, #0x14]
    cmp r8, #0x0
    bne L_0201af0c
L_0201af4c:
    cmp r9, #0x0
    beq L_0201af60
    mov r0, r7
    mov r1, #0x1
    bl func_0204a1f4
L_0201af60:
    ldr r0, [r6, #0x30]
    and r0, r0, #0x20000
    mov r0, r0, lsr #0x10
    tst r0, #0xff
    beq L_0201af7c
    mov r0, #0x1
    bl func_0204a908
L_0201af7c:
    mov r0, #0x0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    bl func_0201cfe8
    b L_0201b014
L_0201af94:
    ldr r0, [r6, #0x2c]
    and r5, r5, r0
    tst r5, #0x800000
    beq L_0201afac
    tst r5, #0x2000000
    bne L_0201afbc
L_0201afac:
    tst r5, #0x1000000
    beq L_0201afdc
    tst r5, #0x2000000
    bne L_0201afdc
L_0201afbc:
    ldr r0, [r6, #0x30]
    and r0, r0, #0x2
    tst r0, #0xff
    bne L_0201afdc
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_0201cfec
L_0201afdc:
    ldr r6, [r6, #0x8]
    cmp r6, #0x0
    beq L_0201b014
L_0201afe8:
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    beq L_0201b008
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_0201ad68
L_0201b008:
    ldr r6, [r6, #0x14]
    cmp r6, #0x0
    bne L_0201afe8
L_0201b014:
    bl func_0201c448
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
