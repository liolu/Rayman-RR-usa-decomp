#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02073250();
extern void func_02073268();
extern void func_02073280();
extern char data_020bc900[];
extern char data_020bc904[];
extern char data_020d00d8[];
extern char data_020d00dc[];
// clang-format off
asm void func_02046e44(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_020bc904
    ldrsb r1, [r1, #0x0]
    cmp r1, #0x0
    bne L_02046e70
    ldr r0, =data_020d00dc
    mov r1, #0x0
    strh r1, [r0, #0x0]
    strh r1, [r0, #0x2]
    strh r1, [r0, #0x4]
    ldmfd sp!, {r3, pc}
L_02046e70:
    cmp r0, #0x1
    bge L_02047038
    ldr r1, =0x4000130
    ldr r0, =0x27fffa8
    ldrh r3, [r1, #0x0]
    ldrh r1, [r0, #0x0]
    ldr r0, =0x2fff
    ldr r2, =data_020d00d8
    orr r1, r3, r1
    eor r1, r1, r0
    and r0, r1, r0
    strh r0, [r2, #0x4]
    ldrh r0, [r2, #0x4]
    tst r0, #0x10
    beq L_02046f10
    ldr r3, [r2, #0x10]
    mov r0, #0x64
    cmp r3, #0x32
    bgt L_02046ec8
    sub r1, r0, #0x96
    cmp r3, r1
    bge L_02046ee8
L_02046ec8:
    ldr r1, =data_020d00d8
    ldr r0, =data_020bc900
    ldr r3, [r1, #0xc]
    ldr r2, [r0, #0x0]
    mov r0, #0x3c
    add r2, r3, r2, asr #0x1
    str r2, [r1, #0xc]
    b L_02046efc
L_02046ee8:
    ldr r1, =data_020bc900
    ldr r3, [r2, #0xc]
    ldr r1, [r1, #0x0]
    add r1, r3, r1
    str r1, [r2, #0xc]
L_02046efc:
    ldr r1, =data_020d00d8
    ldr r2, [r1, #0xc]
    cmp r2, r0
    strgt r0, [r1, #0xc]
    b L_02046f84
L_02046f10:
    tst r0, #0x20
    beq L_02046f7c
    ldr r3, [r2, #0x10]
    mvn r0, #0x63
    cmp r3, #0x32
    bgt L_02046f34
    add r1, r0, #0x32
    cmp r3, r1
    bge L_02046f54
L_02046f34:
    ldr r1, =data_020d00d8
    ldr r0, =data_020bc900
    ldr r3, [r1, #0xc]
    ldr r2, [r0, #0x0]
    mvn r0, #0x3b
    sub r2, r3, r2, asr #0x1
    str r2, [r1, #0xc]
    b L_02046f68
L_02046f54:
    ldr r1, =data_020bc900
    ldr r3, [r2, #0xc]
    ldr r1, [r1, #0x0]
    sub r1, r3, r1
    str r1, [r2, #0xc]
L_02046f68:
    ldr r1, =data_020d00d8
    ldr r2, [r1, #0xc]
    cmp r2, r0
    strlt r0, [r1, #0xc]
    b L_02046f84
L_02046f7c:
    mov r0, #0x0
    str r0, [r2, #0xc]
L_02046f84:
    ldr r2, =data_020d00d8
    ldr r0, [r2, #0xc]
    add r1, r2, #0x6
    swpb r0, r0, [r1]
    ldrh r0, [r2, #0x4]
    tst r0, #0x80
    beq L_02046fc4
    ldr r0, =data_020bc900
    ldr r1, [r2, #0x10]
    ldr r0, [r0, #0x0]
    add r0, r1, r0
    str r0, [r2, #0x10]
    cmp r0, #0x64
    movgt r0, #0x64
    strgt r0, [r2, #0x10]
    b L_02046ff8
L_02046fc4:
    tst r0, #0x40
    beq L_02046ff0
    ldr r0, =data_020bc900
    ldr r3, [r2, #0x10]
    ldr r1, [r0, #0x0]
    mvn r0, #0x63
    sub r1, r3, r1
    str r1, [r2, #0x10]
    cmp r1, r0
    strlt r0, [r2, #0x10]
    b L_02046ff8
L_02046ff0:
    mov r0, #0x0
    str r0, [r2, #0x10]
L_02046ff8:
    ldr r0, =data_020d00d8
    ldr r2, [r0, #0x10]
    add r1, r0, #0x7
    rsb r0, r2, #0x0
    swpb r0, r0, [r1]
    bl func_02073280
    cmp r0, #0x0
    beq L_02047038
    bl func_02073268
    ldr r1, =data_020d00d8
    add r1, r1, #0x7
    swpb r0, r0, [r1]
    bl func_02073250
    ldr r1, =data_020d00d8
    add r1, r1, #0x6
    swpb r0, r0, [r1]
L_02047038:
    ldr r0, =data_020d00dc
    ldmfd sp!, {r3, pc}
}
// clang-format on
