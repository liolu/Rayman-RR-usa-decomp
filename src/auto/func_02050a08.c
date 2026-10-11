#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d6fc();
extern void func_020162f0();
extern void func_02017a68();
extern void func_0204d0b8();
extern void func_0204d4a0();
extern void func_0204d558();
extern void func_0204f5ec();
extern void func_02051858();
extern char data_020dba10[];
extern char data_020dba38[];
extern char data_020dba39[];
extern char data_020dba54[];
extern char data_020dba58[];
extern char data_020dba5c[];
extern char data_020dba60[];
extern char data_020dba6c[];
extern char data_020e4f30[];
extern char data_020e4f34[];
// clang-format off
asm void func_02050a08(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    ldr r5, [sp, #0x78]
    mov r6, r3
    ldr r4, [sp, #0x7c]
    add r9, sp, #0x3c
    mov r8, r1
    mov r7, r2
    mov r3, #0x6
L_02050a2c:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r9]
    add r9, r9, #0x1
    swpb r1, r2, [r9]
    add r9, r9, #0x1
    bne L_02050a2c
    ldr r0, [sp, #0x44]
    ldr r2, [sp, #0x70]
    add r3, r0, #0x400
    add r0, sp, #0x3c
    add r1, sp, #0x30
    str r3, [sp, #0x44]
    bl func_0204f5ec
    ldr r0, =data_020dba6c
    ldr lr, [sp, #0x74]
    ldrsb ip, [r0, #0x3]
    ldr r1, =data_020dba54
    ldr r3, =data_020e4f34
    mov r10, #0x0
    str lr, [r1, #0x0]
    swpb r1, r10, [r3]
    ldr r2, =data_020dba38
    mov r9, #0x1
    swpb r1, r9, [r2]
    ldr r0, =data_020dba39
    ldr r11, =data_020dba58
    swpb r1, r9, [r0]
    cmp ip, #0x0
    swpb r0, r10, [r11]
    beq L_02050ac0
    bl func_02051858
    ldr r0, =data_020e4f30
    mov r1, r10
    str r1, [r0, #0x0]
L_02050ac0:
    ldr r0, =data_020e4f30
    ldr r0, [r0, #0x0]
    cmp r0, r8
    bne L_02050adc
    ldr r0, [r8, #0x1c]
    cmp r0, #0x0
    bne L_02050b1c
L_02050adc:
    mov r9, #0x1
    str r9, [sp, #0x0]
    mov r2, #0x0
    str r9, [sp, #0x4]
    ldr r1, [sp, #0x70]
    mov r0, r8
    mov r3, r2
    str r9, [sp, #0x8]
    bl func_0204d0b8
    ldr r0, =data_020dba6c
    ldr r2, =data_020e4f30
    add r1, r0, #0x3
    mov r0, #0x0
    str r8, [r2, #0x0]
    swpb r0, r0, [r1]
    b L_02050b24
L_02050b1c:
    mov r0, #0x1
    bl func_0204d4a0
L_02050b24:
    ldr r1, [r5, #0x0]
    add r0, sp, #0xc
    str r1, [sp, #0xc]
    ldr r1, [r5, #0x4]
    mov r3, #0x0
    str r1, [sp, #0x10]
    ldr r1, [r5, #0x8]
    mov r2, #0x1000
    str r1, [sp, #0x14]
    ldr r5, [r4, #0x0]
    mov r1, #0x24
    str r5, [sp, #0x18]
    ldr r5, [r4, #0x4]
    str r5, [sp, #0x1c]
    ldr r4, [r4, #0x8]
    str r4, [sp, #0x20]
    str r3, [sp, #0x24]
    str r3, [sp, #0x28]
    str r2, [sp, #0x2c]
    bl func_0200d6fc
    mov r0, #0x0
    bl func_02017a68
    add r0, sp, #0xc
    bl func_020162f0
    ldr r1, =0x400046c
    mov r0, #0x1000
    str r7, [r1, #0x0]
    str r6, [r1, #0x0]
    str r0, [r1, #0x0]
    mov r2, #0x0
    ldr r0, =data_020dba5c
    str r2, [sp, #0x0]
    ldr r0, [r0, #0x0]
    ldr r1, [sp, #0x70]
    mov r3, #0x1
    bl func_0204d558
    ldr r1, =data_020dba10
    mov r0, r0, lsl #0x18
    ldr r1, [r1, #0x0]
    orr r0, r0, #0x20c0
    mov r2, r1, asr #0x3
    cmp r2, #0x1
    movlt r2, #0x1
    cmp r2, #0x1f
    movgt r2, #0x1f
    orr r2, r0, r2, lsl #0x10
    ldr r1, =0x40004a4
    ldr r0, =data_020dba5c
    str r2, [r1, #0x0]
    ldr r3, [r0, #0x0]
    ldr r0, =data_020dba60
    ldrb r1, [r3, #0xd]
    ldr r5, [r0, #0x0]
    mov r2, #0x1000
    ldrb r0, [r3, #0xc]
    mov r4, r2, lsl r1
    tst r5, #0x1
    movne r4, r4, lsl #0x1
    mov r1, r2, lsl r0
    tst r5, #0x2
    movne r1, r1, lsl #0x1
    ldr r3, =0x4000500
    mov r0, #0x1
    sub r2, r1, #0x1
    ldr r1, =0x1000f000
    mov r2, r2, lsl #0x8
    mov r2, r2, asr #0x10
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    sub r2, r4, #0x1
    mov r4, r6, lsl #0x10
    mov r2, r2, lsl #0x8
    mov r2, r2, asr #0x10
    mov r2, r2, lsl #0x10
    mov r5, r2, lsr #0x10
    ldr r7, =0x40004
    str r0, [r3, #0x0]
    sub r2, r3, #0x78
    str r7, [r2, #0x0]
    rsb r0, r0, #0x8000
    str r0, [r3, #-0x80]
    sub r7, r3, #0x74
    str r1, [r7, #0x0]
    mov r0, #0x0
    str r0, [r7, #0x0]
    orr r4, r4, #0x4
    str r4, [r2, #0x0]
    sub r4, r1, #0x20000000
    str r4, [r7, #0x0]
    str r0, [r7, #0x0]
    orr r4, r5, r6, lsl #0x10
    str r4, [r2, #0x0]
    rsb r4, r1, #0x10000
    str r4, [r7, #0x0]
    str r0, [r7, #0x0]
    orr r4, r5, #0x40000
    str r4, [r2, #0x0]
    sub r1, r1, #0xe000
    str r1, [r7, #0x0]
    str r0, [r7, #0x0]
    ldr r4, =data_020dba6c
    str r0, [r3, #0x4]
    ldr r5, =data_020dba38
    ldr r3, =data_020dba39
    ldr r2, =data_020dba58
    ldr r6, [r4, #0x2c]
    swpb r1, r0, [r5]
    add r1, r6, #0x1
    swpb r0, r0, [r3]
    ldrb r0, [r2, #0x0]
    str r1, [r4, #0x2c]
    add sp, sp, #0x48
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
