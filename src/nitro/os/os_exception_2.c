#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char OSi_ExContext[];
// clang-format on
/* Uses instructions the compiler never generates: written in assembly. */
extern void OS_EnableProtectionUnit();
extern void OS_DisableProtectionUnit();
extern void r2();
extern char OSi_UserExceptionHandler[];
extern char OSi_UserExceptionHandlerArg[];

// clang-format off
asm void OSi_SetExContext(void) {
    ldr r1, =OSi_ExContext
    mrs r2, cpsr
    str r2, [r1, #0x74]
    str r0, [r1, #0x6c]
    ldr r0, [ip, #0x0]
    str r0, [r1, #0x4]
    ldr r0, [ip, #0x4]
    str r0, [r1, #0x8]
    ldr r0, [ip, #0x8]
    str r0, [r1, #0xc]
    ldr r0, [ip, #0xc]
    str r0, [r1, #0x10]
    ldr r2, [ip, #0x10]
    bic r2, r2, #0x1
    add r0, r1, #0x14
    stmia r0, {r4, r5, r6, r7, r8, r9, r10, r11}
    str ip, [r1, #0x70]
    ldr r0, [r2, #0x0]
    str r0, [r1, #0x64]
    ldr r3, [r2, #0x4]
    str r3, [r1, #0x0]
    ldr r0, [r2, #0x8]
    str r0, [r1, #0x34]
    ldr r0, [r2, #0xc]
    str r0, [r1, #0x40]
    mrs r0, cpsr
    orr r3, r3, #0x80
    bic r3, r3, #0x20
    msr cpsr_fsxc, r3
    str sp, [r1, #0x38]
    str lr, [r1, #0x3c]
    mrs r2, spsr
    str r2, [r1, #0x7c]
    msr cpsr_fsxc, r0
    bx lr
}

// clang-format off
asm void OSi_DisplayExContext(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =OSi_UserExceptionHandler
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl OS_EnableProtectionUnit
    ldr r1, =OSi_UserExceptionHandlerArg
    ldr r0, =OSi_UserExceptionHandler
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =OSi_ExContext
    blx r2
    bl OS_DisableProtectionUnit
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
