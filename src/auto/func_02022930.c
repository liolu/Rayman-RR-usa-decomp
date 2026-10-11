#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020c5404[];
extern char data_020c5408[];
extern char data_020c540c[];
extern char data_020c5410[];
// clang-format off
asm void func_02022930(void) {
    stmfd sp!, {r3, lr}
    mov r1, #0x0
    ldr r2, =data_020c5410
    mov lr, r1
    mvn r0, #0x0
    mov ip, #0x1
L_02022948:
    str lr, [r2, #0x0]
    str lr, [r2, #0x30]
    str lr, [r2, #0x8]
    str r0, [r2, #0x1c]
    str r0, [r2, #0x20]
    str lr, [r2, #0x24]
    str lr, [r2, #0x28]
    str lr, [r2, #0x2c]
    str lr, [r2, #0x34]
    str lr, [r2, #0x38]
    str lr, [r2, #0x3c]
    add r1, r1, #0x1
    str ip, [r2, #0xc]
    cmp r1, #0xa
    add r2, r2, #0x44
    blt L_02022948
    ldr r2, =data_020c5408
    ldr r3, =data_020c540c
    ldr r1, =data_020c5404
    swpb r0, lr, [r2]
    str ip, [r3, #0x0]
    str lr, [r1, #0x0]
    mov r0, #0x3
    ldmfd sp!, {r3, pc}
}
// clang-format on
