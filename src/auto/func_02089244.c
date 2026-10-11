#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c8a4();
extern void func_0202e1e0();
extern void func_020661dc();
extern void func_020667a8();
extern char data_020dd7a4[];
// clang-format off
asm void func_02089244(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    movs r7, r1
    mov r8, r0
    mov r6, r2
    mov r5, r3
    bne L_02089284
    mov r0, #0x0
    str r0, [r6, #0x0]
    str r0, [r6, #0x4]
    str r0, [r6, #0x8]
    str r0, [r5, #0x0]
    str r0, [r5, #0x4]
    add sp, sp, #0xc
    str r0, [r5, #0x8]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
L_02089284:
    ldr r0, [r8, #0xc]
    bl func_020661dc
    and r4, r0, #0xff
    cmp r4, #0xff
    beq L_020892c4
    ldr r0, [r7, #0x4]
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x9c]
    cmp r2, #0x0
    moveq r7, #0x0
    beq L_020892c4
    mov r0, r4, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mul r0, r1, r0
    ldr r7, [r2, r0]
L_020892c4:
    ldr r0, [r7, #0x24]
    mov r1, r5
    bl func_0202e1e0
    ldr r0, [r8, #0x8]
    ldrb r1, [r0, #0x74]
    tst r1, #0x2
    bne L_0208930c
    ldr r1, [r8, #0xc]
    ldrh r1, [r1, #0x72]
    tst r1, #0x2
    bne L_0208930c
    cmp r4, #0xff
    ldreq r1, [r7, #0x4]
    ldreq r1, [r1, #0x8]
    cmpeq r1, #0x0
    beq L_0208930c
    cmp r4, #0xff
    beq L_02089340
L_0208930c:
    mov r4, r5
    mov r3, r6
    mov r2, #0x6
L_02089318:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02089318
    b L_02089350
L_02089340:
    ldr r1, =data_020dd7a4
    mov r2, r6
    ldr r1, [r1, #0x18]
    bl func_020667a8
L_02089350:
    ldr r0, [r8, #0xc]
    add r4, sp, #0x0
    add r3, r0, #0xc
    mov r2, #0x6
L_02089360:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_02089360
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ldreq r0, [sp, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x8]
    cmpeq r0, #0x0
    beq L_020893b0
    add r0, sp, #0x0
    ldr r1, [r7, #0x24]
    mov r2, r0
    bl func_0202c8a4
L_020893b0:
    ldr r1, [r6, #0x0]
    ldr r0, [sp, #0x0]
    add r0, r1, r0
    str r0, [r6, #0x0]
    ldr r1, [r6, #0x4]
    ldr r0, [sp, #0x4]
    add r0, r1, r0
    str r0, [r6, #0x4]
    ldr r1, [r6, #0x8]
    ldr r0, [sp, #0x8]
    add r0, r1, r0
    str r0, [r6, #0x8]
    ldr r1, [r5, #0x0]
    ldr r0, [sp, #0x0]
    add r0, r1, r0
    str r0, [r5, #0x0]
    ldr r1, [r5, #0x4]
    ldr r0, [sp, #0x4]
    add r0, r1, r0
    str r0, [r5, #0x4]
    ldr r1, [r5, #0x8]
    ldr r0, [sp, #0x8]
    add r0, r1, r0
    str r0, [r5, #0x8]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
