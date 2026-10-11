#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02047a80();
extern void func_02058200();
extern void func_02058420();
extern void func_020a2e20();
extern char data_020dc19c[];
// clang-format off
asm void func_020581c8(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020dc19c
    mov r2, #0x1
    add r0, r0, #0x7b
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    bl func_020a2e20
    mov r0, #0x0
    bl func_02047a80
    bl func_02058420
    mov r0, #0x6
    bl func_02058200
    ldmfd sp!, {r3, pc}
}
// clang-format on
