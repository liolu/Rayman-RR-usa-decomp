#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c8a4();
extern void func_020661dc();
// clang-format off
asm void func_02089598(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldr r0, [r5, #0xc]
    ldrh r1, [r0, #0x72]
    tst r1, #0x1000
    beq L_020895f0
    ldr r0, [r5, #0x8]
    add r4, r5, #0xa0
    add r3, r0, #0x28
    mov r2, #0x6
L_020895c4:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020895c4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
L_020895f0:
    ldr r4, [r0, #0x68]
    cmp r4, #0x0
    bne L_02089614
    mov r0, #0x0
    str r0, [r5, #0xa0]
    str r0, [r5, #0xa4]
    add sp, sp, #0xc
    str r0, [r5, #0xa8]
    ldmfd sp!, {r4, r5, pc}
L_02089614:
    ldr r1, [r0, #0x6c]
    cmp r1, #0x0
    beq L_02089658
    add r4, r5, #0xa0
    add r3, r5, #0x50
    mov r2, #0x6
L_0208962c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208962c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
L_02089658:
    bl func_020661dc
    and r1, r0, #0xff
    cmp r1, #0xff
    beq L_02089694
    ldr r0, [r4, #0x4]
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x9c]
    cmp r2, #0x0
    moveq r4, #0x0
    beq L_02089694
    mov r0, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mul r0, r1, r0
    ldr r4, [r2, r0]
L_02089694:
    ldr r3, [r5, #0xc]
    add ip, sp, #0x0
    mov r2, #0x6
L_020896a0:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_020896a0
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ldreq r0, [sp, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    beq L_020896f0
    add r0, sp, #0x0
    ldr r1, [r4, #0x24]
    mov r2, r0
    bl func_0202c8a4
L_020896f0:
    ldr r1, [r5, #0x50]
    ldr r0, [sp, #0x0]
    add r0, r1, r0
    str r0, [r5, #0xa0]
    ldr r1, [r5, #0x54]
    ldr r0, [sp, #0x4]
    add r0, r1, r0
    str r0, [r5, #0xa4]
    ldr r1, [r5, #0x58]
    ldr r0, [sp, #0x8]
    add r0, r1, r0
    str r0, [r5, #0xa8]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
