#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020045ec();
extern void FX_Div();
extern char data_020dceec[];
// clang-format off
asm void func_0205ebc4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    ldrsb r1, [r5], #0x1
    mov r6, r0
    mov r4, #0x1
    cmp r1, #0x63
    bgt L_0205ec3c
    bge L_0205ec80
    cmp r1, #0x4f
    bgt L_0205ec20
    bge L_0205ed10
    cmp r1, #0x43
    bgt L_0205ec00
    beq L_0205ec80
    b L_0205ed20
L_0205ec00:
    cmp r1, #0x4c
    bgt L_0205ed20
    cmp r1, #0x48
    blt L_0205ed20
    beq L_0205ec90
    cmp r1, #0x4c
    beq L_0205ecac
    b L_0205ed20
L_0205ec20:
    cmp r1, #0x57
    bgt L_0205ec30
    beq L_0205ecd8
    b L_0205ed20
L_0205ec30:
    cmp r1, #0x5a
    beq L_0205ecf4
    b L_0205ed20
L_0205ec3c:
    cmp r1, #0x6f
    bgt L_0205ec64
    bge L_0205ed10
    cmp r1, #0x68
    bgt L_0205ec58
    beq L_0205ec90
    b L_0205ed20
L_0205ec58:
    cmp r1, #0x6c
    beq L_0205ecac
    b L_0205ed20
L_0205ec64:
    cmp r1, #0x77
    bgt L_0205ec74
    beq L_0205ecd8
    b L_0205ed20
L_0205ec74:
    cmp r1, #0x7a
    beq L_0205ecf4
    b L_0205ed20
L_0205ec80:
    add r1, r6, #0x2c
    mov r0, #0x63
    swpb r0, r0, [r1]
    b L_0205ed20
L_0205ec90:
    mov r0, r5
    bl func_020045ec
    mov r0, r0, lsl #0xc
    mov r1, #0x3e8000
    bl FX_Div
    str r0, [r6, #0x18]
    b L_0205ed20
L_0205ecac:
    mov ip, #0x1
    swpb r0, ip, [r2]
    mov r1, #0x0
    swpb r0, ip, [r3]
    str r1, [r6, #0xc]
    str r1, [r6, #0x4]
    ldr r1, [r6, #0x8]
    ldr r0, [r6, #0x18]
    sub r0, r1, r0
    str r0, [r6, #0x8]
    b L_0205ed20
L_0205ecd8:
    mov r0, r5
    bl func_020045ec
    mov r0, r0, lsl #0xc
    mov r1, #0x3e8000
    bl FX_Div
    str r0, [r6, #0x14]
    b L_0205ed20
L_0205ecf4:
    mov r0, r5
    bl func_020045ec
    mov r0, r0, lsl #0xc
    mov r1, #0x3e8000
    bl FX_Div
    str r0, [r6, #0x1c]
    b L_0205ed20
L_0205ed10:
    mov r0, r5
    bl func_020045ec
    ldr r1, =data_020dceec
    str r0, [r1, #0x0]
L_0205ed20:
    ldrsb r0, [r5, #0x0]
    cmp r0, #0x3a
    beq L_0205ed3c
L_0205ed2c:
    ldrsb r0, [r5, #0x1]!
    add r4, r4, #0x1
    cmp r0, #0x3a
    bne L_0205ed2c
L_0205ed3c:
    add r0, r4, #0x1
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
