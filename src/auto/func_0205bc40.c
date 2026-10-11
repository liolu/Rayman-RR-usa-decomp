#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020dc18c[];
extern char data_020dc194[];
// clang-format off
asm void func_0205bc40(void) {
    stmfd sp!, {r3, lr}
    ldr r3, [r0, #0x4]
    ldr ip, [r3, #0x4]
    ldrb lr, [ip, #0x25]
    tst lr, #0x2
    movne r2, #0x1
    moveq r2, #0x0
    and r2, r2, #0xff
    cmp r2, #0x1
    ldmnefd sp!, {r3, pc}
    cmp r1, #0x0
    beq L_0205bc90
    tst lr, #0x1
    movne r2, #0x1
    moveq r2, #0x0
    tst r2, #0xff
    beq L_0205bca4
    ldr r2, [ip, #0x10]
    cmp r2, #0x2
    blt L_0205bca4
L_0205bc90:
    tst lr, #0x1
    movne r2, #0x1
    moveq r2, #0x0
    tst r2, #0xff
    ldmnefd sp!, {r3, pc}
L_0205bca4:
    ldr r2, =data_020dc18c
    ldr ip, [r0, #0x1c]
    ldr r2, [r2, #0x0]
    cmp ip, r2
    ldmnefd sp!, {r3, pc}
    ldr r2, [r3, #0x4]
    ldr lr, [r0, #0x14]
    ldrb r2, [r2, #0x24]
    cmp r2, #0x0
    beq L_0205bd78
    ldr r2, =data_020dc194
    cmp lr, #0x0
    ldr r2, [r2, #0x0]
    ldrne ip, [r0, #0x18]
    strne ip, [lr, #0x18]
    ldr lr, [r0, #0x18]
    cmp lr, #0x0
    ldrne ip, [r0, #0x14]
    strne ip, [lr, #0x14]
    ldr lr, [r0, #0x1c]
    cmp lr, #0x0
    beq L_0205bd30
    ldr ip, [lr, #0x10]
    sub ip, ip, #0x1
    str ip, [lr, #0x10]
    ldr lr, [r0, #0x1c]
    ldr ip, [lr, #0x8]
    cmp ip, r0
    ldreq ip, [r0, #0x14]
    streq ip, [lr, #0x8]
    ldr lr, [r0, #0x1c]
    ldr ip, [lr, #0xc]
    cmp ip, r0
    ldreq ip, [r0, #0x18]
    streq ip, [lr, #0xc]
L_0205bd30:
    mov ip, #0x0
    str ip, [r0, #0x14]
    str ip, [r0, #0x18]
    str ip, [r0, #0x1c]
    str ip, [r0, #0x18]
    ldr ip, [r2, #0x8]
    str ip, [r0, #0x14]
    str r2, [r0, #0x1c]
    ldr ip, [r2, #0xc]
    cmp ip, #0x0
    streq r0, [r2, #0xc]
    ldrne ip, [r2, #0x8]
    strne r0, [ip, #0x18]
    str r0, [r2, #0x8]
    ldr ip, [r2, #0x10]
    add ip, ip, #0x1
    str ip, [r2, #0x10]
    b L_0205be20
L_0205bd78:
    ldr r2, =data_020dc194
    cmp lr, #0x0
    ldr r2, [r2, #0x0]
    ldrne ip, [r0, #0x18]
    strne ip, [lr, #0x18]
    ldr lr, [r0, #0x18]
    cmp lr, #0x0
    ldrne ip, [r0, #0x14]
    strne ip, [lr, #0x14]
    ldr lr, [r0, #0x1c]
    cmp lr, #0x0
    beq L_0205bddc
    ldr ip, [lr, #0x10]
    sub ip, ip, #0x1
    str ip, [lr, #0x10]
    ldr lr, [r0, #0x1c]
    ldr ip, [lr, #0x8]
    cmp ip, r0
    ldreq ip, [r0, #0x14]
    streq ip, [lr, #0x8]
    ldr lr, [r0, #0x1c]
    ldr ip, [lr, #0xc]
    cmp ip, r0
    ldreq ip, [r0, #0x18]
    streq ip, [lr, #0xc]
L_0205bddc:
    mov ip, #0x0
    str ip, [r0, #0x14]
    str ip, [r0, #0x18]
    str ip, [r0, #0x1c]
    str ip, [r0, #0x14]
    ldr ip, [r2, #0xc]
    str ip, [r0, #0x18]
    str r2, [r0, #0x1c]
    ldr ip, [r2, #0x8]
    cmp ip, #0x0
    streq r0, [r2, #0x8]
    ldrne ip, [r2, #0xc]
    strne r0, [ip, #0x14]
    str r0, [r2, #0xc]
    ldr ip, [r2, #0x10]
    add ip, ip, #0x1
    str ip, [r2, #0x10]
L_0205be20:
    ldr r2, [r3, #0x4]
    cmp r1, #0x0
    ldrb r1, [r2, #0x25]
    add r2, r2, #0x25
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    ldmeqfd sp!, {r3, pc}
    ldr r0, [r0, #0x4]
    ldr r1, [r0, #0x4]
    ldr r0, [r1, #0x20]
    orr r0, r0, #0x800
    str r0, [r1, #0x20]
    ldmfd sp!, {r3, pc}
}
// clang-format on
