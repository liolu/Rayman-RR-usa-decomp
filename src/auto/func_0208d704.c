#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202dc18();
extern void func_02066460();
// clang-format off
asm void func_0208d704(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x30
    mov r7, r0
    ldr ip, [r7, #0xc]
    mov r4, r2
    ldr r0, [r7, #0x8]
    add r2, sp, #0x24
    add r3, sp, #0x18
    mov r5, r1
    ldr r6, [ip, #0x68]
    bl func_02066460
    ldr r0, [r7, #0xc]
    ldrb r1, [r0, #0x78]
    cmp r1, #0xff
    beq L_0208d76c
    ldr r0, [r6, #0x4]
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x9c]
    cmp r2, #0x0
    moveq r6, #0x0
    beq L_0208d76c
    mov r0, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mul r0, r1, r0
    ldr r6, [r2, r0]
L_0208d76c:
    ldr r0, [r6, #0x24]
    add r1, sp, #0xc
    add r3, sp, #0x0
    mov r2, r5
    bl func_0202dc18
    cmp r4, #0x0
    beq L_0208d7b4
    add r3, sp, #0x0
    mov r2, #0x6
L_0208d790:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208d790
L_0208d7b4:
    ldr r0, [r5, #0x0]
    rsb r0, r0, #0x0
    str r0, [r5, #0x0]
    ldr r0, [r5, #0x4]
    rsb r0, r0, #0x0
    str r0, [r5, #0x4]
    ldr r0, [r5, #0x8]
    rsb r0, r0, #0x0
    str r0, [r5, #0x8]
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
