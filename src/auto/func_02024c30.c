#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024ecc();
extern char data_020c572c[];
// clang-format off
asm void func_02024c30(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r2, =data_020c572c
    ldr r2, [r2, #0x0]
    cmp r2, #0x0
    beq L_02024c54
L_02024c44:
    cmp r2, r0
    ldrne r2, [r2, #0x38]
    cmpne r2, #0x0
    bne L_02024c44
L_02024c54:
    cmp r2, #0x0
    beq L_02024d24
    mov r3, #0x0
    mov lr, r1
    mov ip, r2
    str r3, [r2, #0x30]
    mov r5, #0x6
L_02024c70:
    ldrb r3, [lr, #0x0]
    ldrb r4, [lr, #0x1]
    add lr, lr, #0x2
    subs r5, r5, #0x1
    swpb r3, r3, [ip]
    add ip, ip, #0x1
    swpb r3, r4, [ip]
    add ip, ip, #0x1
    bne L_02024c70
    add lr, r2, #0xc
    add ip, r1, #0xc
    mov r5, #0x6
L_02024ca0:
    ldrb r3, [ip, #0x0]
    ldrb r4, [ip, #0x1]
    add ip, ip, #0x2
    subs r5, r5, #0x1
    swpb r3, r3, [lr]
    add lr, lr, #0x1
    swpb r3, r4, [lr]
    add lr, lr, #0x1
    bne L_02024ca0
    add r5, r2, #0x18
    add lr, r1, #0x18
    mov ip, #0x6
L_02024cd0:
    ldrb r3, [lr, #0x0]
    ldrb r4, [lr, #0x1]
    add lr, lr, #0x2
    subs ip, ip, #0x1
    swpb r3, r3, [r5]
    add r5, r5, #0x1
    swpb r3, r4, [r5]
    add r5, r5, #0x1
    bne L_02024cd0
    add r4, r2, #0x24
    add lr, r1, #0x24
    mov ip, #0x6
L_02024d00:
    ldrb r2, [lr, #0x0]
    ldrb r3, [lr, #0x1]
    add lr, lr, #0x2
    subs ip, ip, #0x1
    swpb r2, r2, [r4]
    add r4, r4, #0x1
    swpb r2, r3, [r4]
    add r4, r4, #0x1
    bne L_02024d00
L_02024d24:
    bl func_02024ecc
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
