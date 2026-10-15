#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void DC_InvalidateRange();
extern char data_020bd568[];
extern char data_020de26c[];
extern char data_020de290[];
extern char data_020de650[];
extern char data_020de654[];
// clang-format off
asm void func_02074078(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r2, =data_020de654
    mov r4, r0
    ldr r2, [r2, #0x0]
    cmp r4, r2
    ldmlofd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r2, #0x400
    cmp r4, r0
    ldmhsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0207418c
L_020740a8:
    b L_020740c0
    b L_0207418c
    b L_020740c0
    b L_0207418c
    b L_0207418c
    b L_0207418c
L_020740c0:
    ldr r0, =data_020de650
    mov r1, #0x20
    ldr r10, [r0, #0x0]
    cmp r10, r2
    movlo r10, r2
    bic r0, r10, #0x1f
    bl DC_InvalidateRange
    ldr r7, =data_020de26c
    cmp r10, r4
    ldrsh r0, [r7, #0x2]
    strh r0, [r7, #0x4]
    beq L_0207416c
    mov r11, #0x0
    ldr r9, =data_020de290
    ldr r5, =data_020de654
    ldr r6, =data_020bd568
    mov r8, r11
L_02074104:
    ldrsh r1, [r7, #0x2]
    ldrsh r0, [r6, #0x4]
    add r1, r1, #0x1
    strh r1, [r7, #0x2]
    ldrsh r1, [r7, #0x2]
    cmp r1, r0
    movge r1, r11
    strh r1, [r7, #0x2]
    ldrsh r1, [r7, #0x2]
    ldrb r0, [r10], #0x1
    add r1, r1, r1, lsl #0x2
    add r2, r9, r1
    add r1, r2, #0x1
    swpb r0, r0, [r1]
    swpb r0, r8, [r2]
    ldr r1, [r5, #0x0]
    add r0, r1, #0x400
    cmp r10, r0
    movhs r10, r1
    tst r10, #0x1f
    bne L_02074164
    mov r0, r10
    mov r1, #0x20
    bl DC_InvalidateRange
L_02074164:
    cmp r10, r4
    bne L_02074104
L_0207416c:
    ldr r0, =data_020de26c
    ldr r2, =data_020de290
    ldrsh r0, [r0, #0x2]
    add r1, r0, r0, lsl #0x2
    ldrb r0, [r2, r1]
    add r1, r2, r1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_0207418c:
    ldr r0, =data_020de650
    str r4, [r0, #0x0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
