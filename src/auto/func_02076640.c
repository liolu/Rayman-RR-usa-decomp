#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009848();
extern void func_0200a3b8();
extern void func_0200a42c();
extern void func_0200a4bc();
extern void func_0202c4ec();
extern void func_02075478();
extern void func_0207574c();
extern void func_0207578c();
extern void func_020758a0();
extern char data_020be594[];
extern char data_020be6e0[];
extern char data_020de6a0[];
extern char data_020de780[];
// clang-format off
asm void func_02076640(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x8
    ldr r0, =data_020be594
    ldrb r0, [r0, #0x14c]
    tst r0, #0x2
    beq L_020766dc
    ldr r0, =data_020de6a0
    ldr r1, [r0, #0x54]
    cmp r1, #0x0
    beq L_0207669c
    ldr r0, =data_020be6e0
    bl func_0207574c
    mov r0, #0x0
    mov r1, r0
    mov r2, #0x6e
    bl func_0202c4ec
    ldr r1, =data_020be594
    add r2, r0, #0x81
    str r0, [r1, #0x178]
    ldr r0, [r1, #0x168]
    str r0, [r1, #0x174]
    str r2, [r1, #0x170]
    b L_020766dc
L_0207669c:
    ldr r0, [r0, #0x58]
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020be6e0
    bl func_0207574c
    mov r0, #0x0
    mov r1, r0
    mov r2, #0x2c
    bl func_0202c4ec
    ldr r1, =data_020be594
    add r2, r0, #0xb
    str r0, [r1, #0x178]
    ldr r0, [r1, #0x168]
    str r0, [r1, #0x174]
    str r2, [r1, #0x170]
L_020766dc:
    ldr r2, =data_020de6a0
    mov r3, #0x0
    str r3, [r2, #0x54]
    ldr r0, =data_020be6e0
    add r1, sp, #0x4
    str r3, [r2, #0x58]
    mov r4, #0x2a
    bl func_0207578c
    and r0, r0, #0xff
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0207682c
L_0207670c:
    b L_02076724
    b L_02076788
    b L_02076798
    b L_020767ac
    b L_020767bc
    b L_02076820
L_02076724:
    ldr r3, [sp, #0x4]
    ldr r0, =data_020be6e0
    mov r1, #0x0
    mov r2, #0x1
    bl func_020758a0
    ldr r1, =data_020be594
    mov r6, r0
    ldr r7, [r1, #0x168]
    mov r0, r7
    bl func_0200a42c
    ldr r1, =data_020be594
    mov r5, r0
    ldr r0, [r1, #0x16c]
    sub r0, r0, r7
    bl func_0200a42c
    mov r1, r0
    mov r0, r6
    bl func_0200a4bc
    mov r1, r0
    mov r0, r5
    bl func_02009848
    bl func_0200a3b8
    ldr r1, =data_020be594
    str r0, [r1, #0x174]
    b L_0207682c
L_02076788:
    ldr r0, =data_020be594
    ldr r1, [r0, #0x16c]
    str r1, [r0, #0x174]
    b L_0207682c
L_02076798:
    ldr r0, =data_020be594
    mov r4, #0x2b
    ldr r1, [r0, #0x16c]
    str r1, [r0, #0x174]
    b L_0207682c
L_020767ac:
    ldr r0, =data_020be594
    ldr r1, [r0, #0x16c]
    str r1, [r0, #0x174]
    b L_0207682c
L_020767bc:
    ldr r3, [sp, #0x4]
    ldr r0, =data_020be6e0
    mov r1, #0x4
    mov r2, #0x5
    bl func_020758a0
    ldr r1, =data_020be594
    mov r6, r0
    ldr r7, [r1, #0x16c]
    mov r0, r7
    bl func_0200a42c
    ldr r1, =data_020be594
    mov r5, r0
    ldr r0, [r1, #0x168]
    sub r0, r0, r7
    bl func_0200a42c
    mov r1, r0
    mov r0, r6
    bl func_0200a4bc
    mov r1, r0
    mov r0, r5
    bl func_02009848
    bl func_0200a3b8
    ldr r1, =data_020be594
    str r0, [r1, #0x174]
    b L_0207682c
L_02076820:
    ldr r0, =data_020be594
    ldr r1, [r0, #0x168]
    str r1, [r0, #0x174]
L_0207682c:
    ldr r0, =data_020de780
    mov lr, #0x2
    ldr r1, [r0, #0x0]
    ldr ip, =data_020be594
    ldrb r0, [r1, #0x3]
    add r3, r1, #0x3
    mov r1, r4
    add r2, r0, #0x1
    swpb r2, r2, [r3]
    str lr, [sp, #0x0]
    ldr r2, [ip, #0x170]
    ldr r3, [ip, #0x174]
    bl func_02075478
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
