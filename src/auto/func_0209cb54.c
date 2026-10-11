#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201c488();
extern void func_0201c9b0();
extern void func_02035e20();
extern void func_020401d0();
extern void func_02058a6c();
extern void func_0205936c();
extern void func_0205939c();
extern void func_0205b6a4();
extern void func_0205d0d4();
extern void func_0205d0ec();
extern void func_0205db18();
extern void func_0205dda8();
extern void func_02067900();
extern void func_0206b3c4();
extern void func_02084450();
extern void func_02088a04();
extern char data_020dc19c[];
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_0209cb54(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r4, r1
    ldr r5, [r4, #-0x8]
    add r2, sp, #0x8
    str r0, [sp, #0x0]
    bl func_02084450
    mov r4, r0
    cmp r5, #0xbc
    bgt L_0209cbb4
    bge L_0209cc30
    sub r1, r5, #0x35
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_0209cdb8
L_0209cb90:
    b L_0209cd1c
    b L_0209cd48
    b L_0209cd5c
    b L_0209cd70
    b L_0209cd70
    b L_0209cd98
    b L_0209cdb8
    b L_0209cdb8
    b L_0209cbc0
L_0209cbb4:
    cmp r5, #0xbe
    beq L_0209cbfc
    b L_0209cdb8
L_0209cbc0:
    ldr r3, [sp, #0x8]
    ldr r0, =data_020dc19c
    ldr r1, [r3, #0x4]
    ldr r2, [r0, #0x6c]
    ldr r0, [r1, #0x14]
    cmp r2, r0
    bne L_0209cbf0
    sub r0, r2, #0x1
    str r0, [r1, #0x14]
    ldr r0, [r3, #0x4]
    bl func_0206b3c4
    bl func_0201c9b0
L_0209cbf0:
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cbfc:
    ldr r0, [sp, #0x8]
    ands r5, r0, #0xff
    beq L_0209cc10
    bl func_0205936c
    b L_0209cc14
L_0209cc10:
    bl func_0205939c
L_0209cc14:
    ldr r1, =data_020dc19c
    add sp, sp, #0x18
    add r1, r1, #0x7e
    add r2, r1, #0xc00
    mov r0, r4
    swpb r1, r5, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cc30:
    ldr r0, [sp, #0x0]
    ldr r1, [r0, #0x4]
    ldr r0, [sp, #0x8]
    ldr r7, [r1, #0x4]
    and r0, r0, #0xff
    str r0, [sp, #0x4]
    ldrb r1, [r7, #0x24]
    mov r0, r0
    cmp r1, r0
    beq L_0209cd10
    cmp r1, #0x0
    ldrne r0, [sp, #0x0]
    ldrne r8, [r0, #0x8]
    cmpne r8, #0x0
    beq L_0209ccf0
    mov r6, #0x1
    mov r11, #0x0
    mov r5, r6
L_0209cc78:
    ldr r0, [r8, #0x0]
    cmp r0, #0x2
    bne L_0209cce4
    ldr r0, [r8, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_0209ccdc
    bl func_02067900
    movs r9, r0
    beq L_0209ccdc
    ldr r0, [r9, #0x4]
    mov r1, r11
    cmp r0, #0x0
    movne r1, r6
    mov r10, r11
    cmp r1, #0x0
    beq L_0209ccc8
    bl func_02035e20
    cmp r0, #0x1
    moveq r10, r5
L_0209ccc8:
    tst r10, #0xff
    beq L_0209ccdc
    mov r0, r9
    mov r1, r8
    bl func_020401d0
L_0209ccdc:
    mov r0, r8
    bl func_0205b6a4
L_0209cce4:
    ldr r8, [r8, #0x14]
    cmp r8, #0x0
    bne L_0209cc78
L_0209ccf0:
    ldr r0, [sp, #0x4]
    add r1, r7, #0x24
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x0]
    ldr r2, [sp, #0x4]
    mov r1, r0
    ldr r1, [r1, #0x1c]
    bl func_0201c488
L_0209cd10:
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cd1c:
    bl func_0205d0d4
    ldr r1, [sp, #0x8]
    mov r5, r0
    ldr r0, [r1, #0x4]
    bl func_0206b3c4
    mov r1, r0
    mov r0, r5
    bl func_0205d0ec
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cd48:
    ldr r0, [sp, #0x8]
    bl func_0205db18
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cd5c:
    ldr r0, [sp, #0x8]
    bl func_0205dda8
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cd70:
    add r0, sp, #0x8
    bl func_02088a04
    cmp r5, #0x38
    moveq r1, #0x1
    movne r1, #0x0
    and r1, r1, #0xff
    bl func_02058a6c
    add sp, sp, #0x18
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cd98:
    ldr r1, [sp, #0x8]
    ldr r3, =data_020e39e9
    ldr r2, =data_020e39e8
    swpb r1, r1, [r3]
    mov r4, #0x1
    add sp, sp, #0x18
    swpb r1, r4, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209cdb8:
    mov r0, r4
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
