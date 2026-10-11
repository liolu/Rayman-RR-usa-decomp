#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_0202c664();
extern void func_0202e19c();
extern void func_0202e1e0();
extern void func_0204a080();
extern void func_0204a148();
extern void func_0204cc7c();
extern void func_020559c8();
extern void func_02060030();
extern void func_020600e0();
extern void func_02060190();
extern void func_02067fdc();
extern void func_02068028();
extern void func_020680d8();
extern void func_0206811c();
extern void func_02068124();
extern void func_0206812c();
extern void func_02068134();
extern void func_02068150();
extern void func_02068158();
extern void func_02068160();
extern void func_02068168();
extern void func_02068178();
extern void func_02068278();
extern void func_02068294();
extern char data_020dc184[];
extern char data_020dc264[];
extern char data_020dd824[];
extern char data_020dd828[];
extern char data_020dd82c[];
extern char data_020dd830[];
// clang-format off
asm void func_02068324(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x154
    mov r6, r0
    ldr r1, [r6, #0x0]
    cmp r1, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    cmp r0, #0x0
    addeq sp, sp, #0x154
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    cmp r1, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02067fdc
    cmp r0, #0x0
    addeq sp, sp, #0x154
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mov r0, r6
    bl func_02068294
    ldr r5, [r6, #0x24]
    mov r4, r0
    add r0, sp, #0xf0
    mov r1, r5
    mov r2, #0x64
    bl func_02001588
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068178
    add ip, sp, #0x4
    mov r3, #0x6
L_020683b0:
    ldrb r1, [r0, #0x0]
    ldrb r2, [r0, #0x1]
    add r0, r0, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [ip]
    add ip, ip, #0x1
    swpb r1, r2, [ip]
    add ip, ip, #0x1
    bne L_020683b0
    add r0, sp, #0x8c
    bl func_0202c664
    add r0, sp, #0x8c
    add r1, sp, #0x4
    bl func_0202e19c
    add r0, sp, #0x8c
    mov r1, r4
    bl func_02060190
    add r0, sp, #0x8c
    add r1, sp, #0x4
    bl func_0202e1e0
    add r1, sp, #0x10
    mov r0, r5
    bl func_0202e1e0
    ldr r3, [sp, #0x10]
    ldr r2, [sp, #0x4]
    ldr r1, [sp, #0x14]
    add r3, r3, r2
    ldr r0, [sp, #0x8]
    str r3, [sp, #0x10]
    add r2, r1, r0
    str r2, [sp, #0x14]
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0xc]
    ldr r2, =data_020dd82c
    add r0, r1, r0
    str r0, [sp, #0x18]
    ldr r0, [r6, #0x0]
    ldr r1, =data_020dd828
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r3, =data_020dd830
    ldr r0, [r0, #0x1c]
    bl func_02068278
    ldr r1, =data_020dd824
    add r0, sp, #0xf0
    ldr r1, [r1, #0xc]
    bl func_02060190
    ldr r1, =data_020dd824
    add r0, sp, #0xf0
    ldr r1, [r1, #0x4]
    bl func_02060030
    ldr r0, =data_020dd824
    ldr r1, [r0, #0x8]
    cmp r1, #0x0
    beq L_02068498
    add r0, sp, #0xf0
    bl func_020600e0
L_02068498:
    add r0, sp, #0xf0
    add r1, sp, #0x10
    bl func_0202e19c
    ldr r0, =data_020dd824
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0206850c
    mov r1, #0x0
    mvn r2, #0x0
    add r0, sp, #0x28
    str r2, [sp, #0x1c]
    str r1, [sp, #0x20]
    str r1, [sp, #0x24]
    bl func_0202c664
    add r0, sp, #0x28
    add r1, sp, #0x1c
    bl func_0202e19c
    ldr r1, =data_020dd824
    add r0, sp, #0x28
    ldr r1, [r1, #0x4]
    bl func_02060030
    ldr r1, =data_020dd824
    add r0, sp, #0x28
    ldr r1, [r1, #0x8]
    bl func_020600e0
    ldr r1, =data_020dd824
    add r0, sp, #0x28
    ldr r1, [r1, #0xc]
    bl func_02060190
L_0206850c:
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_0206811c
    cmp r0, #0x0
    beq L_020685d8
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068134
    mov r1, r0
    ldr r2, =data_020dd824
    add r0, sp, #0xf0
    str r1, [r2, #0x8]
    bl func_02060190
    ldr r0, =data_020dd824
    ldrb r1, [r0, #0x0]
    cmp r1, #0x0
    beq L_02068574
    ldr r1, [r0, #0x8]
    add r0, sp, #0x28
    bl func_02060190
L_02068574:
    add r0, sp, #0xf0
    add r1, sp, #0x10
    bl func_0202e19c
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068124
    ldr r2, =data_020dd824
    ldr r1, =0x6488
    ldr r3, [r2, #0x8]
    add r0, r3, r0
    cmp r0, r1
    str r0, [r2, #0x8]
    movgt r0, #0x0
    strgt r0, [r2, #0x8]
    ldr r0, [r6, #0x0]
    ldr r1, =data_020dd824
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x1c]
    bl func_0206812c
L_020685d8:
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068150
    cmp r0, #0x0
    beq L_020686cc
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068028
    ldr r1, =data_020dd824
    str r0, [r1, #0x4]
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068158
    ldr r1, =data_020dd824
    mov r4, r0
    ldr r0, [r1, #0x4]
    add r0, r0, r4
    str r0, [r1, #0x4]
    ldr r0, [r6, #0x0]
    ldr r1, =data_020dd824
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r5, [r1, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068168
    cmp r5, r0
    bgt L_02068674
    cmp r5, #0x0
    bge L_02068688
L_02068674:
    ldr r0, =data_020dd824
    rsb r4, r4, #0x0
    ldr r1, [r0, #0x4]
    add r1, r1, r4, lsl #0x1
    str r1, [r0, #0x4]
L_02068688:
    ldr r0, [r6, #0x0]
    mov r1, r4
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068160
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_020680d8
    ldr r2, =data_020dd824
    mov r1, #0x0
    ldr r2, [r2, #0x4]
    bl func_0204a148
L_020686cc:
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_020680d8
    add r1, sp, #0xf0
    bl func_0204a080
    ldr r0, =data_020dd824
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x154
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    add r0, sp, #0x28
    add r1, sp, #0x1c
    bl func_0202e1e0
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068178
    ldr r1, [sp, #0x1c]
    ldr r0, [r0, #0x0]
    add r0, r1, r0
    str r0, [sp, #0x1c]
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068178
    ldr r1, [sp, #0x20]
    ldr r0, [r0, #0x4]
    add r0, r1, r0
    str r0, [sp, #0x20]
    ldr r0, [r6, #0x0]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    bl func_02068178
    ldr r1, [sp, #0x24]
    ldr r0, [r0, #0x8]
    mov r2, #0x1
    add r0, r1, r0
    str r0, [sp, #0x24]
    ldr r0, [r6, #0x0]
    add r1, sp, #0x1c
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    ldr r0, [r0, #0x1c]
    ldr r0, [r0, #0x30]
    bl func_020559c8
    ldr r0, [r6, #0x0]
    ldr r1, [r6, #0x30]
    cmp r0, #0x2
    movne r0, #0x0
    ldreq r0, [r6, #0x4]
    mvn r3, #0x40
    str r1, [sp, #0x0]
    ldr r1, [r0, #0x1c]
    ldr r0, =data_020dc184
    ldr r1, [r1, #0x30]
    ldr r2, [r0, #0x0]
    ldr r0, =data_020dc264
    bl func_0204cc7c
    add sp, sp, #0x154
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
