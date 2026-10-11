#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202b970();
extern void func_02072e44();
extern void func_02072e74();
extern void func_02072e7c();
extern void func_02072f54();
extern void func_02073004();
extern void func_02073080();
extern void func_0207309c();
extern void func_02084450();
extern char data_020de0b4[];
extern char data_020de0d4[];
// clang-format off
asm void func_0209aec0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r7, r1
    ldr r8, [r7, #-0x8]
    mov r6, r2
    sub r2, r8, #0x3a
    cmp r2, #0x5
    mov r4, #0x0
    addls pc, pc, r2, lsl #0x2
    b L_0209b01c
L_0209aee8:
    b L_0209af00
    b L_0209af00
    b L_0209af00
    b L_0209b004
    b L_0209b01c
    b L_0209b014
L_0209af00:
    add r2, sp, #0x0
    bl func_02084450
    mov r7, r0
    cmp r8, #0x3a
    ldr r5, [sp, #0x0]
    beq L_0209af2c
    cmp r8, #0x3b
    beq L_0209af5c
    cmp r8, #0x3c
    beq L_0209af8c
    b L_0209b01c
L_0209af2c:
    bl func_02072e74
    movs r4, r0
    beq L_0209b01c
    bl func_02072e44
    movs r4, r0
    beq L_0209b01c
    mov r0, r5
    bl func_02072f54
    ldr r1, =data_020de0b4
    mov r4, r0
    str r5, [r1, #0x40]
    b L_0209b01c
L_0209af5c:
    mov r0, r5
    bl func_02073004
    ldr r1, =data_020de0b4
    mov r4, r0
    str r5, [r1, #0x40]
    bl func_02072e7c
    cmp r0, #0x0
    cmpne r4, #0x0
    beq L_0209b01c
    mov r0, #0x4
    bl func_0202b970
    b L_0209b01c
L_0209af8c:
    mov r0, r5
    bl func_02073080
    ldr r2, =data_020de0d4
    sub r3, r5, #0x1
    mov r1, #0xa
    mla r2, r3, r1, r2
    mov r1, r4
    swpb r3, r1, [r2]
    add r4, r2, #0x1
    swpb r3, r1, [r4]
    add r4, r2, #0x2
    swpb r3, r1, [r4]
    add r4, r2, #0x3
    swpb r3, r1, [r4]
    add r4, r2, #0x4
    swpb r3, r1, [r4]
    add r4, r2, #0x5
    swpb r3, r1, [r4]
    add r4, r2, #0x6
    swpb r3, r1, [r4]
    add r4, r2, #0x7
    swpb r3, r1, [r4]
    mov r4, r0
    add r3, r2, #0x8
    swpb r2, r1, [r3]
    ldr r2, =data_020de0b4
    ldr r0, [r2, #0x40]
    cmp r5, r0
    streq r1, [r2, #0x40]
    b L_0209b01c
L_0209b004:
    ldr r0, =data_020de0b4
    ldr r0, [r0, #0x40]
    and r4, r0, #0xff
    b L_0209b01c
L_0209b014:
    bl func_0207309c
    mov r4, r0
L_0209b01c:
    str r4, [r6, #0x0]
    mov r1, #0x6
    mov r0, r7
    str r1, [r6, #0xc]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
