#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r1();
extern void r2();
extern char data_020bc24c[];
extern char data_020c5788[];
extern char data_020c5798[];
// clang-format off
asm void func_02025624(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r3, #0x0
    mov r8, r2
    mov r10, r0
    sub r2, r3, #0x1
    mov r9, r1
    str r3, [r8, #0x20]
    cmp r10, r2
    beq L_02025748
    mov r1, #0x48
    mul r4, r9, r1
    ldr r1, =data_020c5788
    ldr r1, [r1, #0x0]
    ldr r1, [r1, r4]
    blx r1
    str r0, [r8, #0x8]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0x4]
    blx r1
    str r0, [r8, #0xc]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0x8]
    blx r1
    str r0, [r8, #0x10]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0xc]
    blx r1
    str r0, [r8, #0x14]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0x10]
    blx r1
    str r0, [r8, #0x18]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0x14]
    blx r1
    str r0, [r8, #0x1c]
    ldr r1, =data_020c5788
    mov r0, r10
    ldr r1, [r1, #0x0]
    add r1, r1, r4
    ldr r1, [r1, #0x18]
    blx r1
    add r1, r8, #0x7
    swpb r0, r0, [r1]
    add r1, r8, #0x5
    mov r0, #0x40
    swpb r0, r0, [r1]
    add r1, r8, #0x6
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_020bc24c
    ldr r0, [r0, #0x2c]
    cmp r0, #0x0
    bne L_02025770
    ldr r0, [r8, #0x20]
    orr r0, r0, #0x2
    str r0, [r8, #0x20]
    b L_02025770
L_02025748:
    add r1, r8, #0x5
    mov r0, #0x40
    swpb r0, r0, [r1]
    add r1, r8, #0x7
    swpb r0, r3, [r1]
    add r1, r8, #0x6
    swpb r0, r3, [r1]
    ldr r0, [r8, #0x20]
    orr r0, r0, #0x3
    str r0, [r8, #0x20]
L_02025770:
    ldr r0, =data_020c5798
    mov r7, #0x0
    ldr r5, [r0, #0x0]
    cmp r5, #0x0
    beq L_020257e4
    mov r0, #0x48
    mul r6, r9, r0
    mov r11, #0x1
    mvn r4, #0x0
L_02025794:
    cmp r10, r4
    addeq r0, r8, r7, lsl #0x3
    streq r11, [r0, #0x2c]
    beq L_020257c8
    ldr r0, =data_020c5788
    ldr r1, [r0, #0x0]
    mov r0, r10
    add r1, r6, r1
    ldr r2, [r1, #0x24]
    mov r1, r5
    blx r2
    add r1, r8, r7, lsl #0x3
    str r0, [r1, #0x2c]
L_020257c8:
    ldr r1, [r5, #0x0]
    add r0, r8, r7, lsl #0x3
    str r1, [r0, #0x28]
    ldr r5, [r5, #0x4]
    add r7, r7, #0x1
    cmp r5, #0x0
    bne L_02025794
L_020257e4:
    ldr r0, [r8, #0x20]
    ldr r3, [r8, #0x24]
    bic r1, r0, #0x10
    ldr r0, =data_020c5788
    str r1, [r8, #0x20]
    ldr r1, [r0, #0x0]
    mov r0, #0x48
    mla r0, r9, r0, r1
    ldr r2, [r0, #0x30]
    add r1, r8, #0x38
    sub r0, r3, #0x2
    cmp r2, #0x0
    add r1, r1, r0, lsl #0x3
    beq L_02025834
    mov r0, r10
    blx r2
    cmp r0, #0x0
    ldrne r0, [r8, #0x20]
    orrne r0, r0, #0x10
    strne r0, [r8, #0x20]
L_02025834:
    ldr r1, [r8, #0x24]
    ldr r0, [r8, #0x20]
    add r2, r8, #0x38
    sub r1, r1, #0x2
    orr r0, r0, #0x20
    str r0, [r8, #0x20]
    add r0, r2, r1, lsl #0x3
    str r9, [r0, #0x8]
    str r10, [r0, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
