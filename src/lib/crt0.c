#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000930();
extern void MIi_UncompressBackward();
extern void do_autoload();
extern void init_cp15();
extern void func_02000b58();
extern void func_0200b474();
extern void __call_static_initializers();
extern char BuildInfo[];
extern char SDK_AUTOLOAD_DTCM_START[];
extern char OS_IrqHandler[];
extern char main[];
// clang-format on

// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
    bl init_cp15
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =SDK_AUTOLOAD_DTCM_START
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =SDK_AUTOLOAD_DTCM_START
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
    ldr r1, =SDK_AUTOLOAD_DTCM_START
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
    bl MIi_UncompressBackward
    bl do_autoload
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
    ldr r1, =SDK_AUTOLOAD_DTCM_START
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =OS_IrqHandler
    str r0, [r1, #0x0]
    bl func_0200b474
    bl func_02000b58
    bl __call_static_initializers
    ldr r1, =main
    ldr lr, =0xffff0000
    tst sp, #0x4
    subne sp, sp, #0x4
    bx r1
}
