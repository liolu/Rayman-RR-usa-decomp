#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084450();
extern void func_02093608();
extern char data_020c0404[];
extern char data_020dc19c[];
extern char data_020e39e4[];
extern char data_020e4bd8[];
extern char data_020e4bdc[];
extern char data_020e4be0[];
extern char data_020e4bec[];
extern char data_020e4bf8[];
extern char data_020e4c04[];
// clang-format off
asm void func_020976ec(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r7, r2
    ldr r4, [r1, #-0x8]
    mov r5, #0x0
    bl func_02084450
    ldr r2, =data_020e4c04
    ldr r3, [r7, #0x0]
    ldr r6, [r2, #0x0]
    mov r1, r0
    cmp r6, r3
    ldreq r3, [r2, #0x4]
    ldreq r0, [r7, #0x4]
    cmpeq r3, r0
    ldreq r2, [r2, #0x8]
    ldreq r0, [r7, #0x8]
    cmpeq r2, r0
    beq L_0209776c
    ldr r6, =data_020e4c04
    mov r5, r7
    mov r3, #0x6
L_02097744:
    ldrb r0, [r5, #0x0]
    ldrb r2, [r5, #0x1]
    add r5, r5, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r2, [r6]
    add r6, r6, #0x1
    bne L_02097744
    mov r5, #0x1
L_0209776c:
    mov r0, r8
    mov r2, r7
    bl func_02084450
    ldr r2, =data_020e4bf8
    ldr r3, [r7, #0x0]
    ldr r6, [r2, #0x0]
    mov r1, r0
    cmp r6, r3
    ldreq r3, [r2, #0x4]
    ldreq r0, [r7, #0x4]
    cmpeq r3, r0
    ldreq r2, [r2, #0x8]
    ldreq r0, [r7, #0x8]
    cmpeq r2, r0
    beq L_020977dc
    ldr r6, =data_020e4bf8
    mov r5, r7
    mov r3, #0x6
L_020977b4:
    ldrb r0, [r5, #0x0]
    ldrb r2, [r5, #0x1]
    add r5, r5, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r2, [r6]
    add r6, r6, #0x1
    bne L_020977b4
    mov r5, #0x1
L_020977dc:
    mov r0, r8
    mov r2, r7
    bl func_02084450
    mov r6, r0
    cmp r5, #0x0
    ldr r3, [r7, #0x0]
    bne L_0209781c
    ldr r1, =data_020e4bd8
    ldr r0, =data_020dc19c
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x74]
    cmp r1, r0
    ldreq r0, =data_020c0404
    ldreq r0, [r0, #0x0]
    cmpeq r0, r3
    beq L_02097870
L_0209781c:
    ldr r0, =data_020e4bf8
    ldr ip, =data_020dc19c
    add lr, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr lr, [ip, #0x74]
    ldr r0, =data_020e4bd8
    ldr r5, =data_020c0404
    str lr, [r0, #0x0]
    ldr r2, =data_020e4bdc
    mov ip, #0x0
    ldr r1, =data_020e39e4
    mov r0, r8
    str ip, [r2, #0x0]
    str r3, [r5, #0x0]
    str ip, [r1, #0x0]
    bl func_02093608
    add r0, sp, #0x0
    ldr r3, =data_020e4bf8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02097870:
    cmp r4, #0x83
    beq L_0209788c
    cmp r4, #0x84
    beq L_020978c8
    cmp r4, #0x85
    beq L_02097904
    b L_02097934
L_0209788c:
    ldr r4, =data_020e4bec
    mov r3, r7
    mov r2, #0x6
L_02097898:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02097898
    mov r0, #0x15
    str r0, [r7, #0xc]
    b L_02097934
L_020978c8:
    ldr r4, =data_020e4be0
    mov r3, r7
    mov r2, #0x6
L_020978d4:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020978d4
    mov r0, #0x15
    str r0, [r7, #0xc]
    b L_02097934
L_02097904:
    ldr r0, =data_020e4bdc
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    moveq r0, #0x0
    beq L_02097928
    ldr r0, [r1, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r1, #0x4]
L_02097928:
    str r0, [r7, #0x0]
    mov r0, #0xb
    str r0, [r7, #0xc]
L_02097934:
    ldr r1, =data_020c0404
    mov r2, #0x40
    mov r0, r6
    str r2, [r1, #0x4]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
