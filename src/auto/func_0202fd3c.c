#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void OS_Exit();
extern void func_0207ad9c();
extern char data_020bc544[];
extern char data_020cf6c8[];
// clang-format off
asm void func_0202fd3c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    ldr r2, =data_020cf6c8
    movs r6, r0
    ldr r0, [r2, #0x0]
    addeq sp, sp, #0x18
    add r0, r0, r1, lsl #0x3
    ldr r4, [r0, #0x4]
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r1, [r4, #0x8]
    mvn r0, #0x0
    cmp r1, r0
    beq L_0202fec0
    tst r6, #0x7
    bicne r0, r6, #0x7
    addne r6, r0, #0x8
    mov r2, r6, lsr #0x3
    add r6, r2, #0x1
    mov ip, #0x0
    mov r0, r1
    mov r2, #0xff
    b L_0202fdb4
L_0202fd98:
    ldr r3, [r1, #0x4]
    ldr r5, [r1, #0x0]
    cmp r3, #0x0
    cmpeq r5, r6
    movlo r0, r1
    ldrlo r1, [r1, #0x8]
    movhs ip, r2
L_0202fdb4:
    cmp r1, #0x0
    beq L_0202fdc4
    cmp ip, #0x0
    beq L_0202fd98
L_0202fdc4:
    cmp ip, #0x0
    beq L_0202fe7c
    ldr r3, [r1, #0x0]
    ldr r2, [r1, #0x4]
    subs r5, r3, r6
    sbc r3, r2, #0x0
    str r5, [r1, #0x0]
    str r3, [r1, #0x4]
    ldr r2, [r1, #0x0]
    cmp r3, #0x0
    cmpeq r2, #0x2
    bhs L_0202fe1c
    adds r6, r6, r2
    cmp r1, r0
    ldreq r0, [r1, #0x8]
    streq r0, [r4, #0x8]
    beq L_0202fe4c
    add r2, r1, #0x8
    add r0, r0, #0x8
    ldmia r2, {r2, r3}
    stmia r0, {r2, r3}
    b L_0202fe4c
L_0202fe1c:
    add ip, r1, r6, lsl #0x3
    stmia ip, {r2, r3}
    add r2, r1, #0x8
    add r5, ip, #0x8
    ldmia r2, {r2, r3}
    stmia r5, {r2, r3}
    ldr r2, [r4, #0x8]
    cmp r1, r2
    streq ip, [r4, #0x8]
    strne ip, [r0, #0x8]
    movne r2, #0x0
    strne r2, [r0, #0xc]
L_0202fe4c:
    str r6, [r1, #0x0]
    mov r0, #0x0
    str r0, [r1, #0x4]
    ldr r2, [r1, #0x0]
    ldr r0, [r4, #0xc]
    add r2, r1, r2, lsl #0x3
    sub r2, r2, #0x1
    cmp r2, r0
    add sp, sp, #0x18
    strhs r2, [r4, #0xc]
    add r0, r1, #0x8
    ldmfd sp!, {r4, r5, r6, pc}
L_0202fe7c:
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x23
    bl func_0207ad9c
    mov r0, r6
    bl OS_Exit
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, pc}
L_0202fec0:
    ldr r5, [r4, #0x0]
    ldr r2, [r4, #0xc]
    ldrb r1, [r5, #0x1]
    sub r0, r1, #0x1
    tst r6, r0
    mvnne r0, r0
    andne r0, r6, r0
    addne r6, r1, r0
    ldr r0, [r4, #0x4]
    sub r1, r0, r2
    cmp r6, r1
    bls L_0202ff34
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x23
    bl func_0207ad9c
    mov r0, r6
    bl OS_Exit
    add sp, sp, #0x18
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, pc}
L_0202ff34:
    ldrb r0, [r5, #0x2]
    tst r0, #0x8
    beq L_0202ffd4
    cmp r1, #0x4
    blo L_0202ffd4
    add r3, r2, #0x1
    ldr r0, =0xe123456e
    add r2, r3, #0x4
    mov lr, r3
    str r0, [sp, #0x14]
    cmp r3, r2
    add ip, sp, #0x14
    bhs L_0202ff88
L_0202ff68:
    ldrsb r1, [lr, #0x0]
    ldrsb r0, [ip, #0x0]
    cmp r1, r0
    bne L_0202ff88
    add lr, lr, #0x1
    cmp lr, r2
    add ip, ip, #0x1
    blo L_0202ff68
L_0202ff88:
    add r0, r3, #0x4
    cmp lr, r0
    moveq r0, #0x1
    movne r0, #0x0
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    bne L_0202ffd4
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x1b
    bl func_0207ad9c
L_0202ffd4:
    ldrb r0, [r5, #0x2]
    tst r0, #0x2
    beq L_02030010
    ldr r0, [r4, #0xc]
    mvn r1, #0x55
    add r2, r0, #0x1
    b L_0202fff8
L_0202fff0:
    swpb r0, r1, [r2]
    add r2, r2, #0x1
L_0202fff8:
    ldr r0, [r4, #0xc]
    add r0, r0, #0x4
    cmp r2, r0
    ldrls r0, [r4, #0x4]
    cmpls r2, r0
    bls L_0202fff0
L_02030010:
    ldrb r0, [r5, #0x2]
    tst r0, #0x4
    beq L_02030070
    ldrb r1, [r5, #0x1]
    mov r2, r6
    sub r0, r1, #0x1
    tst r6, r0
    mvnne r0, r0
    andne r0, r6, r0
    addne r6, r1, r0
    cmp r2, r6
    beq L_02030070
    mvn r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xff
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, #0x0
    ldr r0, =data_020bc544
    str r2, [sp, #0xc]
    ldrb r1, [r0, #0x0]
    mov r0, #0x1d
    mov r3, #0x1a
    bl func_0207ad9c
L_02030070:
    ldr r2, [r4, #0xc]
    add r1, r2, r6
    str r1, [r4, #0xc]
    ldr r0, [r4, #0x4]
    sub r0, r0, r1
    cmp r0, #0x4
    blo L_020300bc
    add r4, r1, #0x1
    ldr r0, =0xe123456e
    add r1, r4, #0x4
    str r0, [sp, #0x10]
    cmp r4, r1
    add r3, sp, #0x10
    bhs L_020300bc
L_020300a8:
    ldrsb r0, [r3], #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    cmp r4, r1
    blo L_020300a8
L_020300bc:
    add r0, r2, #0x1
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
