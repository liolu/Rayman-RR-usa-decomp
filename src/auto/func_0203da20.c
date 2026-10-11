#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_02001588();
extern void func_0203d914();
extern char data_020cf718[];
extern char data_020cf71c[];
extern char data_020cf784[];
extern char data_020cf788[];
extern char data_020cf7ec[];
extern char data_020cf7f0[];
extern char data_020cf854[];
extern char data_020cf8bc[];
extern char data_020cf924[];
// clang-format off
asm void func_0203da20(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r4, #0x0
    str r4, [sp, #0x2c]
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x2c]
    mov r4, #0x1000
    str r0, [sp, #0x28]
    ldr r0, [sp, #0x2c]
    str r1, [sp, #0x4]
    str r0, [sp, #0x24]
    str r4, [sp, #0x3c]
    ldr r0, [sp, #0x2c]
    str r2, [sp, #0x8]
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x2c]
    mov r10, r3
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x2c]
    mvn r4, #0x0
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x68]
    str r0, [sp, #0x68]
    ldr r0, [sp, #0x2c]
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x2c]
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x2c]
    str r0, [sp, #0x14]
    mov r0, #0x2000
    str r0, [sp, #0x30]
    ldr r5, [sp, #0x2c]
    b L_0203dde8
L_0203daa4:
    ldrsh r2, [r10, #0x2e]
    cmp r2, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203dde0
    ldr r0, [sp, #0x68]
    ldr r1, [r10, #0x0]
    cmp r5, r0
    ble L_0203dad8
    ldr r0, [sp, #0x30]
    cmp r0, r1
    bne L_0203ddd8
L_0203dad8:
    cmp r2, #0x7
    cmpne r2, #0x8
    moveq r0, #0x1
    movne r0, #0x0
    and r9, r0, #0xff
    ldr r0, [sp, #0x28]
    str r1, [sp, #0x30]
    cmp r0, #0x0
    bne L_0203db1c
    ldr r0, =data_020cf71c
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    str r9, [sp, #0x10]
    mov r0, #0x1
    str r0, [sp, #0x28]
    b L_0203db48
L_0203db1c:
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    beq L_0203db48
    cmp r9, #0x0
    bne L_0203db48
    ldr r0, =data_020cf71c
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x0
    str r0, [sp, #0x10]
L_0203db48:
    ldr r1, [r10, #0x28]
    and r0, r1, #0x2
    cmp r0, #0x2
    andne r0, r1, #0x9
    cmpne r0, #0x9
    bne L_0203dbb0
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    bne L_0203db8c
    ldr r0, =data_020cf854
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x1
    mov r7, r9
    str r0, [sp, #0x18]
    b L_0203dbb0
L_0203db8c:
    cmp r7, #0x0
    beq L_0203dbb0
    cmp r9, #0x0
    bne L_0203dbb0
    ldr r0, =data_020cf854
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r7, #0x0
L_0203dbb0:
    ldr r0, [r10, #0x20]
    mov r2, #0x0
    ldr r1, [r0, #0xc]
    cmp r1, r4
    beq L_0203dbd4
    ldrh r0, [r1, #0x2]
    and r0, r0, #0x4000
    cmp r0, #0x4000
    moveq r2, #0x1
L_0203dbd4:
    tst r2, #0xff
    beq L_0203dc08
    ldr r2, [r10, #0x1c]
    mov r0, #0x0
    ldr r2, [r2, #0xc]
    cmp r2, r4
    beq L_0203dc00
    ldrh r2, [r2, #0x2]
    and r2, r2, #0x4000
    cmp r2, #0x4000
    moveq r0, #0x1
L_0203dc00:
    tst r0, #0xff
    bne L_0203dc58
L_0203dc08:
    cmp r1, r4
    beq L_0203dc24
    ldrh r0, [r1, #0x2]
    and r0, r0, #0x8000
    cmp r0, #0x8000
    moveq r0, #0x1
    beq L_0203dc28
L_0203dc24:
    mov r0, #0x0
L_0203dc28:
    tst r0, #0xff
    beq L_0203dcac
    cmp r1, r4
    beq L_0203dc4c
    ldrh r1, [r1, #0x2]
    ldr r0, =0x1f88
    tst r1, r0
    movne r0, #0x1
    bne L_0203dc50
L_0203dc4c:
    mov r0, #0x0
L_0203dc50:
    tst r0, #0xff
    beq L_0203dcac
L_0203dc58:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    bne L_0203dc84
    ldr r0, =data_020cf8bc
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x1
    mov r8, r9
    str r0, [sp, #0x14]
    b L_0203dde0
L_0203dc84:
    cmp r8, #0x0
    beq L_0203dde0
    cmp r9, #0x0
    bne L_0203dde0
    ldr r0, =data_020cf8bc
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r8, #0x0
    b L_0203dde0
L_0203dcac:
    add r0, r10, #0x4
    add r1, sp, #0x34
    bl VEC_DotProduct
    ldr r1, [sp, #0x0]
    ldr r1, [r1, #0x18]
    cmp r0, r1
    ble L_0203dd1c
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    bne L_0203dcf4
    ldr r0, =data_020cf784
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x1
    mov r6, r9
    str r0, [sp, #0x1c]
    b L_0203dde0
L_0203dcf4:
    cmp r6, #0x0
    beq L_0203dde0
    cmp r9, #0x0
    bne L_0203dde0
    ldr r0, =data_020cf784
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r6, #0x0
    b L_0203dde0
L_0203dd1c:
    rsb r1, r1, #0x0
    cmp r0, r1
    ble L_0203dd7c
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    bne L_0203dd54
    ldr r0, =data_020cf7ec
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x1
    mov r11, r9
    str r0, [sp, #0x20]
    b L_0203dde0
L_0203dd54:
    cmp r11, #0x0
    beq L_0203dde0
    cmp r9, #0x0
    bne L_0203dde0
    ldr r0, =data_020cf7ec
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r11, #0x0
    b L_0203dde0
L_0203dd7c:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    bne L_0203dda8
    ldr r0, =data_020cf924
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    str r9, [sp, #0xc]
    mov r0, #0x1
    str r0, [sp, #0x24]
    b L_0203dde0
L_0203dda8:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0203dde0
    cmp r9, #0x0
    bne L_0203dde0
    ldr r0, =data_020cf924
    mov r1, r10
    mov r2, #0x68
    bl func_02001588
    mov r0, #0x0
    str r0, [sp, #0xc]
    b L_0203dde0
L_0203ddd8:
    mov r0, #0x1
    str r0, [sp, #0x2c]
L_0203dde0:
    add r10, r10, #0x68
    add r5, r5, #0x1
L_0203dde8:
    ldr r0, [sp, #0x8]
    cmp r5, r0
    bge L_0203de00
    ldr r0, [sp, #0x2c]
    cmp r0, #0x0
    beq L_0203daa4
L_0203de00:
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0203de28
    ldr r2, =data_020cf718
    ldr r1, =data_020cf854
    ldr r3, [r2, #0x0]
    ldr r0, [sp, #0x4]
    orr r3, r3, #0x10000
    str r3, [r2, #0x0]
    bl func_0203d914
L_0203de28:
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0203de44
    ldr r0, =data_020cf718
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x40
    str r1, [r0, #0x0]
L_0203de44:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    beq L_0203dea4
    ldr r0, =data_020cf718
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0xc]
    tst r0, #0x2
    beq L_0203dea4
    ldr r0, [sp, #0x0]
    ldr r3, =data_020cf788
    add r4, r0, #0x1d8
    mov r2, #0x6
L_0203de80:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203de80
L_0203dea4:
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0203df04
    ldr r0, =data_020cf718
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x4
    str r1, [r0, #0x0]
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0xc]
    tst r0, #0x2
    beq L_0203df04
    ldr r0, [sp, #0x0]
    ldr r3, =data_020cf7f0
    add r4, r0, #0x1e4
    mov r2, #0x6
L_0203dee0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203dee0
L_0203df04:
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    addeq sp, sp, #0x40
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020cf718
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x10
    str r1, [r0, #0x0]
    add sp, sp, #0x40
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
