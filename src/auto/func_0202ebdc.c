#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202ebdc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r4, #0x0
    mov r5, r4
    str r5, [sp, #0x4]
    mov r8, r4
    str r8, [r0, #0x0]
    mov r10, r4
    str r1, [sp, #0x0]
    mov r9, r2
    str r4, [sp, #0x10]
    str r4, [sp, #0xc]
    mov r7, r4
    mov r11, r4
    mov r6, r4
    add r8, r0, #0x4
    add r1, r1, #0x4
    add r2, r2, #0x4
    str r10, [sp, #0x8]
L_0202ec28:
    ldr ip, [sp, #0x0]
    ldrb r10, [ip], #0x1
    str ip, [sp, #0x0]
    cmp r10, #0x41
    beq L_0202eecc
    cmp r10, #0x27
    bgt L_0202ec70
    subs ip, r10, #0x20
    addpl pc, pc, ip, lsl #0x2
    b L_0202ee7c
    b L_0202eca8
    b L_0202ecc0
    b L_0202ec90
    b L_0202ecd8
    b L_0202ee7c
    b L_0202ecd8
    b L_0202ecd8
    b L_0202ecd8
L_0202ec70:
    cmp r10, #0x40
    bne L_0202ee7c
    mov r10, #0x40
    swpb r10, r10, [r0]
    add r0, r0, #0x1
    ldr r10, [r1], #0x4
    str r10, [r8], #0x4
    b L_0202ee7c
L_0202ec90:
    mov r10, #0x22
    swpb r10, r10, [r0]
    add r0, r0, #0x1
    ldr r10, [r1], #0x4
    str r10, [r8], #0x4
    b L_0202ee7c
L_0202eca8:
    mov r10, #0x20
    swpb r10, r10, [r0]
    add r0, r0, #0x1
    ldr r10, [r1], #0x4
    str r10, [r8], #0x4
    b L_0202ee7c
L_0202ecc0:
    mov r10, #0x21
    swpb r10, r10, [r0]
    add r0, r0, #0x1
    ldr r10, [r1], #0x4
    str r10, [r8], #0x4
    b L_0202ee7c
L_0202ecd8:
    ldrb lr, [r9], #0x1
    cmp lr, #0x41
    beq L_0202ed94
    cmp lr, #0x27
    bgt L_0202ed18
    subs ip, lr, #0x20
    addpl pc, pc, ip, lsl #0x2
    b L_0202ed78
    b L_0202ed20
    b L_0202ed20
    b L_0202ed20
    b L_0202ed64
    b L_0202ed78
    b L_0202ed50
    b L_0202ed3c
    b L_0202ed28
L_0202ed18:
    cmp lr, #0x40
    bne L_0202ed78
L_0202ed20:
    add r2, r2, #0x4
    b L_0202ed78
L_0202ed28:
    ldrsh r6, [r2, #0x0]
    ldrsh r7, [r2, #0x2]
    mov lr, #0x23
    add r2, r2, #0x4
    b L_0202ed78
L_0202ed3c:
    ldrsh r5, [r2, #0x0]
    ldrsh r7, [r2, #0x2]
    mov lr, #0x23
    add r2, r2, #0x4
    b L_0202ed78
L_0202ed50:
    ldrsh r5, [r2, #0x0]
    ldrsh r6, [r2, #0x2]
    mov lr, #0x23
    add r2, r2, #0x4
    b L_0202ed78
L_0202ed64:
    ldrsh r5, [r2, #0x0]
    ldrsh r6, [r2, #0x2]
    ldrsh r7, [r2, #0x4]
    mov lr, #0x23
    add r2, r2, #0x8
L_0202ed78:
    add r4, r4, #0x1
    cmp r4, #0x4
    moveq r9, r2
    moveq r4, #0x0
    addeq r2, r2, #0x4
    cmp lr, #0x23
    bne L_0202ecd8
L_0202ed94:
    cmp lr, #0x23
    addne sp, sp, #0x14
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r10, r10, #0x23
    cmp r10, #0x4
    addls pc, pc, r10, lsl #0x2
    b L_0202ee20
L_0202edb4:
    b L_0202ee08
    b L_0202ee20
    b L_0202edf0
    b L_0202eddc
    b L_0202edc8
L_0202edc8:
    ldrsh r10, [r1, #0x0]
    str r10, [sp, #0x4]
    ldrsh r11, [r1, #0x2]
    add r1, r1, #0x4
    b L_0202ee20
L_0202eddc:
    ldrsh r10, [r1, #0x0]
    str r10, [sp, #0x8]
    ldrsh r11, [r1, #0x2]
    add r1, r1, #0x4
    b L_0202ee20
L_0202edf0:
    ldrsh r10, [r1, #0x0]
    str r10, [sp, #0x8]
    ldrsh r10, [r1, #0x2]
    add r1, r1, #0x4
    str r10, [sp, #0x4]
    b L_0202ee20
L_0202ee08:
    ldrsh r10, [r1, #0x0]
    str r10, [sp, #0x8]
    ldrsh r10, [r1, #0x2]
    str r10, [sp, #0x4]
    ldrsh r11, [r1, #0x4]
    add r1, r1, #0x8
L_0202ee20:
    mov r10, #0x23
    swpb r10, r10, [r0]
    add r0, r0, #0x1
    ldr r10, [sp, #0x8]
    sub r10, r5, r10
    mul r10, r3, r10
    mov ip, r10, lsl #0x4
    ldr r10, [sp, #0x8]
    add r10, r10, ip, asr #0x10
    strh r10, [r8, #0x0]
    ldr r10, [sp, #0x4]
    sub r10, r6, r10
    mul r10, r3, r10
    mov ip, r10, lsl #0x4
    ldr r10, [sp, #0x4]
    add r10, r10, ip, asr #0x10
    strh r10, [r8, #0x2]
    sub r10, r7, r11
    mul r10, r3, r10
    mov r10, r10, lsl #0x4
    add r10, r11, r10, asr #0x10
    strh r10, [r8, #0x4]
    add r8, r8, #0x8
L_0202ee7c:
    ldr r10, [sp, #0xc]
    add r10, r10, #0x1
    str r10, [sp, #0xc]
    cmp r10, #0x4
    bne L_0202eea0
    mov r10, #0x0
    str r1, [sp, #0x0]
    str r10, [sp, #0xc]
    add r1, r1, #0x4
L_0202eea0:
    ldr r10, [sp, #0x10]
    add r10, r10, #0x1
    str r10, [sp, #0x10]
    cmp r10, #0x4
    bne L_0202ec28
    mov r0, #0x0
    str r0, [sp, #0x10]
    ldr r10, [sp, #0x10]
    mov r0, r8
    str r10, [r8], #0x4
    b L_0202ec28
L_0202eecc:
    mov r1, #0x41
    swpb r1, r1, [r0]
    mov r0, r8
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
