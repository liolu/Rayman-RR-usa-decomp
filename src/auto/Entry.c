#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000930();
extern void func_02000944();
extern void func_020009f0();
extern void func_02000a6c();
extern void func_02000b58();
extern void func_0200b474();
extern void func_0200b53c();
extern char BuildInfo[];
extern char data_027e0000[];
extern char func_01ff8000[];
extern char main[];
// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
    bl func_02000a6c
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    sub sp, r0, #0x4
    tst sp, #0x4
    subeq sp, sp, #0x4
    ldr r1, =0x400
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #0x4
    mov r0, #0x0
    ldr r1, =data_027e0000
    mov r2, #0x4000
    bl func_02000930
    mov r0, #0x0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl func_02000930
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl func_02000930
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]
    bl func_02000944
    bl func_020009f0
    ldr r0, =BuildInfo
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x10]
    mov r3, r1
    mov r0, #0x0
L_020008a8:
    cmp r1, r2
    strlo r0, [r1], #0x4
    blo L_020008a8
    bic r1, r3, #0x1f
L_020008b8:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r1, c7, c5, 1
    mcr p15, 0, r1, c7, c14, 1
    add r1, r1, #0x20
    cmp r1, r2
    blt L_020008b8
    ldr r1, =0x27fff9c
    str r0, [r1, #0x0]
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =func_01ff8000
    str r0, [r1, #0x0]
    bl func_0200b474
    bl func_02000b58
    bl func_0200b53c
    ldr r1, =main
    ldr lr, =0xffff0000
    tst sp, #0x4
    subne sp, sp, #0x4
    bx r1
}
// clang-format on
