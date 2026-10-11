#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84a0();
extern void func_01ff87ec();
extern void func_0201c454();
extern void func_0202c820();
extern void func_0202d964();
extern void func_0202dc18();
extern void func_0202e19c();
extern void func_0202e1e0();
extern void func_020372e4();
extern void func_02067900();
extern void func_02084248();
extern void func_02084450();
extern void func_020931d8();
extern void func_0209c740();
// clang-format off
asm void func_0209e230(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x78
    mov r8, r1
    ldr r4, [r8, #-0x8]
    mov r9, r0
    mov r7, #0x0
    mov r0, r4
    mov r6, r7
    str r9, [sp, #0x4]
    mov r5, #0xff
    mov r10, #0x1
    bl func_020931d8
    add r2, sp, #0x4
    mov r1, r9
    bl func_0209c740
    cmp r4, #0x6f
    ldr r11, [sp, #0x4]
    cmpne r4, #0x70
    beq L_0209e2f4
    cmp r4, #0x8f
    bne L_0209e3a0
    add r2, sp, #0x68
    mov r0, r9
    mov r1, r8
    bl func_02084450
    ldr r1, [sp, #0x68]
    mov r8, r0
    and r5, r1, #0xff
    cmp r5, #0xff
    bne L_0209e2b4
    bl func_02084248
    add sp, sp, #0x78
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209e2b4:
    ldr r0, [sp, #0x4]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x9c]
    cmp r1, #0x0
    beq L_0209e2d8
    mov r0, #0x14
    mul r0, r5, r0
    ldr r7, [r1, r0]
L_0209e2d8:
    add r2, sp, #0x68
    mov r0, r9
    mov r1, r8
    bl func_02084450
    ldr r1, [sp, #0x68]
    mov r8, r0
    and r10, r1, #0xff
L_0209e2f4:
    add r2, sp, #0x68
    mov r0, r9
    mov r1, r8
    bl func_02084450
    add ip, sp, #0x68
    mov r8, r0
    add r3, sp, #0x5c
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r8
    mov r2, ip
    mov r0, r9
    bl func_02084450
    mov r8, r0
    add ip, sp, #0x68
    add r3, sp, #0x50
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r8
    mov r2, ip
    mov r0, r9
    bl func_02084450
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x68]
    cmp r4, #0x70
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    and r4, r0, #0xff
    moveq r0, #0x1
    movne r0, #0x0
    orr r0, r6, r0
    ands r6, r0, #0xff
    beq L_0209e3ac
    ldr r1, [sp, #0x0]
    add r2, sp, #0x68
    mov r0, r9
    bl func_02084450
    add r1, sp, #0x68
    str r0, [sp, #0x0]
    add r3, sp, #0x44
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e3ac
L_0209e3a0:
    add sp, sp, #0x78
    mov r0, r8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0209e3ac:
    cmp r5, #0xff
    beq L_0209e3ec
    cmp r10, #0x0
    bne L_0209e3e4
    ldr r1, [sp, #0x4]
    add r0, sp, #0x5c
    ldr r8, [r1, #0x24]
    mov r2, r0
    mov r1, r8
    bl func_0202c820
    add r0, sp, #0x50
    mov r1, r8
    mov r2, r0
    bl func_0202c820
L_0209e3e4:
    cmp r7, #0x0
    strne r7, [sp, #0x4]
L_0209e3ec:
    ldr r0, [sp, #0x4]
    cmp r6, #0x0
    ldr r7, [r0, #0x24]
    beq L_0209e40c
    add r0, sp, #0x38
    add r2, sp, #0x44
    mov r1, r7
    bl func_0202c820
L_0209e40c:
    add r1, sp, #0x2c
    add r2, sp, #0x20
    add r3, sp, #0x14
    mov r0, r7
    bl func_0202dc18
    ldr r0, [sp, #0x5c]
    cmp r0, #0x0
    ldreq r0, [sp, #0x60]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x64]
    cmpeq r0, #0x0
    bne L_0209e49c
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0209e4d4
L_0209e448:
    b L_0209e460
    b L_0209e460
    b L_0209e474
    b L_0209e474
    b L_0209e488
    b L_0209e488
L_0209e460:
    add r0, sp, #0x20
    add r3, sp, #0x5c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e4d4
L_0209e474:
    add r0, sp, #0x14
    add r3, sp, #0x5c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e4d4
L_0209e488:
    add r0, sp, #0x2c
    add r3, sp, #0x5c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e4d4
L_0209e49c:
    add r0, sp, #0x5c
    mov r1, r0
    bl func_01ff84a0
    cmp r4, #0x1
    bhi L_0209e4d4
    ldr r2, [sp, #0x5c]
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x64]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x5c]
    str r1, [sp, #0x60]
    str r0, [sp, #0x64]
L_0209e4d4:
    ldr r0, [sp, #0x50]
    cmp r0, #0x0
    ldreq r0, [sp, #0x54]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x58]
    cmpeq r0, #0x0
    bne L_0209e550
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0209e58c
L_0209e4fc:
    b L_0209e514
    b L_0209e528
    b L_0209e53c
    b L_0209e528
    b L_0209e514
    b L_0209e53c
L_0209e514:
    add r0, sp, #0x14
    add r3, sp, #0x50
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e58c
L_0209e528:
    add r0, sp, #0x2c
    add r3, sp, #0x50
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e58c
L_0209e53c:
    add r0, sp, #0x20
    add r3, sp, #0x50
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_0209e58c
L_0209e550:
    add r0, sp, #0x50
    mov r1, r0
    bl func_01ff84a0
    cmp r4, #0x2
    cmpne r4, #0x5
    bne L_0209e58c
    ldr r2, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r0, [sp, #0x58]
    rsb r2, r2, #0x0
    rsb r1, r1, #0x0
    rsb r0, r0, #0x0
    str r2, [sp, #0x50]
    str r1, [sp, #0x54]
    str r0, [sp, #0x58]
L_0209e58c:
    cmp r4, #0x5
    addls pc, pc, r4, lsl #0x2
    b L_0209e9fc
L_0209e598:
    b L_0209e948
    b L_0209e890
    b L_0209e7d8
    b L_0209e720
    b L_0209e668
    b L_0209e5b0
L_0209e5b0:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x58]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x54]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x50]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x58]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x54]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x50]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e61c
    add r0, sp, #0x14
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e61c:
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x1c]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    str r0, [sp, #0x28]
    b L_0209e9fc
L_0209e668:
    ldr r0, [sp, #0x54]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x58]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x58]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x50]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x54]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e6d4
    add r0, sp, #0x20
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e6d4:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x24]
    bl func_01ff87ec
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x28]
    bl func_01ff87ec
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x24]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x20]
    bl func_01ff87ec
    str r0, [sp, #0x1c]
    b L_0209e9fc
L_0209e720:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x58]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x54]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x50]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x58]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x54]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x50]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e78c
    add r0, sp, #0x20
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e78c:
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x28]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x24]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    str r0, [sp, #0x34]
    b L_0209e9fc
L_0209e7d8:
    ldr r0, [sp, #0x54]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x58]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x58]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x50]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x54]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e844
    add r0, sp, #0x2c
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e844:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x34]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x30]
    bl func_01ff87ec
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x2c]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x34]
    bl func_01ff87ec
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x30]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x2c]
    bl func_01ff87ec
    str r0, [sp, #0x28]
    b L_0209e9fc
L_0209e890:
    ldr r0, [sp, #0x54]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x58]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x58]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x50]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x54]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e8fc
    add r0, sp, #0x14
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e8fc:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x1c]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x18]
    bl func_01ff87ec
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x1c]
    bl func_01ff87ec
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x18]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x14]
    bl func_01ff87ec
    str r0, [sp, #0x34]
    b L_0209e9fc
L_0209e948:
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x58]
    ldr r2, [sp, #0x64]
    ldr r3, [sp, #0x54]
    bl func_01ff87ec
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x64]
    ldr r1, [sp, #0x50]
    ldr r2, [sp, #0x5c]
    ldr r3, [sp, #0x58]
    bl func_01ff87ec
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x54]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x50]
    bl func_01ff87ec
    ldr r1, [sp, #0x8]
    str r0, [sp, #0x10]
    cmp r1, #0x0
    ldreq r1, [sp, #0xc]
    cmpeq r1, #0x0
    cmpeq r0, #0x0
    beq L_0209e9b4
    add r0, sp, #0x2c
    add r1, sp, #0x8
    bl func_01ff84a0
L_0209e9b4:
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x34]
    ldr r3, [sp, #0x60]
    bl func_01ff87ec
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x34]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x64]
    bl func_01ff87ec
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x2c]
    ldr r1, [sp, #0x60]
    ldr r2, [sp, #0x30]
    ldr r3, [sp, #0x5c]
    bl func_01ff87ec
    str r0, [sp, #0x1c]
L_0209e9fc:
    cmp r4, #0x2
    bhs L_0209ea1c
    add r1, sp, #0x2c
    add r2, sp, #0x5c
    add r3, sp, #0x14
    mov r0, r7
    bl func_0202d964
    b L_0209ea4c
L_0209ea1c:
    cmp r4, #0x4
    add r2, sp, #0x20
    bhs L_0209ea3c
    add r1, sp, #0x2c
    add r3, sp, #0x5c
    mov r0, r7
    bl func_0202d964
    b L_0209ea4c
L_0209ea3c:
    add r1, sp, #0x5c
    add r3, sp, #0x14
    mov r0, r7
    bl func_0202d964
L_0209ea4c:
    cmp r6, #0x0
    beq L_0209eadc
    add r0, sp, #0x8
    add r2, sp, #0x44
    mov r1, r7
    bl func_0202c820
    ldr r3, [sp, #0x38]
    ldr r2, [sp, #0x8]
    ldr r1, [sp, #0x3c]
    sub r4, r3, r2
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x40]
    sub r3, r1, r0
    ldr r0, [sp, #0x10]
    add r1, sp, #0x44
    sub r2, r2, r0
    mov r0, r7
    str r4, [sp, #0x38]
    str r3, [sp, #0x3c]
    str r2, [sp, #0x40]
    bl func_0202e1e0
    ldr r3, [sp, #0x44]
    ldr r2, [sp, #0x38]
    ldr r1, [sp, #0x48]
    add r4, r3, r2
    ldr r0, [sp, #0x3c]
    ldr r2, [sp, #0x4c]
    add r3, r1, r0
    ldr r0, [sp, #0x40]
    add r1, sp, #0x44
    add r2, r2, r0
    mov r0, r7
    str r4, [sp, #0x44]
    str r3, [sp, #0x48]
    str r2, [sp, #0x4c]
    bl func_0202e19c
L_0209eadc:
    ldr r4, [sp, #0x4]
    mov r0, r4
    bl func_0201c454
    cmp r5, #0xff
    moveq r0, #0x1
    movne r0, #0x0
    tst r0, #0xff
    cmpne r7, #0x0
    ldrne r0, [r4, #0x4]
    ldrne r0, [r0, #0x8]
    cmpne r0, #0x0
    beq L_0209eb18
    bl func_02067900
    mov r1, r7
    bl func_020372e4
L_0209eb18:
    cmp r5, #0xff
    beq L_0209eb34
    ldr r0, [r11, #0x4]
    mov r2, #0x1
    ldr r0, [r0, #0x0]
    add r1, r0, #0xf4
    swpb r0, r2, [r1]
L_0209eb34:
    ldr r0, [sp, #0x0]
    add sp, sp, #0x78
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
