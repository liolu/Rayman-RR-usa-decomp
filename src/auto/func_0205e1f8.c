#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02026844();
extern void func_0202b884();
extern void func_02058200();
extern void func_0205d0cc();
extern void func_0205d0d4();
extern char data_020dc19c[];
extern char data_020dc3e4[];
extern char data_020dc448[];
extern char data_020dcee8[];
// clang-format off
asm void func_0205e1f8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_0205d0d4
    bl func_0205d0cc
    ldr r1, =data_020dc19c
    mov r2, #0x0
    add r1, r1, #0x7f
    add r1, r1, #0xc00
    mov r4, r0
    cmp r6, #0x0
    swpb r0, r2, [r1]
    cmpne r4, #0x0
    beq L_0205e290
    ldr r0, [r4, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r0
    ldr r0, =data_020dc3e4
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r4, #0x4]
    ldr r4, [r6, #0x24]
    ldr r0, [r0, #0x0]
    mov r1, #0x32
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r4
    mov r2, #0x64
    bl func_02001588
    ldr r0, =data_020dc19c
    mov r2, #0x1
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    b L_0205e2d0
L_0205e290:
    cmp r4, #0x0
    beq L_0205e2d0
    ldr r0, [r4, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r0
    ldr r0, =data_020dc3e4
    mov r2, #0x64
    bl func_02001588
    ldr r0, =data_020dc19c
    mov r2, #0x1
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
L_0205e2d0:
    cmp r5, #0x0
    ldrne r0, =data_020dc19c
    ldrne r0, [r0, #0x23c]
    cmpne r0, #0x0
    beq L_0205e34c
    ldr r0, [r0, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r0
    ldr r0, =data_020dc448
    mov r2, #0x64
    bl func_02001588
    ldr r0, =data_020dc19c
    ldr r4, [r5, #0x24]
    ldr r0, [r0, #0x23c]
    mov r1, #0x32
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r4
    mov r2, #0x64
    bl func_02001588
    ldr r0, =data_020dc19c
    mov r2, #0x1
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    b L_0205e394
L_0205e34c:
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x23c]
    cmp r0, #0x0
    beq L_0205e394
    ldr r0, [r0, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    mov r1, r0
    ldr r0, =data_020dc448
    mov r2, #0x64
    bl func_02001588
    ldr r0, =data_020dc19c
    mov r2, #0x1
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
L_0205e394:
    ldr r0, =data_020dcee8
    ldr r0, [r0, #0x0]
    bl func_02026844
    mov r0, #0x8
    bl func_02058200
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
