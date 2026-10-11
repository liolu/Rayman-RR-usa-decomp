#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201a83c();
extern void func_0201c438();
extern void func_0201c448();
extern void func_0201cfe8();
extern void func_0204a1b0();
extern void func_0204a1f4();
extern void func_0204a908();
extern void func_0204c748();
extern void func_0204e66c();
extern void func_02053538();
extern void func_02053548();
extern void func_02053558();
extern void func_02053568();
extern void func_020538d0();
extern void func_02068a30();
extern void func_02068a8c();
extern void func_0206b3f4();
extern void func_0206b434();
extern void func_0206b450();
extern char data_020dba76[];
extern char data_020dbfb4[];
// clang-format off
asm void func_0201a950(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldr r8, =data_020dba76
    mov r5, #0x0
    swpb r7, r5, [r8]
    mov r9, r1
    ldr r1, [r9, #0x30]
    mov r10, r0
    and r0, r1, #0x20
    tst r0, #0xff
    mov r8, r2
    mov r7, r3
    addne sp, sp, #0x28
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0x4]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x25]
    tst r0, #0x4
    movne r5, #0x1
    and r0, r5, #0xff
    cmp r0, #0x1
    addne sp, sp, #0x28
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_0206b3f4
    ldr r1, [r9, #0x30]
    mov r5, r0
    and r0, r1, #0x2
    tst r0, #0xff
    beq L_0201a9f0
    ldr r1, [r9, #0x4]
    orr r0, r5, #0x800
    ldr r1, [r1, #0x4]
    add sp, sp, #0x28
    str r0, [r1, #0x20]
    ldrb r0, [r1, #0x25]
    add r1, r1, #0x25
    bic r0, r0, #0x20
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0201a9f0:
    ldr r0, [r9, #0x1c]
    mov r1, #0x0
    str r1, [sp, #0x14]
    cmp r0, #0x0
    beq L_0201aa30
    ldr r1, [r0, #0x0]
    cmp r1, #0x2
    bne L_0201aa30
    ldr r1, [r0, #0x4]
    ldr r1, [r1, #0x4]
    ldrb r1, [r1, #0x24]
    cmp r1, #0x0
    beq L_0201aa30
    mov r1, #0x1
    str r1, [sp, #0x14]
    bl func_0201c438
L_0201aa30:
    mov r0, r9
    bl func_0201c438
    ldr r0, [r9, #0x34]
    str r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0201aa58
    ldr r0, [r0, #0xc]
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x18]
    str r0, [sp, #0x8]
L_0201aa58:
    tst r5, #0x200000
    beq L_0201aae4
    bl func_02053538
    mov r4, r0
    bl func_02053558
    str r0, [sp, #0x10]
    mov r0, r9
    bl func_0206b450
    mov r6, r0, lsl #0xc
    mov r0, r9
    bl func_0206b434
    mov r11, r0, lsl #0xc
    cmp r4, #0x0
    bne L_0201aaa4
    mov r0, r6
    bl func_02053548
    sub r0, r6, r11
    bl func_02053568
    b L_0201aac8
L_0201aaa4:
    cmp r11, r4
    bge L_0201aac8
    cmp r4, r6
    movlt r6, r4
    mov r0, r6
    bl func_02053548
    bl func_02053538
    sub r0, r0, r11
    bl func_02053568
L_0201aac8:
    ldr r11, [r9, #0x30]
    bic r7, r7, #0x30
    orr r0, r11, #0x10000
    str r0, [r9, #0x30]
    ldr r6, [r9, #0x2c]
    bic r0, r6, #0x8
    str r0, [r9, #0x2c]
L_0201aae4:
    cmp r7, #0x7f
    ldrne r0, [sp, #0x18]
    cmpne r0, #0x0
    moveq r7, #0x7f
    beq L_0201ab14
    str r7, [sp, #0x0]
    ldr r3, [r9, #0x24]
    ldr r1, [sp, #0x8]
    ldr r2, [sp, #0x4]
    mov r0, r10
    bl func_020538d0
    mov r7, r0
L_0201ab14:
    ldr r0, =data_020dbfb4
    ldr r0, [r0, #0x0]
    cmp r0, #0x1000
    bne L_0201ab34
    mov r0, r9
    bl func_0206b3f4
    tst r0, #0x200000
    strne r6, [r9, #0x2c]
L_0201ab34:
    ldr r0, =0xfc65f7fb
    ldr r1, [r9, #0x2c]
    orr r0, r8, r0
    and r8, r0, r1
    tst r8, #0x800000
    beq L_0201ab54
    tst r8, #0x2000000
    bne L_0201ab64
L_0201ab54:
    tst r8, #0x1000000
    beq L_0201aba0
    tst r8, #0x2000000
    bne L_0201aba0
L_0201ab64:
    ldr r0, [r9, #0x30]
    and r0, r0, #0x2
    tst r0, #0xff
    bne L_0201aba0
    cmp r7, #0x0
    beq L_0201aba0
    ldr r0, [r9, #0x4]
    bic r5, r5, #0x800
    ldr r2, [r0, #0x4]
    mov r0, #0x1
    ldrb r1, [r2, #0x25]
    add r2, r2, #0x25
    orr r1, r1, #0x20
    swpb r1, r1, [r2]
    b L_0201abc0
L_0201aba0:
    ldr r0, [r9, #0x4]
    orr r5, r5, #0x800
    ldr r2, [r0, #0x4]
    mov r0, #0x0
    ldrb r1, [r2, #0x25]
    add r2, r2, #0x25
    bic r1, r1, #0x20
    swpb r1, r1, [r2]
L_0201abc0:
    ldr r1, [r9, #0x4]
    cmp r0, #0x0
    ldr r0, [r1, #0x4]
    str r5, [r0, #0x20]
    beq L_0201ad1c
    ldr r0, [r9, #0x10]
    cmp r0, #0x0
    ble L_0201ad1c
    add r1, sp, #0x21
    add r2, sp, #0x20
    add r3, sp, #0x24
    mov r0, r9
    bl func_02068a30
    str r0, [sp, #0xc]
    ldrb r1, [sp, #0x21]
    ldrb r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    bl func_0201cfe8
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0201ac20
    mov r0, #0x0
    bl func_0204a908
    b L_0201ac5c
L_0201ac20:
    ldr r0, [r9, #0x30]
    and r0, r0, #0x20000
    mov r0, r0, lsr #0x10
    tst r0, #0xff
    beq L_0201ac3c
    mov r0, #0x0
    bl func_0204a908
L_0201ac3c:
    mov r0, r9
    bl func_02068a8c
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    beq L_0201ac5c
    ldr r1, [sp, #0x1c]
    mov r0, r10
    bl func_0204a1b0
L_0201ac5c:
    mov r0, r9
    mov r1, r10
    bl func_0204e66c
    ldr r0, [r9, #0x4]
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x100]
    cmp r0, #0x0
    beq L_0201ac88
    add r1, r1, #0x100
    ldrsh r1, [r1, #0x4]
    bl func_0204c748
L_0201ac88:
    ldr r7, [r9, #0x8]
    cmp r7, #0x0
    beq L_0201acbc
L_0201ac94:
    ldr r0, [r7, #0x0]
    cmp r0, #0x2
    beq L_0201acb0
    mov r0, r10
    mov r1, r7
    mov r2, r8
    bl func_0201a83c
L_0201acb0:
    ldr r7, [r7, #0x14]
    cmp r7, #0x0
    bne L_0201ac94
L_0201acbc:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0201acd4
    mov r0, #0x1
    bl func_0204a908
    b L_0201ad08
L_0201acd4:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    beq L_0201acec
    mov r0, r10
    mov r1, #0x1
    bl func_0204a1f4
L_0201acec:
    ldr r0, [r9, #0x30]
    and r0, r0, #0x20000
    mov r0, r0, lsr #0x10
    tst r0, #0xff
    beq L_0201ad08
    mov r0, #0x1
    bl func_0204a908
L_0201ad08:
    mov r0, #0x0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    bl func_0201cfe8
L_0201ad1c:
    tst r5, #0x200000
    beq L_0201ad3c
    mov r0, r4
    bl func_02053548
    ldr r0, [sp, #0x10]
    bl func_02053568
    str r11, [r9, #0x30]
    str r6, [r9, #0x2c]
L_0201ad3c:
    bl func_0201c448
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    addeq sp, sp, #0x28
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_0201c448
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
