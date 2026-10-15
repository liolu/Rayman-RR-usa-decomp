#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern void func_0204757c();
extern void func_020475dc();
extern void func_02072ff0();
extern char data_020de0d3[];
extern char data_020de0d4[];
extern char data_020de0f7[];
// clang-format off
asm void func_02072ec0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl func_02072ff0
    cmp r0, #0x0
    beq L_02072f40
    sub r5, r4, #0x1
    mov r0, r5
    bl func_0204757c
    cmp r0, #0x0
    beq L_02072f40
    mov r0, r5
    bl func_020475dc
    cmp r0, #0x0
    beq L_02072f40
    ldr r2, =data_020de0d4
    mov r1, r5
    mov r0, #0xa
    mla r0, r1, r0, r2
    ldr r1, =data_020de0f7
    mvn r3, #0x0
    add ip, r1, r4
    swpb r3, r3, [ip]
    mov r1, #0x20
    mov r2, #0x9
    bl memset
    ldr r1, =data_020de0d3
    mov r0, #0xa
    mla r1, r4, r0, r1
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
L_02072f40:
    mov r0, #0x0
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
