#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003984();
extern void func_0207574c();
extern void func_02075cb4();
extern char data_020be610[];
extern char data_020be628[];
extern char data_020be79c[];
extern char data_020be7a0[];
extern char data_020de6a0[];
extern char data_020de6e8[];
extern char data_020de756[];
extern char data_020de780[];
extern char data_020de784[];
extern char data_020de798[];
extern char data_020df7a0[];
extern char data_020dfba0[];
extern char data_020dfba5[];
// clang-format off
asm void func_02076e38(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    ldr ip, [sp, #0x28]
    ldr r4, =data_020de6a0
    mov r8, r0
    mov r7, r1
    cmp ip, #0x7f
    movlt ip, #0x1
    ldr r0, =data_020de784
    mov r6, r2
    mov r5, r3
    ldr r4, [r4, #0x0]
    ldr r1, =data_020de6a0
    movge ip, #0x0
    ldrb r2, [r0, r8, lsl #0x2]
    add r3, r0, r8, lsl #0x2
    ldr r0, =data_020de780
    str ip, [r1, #0x0]
    add r1, r3, #0x3
    str r3, [r0, #0x0]
    swpb r0, r2, [r1]
    ldr r0, =data_020be610
    ldr r0, [r0, r8, lsl #0x2]
    cmp r5, r0
    beq L_02076eb8
    ldr r0, =data_020be628
    bl func_0207574c
    ldr r1, =data_020de6e8
    mov r2, #0x1
    ldr r0, =data_020de6a0
    str r2, [r1, r8, lsl #0x2]
    str r2, [r0, #0x54]
L_02076eb8:
    ldr ip, =data_020de756
    mov r3, #0x0
    ldr r0, =data_020dfba0
    ldr r1, =data_020be79c
    mov r2, r5
    swpb r3, r3, [ip]
    bl func_02003984
    ldr r2, [sp, #0x20]
    mvn r0, #0x0
    cmp r2, r0
    beq L_02076f1c
    ldr r0, =data_020dfba5
    ldr r1, =data_020be7a0
    bl func_02003984
    ldr r1, [sp, #0x24]
    ldr r0, =data_020de6e8
    str r1, [sp, #0x0]
    ldr ip, [r0, r8, lsl #0x2]
    ldr r2, =data_020dfba0
    ldr r3, =data_020dfba5
    mov r0, r7
    mov r1, r6
    str ip, [sp, #0x4]
    bl func_02075cb4
    b L_02076f44
L_02076f1c:
    ldr r1, [sp, #0x24]
    ldr r0, =data_020de6e8
    str r1, [sp, #0x0]
    ldr ip, [r0, r8, lsl #0x2]
    ldr r2, =data_020dfba0
    mov r0, r7
    mov r1, r6
    mov r3, #0x0
    str ip, [sp, #0x4]
    bl func_02075cb4
L_02076f44:
    ldr r1, =data_020de780
    ldr r3, =data_020be610
    ldr r2, [r1, #0x0]
    str r5, [r3, r8, lsl #0x2]
    ldrb r5, [r2, #0x0]
    ldrb r3, [r2, #0x1]
    ldrb r1, [r2, #0x3]
    add r3, r5, r3
    cmp r1, r3
    bge L_02076f9c
    ldr r7, =data_020df7a0
    ldr r3, =0xc1fffcff
L_02076f74:
    ldr r5, [r7, r1, lsl #0x3]
    and r5, r5, r3
    orr r5, r5, #0x200
    str r5, [r7, r1, lsl #0x3]
    ldrb r6, [r2, #0x0]
    ldrb r5, [r2, #0x1]
    add r1, r1, #0x1
    add r5, r6, r5
    cmp r1, r5
    blt L_02076f74
L_02076f9c:
    ldr r1, =data_020de6a0
    ldr r3, =data_020de798
    ldr r2, =data_020de780
    str r4, [r1, #0x0]
    str r3, [r2, #0x0]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
