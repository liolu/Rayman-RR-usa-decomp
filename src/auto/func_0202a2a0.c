#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_0202a770();
extern void func_0202e618();
// clang-format off
asm void func_0202a2a0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    ldr r1, [r0, #0x8]
    ldr r0, [r0, #0x4]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    movs r0, r1
    addeq sp, sp, #0x30
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202a2c4:
    ldr r0, [sp, #0xc]
    ldr r0, [r0, #0x0]
    cmp r0, #0x400
    bne L_0202a504
    ldr r0, [sp, #0xc]
    mov r11, #0x0
    ldr r6, [r0, #0x4]
    ldrsh r0, [r6, #0x36]
    cmp r0, #0x0
    ble L_0202a504
    mov r9, r11
    add r4, sp, #0x24
L_0202a2f4:
    ldr r0, [sp, #0x10]
    ldr r1, [r0, #0x24]
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x10]
    cmp r1, #0x0
    ldr r0, [r0, #0x20]
    str r0, [sp, #0x14]
    ble L_0202a4e8
L_0202a318:
    ldr r0, [sp, #0x14]
    ldr r0, [r0, #0x4]
    ldr r5, [r0, #0x8]
    cmp r5, #0x0
    beq L_0202a4b8
L_0202a32c:
    ldr r0, [r5, #0x0]
    cmp r0, #0x400
    bne L_0202a4ac
    ldr r7, [r5, #0x4]
    mov r8, #0x0
    ldrsh r0, [r7, #0x36]
    cmp r0, #0x0
    ble L_0202a4ac
    mov r10, r8
L_0202a350:
    ldr r0, [r7, #0x0]
    ldr r3, [r6, #0x0]
    add r1, r0, r10
    ldr r2, [r0, r10]
    add r0, r9, r3
    ldr r3, [r9, r3]
    cmp r3, r2
    ldreq r3, [r0, #0x4]
    ldreq r2, [r1, #0x4]
    cmpeq r3, r2
    ldreq r2, [r0, #0x8]
    ldreq r0, [r1, #0x8]
    cmpeq r2, r0
    bne L_0202a490
    ldr r0, [r7, #0x4]
    ldr r3, [r6, #0x4]
    add r1, r0, r10
    ldr r2, [r0, r10]
    add r0, r9, r3
    ldr r3, [r9, r3]
    cmp r3, r2
    ldreq r3, [r0, #0x4]
    ldreq r2, [r1, #0x4]
    cmpeq r3, r2
    ldreq r2, [r0, #0x8]
    ldreq r0, [r1, #0x8]
    cmpeq r2, r0
    beq L_0202a490
    mov r0, r4
    mov r1, r11
    mov r2, r6
    bl func_0202a770
    add r0, sp, #0x18
    mov r1, r8
    mov r2, r7
    bl func_0202a770
    ldr r1, [sp, #0x24]
    ldr r0, [sp, #0x18]
    ldr r2, [sp, #0x28]
    adds r0, r1, r0
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x2c]
    add r2, r2, r0
    ldr r0, [sp, #0x20]
    str r2, [sp, #0x28]
    add r0, r1, r0
    cmpeq r2, #0x0
    str r0, [sp, #0x2c]
    cmpeq r0, #0x0
    beq L_0202a428
    mov r0, r4
    mov r1, r4
    bl func_01ff84a0
L_0202a428:
    ldr r0, [r6, #0x4]
    mov r1, r4
    add r2, r0, r9
    mov r0, #0x6
L_0202a438:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_0202a438
    ldr r0, [r7, #0x4]
    mov r1, r4
    add r2, r0, r10
    mov r0, #0x6
L_0202a46c:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_0202a46c
L_0202a490:
    add r10, r10, #0xc
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    ldrsh r1, [r7, #0x36]
    cmp r1, r0, asr #0x10
    bgt L_0202a350
L_0202a4ac:
    ldr r5, [r5, #0x14]
    cmp r5, #0x0
    bne L_0202a32c
L_0202a4b8:
    ldr r0, [sp, #0x8]
    add r0, r0, #0x1
    mov r1, r0, lsl #0x10
    ldr r0, [sp, #0x10]
    ldr r2, [r0, #0x24]
    mov r0, r1, asr #0x10
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x14]
    cmp r2, r1, asr #0x10
    add r0, r0, #0x8
    str r0, [sp, #0x14]
    bgt L_0202a318
L_0202a4e8:
    ldrsh r1, [r6, #0x36]
    add r0, r11, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    add r9, r9, #0xc
    mov r11, r0, asr #0x10
    bgt L_0202a2f4
L_0202a504:
    ldr r0, [sp, #0xc]
    ldr r0, [r0, #0x0]
    cmp r0, #0x8
    bne L_0202a754
    ldr r0, [sp, #0xc]
    ldr r0, [r0, #0x4]
    bl func_0202e618
    mov r7, r0
    ldrsh r0, [r7, #0x36]
    mov r11, #0x0
    cmp r0, #0x0
    ble L_0202a754
    mov r5, r11
    add r4, sp, #0x24
L_0202a53c:
    ldr r0, [sp, #0x10]
    ldr r1, [r0, #0x24]
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x10]
    cmp r1, #0x0
    ldr r0, [r0, #0x20]
    str r0, [sp, #0x4]
    ble L_0202a738
L_0202a560:
    ldr r0, [sp, #0x4]
    ldr r0, [r0, #0x4]
    ldr r8, [r0, #0x8]
    cmp r8, #0x0
    beq L_0202a708
L_0202a574:
    ldr r0, [r8, #0x0]
    cmp r0, #0x8
    bne L_0202a6fc
    ldr r0, [r8, #0x4]
    bl func_0202e618
    mov r9, r0
    ldrsh r0, [r9, #0x36]
    mov r10, #0x0
    cmp r0, #0x0
    ble L_0202a6fc
    mov r6, r10
L_0202a5a0:
    ldr r0, [r9, #0x0]
    ldr r3, [r7, #0x0]
    add r1, r0, r6
    ldr r2, [r0, r6]
    add r0, r5, r3
    ldr r3, [r5, r3]
    cmp r3, r2
    ldreq r3, [r0, #0x4]
    ldreq r2, [r1, #0x4]
    cmpeq r3, r2
    ldreq r2, [r0, #0x8]
    ldreq r0, [r1, #0x8]
    cmpeq r2, r0
    bne L_0202a6e0
    ldr r0, [r9, #0x4]
    ldr r3, [r7, #0x4]
    add r1, r0, r6
    ldr r2, [r0, r6]
    add r0, r5, r3
    ldr r3, [r5, r3]
    cmp r3, r2
    ldreq r3, [r0, #0x4]
    ldreq r2, [r1, #0x4]
    cmpeq r3, r2
    ldreq r2, [r0, #0x8]
    ldreq r0, [r1, #0x8]
    cmpeq r2, r0
    beq L_0202a6e0
    mov r0, r4
    mov r1, r11
    mov r2, r7
    bl func_0202a770
    add r0, sp, #0x18
    mov r1, r10
    mov r2, r9
    bl func_0202a770
    ldr r1, [sp, #0x24]
    ldr r0, [sp, #0x18]
    ldr r2, [sp, #0x28]
    adds r0, r1, r0
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x2c]
    add r2, r2, r0
    ldr r0, [sp, #0x20]
    str r2, [sp, #0x28]
    add r0, r1, r0
    cmpeq r2, #0x0
    str r0, [sp, #0x2c]
    cmpeq r0, #0x0
    beq L_0202a678
    mov r0, r4
    mov r1, r4
    bl func_01ff84a0
L_0202a678:
    ldr r0, [r7, #0x4]
    mov r1, r4
    add r2, r0, r5
    mov r0, #0x6
L_0202a688:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_0202a688
    ldr r0, [r9, #0x4]
    mov r1, r4
    add r2, r0, r6
    mov r0, #0x6
L_0202a6bc:
    ldrb r3, [r1, #0x0]
    ldrb ip, [r1, #0x1]
    add r1, r1, #0x2
    subs r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    bne L_0202a6bc
L_0202a6e0:
    add r6, r6, #0xc
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    ldrsh r1, [r9, #0x36]
    cmp r1, r0, asr #0x10
    bgt L_0202a5a0
L_0202a6fc:
    ldr r8, [r8, #0x14]
    cmp r8, #0x0
    bne L_0202a574
L_0202a708:
    ldr r0, [sp, #0x0]
    add r0, r0, #0x1
    mov r1, r0, lsl #0x10
    ldr r0, [sp, #0x10]
    ldr r2, [r0, #0x24]
    mov r0, r1, asr #0x10
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x4]
    cmp r2, r1, asr #0x10
    add r0, r0, #0x8
    str r0, [sp, #0x4]
    bgt L_0202a560
L_0202a738:
    ldrsh r1, [r7, #0x36]
    add r0, r11, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    add r5, r5, #0xc
    mov r11, r0, asr #0x10
    bgt L_0202a53c
L_0202a754:
    ldr r0, [sp, #0xc]
    ldr r0, [r0, #0x14]
    str r0, [sp, #0xc]
    cmp r0, #0x0
    bne L_0202a2c4
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
