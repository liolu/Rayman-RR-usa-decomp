#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f4();
extern void func_0200a3b8();
extern void func_0200a4bc();
extern void func_02040d90();
extern void func_020414ac();
extern void func_02041da8();
extern void func_02048404();
extern void func_02062160();
extern void func_02063444();
extern void func_0206b3c4();
extern void func_02087184();
extern void func_0208866c();
extern void func_0208874c();
extern char data_020e3b24[];
// clang-format off
asm void func_02087bc4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    ldr r3, =0x8008
    mov r4, r0
    cmp r1, r3
    bgt L_02087c74
    bge L_02087dc0
    sub r0, r3, #0x3
    cmp r1, r0
    bgt L_02087c60
    bge L_02087d28
    cmp r1, #0x18
    addls pc, pc, r1, lsl #0x2
    b L_02088238
L_02087bfc:
    b L_02087cc4
    b L_02087cd0
    b L_02087cdc
    b L_02087ce8
    b L_02087cf4
    b L_02087d00
    b L_02087d3c
    b L_02087d64
    b L_02087dd0
    b L_02087f10
    b L_020881b4
    b L_020881dc
    b L_02087ed4
    b L_02087e50
    b L_02088194
    b L_02087eac
    b L_02087e00
    b L_02087e28
    b L_02087f40
    b L_0208803c
    b L_02087f74
    b L_02087fa8
    b L_02087fdc
    b L_020880d4
    b L_02088134
