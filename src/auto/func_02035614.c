#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020148a4();
extern void func_02014910();
// clang-format off
asm void func_02035614(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    ldr r1, [r4, #0x4]
    ldr r0, [r5, #0x8]
    tst r1, #0x1
    orrne r0, r0, #0x1
    biceq r0, r0, #0x1
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x2
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x2
    biceq r0, r0, #0x2
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x4
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x4
    biceq r0, r0, #0x4
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x8
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x8
    biceq r0, r0, #0x8
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x10
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x10
    biceq r0, r0, #0x10
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x20
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x20
    biceq r0, r0, #0x20
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x40
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x40
    biceq r0, r0, #0x40
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x80
    ldr r0, [r5, #0xc]
    orrne r0, r0, #0x100
    biceq r0, r0, #0x100
    str r0, [r5, #0xc]
    str r0, [r5, #0xc]
    ldr r0, [r4, #0x4]
    tst r0, #0x100
    ldr r0, [r5, #0xc]
    orrne r0, r0, #0x200
    biceq r0, r0, #0x200
    str r0, [r5, #0xc]
    str r0, [r5, #0xc]
    ldr r0, [r4, #0x4]
    tst r0, #0x20000
    ldr r0, [r5, #0xc]
    orrne r0, r0, #0x100000
    biceq r0, r0, #0x100000
    str r0, [r5, #0xc]
    str r0, [r5, #0xc]
    ldr r0, [r4, #0x4]
    tst r0, #0x200
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x80
    biceq r0, r0, #0x80
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x400
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x100
    biceq r0, r0, #0x100
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x800
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x200
    biceq r0, r0, #0x200
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x1000
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x400
    biceq r0, r0, #0x400
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x2000
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x800
    biceq r0, r0, #0x800
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x4000
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x1000
    biceq r0, r0, #0x1000
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r0, [r4, #0x4]
    tst r0, #0x8000
    ldr r0, [r5, #0x8]
    orrne r0, r0, #0x2000
    biceq r0, r0, #0x2000
    str r0, [r5, #0x8]
    str r0, [r5, #0x8]
    ldr r1, [r4, #0x8]
    mov r0, #0x1000
    str r1, [r5, #0x10]
    ldr r1, [r4, #0x14]
    str r1, [r5, #0x14]
    ldr r1, [r5, #0xc]
    orr r2, r1, #0x10
    bic r1, r2, #0x200000
    bic r1, r1, #0x2000000
    str r1, [r5, #0xc]
    ldr r3, [r5, #0x14]
    smull r2, r1, r3, r3
    adds r2, r2, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r2, #0x1000
    bl func_02014910
    bl func_020148a4
    str r0, [r5, #0x18]
    ldr r0, [r5, #0xc]
    tst r0, #0x2
    beq L_020358e4
    ldr r0, [r4, #0xc]
    add ip, r5, #0x190
    str r0, [r5, #0x1c]
    ldr r0, [r4, #0x10]
    add r3, r4, #0x30
    str r0, [r5, #0x20]
    ldr r0, [r4, #0x18]
    mov r2, #0x6
    str r0, [r5, #0x16c]
    ldr r0, [r4, #0x1c]
    str r0, [r5, #0x170]
    ldr r0, [r4, #0x20]
    str r0, [r5, #0x174]
L_0203588c:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [ip]
    add ip, ip, #0x1
    swpb r0, r1, [ip]
    add ip, ip, #0x1
    bne L_0203588c
    add r4, r5, #0x1c0
    add r3, r5, #0xe0
    mov r2, #0x6
L_020358bc:
    ldrb r0, [r3, #0x0]
    ldrb r1, [r3, #0x1]
    add r3, r3, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_020358bc
    ldmfd sp!, {r3, r4, r5, pc}
L_020358e4:
    tst r0, #0x4
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #0x24]
    str r0, [r5, #0x1f4]
    ldr r0, [r4, #0x28]
    str r0, [r5, #0x1f8]
    ldr r0, [r4, #0x2c]
    str r0, [r5, #0x1fc]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
