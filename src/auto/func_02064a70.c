#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c664();
extern void func_0205703c();
extern void func_02065038();
extern void func_02065188();
extern char data_020dc19c[];
extern char data_020dd720[];
// clang-format off
asm void func_02064a70(void) {
    stmfd sp!, {r3, r4, r5, lr}
    bl func_02065038
    bl func_0205703c
    mov r4, r0
    add r0, r4, #0x18
    bl func_0202c664
    mov r0, #0x0
    add r2, r4, #0x9a
    swpb r1, r0, [r2]
    add r2, r4, #0x9b
    swpb r1, r0, [r2]
    add r2, r4, #0xdb
    swpb r1, r0, [r2]
    ldr r1, =data_020dc19c
    strh r0, [r4, #0x98]
    str r0, [r4, #0xa8]
    strh r0, [r4, #0x8e]
    str r0, [r4, #0xbc]
    str r0, [r4, #0x90]
    str r0, [r4, #0x94]
    str r0, [r4, #0x4]
    str r0, [r4, #0x10]
    str r0, [r4, #0xc]
    ldr r1, [r1, #0x74]
    add r2, r4, #0xcf
    str r1, [r4, #0xc0]
    swpb r1, r0, [r2]
    sub r3, r0, #0x1
    str r0, [r4, #0xc4]
    strh r3, [r4, #0xcc]
    add r2, r4, #0xce
    swpb r1, r0, [r2]
    ldr r2, =0xffff
    add r1, r4, #0xda
    strh r2, [r4, #0xd8]
    swpb r0, r0, [r1]
    mov r2, #0x1000
    str r3, [r4, #0xe0]
    str r3, [r4, #0xdc]
    str r2, [r4, #0xd0]
    mov r0, r4
    mov r1, #0x1
    str r2, [r4, #0xd4]
    bl func_02065188
    add r1, r4, #0xf7
    mvn r0, #0x0
    swpb r0, r0, [r1]
    ldr ip, =data_020dd720
    add r2, r4, #0xfa
    ldrh r0, [ip, #0x0]
    mov r5, #0xff
    mov lr, #0x0
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1c
    add r0, r1, r0, ror #0x1c
    strh r0, [ip, #0x0]
    ldrh r1, [ip, #0x0]
    add r3, r4, #0x100
    mov r0, r4
    add r1, r1, #0x1
    strh r1, [ip, #0x0]
    ldrh r1, [ip, #0x0]
    strh r1, [r4, #0xf8]
    swpb r1, r5, [r2]
    str lr, [r4, #0x100]
    strh lr, [r3, #0x4]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
