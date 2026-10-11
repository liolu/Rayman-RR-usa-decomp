#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202be9c();
extern void func_020309d0();
extern void func_020534f4();
extern void func_0207ac90();
extern void func_0207ad9c();
extern char data_020bc534[];
// clang-format off
asm void func_0202ba10(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c
    mov r6, r0
    ldrh r2, [r6, #0x10]
    mov r5, r1
    mov r4, #0x1
    and r0, r2, #0xfc00
    cmp r0, #0x3000
    bgt L_0202ba54
    bge L_0202bb90
    cmp r0, #0x1000
    bgt L_0202ba48
    beq L_0202ba78
    b L_0202be84
L_0202ba48:
    cmp r0, #0x2000
    beq L_0202bb04
    b L_0202be84
L_0202ba54:
    cmp r0, #0x5000
    bgt L_0202ba6c
    bge L_0202bdc8
    cmp r0, #0x4000
    beq L_0202bc1c
    b L_0202be84
L_0202ba6c:
    cmp r0, #0x7000
    beq L_0202bca8
    b L_0202be84
L_0202ba78:
    tst r2, #0x40
    bne L_0202ba88
    tst r2, #0x100
    beq L_0202baa0
L_0202ba88:
    mov r1, #0x1
    mov r2, r1
    mov r3, r5
    add r0, r6, #0x8
    bl func_0202be9c
    b L_0202be88
L_0202baa0:
    tst r2, #0x80
    bne L_0202bab0
    tst r2, #0x200
    beq L_0202bac8
L_0202bab0:
    mov r1, #0x1
    ldr r0, [r6, #0x4]
    mov r2, r1
    mov r3, r5
    bl func_0202be9c
    b L_0202be88
L_0202bac8:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202bb04:
    tst r2, #0x40
    bne L_0202bb14
    tst r2, #0x100
    beq L_0202bb2c
L_0202bb14:
    mov r3, r5
    add r0, r6, #0x8
    mov r1, #0x1
    mov r2, #0x2
    bl func_0202be9c
    b L_0202be88
L_0202bb2c:
    tst r2, #0x80
    bne L_0202bb3c
    tst r2, #0x200
    beq L_0202bb54
L_0202bb3c:
    ldr r0, [r6, #0x4]
    mov r3, r5
    mov r1, #0x1
    mov r2, #0x2
    bl func_0202be9c
    b L_0202be88
L_0202bb54:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202bb90:
    tst r2, #0x40
    bne L_0202bba0
    tst r2, #0x100
    beq L_0202bbb8
L_0202bba0:
    mov r3, r5
    add r0, r6, #0x8
    mov r1, #0x1
    mov r2, #0x4
    bl func_0202be9c
    b L_0202be88
L_0202bbb8:
    tst r2, #0x80
    bne L_0202bbc8
    tst r2, #0x200
    beq L_0202bbe0
L_0202bbc8:
    ldr r0, [r6, #0x4]
    mov r3, r5
    mov r1, #0x1
    mov r2, #0x4
    bl func_0202be9c
    b L_0202be88
L_0202bbe0:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202bc1c:
    tst r2, #0x40
    bne L_0202bc2c
    tst r2, #0x100
    beq L_0202bc44
L_0202bc2c:
    mov r3, r5
    add r0, r6, #0x8
    mov r1, #0x1
    mov r2, #0x8
    bl func_0202be9c
    b L_0202be88
L_0202bc44:
    tst r2, #0x80
    bne L_0202bc54
    tst r2, #0x200
    beq L_0202bc6c
L_0202bc54:
    ldr r0, [r6, #0x4]
    mov r3, r5
    mov r1, #0x1
    mov r2, #0x8
    bl func_0202be9c
    b L_0202be88
L_0202bc6c:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202bca8:
    tst r2, #0x40
    bne L_0202bcb8
    tst r2, #0x100
    beq L_0202bce4
L_0202bcb8:
    mov r3, r5
    add r0, r6, #0xc
    mov r1, #0x1
    mov r2, #0x2
    bl func_0202be9c
    mov r3, r5
    add r0, r6, #0x8
    mov r1, #0x1
    mov r2, #0x4
    bl func_0202be9c
    b L_0202be88
L_0202bce4:
    tst r2, #0x80
    bne L_0202bcf4
    tst r2, #0x200
    beq L_0202bd8c
L_0202bcf4:
    ldr r0, [r6, #0x4]
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0202bd40
    add r1, sp, #0x12
    add r2, sp, #0x18
    bl func_020309d0
    ldrh r1, [sp, #0x12]
    ldr r0, =0xffff
    cmp r1, r0
    ldreq r0, [sp, #0x14]
    streq r0, [sp, #0x14]
    beq L_0202bd48
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    sub r0, r1, r0
    str r0, [sp, #0x14]
    b L_0202bd48
L_0202bd40:
    ldr r0, =0xffff
    strh r0, [sp, #0x12]
L_0202bd48:
    ldrh r2, [sp, #0x12]
    mov r1, #0x1
    add r0, sp, #0x10
    mov r3, r2, asr #0x8
    and r2, r2, #0x7
    orr r6, r2, r3, lsl #0x3
    mov r2, r1
    mov r3, r5
    swpb r6, r6, [r0]
    bl func_0202be9c
    add r0, sp, #0x14
    mov r3, r5
    add r0, r0, #0x1
    mov r1, #0x1
    mov r2, #0x3
    bl func_0202be9c
    b L_0202be88
L_0202bd8c:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202bdc8:
    ldr r0, [r6, #0xc]
    cmp r0, #0xff
    bls L_0202bdd8
    bl func_020534f4
L_0202bdd8:
    ldr r2, [r6, #0xc]
    add r0, sp, #0x10
    swpb r2, r2, [r0]
    mov r1, #0x1
    mov r2, r1
    mov r3, r5
    bl func_0202be9c
    ldrh r0, [r6, #0x10]
    tst r0, #0x40
    bne L_0202be08
    tst r0, #0x100
    beq L_0202be20
L_0202be08:
    ldr r0, [r6, #0x8]
    ldr r1, [r6, #0xc]
    mov r3, r5
    mov r2, #0x1
    bl func_0202be9c
    b L_0202be88
L_0202be20:
    tst r0, #0x80
    bne L_0202be30
    tst r0, #0x200
    beq L_0202be48
L_0202be30:
    ldr r0, [r6, #0x4]
    ldr r1, [r6, #0xc]
    mov r3, r5
    mov r2, #0x1
    bl func_0202be9c
    b L_0202be88
L_0202be48:
    mov r0, #0x0
    bl func_0207ac90
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc534
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x8
    mov r3, #0x7
    bl func_0207ad9c
    b L_0202be88
L_0202be84:
    mov r4, #0x0
L_0202be88:
    mov r0, r4
    add sp, sp, #0x1c
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
