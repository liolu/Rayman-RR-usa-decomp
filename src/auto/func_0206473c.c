#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c664();
extern void func_0202d964();
extern void func_0202e19c();
extern void func_020414ac();
extern void func_02041da8();
extern void func_0204aa98();
extern void func_0204ab18();
extern void func_020695c0();
// clang-format off
asm void func_0206473c(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    mov r5, r0
    bl func_020695c0
    mov r4, r0
    add r1, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x0]
    bl func_0202c664
    mov r1, r5
    mov r0, #0x46
    mov r2, #0x6
    bl func_020414ac
    mov r5, r0
    ldrh r0, [r5, #0x0]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_020647ac
    add r1, sp, #0x18
    add r2, sp, #0xc
    add r3, sp, #0x0
    bl func_0204ab18
    ldr r0, [r4, #0x0]
    add r1, sp, #0x18
    add r2, sp, #0xc
    add r3, sp, #0x0
    bl func_0202d964
L_020647ac:
    ldrh r0, [r5, #0x2]
    ldr r1, =0xffff
    cmp r0, r1
    beq L_020647d8
    bl func_0204aa98
    mov r6, r0
    ldr r0, [r4, #0x0]
    mov r1, r6
    bl func_0202e19c
    mov r0, r6
    bl func_02041da8
L_020647d8:
    ldrh r0, [r5, #0x4]
    add r1, r4, #0x4
    tst r0, #0x1
    movne r0, #0x1
    moveq r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02041da8
    mov r0, r4
    add sp, sp, #0x24
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
