#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void memset();
extern char data_020e39e8[];
extern char data_020e39e9[];
// clang-format off
asm void func_02082f1c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r6, r0
    mov r5, r1
    cmpne r5, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r7, [r6, #0x0]
    add r4, r5, #0x14
    str r7, [r5, #0x0]
    ldr r2, [r7, #0x0]
    mov r0, #0x0
    cmp r2, #0x0
    beq L_02083028
    ldr r1, [r2, #0x4]
    mov r8, r0
    cmp r1, #0x0
    ldrb r1, [r2, #0xc]
    beq L_02083008
    mov r8, r4
    mov r9, r4
    mov r3, #0x6
L_02082f6c:
    swpb r2, r0, [r9]
    add r9, r9, #0x1
    swpb r2, r0, [r9]
    add r9, r9, #0x1
    swpb r2, r0, [r9]
    add r9, r9, #0x1
    swpb r2, r0, [r9]
    add r9, r9, #0x1
    subs r3, r3, #0x1
    bne L_02082f6c
    str r7, [r8, #0x0]
    ldr r0, [r7, #0x0]
    cmp r1, #0x0
    ldr r0, [r0, #0x8]
    add r4, r4, #0x18
    str r0, [r8, #0x14]
    beq L_02082fcc
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x50
    mov r9, r4
    bl memset
    add r4, r4, #0x50
    b L_02082fd4
L_02082fcc:
    mov r9, #0x0
    b L_02083004
L_02082fd4:
    ldr r0, =data_020e39e8
    add r2, r9, #0x4e
    ldrb r1, [r0, #0x0]
    ldr r3, =data_020e39e9
    mov r0, r9
    swpb r1, r1, [r2]
    add ip, r9, #0x4f
    ldrb r3, [r3, #0x0]
    mov r1, #0x0
    mov r2, #0x48
    swpb r3, r3, [ip]
    bl memset
L_02083004:
    str r9, [r8, #0x10]
L_02083008:
    str r8, [r5, #0x4]
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    beq L_0208302c
    ldr r1, [r0, #0x14]
    ldr r0, [r5, #0x4]
    str r1, [r0, #0x14]
    b L_0208302c
L_02083028:
    str r0, [r5, #0x4]
L_0208302c:
    ldr r0, [r6, #0x4]
    cmp r0, #0x0
    ldrne r1, [r0, #0x14]
    ldrne r0, [r5, #0x4]
    strne r1, [r0, #0x14]
    ldr r3, [r7, #0x4]
    add r1, r7, #0x4
    cmp r3, #0x0
    mov r0, #0x0
    beq L_02083130
    ldr r2, [r3, #0x4]
    mov r7, r0
    cmp r2, #0x0
    ldrb r2, [r3, #0xc]
    beq L_02083110
    mov r7, r4
    mov r9, r4
    mov r8, #0x6
L_02083074:
    swpb r3, r0, [r9]
    add r9, r9, #0x1
    swpb r3, r0, [r9]
    add r9, r9, #0x1
    swpb r3, r0, [r9]
    add r9, r9, #0x1
    swpb r3, r0, [r9]
    add r9, r9, #0x1
    subs r8, r8, #0x1
    bne L_02083074
    str r1, [r7, #0x0]
    ldr r0, [r1, #0x0]
    cmp r2, #0x0
    ldr r0, [r0, #0x8]
    add r4, r4, #0x18
    str r0, [r7, #0x14]
    beq L_020830d4
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x50
    mov r8, r4
    bl memset
    add r4, r4, #0x50
    b L_020830dc
L_020830d4:
    mov r8, #0x0
    b L_0208310c
L_020830dc:
    ldr r0, =data_020e39e8
    add r2, r8, #0x4e
    ldrb r1, [r0, #0x0]
    ldr r3, =data_020e39e9
    mov r0, r8
    swpb r1, r1, [r2]
    add r9, r8, #0x4f
    ldrb r3, [r3, #0x0]
    mov r1, #0x0
    mov r2, #0x48
    swpb r3, r3, [r9]
    bl memset
L_0208310c:
    str r8, [r7, #0x10]
L_02083110:
    str r7, [r5, #0x8]
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    beq L_02083134
    ldr r1, [r0, #0x14]
    ldr r0, [r5, #0x8]
    str r1, [r0, #0x14]
    b L_02083134
L_02083130:
    str r0, [r5, #0x8]
L_02083134:
    mov r1, #0x0
    str r1, [r5, #0xc]
    ldr r0, [r5, #0x0]
    ldr r2, [r0, #0x8]
    cmp r2, #0x0
    ldrne r2, [r2, #0x8]
    cmpne r2, #0x0
    beq L_02083238
    swpb r3, r1, [r4]
    add r7, r4, #0x1
    swpb r3, r1, [r7]
    add r7, r4, #0x2
    swpb r3, r1, [r7]
    add r7, r4, #0x3
    swpb r3, r1, [r7]
    add r7, r4, #0x4
    swpb r3, r1, [r7]
    add r7, r4, #0x5
    swpb r3, r1, [r7]
    add r7, r4, #0x6
    swpb r3, r1, [r7]
    add r7, r4, #0x7
    swpb r3, r1, [r7]
    add r7, r4, #0x8
    swpb r3, r1, [r7]
    add r7, r4, #0x9
    swpb r3, r1, [r7]
    add r7, r4, #0xa
    swpb r3, r1, [r7]
    add r7, r4, #0xb
    swpb r3, r1, [r7]
    add r0, r0, #0x8
    add r8, r4, #0xc
    stmia r4, {r0, r1}
    mov r7, r4
    mov r0, r8
    add r4, r8, r2
    bl memset
    str r8, [r7, #0x8]
    str r7, [r5, #0xc]
    ldr r0, [r6, #0xc]
    ldr r1, [r0, #0x0]
    ldr r0, [r7, #0x0]
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    ldr r0, [r6, #0xc]
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_02083238
    ldr r1, [r5, #0x0]
    mov r0, r4
    ldr r2, [r1, #0x8]
    mov r1, #0x0
    ldr r2, [r2, #0x8]
    bl memset
    ldr r0, [r5, #0xc]
    str r4, [r0, #0x4]
    ldr r0, [r5, #0x0]
    ldr r3, [r5, #0xc]
    ldr r1, [r6, #0xc]
    ldr r2, [r0, #0x8]
    ldr r0, [r3, #0x4]
    ldr r1, [r1, #0x4]
    ldr r2, [r2, #0x8]
    bl func_02001588
L_02083238:
    ldr r1, [r5, #0x4]
    cmp r1, #0x0
    ldrne r0, [r1, #0x14]
    strne r0, [r1, #0x8]
    strne r0, [r1, #0xc]
    ldr r1, [r5, #0x8]
    cmp r1, #0x0
    ldrne r0, [r1, #0x14]
    strne r0, [r1, #0x8]
    strne r0, [r1, #0xc]
    ldr r0, [r5, #0xc]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    bne L_02083294
    ldr r1, [r5, #0x0]
    ldr r0, [r0, #0x8]
    ldr r2, [r1, #0x8]
    ldr r1, [r2, #0x0]
    ldr r2, [r2, #0x8]
    bl func_02001588
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02083294:
    ldr r2, [r5, #0x0]
    ldr r0, [r0, #0x8]
    ldr r2, [r2, #0x8]
    ldr r2, [r2, #0x8]
    bl func_02001588
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
