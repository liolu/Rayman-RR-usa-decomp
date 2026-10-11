#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201bdd0();
extern void func_0201c488();
extern void func_02035e20();
extern void func_020401b4();
extern void func_020401d0();
extern void func_0205b6a4();
extern void func_02067900();
extern void func_0206b3c4();
extern void func_0206b414();
extern void func_02084450();
extern void func_0208488c();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_020a0f84(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r5, r1
    ldr r6, [r5, #-0x8]
    mov r7, r0
    mov r0, r6
    bl func_020931d8
    add r2, sp, #0x0
    mov r1, r7
    bl func_0209c740
    ldr r0, [sp, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    moveq r4, #0x0
    beq L_020a0fcc
    bl func_02067900
    mov r4, r0
L_020a0fcc:
    cmp r6, #0xb9
    beq L_020a0fe8
    cmp r6, #0xba
    beq L_020a1094
    cmp r6, #0xbb
    beq L_020a10e8
    b L_020a116c
L_020a0fe8:
    add r2, sp, #0x4
    mov r0, r7
    mov r1, r5
    bl func_02084450
    ldr r1, [sp, #0x4]
    mov r5, r0
    cmp r1, #0x0
    bne L_020a1028
    ldr r4, [sp, #0x0]
    mov r0, r4
    bl func_0206b414
    mov r2, r0
    ldr r1, [r4, #0x1c]
    mov r0, r4
    bl func_0201c488
    b L_020a116c
L_020a1028:
    ldr r0, [r1, #0x4]
    bl func_0206b3c4
    mov r6, r0
    cmp r4, #0x0
    beq L_020a1080
    ldr r0, [r4, #0x4]
    mov r7, #0x0
    mov r1, r7
    cmp r0, #0x0
    movne r1, #0x1
    cmp r1, #0x0
    beq L_020a1064
    bl func_02035e20
    cmp r0, #0x1
    moveq r7, #0x1
L_020a1064:
    tst r7, #0xff
    beq L_020a1080
    ldr r1, [sp, #0x0]
    mov r0, r4
    mov r2, r6
    bl func_020401b4
    b L_020a116c
L_020a1080:
    ldr r0, [sp, #0x0]
    mov r1, r6
    mov r2, #0x0
    bl func_0201c488
    b L_020a116c
L_020a1094:
    cmp r4, #0x0
    beq L_020a10dc
    ldr r0, [r4, #0x4]
    mov r6, #0x0
    mov r1, r6
    cmp r0, #0x0
    movne r1, #0x1
    cmp r1, #0x0
    beq L_020a10c4
    bl func_02035e20
    cmp r0, #0x1
    moveq r6, #0x1
L_020a10c4:
    tst r6, #0xff
    beq L_020a10dc
    ldr r1, [sp, #0x0]
    mov r0, r4
    bl func_020401d0
    b L_020a116c
L_020a10dc:
    ldr r0, [sp, #0x0]
    bl func_0205b6a4
    b L_020a116c
L_020a10e8:
    add r2, sp, #0x4
    mov r0, r7
    mov r1, r5
    bl func_02084450
    ldr r4, [sp, #0x4]
    mov r1, #0x0
    swpb r1, r1, [r4]
    mov r5, r0
    ldrb r0, [r4, #0x1]
    cmp r0, #0x0
    ldrne r0, [sp, #0x0]
    ldrne r6, [r0, #0x8]
    cmpne r6, #0x0
    beq L_020a116c
L_020a1120:
    mov r0, r6
    bl func_0201bdd0
    cmp r0, #0x0
    beq L_020a1160
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    bne L_020a1160
    mov r0, r4
    mov r1, r6
    bl func_0208488c
    ldrb r1, [r4, #0x0]
    ldrb r0, [r4, #0x1]
    cmp r1, r0
    addeq sp, sp, #0x14
    moveq r0, r5
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
L_020a1160:
    ldr r6, [r6, #0x14]
    cmp r6, #0x0
    bne L_020a1120
L_020a116c:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
