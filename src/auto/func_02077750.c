#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02075040();
extern void func_020781dc();
extern void func_02079600();
extern char data_020be594[];
extern char data_020dbfcc[];
extern char data_020de76c[];
extern char data_020de780[];
extern char data_020df7a0[];
extern char data_020dfbb0[];
extern char data_020dfbf4[];
// clang-format off
asm void func_02077750(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020dfbf4
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    ldrne r1, [r0, #0x4]
    cmpne r1, #0x0
    beq L_020777a4
    bl func_02079600
    ldr r0, =data_020dbfcc
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bne L_020777a4
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    bic r0, r0, #0xe000
    orr r0, r0, #0x2000
    str r0, [r1, #0x0]
    ldr r0, [r1, #0x0]
    bic r0, r0, #0x1f00
    orr r0, r0, #0x1300
    str r0, [r1, #0x0]
L_020777a4:
    ldr r1, =data_020be594
    mvn r0, #0x0
    ldr r1, [r1, #0x190]
    cmp r1, r0
    beq L_020777c8
    bl func_02075040
    ldr r0, =data_020be594
    mvn r1, #0x0
    str r1, [r0, #0x190]
L_020777c8:
    ldr r0, =data_020dfbb0
    ldr r0, [r0, #0x0]
    bl func_020781dc
    ldr r0, =data_020de780
    ldr lr, [r0, #0x0]
    ldrb ip, [lr, #0x0]
    ldrb r0, [lr, #0x1]
    add r0, ip, r0
    cmp ip, r0
    bge L_02077820
    ldr r3, =data_020df7a0
    ldr r0, =0xc1fffcff
L_020777f8:
    ldr r1, [r3, ip, lsl #0x3]
    and r1, r1, r0
    orr r1, r1, #0x200
    str r1, [r3, ip, lsl #0x3]
    ldrb r2, [lr, #0x0]
    ldrb r1, [lr, #0x1]
    add ip, ip, #0x1
    add r1, r2, r1
    cmp ip, r1
    blt L_020777f8
L_02077820:
    ldr r0, =data_020de780
    ldr r2, =data_020de76c
    ldr r1, [r0, #0x0]
    ldrb r0, [r1], #0x3
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x0]
    ldrb r0, [r1], #0x3
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
