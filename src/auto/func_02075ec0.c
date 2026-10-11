#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02075478();
extern char data_020be594[];
extern char data_020de6a0[];
extern char data_020de780[];
extern char data_020de790[];
extern char data_020de794[];
extern char data_020de798[];
extern char data_020df7a0[];
// clang-format off
asm void func_02075ec0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    str r1, [sp, #0x4]
    cmp r0, #0x0
    ldreq r1, =data_020de794
    ldreq r0, =data_020de780
    ldrne r1, =data_020de790
    mov r10, r2
    ldrne r0, =data_020de780
    ldrb r2, [r1, #0x0]
    str r1, [r0, #0x0]
    add r1, r1, #0x3
    swpb r0, r2, [r1]
    ldr r1, [sp, #0x34]
    ldr r0, =data_020de6a0
    cmp r1, #0x7f
    ldr r0, [r0, #0x0]
    movlt r2, #0x1
    str r0, [sp, #0x8]
    ldr r0, =data_020be594
    mov r9, r3
    ldr r0, [r0, #0xb4]
    movge r2, #0x0
    ldr r1, =data_020de6a0
    cmp r9, r0
    movgt r9, r0
    cmp r9, #0x4
    str r2, [r1, #0x0]
    ldr r0, [sp, #0x30]
    movlt r9, #0x4
    mul r2, r0, r9
    ldr r1, =0x51eb851f
    mov r2, r2, lsl #0x3
    smull r0, r3, r1, r2
    mov r0, r2, lsr #0x1f
    add r3, r0, r3, asr #0x5
    mov r2, r3, lsr #0x1f
    mov r0, r3, asr #0x2
    rsb r1, r2, r3, lsl #0x1d
    add r0, r3, r0, lsr #0x1d
    add r5, r2, r1, ror #0x1d
    movs r8, r0, asr #0x3
    cmpeq r5, #0x1
    moveq r5, #0x1
    addne r0, r5, r5, lsr #0x1f
    movne r5, r0, asr #0x1
    ldr r7, [sp, #0x4]
    cmp r8, #0x0
    mov r6, #0x0
    bne L_02076008
    cmp r5, #0x0
    ble L_02075fd0
    ldr r11, =data_020de780
    mov r4, r6
L_02075f98:
    ldr r2, [r11, #0x0]
    mov r1, #0x1
    ldrb r0, [r2, #0x3]
    add ip, r2, #0x3
    mov r2, r7
    add r3, r0, #0x1
    swpb r3, r3, [ip]
    mov r3, r10
    str r4, [sp, #0x0]
    bl func_02075478
    add r6, r6, #0x1
    cmp r6, r5
    add r7, r7, #0x2
    blt L_02075f98
L_02075fd0:
    ldr r0, =data_020de780
    ldr r2, [sp, #0x4]
    ldr r1, [r0, #0x0]
    mov r3, r10
    ldrb r0, [r1, #0x3]
    add r4, r1, #0x3
    mov r5, #0x0
    add r1, r0, #0x1
    swpb r1, r1, [r4]
    mov r1, #0x3
    str r5, [sp, #0x0]
    bl func_02075478
    ldr r7, [sp, #0x4]
    b L_02076084
L_02076008:
    cmp r8, #0x0
    ble L_02076050
    ldr r11, =data_020de780
    mov r4, r6
L_02076018:
    ldr r2, [r11, #0x0]
    mov r1, r4
    ldrb r0, [r2, #0x3]
    add ip, r2, #0x3
    mov r2, r7
    add r3, r0, #0x1
    swpb r3, r3, [ip]
    mov r3, r10
    str r4, [sp, #0x0]
    bl func_02075478
    add r6, r6, #0x1
    cmp r6, r8
    add r7, r7, #0x8
    blt L_02076018
L_02076050:
    ldr r0, =data_020de780
    mov r1, r5, lsl #0x1
    ldr r2, [r0, #0x0]
    rsb r4, r1, #0x8
    ldrb r0, [r2, #0x3]
    add r2, r2, #0x3
    mov r3, r10
    add r1, r0, #0x1
    swpb r1, r1, [r2]
    mov r1, #0x0
    sub r2, r7, r4
    str r1, [sp, #0x0]
    bl func_02075478
L_02076084:
    cmp r8, r9
    bge L_020760d0
    ldr r4, =data_020de780
    mov r6, #0x0
    mov r5, #0x3
L_02076098:
    ldr r2, [r4, #0x0]
    mov r1, r5
    ldrb r0, [r2, #0x3]
    add r11, r2, #0x3
    mov r2, r7
    add r3, r0, #0x1
    swpb r3, r3, [r11]
    mov r3, r10
    str r6, [sp, #0x0]
    bl func_02075478
    add r8, r8, #0x1
    cmp r8, r9
    add r7, r7, #0x8
    blt L_02076098
L_020760d0:
    ldr r0, [sp, #0x30]
    cmp r0, #0x64
    bne L_02076118
    ldr r1, =data_020de780
    ldr r0, [sp, #0x4]
    ldr r1, [r1, #0x0]
    add r2, r0, r9, lsl #0x3
    ldrb r0, [r1, #0x3]
    add r4, r1, #0x3
    mov r3, r10
    add r1, r0, #0x1
    swpb r1, r1, [r4]
    mov r4, #0x1
    sub r2, r2, #0x3
    mov r1, #0x2
    str r4, [sp, #0x0]
    bl func_02075478
    b L_02076150
L_02076118:
    ldr r1, =data_020de780
    ldr r0, [sp, #0x4]
    ldr r1, [r1, #0x0]
    add r2, r0, r9, lsl #0x3
    ldrb r0, [r1, #0x3]
    add r4, r1, #0x3
    mov r3, r10
    add r1, r0, #0x1
    swpb r1, r1, [r4]
    mov r4, #0x1
    sub r2, r2, #0x3
    mov r1, #0x4
    str r4, [sp, #0x0]
    bl func_02075478
L_02076150:
    ldr r0, =data_020de780
    mov r3, r10
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x4]
    add r4, r1, #0x3
    sub r2, r0, #0x2
    ldrb r0, [r1, #0x3]
    mov r5, #0x0
    add r1, r0, #0x1
    swpb r1, r1, [r4]
    mov r1, #0x5
    str r5, [sp, #0x0]
    bl func_02075478
    ldr r0, =data_020de780
    ldr r5, [r0, #0x0]
    ldrb r1, [r5, #0x0]
    ldrb r0, [r5, #0x1]
    ldrb r4, [r5, #0x3]
    add r0, r1, r0
    cmp r4, r0
    bge L_020761d4
    ldr r3, =data_020df7a0
    ldr r0, =0xc1fffcff
L_020761ac:
    ldr r1, [r3, r4, lsl #0x3]
    and r1, r1, r0
    orr r1, r1, #0x200
    str r1, [r3, r4, lsl #0x3]
    ldrb r2, [r5, #0x0]
    ldrb r1, [r5, #0x1]
    add r4, r4, #0x1
    add r1, r2, r1
    cmp r4, r1
    blt L_020761ac
L_020761d4:
    ldr r1, =data_020de6a0
    ldr r0, [sp, #0x8]
    ldr r3, =data_020de798
    ldr r2, =data_020de780
    str r0, [r1, #0x0]
    str r3, [r2, #0x0]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
