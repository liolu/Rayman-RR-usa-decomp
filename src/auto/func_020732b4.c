#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dc19c[];
extern char data_020de168[];
extern char data_020de169[];
extern char data_020de16c[];
extern char data_020de170[];
extern char data_020de1f4[];
extern char data_020de1f8[];
// clang-format off
asm void func_020732b4(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, [sp, #0x28]
    ldr r1, [sp, #0x14]
    cmp r0, #0x0
    ldr r0, [sp, #0x20]
    beq L_020733fc
    ldr r2, =data_020dc19c
    ldr r5, [sp, #0x1c]
    ldr r4, [sp, #0x10]
    ldr lr, [r2, #0x74]
    ldr r2, =data_020de170
    ldr r3, =data_020de169
    mov ip, #0x0
    str lr, [r2, #0x0]
    cmp r5, r4
    swpb r2, ip, [r3]
    ble L_0207337c
    cmp r0, r1
    bge L_02073340
    ldr r2, =data_020de1f4
    mov r0, #0x2
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_02073340:
    ldr r2, =data_020de1f4
    mov r0, #0x3
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_0207337c:
    cmp r0, r1
    ble L_020733c0
    ldr r2, =data_020de1f4
    mov r0, #0x4
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x3
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_020733c0:
    ldr r2, =data_020de1f4
    mov r0, #0x1
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_020733fc:
    ldr r2, =data_020dc19c
    ldr lr, [sp, #0x1c]
    ldr ip, [sp, #0x10]
    ldr r5, [r2, #0x74]
    ldr r2, =data_020de16c
    ldr r3, =data_020de168
    mov r4, #0x0
    str r5, [r2, #0x0]
    cmp lr, ip
    swpb r2, r4, [r3]
    ble L_020734a8
    cmp r0, r1
    bge L_0207346c
    ldr r2, =data_020de1f8
    mov r0, #0x4
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_0207346c:
    ldr r2, =data_020de1f8
    mov r0, #0x1
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_020734a8:
    cmp r0, r1
    ble L_020734ec
    ldr r2, =data_020de1f8
    mov r0, #0x2
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x3
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
L_020734ec:
    ldr r2, =data_020de1f8
    mov r0, #0x3
    swpb r0, r0, [r2]
    add r1, r2, #0x1
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x3
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
