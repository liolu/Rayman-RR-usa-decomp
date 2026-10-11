#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02041ec4();
extern void func_020730c4();
extern char data_020bc908[];
extern char data_020bc918[];
extern char data_020bc928[];
extern char data_020bc938[];
extern char data_020bc948[];
extern char data_020bc954[];
extern char data_020bd560[];
extern char data_020d02ec[];
extern char data_020d030c[];
extern char data_020d0318[];
extern char data_020d031c[];
extern char data_020d0320[];
// clang-format off
asm void func_02047a80(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0xf8
    ldr r0, =data_020bc948
    add r3, sp, #0x0
    mov r1, #0x0
    mov r2, #0x4
    bl func_02041ec4
    ldr r0, =data_020d02ec
    ldr r4, [r0, #0x10]
    cmp r4, #0x0
    bne L_02047aec
    ldr r3, [r0, #0x14]
    ldr r2, =data_020bc908
    cmp r3, r2
    ldreq r1, =data_020bc918
    streq r1, [r0, #0x14]
    beq L_02047aec
    ldr r1, =data_020bc918
    cmp r3, r1
    ldreq r1, =data_020bc928
    streq r1, [r0, #0x14]
    beq L_02047aec
    ldr r1, =data_020bc928
    cmp r3, r1
    ldreq r1, =data_020bc938
    streq r1, [r0, #0x14]
    strne r2, [r0, #0x14]
L_02047aec:
    ldr r0, =data_020d02ec
    ldr r2, [r0, #0x14]
    ldr r1, [r0, #0x10]
    ldrsb r3, [r2, r4]
    add r2, r1, #0x1
    str r2, [r0, #0x10]
    ldr r1, [sp, #0x0]
    cmp r2, r1
    movhs r1, #0x0
    strhs r1, [r0, #0x10]
    mov r2, #0xf4
    mul r1, r3, r2
    ldr r0, =data_020bc954
    add r3, sp, #0x4
    add r1, r1, #0x4
    bl func_02041ec4
    ldr r0, =data_020d0320
    add r1, sp, #0x4
    mov r2, #0x20
    bl func_02001588
    ldr r0, [sp, #0xe4]
    ldr r1, =data_020d030c
    ldr r5, [sp, #0xf0]
    ldr r3, =data_020d031c
    str r0, [r1, #0x0]
    ldr lr, [sp, #0xe8]
    ldr r4, [sp, #0xf4]
    ldr r2, =data_020d0318
    ldr ip, [sp, #0xec]
    add r0, sp, #0x24
    str r5, [r3, #0x0]
    str r4, [r2, #0x0]
    str lr, [r1, #0x4]
    str ip, [r1, #0x8]
    bl func_020730c4
    ldr r1, =data_020bd560
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_020d0320
    add sp, sp, #0xf8
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
