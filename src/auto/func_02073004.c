#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_020473d4();
extern void func_02047404();
extern char data_020bd49c[];
extern char data_020bd49d[];
extern char data_020bd560[];
extern char data_020dc19c[];
// clang-format off
asm void func_02073004(void) {
    stmfd sp!, {r4, lr}
    sub r4, r0, #0x1
    mov r0, r4
    bl func_02047404
    movs r1, r0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, pc}
    ldr r0, =data_020bd49d
    mov r2, #0xc0
    bl func_02001588
    mov r0, r4
    bl func_020473d4
    ldr r2, =data_020dc19c
    mov r3, #0x63
    add r1, r2, #0x78
    add r1, r1, #0xc00
    swpb r0, r0, [r1]
    add r0, r2, #0x79
    add r1, r0, #0xc00
    swpb r0, r3, [r1]
    ldr r2, =data_020bd560
    mov r3, #0x0
    ldr r1, =data_020bd49c
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
}
// clang-format on
