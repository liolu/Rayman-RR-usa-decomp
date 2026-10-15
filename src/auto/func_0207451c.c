#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _s32_div_f();
extern void func_020741b8();
extern char data_020bd568[];
extern char data_020de26c[];
extern char data_020de290[];
extern char data_020de294[];
extern char data_020de674[];
extern char data_020de676[];
// clang-format off
asm void func_0207451c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r0, =data_020bd568
    mov r7, #0x0
    ldrb r4, [r0, #0x0]
    mov r2, r7
    cmp r4, #0x0
    ble L_02074554
    ldr r3, =data_020de674
    mov r1, r7
L_02074540:
    add r2, r2, #0x1
    swpb r0, r1, [r3]
    cmp r2, r4
    add r3, r3, #0x1
    blt L_02074540
L_02074554:
    ldr r0, =data_020de26c
    ldr r1, =data_020bd568
    ldrsh r9, [r0, #0x2]
    ldrsh r0, [r1, #0x4]
    add r10, r9, #0x1
    cmp r10, r0
    movge r10, #0x0
    bge L_0207457c
    cmp r10, #0x0
    sublt r10, r0, #0x1
L_0207457c:
    cmp r9, r0
    movge r9, #0x0
    bge L_02074590
    cmp r9, #0x0
    sublt r9, r0, #0x1
L_02074590:
    ldr r6, =data_020de290
    ldr r4, =data_020bd568
    mov r5, #0x0
L_0207459c:
    add r1, r10, r10, lsl #0x2
    ldrb r0, [r6, r1]
    add r8, r6, r1
    tst r0, #0x2
    beq L_020745c0
    ldrb r0, [r8, #0x2]
    bl func_020741b8
    add r1, r8, #0x3
    swpb r0, r0, [r1]
L_020745c0:
    cmp r10, r9
    beq L_020745dc
    ldrsh r0, [r4, #0x4]
    add r10, r10, #0x1
    cmp r10, r0
    movge r10, r5
    b L_0207459c
L_020745dc:
    ldr r0, =data_020de26c
    ldr r1, =data_020bd568
    ldrsh r5, [r0, #0x2]
    ldrsh r1, [r1, #0x4]
    mov r3, #0x0
    add r6, r5, #0x1
    cmp r6, r1
    mov r8, r5
    movge r6, r3
    bge L_0207460c
    cmp r6, #0x0
    sublt r6, r1, #0x1
L_0207460c:
    cmp r5, r1
    movge r8, #0x0
    bge L_02074620
    cmp r5, #0x0
    sublt r8, r1, #0x1
L_02074620:
    ldr r0, =data_020bd568
    sub r4, r1, #0x1
    ldrsh r1, [r0, #0x2]
    ldr r0, =data_020de674
    ldr r2, =data_020de290
L_02074634:
    add r10, r8, r8, lsl #0x2
    ldrb r9, [r2, r10]
    add r10, r2, r10
    tst r9, #0x2
    beq L_0207465c
    ldrb r10, [r10, #0x3]
    ldrb r9, [r0, r10]
    add r10, r0, r10
    add r9, r9, #0x1
    swpb r9, r9, [r10]
L_0207465c:
    add r3, r3, #0x1
    cmp r3, r1
    bge L_0207467c
    cmp r8, r6
    beq L_0207467c
    subs r8, r8, #0x1
    movmi r8, r4
    b L_02074634
L_0207467c:
    ldr r0, =data_020bd568
    mov r4, #0x2
    ldrb r3, [r0, #0x0]
    cmp r3, #0x2
    ble L_020746a8
    ldr r2, =data_020de676
L_02074694:
    ldrb r0, [r2], #0x1
    add r4, r4, #0x1
    cmp r4, r3
    add r7, r7, r0
    blt L_02074694
L_020746a8:
    cmp r7, #0x3
    ldrle r1, =data_020de26c
    movle r0, #0x0
    ble L_020746c4
    mov r0, r7, lsl #0x4
    bl _s32_div_f
    ldr r1, =data_020de26c
L_020746c4:
    swpb r0, r0, [r1]
    ldr r1, =data_020de294
    ldr r0, =data_020de26c
    ldrb r2, [r0, #0x0]
    add r0, r5, r5, lsl #0x2
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
