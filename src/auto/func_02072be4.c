#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void memset();
extern char data_020de0b4[];
extern char data_020de0d4[];
// clang-format off
asm void func_02072be4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, #0x0
    ldr r8, =data_020de0d4
    ldr r6, =data_020de0b4
    mov r11, #0x20
    mov r7, r9
    mvn r5, #0x0
    mov r4, #0xa
L_02072c04:
    mul r10, r9, r4
    mov r1, r11
    mov r2, #0x9
    add r0, r8, r10
    bl memset
    add r0, r6, r10
    add r1, r0, #0x29
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    add r2, r6, r9
    mov r9, r0, lsr #0x10
    swpb r0, r7, [r1]
    add r1, r2, #0x44
    cmp r9, #0x3
    swpb r0, r5, [r1]
    blo L_02072c04
    ldr r2, =data_020de0b4
    mov r3, #0x7f
    add r1, r2, #0x47
    swpb r0, r7, [r1]
    str r7, [r2, #0x40]
    str r3, [r2, #0x50]
    str r3, [r2, #0x54]
    str r3, [r2, #0x58]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
