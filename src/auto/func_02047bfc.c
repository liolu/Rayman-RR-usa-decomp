#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _ll_udiv();
extern void OS_GetTick();
extern void func_02026944();
extern void func_0202c1a0();
extern void func_0202c334();
extern void func_02047c98();
extern void func_02058200();
extern char data_020bd560[];
extern char data_020d02ec[];
extern char data_020dbfd2[];
extern char data_020dc198[];
extern char data_020dc19c[];
// clang-format off
asm void func_02047bfc(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_020dc19c
    ldr r1, =data_020d02ec
    add r0, r0, #0x7b
    mov r2, #0x0
    str r2, [r1, #0x0]
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    ldr r0, =data_020dc198
    ldr r0, [r0, #0x0]
    bl func_02047c98
    ldr r2, =data_020bd560
    mov r1, #0x0
    mov r0, #0x6
    swpb r1, r1, [r2]
    bl func_02058200
    ldr r1, =data_020dbfd2
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_02026944
    bl OS_GetTick
    mov r3, #0x0
    mov ip, #0xfa00
    ldr r2, =0x82ea
    umull r4, lr, r0, ip
    mla lr, r0, r3, lr
    mla lr, r1, ip, lr
    mov r0, r4
    mov r1, lr
    bl _ll_udiv
    bl func_0202c1a0
    bl func_0202c334
    ldmfd sp!, {r4, pc}
}
// clang-format on
