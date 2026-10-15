#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void DC_FlushRange();
extern void func_0200eb98();
extern void FS_SeekFile();
extern void FS_ReadFile();
extern void func_02041d5c();
extern void func_02041da8();
extern char data_020cf9ac[];
extern char data_020cf9c8[];
extern char data_020cf9cc[];
extern char data_020cf9e4[];
// clang-format off
asm void func_0204113c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    add r4, sp, #0x0
    mov r5, r0
    ands r0, r4, #0x7
    rsbne r0, r0, #0x8
    addne r4, r4, r0
    add r0, r5, #0x2
    mov r1, r0, lsl #0x3
    ldr r0, =data_020cf9e4
    add r1, r1, #0x4
    mov r2, #0x0
    bl FS_SeekFile
    cmp r0, #0x0
    bne L_0204117c
    bl func_0200eb98
L_0204117c:
    mov r0, r4
    mov r1, #0x8
    bl DC_FlushRange
    ldr r0, =data_020cf9e4
    mov r1, r4
    mov r2, #0x8
    bl FS_ReadFile
    cmp r0, #0x8
    beq L_020411a4
    bl func_0200eb98
L_020411a4:
    mvn r0, #0x1
    cmp r5, r0
    bne L_02041200
    ldr r0, =data_020cf9ac
    ldrsb r0, [r0, #0x10]
    cmp r0, #0x0
    bne L_020411d8
    ldr r0, [r4, #0x4]
    mov r1, #0x8
    mov r0, r0, lsl #0x2
    bl func_02041d5c
    ldr r1, =data_020cf9ac
    str r0, [r1, #0x4]
L_020411d8:
    ldr r0, [r4, #0x4]
    mov r1, #0x8
    mov r0, r0, lsl #0x2
    bl func_02041d5c
    ldr r2, =data_020cf9ac
    ldr r1, =data_020cf9c8
    str r0, [r2, #0x8]
    ldr r0, [r4, #0x4]
    str r0, [r1, #0x0]
    b L_02041224
L_02041200:
    ldr r0, [r4, #0x4]
    mov r1, #0x8
    mov r0, r0, lsl #0x3
    bl func_02041d5c
    ldr r2, =data_020cf9ac
    ldr r1, =data_020cf9cc
    str r0, [r2, #0x0]
    ldr r0, [r4, #0x4]
    str r0, [r1, #0x0]
L_02041224:
    ldr r1, [r4, #0x4]
    mvn r0, #0x1
    cmp r5, r0
    mov r7, r1, lsl #0x3
    ldr r6, [r4, #0x0]
    bne L_020412e8
    mov r0, r7
    mov r1, #0x8
    bl func_02041d5c
    mov r5, r0
    ldr r0, =data_020cf9e4
    mov r1, r6
    mov r2, #0x0
    bl FS_SeekFile
    mov r0, r5
    mov r1, r7
    bl DC_FlushRange
    ldr r0, =data_020cf9e4
    mov r1, r5
    mov r2, r7
    bl FS_ReadFile
    ldr r0, =data_020cf9ac
    ldrsb r1, [r0, #0x10]
    cmp r1, #0x0
    bne L_020412b0
    ldr r3, [r4, #0x4]
    mov r1, r5
    cmp r3, #0x0
    ldr r2, [r0, #0x4]
    ble L_020412b0
L_0204129c:
    ldr r0, [r1], #0x8
    sub r3, r3, #0x1
    cmp r3, #0x0
    str r0, [r2], #0x4
    bgt L_0204129c
L_020412b0:
    ldr r3, [r4, #0x4]
    ldr r0, =data_020cf9ac
    cmp r3, #0x0
    add r2, r5, #0x4
    ldr r1, [r0, #0x8]
    ble L_020412dc
L_020412c8:
    ldr r0, [r2], #0x8
    sub r3, r3, #0x1
    cmp r3, #0x0
    str r0, [r1], #0x4
    bgt L_020412c8
L_020412dc:
    mov r0, r5
    bl func_02041da8
    b L_0204131c
L_020412e8:
    ldr r0, =data_020cf9e4
    mov r1, r6
    mov r2, #0x0
    bl FS_SeekFile
    ldr r0, =data_020cf9ac
    mov r1, r7
    ldr r0, [r0, #0x0]
    bl DC_FlushRange
    ldr r1, =data_020cf9ac
    ldr r0, =data_020cf9e4
    ldr r1, [r1, #0x0]
    mov r2, r7
    bl FS_ReadFile
L_0204131c:
    ldr r0, =data_020cf9ac
    mov r2, #0x1
    add r1, r0, #0x10
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
