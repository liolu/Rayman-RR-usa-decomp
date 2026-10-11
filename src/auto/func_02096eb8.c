#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cfc();
extern void func_02003d18();
extern void func_02003de0();
extern void func_02008998();
extern void func_02084450();
extern void func_02088a04();
extern char data_020c0424[];
extern char data_020c042c[];
extern char data_020de0d4[];
extern char data_020de0d8[];
extern char data_020de0d9[];
extern char data_020e4c10[];
// clang-format off
asm void func_02096eb8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    ldr r3, [r4, #-0x8]
    mov r6, r0
    sub r3, r3, #0x90
    mov r7, r2
    cmp r3, #0x3
    addls pc, pc, r3, lsl #0x2
    b L_020970e0
L_02096edc:
    b L_02097008
    b L_02096eec
    b L_02096f44
    b L_02097010
L_02096eec:
    bl func_02084450
    ldr r1, [r7, #0xc]
    mov r4, r0
    cmp r1, #0x8
    ldr r0, [r7, #0x0]
    ldr r1, =data_020de0d4
    moveq r0, r0, asr #0xc
    sub r2, r0, #0x1
    mov r0, #0xa
    mla r1, r2, r0, r1
    ldr r0, =data_020e4c10
    mov r2, #0x3
    bl func_02003de0
    ldr r2, =data_020e4c10
    mov r0, #0x0
    add r1, r2, #0x3
    swpb r0, r0, [r1]
    mov r1, #0x9
    str r2, [r7, #0x0]
    mov r0, r4
    str r1, [r7, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02096f44:
    bl func_02084450
    ldr r1, [r7, #0xc]
    mov r4, r0
    ldr r0, [r7, #0x0]
    cmp r1, #0x8
    moveq r0, r0, asr #0xc
    sub r1, r0, #0x1
    mov r0, #0xa
    mul r5, r1, r0
    ldr r1, =data_020de0d8
    ldr r0, =data_020e4c10
    add r1, r1, r5
    bl func_02003d18
    ldr r0, =data_020e4c10
    ldr r1, =data_020c0424
    bl func_02008998
    cmp r0, #0x0
    bne L_02096fc4
    ldr r6, =data_020c042c
    ldr r3, =data_020e4c10
    ldrb r0, [r6, #0x0]
    ldrb r5, [r6, #0x1]
    add r1, r3, #0x1
    add r2, r3, #0x2
    swpb r0, r0, [r3]
    add r3, r3, #0x3
    swpb r0, r5, [r1]
    ldrb r0, [r6, #0x2]
    ldrb r1, [r6, #0x3]
    swpb r0, r0, [r2]
    swpb r0, r1, [r3]
    b L_02096fe4
L_02096fc4:
    ldr r1, =data_020de0d9
    ldr r0, =data_020e4c10
    add r1, r1, r5
    bl func_02003d18
    ldr r0, =data_020e4c10
    mov r2, #0x0
    add r1, r0, #0x4
    swpb r0, r2, [r1]
L_02096fe4:
    ldr r2, =data_020e4c10
    mov r0, #0x0
    add r1, r2, #0x5
    swpb r0, r0, [r1]
    mov r1, #0x9
    str r2, [r7, #0x0]
    mov r0, r4
    str r1, [r7, #0xc]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02097008:
    bl func_02084450
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02097010:
    mov r5, #0x0
    bl func_02084450
    mov r8, r0
    mov r0, r7
    bl func_02088a04
    mov r4, r0
    mov r0, r6
    mov r1, r8
    mov r2, r7
    bl func_02084450
    ldrsb r1, [r4, #0x0]
    add r2, r5, #0x1
    ldr r3, [r7, #0x0]
    mov r2, r2, lsl #0x10
    mov r6, r0
    cmp r1, #0x2f
    mov r1, r3, lsl #0x10
    mov r5, r2, asr #0x10
    bne L_0209708c
L_0209705c:
    ldrsb r2, [r4, r5]
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    cmp r2, #0x3a
    bne L_0209705c
    ldrsb r2, [r4, r5]
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    cmp r2, #0x2f
    mov r5, r0, asr #0x10
    beq L_0209705c
L_0209708c:
    sub r0, r5, #0x1
    add r0, r0, r1, asr #0x10
    mov r0, r0, lsl #0x10
    movs r5, r0, asr #0x10
    bmi L_020970c8
    mov r0, r4
    bl func_02003cfc
    mov r0, r0, lsl #0x10
    cmp r5, r0, asr #0x10
    bge L_020970c8
    ldrsb r1, [r4, r5]
    mov r0, #0x6
    str r1, [r7, #0x0]
    str r0, [r7, #0xc]
    b L_020970d8
L_020970c8:
    mov r0, #0x0
    str r0, [r7, #0x0]
    mov r0, #0x6
    str r0, [r7, #0xc]
L_020970d8:
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020970e0:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
