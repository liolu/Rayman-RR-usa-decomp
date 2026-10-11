#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_DotProduct();
extern void func_01ff84a0();
extern void func_02030c40();
extern void func_02030c98();
// clang-format off
asm void func_0203e5e4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    mov r10, r0
    ldr r0, [r10, #0xc]
    mov r6, #0x0
    bic r0, r0, #0x40
    str r6, [sp, #0x0]
    movs r7, r3
    mov r9, r1
    mov r8, r2
    mov r11, r6
    str r0, [r10, #0xc]
    bne L_0203e69c
    mov r4, r6
    mov r5, r8
    b L_0203e67c
L_0203e624:
    ldrsh r0, [r5, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203e674
    mov r0, r10
    add r1, r5, #0x4
    bl func_02030c98
    cmp r0, #0x0
    beq L_0203e674
    ldrsh r0, [r5, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    movne r7, r5
    addeq sp, sp, #0x34
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203e674:
    add r4, r4, #0x1
    add r5, r5, #0x68
L_0203e67c:
    cmp r4, r9
    bge L_0203e68c
    cmp r7, #0x0
    beq L_0203e624
L_0203e68c:
    cmp r7, #0x0
    bne L_0203e6bc
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203e69c:
    ldrsh r0, [r7, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, r6
    tst r1, #0xff
    addeq sp, sp, #0x34
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203e6bc:
    ldr r0, [r7, #0x28]
    and r0, r0, #0x4
    cmp r0, #0x4
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    addne sp, sp, #0x34
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, sp, #0x28
    add r3, r7, #0x10
    mov r2, #0x6
L_0203e6e8:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203e6e8
    ldr r2, [r7, #0x48]
    ldr r1, [r7, #0x30]
    ldr r5, [sp, #0x2c]
    add r3, r2, r1
    str r3, [sp, #0x4]
    ldr r2, [r7, #0x4c]
    ldr r1, [r7, #0x34]
    ldr ip, [sp, #0x28]
    add r2, r2, r1
    str r2, [sp, #0x8]
    sub r2, r2, r5
    ldr r4, [r7, #0x50]
    ldr r1, [r7, #0x38]
    sub r3, r3, ip
    ldr r5, [sp, #0x30]
    add r1, r4, r1
    sub r4, r1, r5
    add r0, sp, #0x4
    mov r1, r0
    str r3, [sp, #0x4]
    str r2, [sp, #0x8]
    str r4, [sp, #0xc]
    bl func_01ff84a0
    cmp r9, #0x0
    mov r4, #0x0
    ble L_0203e9c4
    mvn r5, #0xf
L_0203e778:
    ldrsh r0, [r8, #0x2e]
    cmp r0, #0x63
    movne r0, #0x1
    moveq r0, #0x0
    tst r0, #0xff
    beq L_0203e9b4
    mov r0, r10
    add r1, r8, #0x4
    bl func_02030c98
    cmp r0, #0x0
    beq L_0203e844
    ldrsh r0, [r8, #0x2e]
    mov r1, #0x1
    cmp r0, #0x7
    cmpne r0, #0x8
    movne r1, #0x0
    tst r1, #0xff
    addeq sp, sp, #0x34
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x28]
    ldr r0, [r8, #0x10]
    ldr r3, [sp, #0x2c]
    subs r0, r1, r0
    str r0, [sp, #0x1c]
    ldr r1, [r8, #0x14]
    rsbmi r0, r0, #0x0
    sub r1, r3, r1
    str r1, [sp, #0x20]
    ldr r2, [sp, #0x30]
    ldr r1, [r8, #0x18]
    mov r3, #0x0
    sub r1, r2, r1
    str r1, [sp, #0x24]
    mov r1, r3
    cmp r0, #0x4
    bge L_0203e81c
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x1
L_0203e81c:
    cmp r1, #0x0
    beq L_0203e838
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_0203e838:
    tst r3, #0xff
    addne r11, r11, #0x1
    b L_0203e9b4
L_0203e844:
    ldrsh r0, [r8, #0x2e]
    cmp r0, #0x8
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    beq L_0203e92c
    ldr r1, [sp, #0x28]
    ldr r0, [r8, #0x10]
    ldr r3, [sp, #0x2c]
    subs r0, r1, r0
    str r0, [sp, #0x1c]
    ldr r1, [r8, #0x14]
    rsbmi r0, r0, #0x0
    sub r1, r3, r1
    str r1, [sp, #0x20]
    ldr r2, [sp, #0x30]
    ldr r1, [r8, #0x18]
    mov r3, #0x0
    sub r1, r2, r1
    str r1, [sp, #0x24]
    mov r1, r3
    cmp r0, #0x4
    bge L_0203e8b4
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r1, #0x1
L_0203e8b4:
    cmp r1, #0x0
    beq L_0203e8d0
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_0203e8d0:
    tst r3, #0xff
    beq L_0203e9b4
    ldr r0, [r10, #0x18c]
    cmp r0, #0x800
    ble L_0203e900
    add r0, r7, #0x4
    add r1, r8, #0x4
    bl VEC_DotProduct
    ldr r1, =0xb4f
    cmp r0, r1
    addgt sp, sp, #0x34
    ldmgtfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203e900:
    add r0, r8, #0x4
    add r1, sp, #0x4
    bl VEC_DotProduct
    cmp r6, #0x0
    bne L_0203e9b4
    cmp r0, #0x0
    ble L_0203e9b4
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r6, r8
    b L_0203e9b4
L_0203e92c:
    mov r0, r10
    add r1, r8, #0x4
    bl func_02030c40
    cmp r0, #0x0
    beq L_0203e9b4
    ldrsh r0, [r8, #0x2e]
    cmp r0, #0x7
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    bne L_0203e9b4
    ldr r2, [sp, #0x28]
    ldr r0, [r8, #0x10]
    ldr r1, [sp, #0x2c]
    sub r0, r2, r0
    str r0, [sp, #0x1c]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x30]
    sub r0, r1, r0
    str r0, [sp, #0x20]
    ldr r1, [r8, #0x18]
    add r0, r7, #0x4
    sub r1, r2, r1
    str r1, [sp, #0x24]
    add r1, sp, #0x1c
    bl VEC_DotProduct
    cmp r0, #0x0
    bge L_0203e9b4
    add r0, r8, #0x4
    add r1, sp, #0x1c
    bl VEC_DotProduct
    cmp r0, r5
    addlt sp, sp, #0x34
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203e9b4:
    add r4, r4, #0x1
    cmp r4, r9
    add r8, r8, #0x68
    blt L_0203e778
L_0203e9c4:
    cmp r11, #0x2
    addge sp, sp, #0x34
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_0203ea64
    ldr r1, [r7, #0x4]
    ldr r0, [r6, #0x4]
    mov r2, #0x0
    adds r4, r1, r0
    str r4, [sp, #0x10]
    ldr r1, [r7, #0x8]
    ldr r0, [r6, #0x8]
    rsbmi r4, r4, #0x0
    add r0, r1, r0
    str r0, [sp, #0x14]
    ldr r1, [r7, #0xc]
    ldr r0, [r6, #0xc]
    mov r3, r2
    add r0, r1, r0
    str r0, [sp, #0x18]
    cmp r4, #0x4
    bge L_0203ea34
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r3, #0x1
L_0203ea34:
    cmp r3, #0x0
    beq L_0203ea50
    ldr r0, [sp, #0x18]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0x4
    movlt r2, #0x1
L_0203ea50:
    tst r2, #0xff
    moveq r0, #0x1
    movne r0, #0x0
    and r0, r0, #0xff
    str r0, [sp, #0x0]
L_0203ea64:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_0203ea94
    add r0, sp, #0x10
    mov r1, r0
    bl func_01ff84a0
    add r0, sp, #0x4
    add r1, sp, #0x10
    bl VEC_DotProduct
    cmp r0, #0x0
    addlt sp, sp, #0x34
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203ea94:
    ldr r1, [sp, #0xc]
    ldr r0, =0xfc1
    cmp r1, r0
    addge sp, sp, #0x34
    ldmgefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0xc]
    orr r0, r0, #0x40
    tst r0, #0x4
    addeq sp, sp, #0x34
    str r0, [r10, #0xc]
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [sp, #0x4]
    mov r0, #0x0
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    mov r1, r0
    str r0, [sp, #0xc]
    cmp r2, #0x4
    bge L_0203eaf4
    ldr r2, [sp, #0x8]
    cmp r2, #0x0
    rsblt r2, r2, #0x0
    cmp r2, #0x4
    movlt r1, #0x1
L_0203eaf4:
    cmp r1, #0x0
    beq L_0203eb10
    ldr r1, [sp, #0xc]
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    cmp r1, #0x4
    movlt r0, #0x1
L_0203eb10:
    tst r0, #0xff
    bne L_0203eb28
    add r0, sp, #0x4
    mov r1, r0
    bl func_01ff84a0
    b L_0203eb38
L_0203eb28:
    mov r0, #0x0
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
L_0203eb38:
    add r3, sp, #0x4
    add r4, r10, #0x214
    mov r2, #0x6
L_0203eb44:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0203eb44
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