L_02087c60:
    ldr r0, =0x8007
    cmp r1, r0
    beq L_02087da0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087c74:
    add r0, r3, #0x3
    cmp r1, r0
    bgt L_02087c98
    bge L_020881cc
    add r0, r3, #0x1
    cmp r1, r0
    beq L_02087f00
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087c98:
    add r0, r3, #0x6
    cmp r1, r0
    bgt L_02087cb0
    beq L_020881a0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087cb0:
    add r0, r3, #0x7
    cmp r1, r0
    beq L_02087e9c
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087cc4:
    add sp, sp, #0xc
    swpb r0, r2, [r4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087cd0:
    add sp, sp, #0xc
    swpb r0, r2, [r4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087cdc:
    add sp, sp, #0xc
    swpb r0, r2, [r4]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087ce8:
    add sp, sp, #0xc
    strh r2, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087cf4:
    add sp, sp, #0xc
    strh r2, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087d00:
    mov r0, r2, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x67
    mov r2, #0x4
    bl func_020414ac
    ldr r1, [r0, #0x0]
    str r1, [r4, #0x0]
    bl func_02041da8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087d28:
    ldr r0, =data_020e3b24
    add sp, sp, #0xc
    ldr r0, [r0, #0x0]
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087d3c:
    mov r0, r2, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x68
    mov r2, #0x4
    bl func_020414ac
    ldr r1, [r0, #0x0]
    str r1, [r4, #0x0]
    bl func_02041da8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087d64:
    mov r0, r2, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x69
    mov r2, #0x4
    bl func_020414ac
    mov r5, r0
    ldr r1, [r5, #0x0]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x0]
    mov r0, r5
    bl func_02041da8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087da0:
    ldr r1, =data_020e3b24
    ldr r0, =0x45800000
    ldr r1, [r1, #0x0]
    bl func_0200a4bc
    bl func_0200a3b8
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087dc0:
    ldr r0, =data_020e3b24
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
L_02087dd0:
    mvn r0, #0x0
    cmp r2, r0
    moveq r0, #0x0
    beq L_02087dec
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0208874c
L_02087dec:
    cmp r0, #0x0
    moveq r0, #0x0
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087e00:
    mov r0, r2, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x68
    mov r2, #0x4
    bl func_020414ac
    ldr r1, [r0, #0x0]
    str r1, [r4, #0x0]
    bl func_02041da8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087e28:
    mvn r0, #0x0
    cmp r2, r0
    moveq r0, #0x0
    beq L_02087e44
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0208866c
L_02087e44:
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087e50:
    mvn r0, #0x0
    cmp r2, r0
    beq L_02087e8c
    mov r0, r2, lsl #0x10
    mov r6, r0, lsr #0x10
    mov r0, r6
    mov r1, #0x0
    bl func_02062160
    movs r5, r0
    bne L_02087e90
    mov r0, r4
    mov r2, r6
    mov r1, #0x5
    bl func_02040d90
    b L_02087e90
L_02087e8c:
    mov r5, #0x0
L_02087e90:
    add sp, sp, #0xc
    str r5, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087e9c:
    ldr r0, =data_020e3b24
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
L_02087eac:
    mvn r0, #0x0
    cmp r2, r0
    moveq r0, #0x0
    beq L_02087ec8
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02048404
L_02087ec8:
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087ed4:
    mvn r0, #0x0
    cmp r2, r0
    moveq r0, #0x0
    beq L_02087ef4
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    bl func_02087184
L_02087ef4:
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087f00:
    ldr r0, =data_020e3b24
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
L_02087f10:
    mvn r0, #0x0
    cmp r2, r0
    moveq r0, #0x0
    beq L_02087f34
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02063444
    ldr r0, [r0, #0x4]
    bl func_0206b3c4
L_02087f34:
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087f40:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    mov r1, #0x0
    mov r0, #0x9
    str r0, [r4, #0x0]
    cmp r0, #0xb
    ldrb r0, [r4, #0x4]
    addeq r0, r0, r0, lsl #0x1
    mov r2, r0, lsl #0x2
    add r0, r4, #0x8
    bl func_020015f4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087f74:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    mov r1, #0x0
    mov r0, #0x7
    str r0, [r4, #0x0]
    cmp r0, #0xb
    ldrb r0, [r4, #0x4]
    addeq r0, r0, r0, lsl #0x1
    mov r2, r0, lsl #0x2
    add r0, r4, #0x8
    bl func_020015f4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087fa8:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    mov r1, #0x0
    mov r0, #0x5
    str r0, [r4, #0x0]
    cmp r0, #0xb
    ldrb r0, [r4, #0x4]
    addeq r0, r0, r0, lsl #0x1
    mov r2, r0, lsl #0x2
    add r0, r4, #0x8
    bl func_020015f4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02087fdc:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    cmp r2, #0x0
    mov r0, #0x8
    addle sp, sp, #0xc
    str r0, [r4, #0x0]
    mov r1, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r5, r1
    mov r3, r1
L_02088004:
    ldr r0, [r4, #0x0]
    cmp r0, #0xb
    moveq r6, r5
    add r0, r1, #0x1
    movne r6, r1
    mov r0, r0, lsl #0x10
    add r1, r4, r6, lsl #0x2
    str r3, [r1, #0x8]
    cmp r2, r0, asr #0x10
    add r5, r5, #0x3
    mov r1, r0, asr #0x10
    bgt L_02088004
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_0208803c:
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    add r3, r4, #0x4
    swpb r1, r2, [r3]
    cmp r2, #0x0
    mov r1, #0xb
    addle sp, sp, #0xc
    str r1, [r4, #0x0]
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r1, r0
    add r7, r4, #0x8
    add r6, sp, #0x0
L_02088074:
    ldr r3, [r4, #0x0]
    mov lr, r6
    cmp r3, #0xb
    moveq r3, r1
    movne r3, r0
    add r8, r7, r3, lsl #0x2
    mov ip, #0x6
L_02088090:
    ldrb r3, [lr, #0x0]
    ldrb r5, [lr, #0x1]
    add lr, lr, #0x2
    subs ip, ip, #0x1
    swpb r3, r3, [r8]
    add r8, r8, #0x1
    swpb r3, r5, [r8]
    add r8, r8, #0x1
    bne L_02088090
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    cmp r2, r0, asr #0x10
    add r1, r1, #0x3
    mov r0, r0, asr #0x10
    bgt L_02088074
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_020880d4:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    cmp r2, #0x0
    mov r0, #0xe
    addle sp, sp, #0xc
    str r0, [r4, #0x0]
    mov r1, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r5, r1
    mvn r3, #0x0
L_020880fc:
    ldr r0, [r4, #0x0]
    cmp r0, #0xb
    moveq r6, r5
    add r0, r1, #0x1
    movne r6, r1
    mov r0, r0, lsl #0x10
    add r1, r4, r6, lsl #0x2
    str r3, [r1, #0x8]
    cmp r2, r0, asr #0x10
    add r5, r5, #0x3
    mov r1, r0, asr #0x10
    bgt L_020880fc
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02088134:
    add r1, r4, #0x4
    swpb r0, r2, [r1]
    cmp r2, #0x0
    mov r0, #0xf
    addle sp, sp, #0xc
    str r0, [r4, #0x0]
    mov r1, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r5, r1
    mov r3, r1
L_0208815c:
    ldr r0, [r4, #0x0]
    cmp r0, #0xb
    moveq r6, r5
    add r0, r1, #0x1
    movne r6, r1
    mov r0, r0, lsl #0x10
    add r1, r4, r6, lsl #0x2
    str r3, [r1, #0x8]
    cmp r2, r0, asr #0x10
    add r5, r5, #0x3
    mov r1, r0, asr #0x10
    bgt L_0208815c
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02088194:
    add sp, sp, #0xc
    str r2, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_020881a0:
    ldr r0, =data_020e3b24
    add sp, sp, #0xc
    ldr r0, [r0, #0x0]
    str r0, [r4, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_020881b4:
    mov r0, #0x0
    swpb r0, r0, [r4]
    add r1, r4, #0x1
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_020881cc:
    ldr r0, =data_020e3b24
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
L_020881dc:
    mov r0, r2, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x6a
    mov r2, #0xc
    bl func_020414ac
    mov r5, r0
    ldr r1, [r5, #0x0]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x4]
    ldr r1, [r5, #0x8]
    ldr r0, =0x45800000
    bl func_0200a4bc
    bl func_0200a3b8
    str r0, [r4, #0x8]
    mov r0, r5
    bl func_02041da8
L_02088238:
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
