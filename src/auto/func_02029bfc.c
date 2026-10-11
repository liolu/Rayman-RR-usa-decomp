#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020299c4();
// clang-format off
asm void func_02029bfc(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x48
    mov r4, r2
    ldr ip, [r4, #0x0]
    add r7, sp, #0x30
    ldr r5, [ip, #0x4]
    mov r3, #0x6
    add r6, r5, #0x48
L_02029c1c:
    ldrb r0, [r6, #0x0]
    ldrb r2, [r6, #0x1]
    add r6, r6, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r2, [r7]
    add r7, r7, #0x1
    bne L_02029c1c
    add r7, sp, #0x3c
    add r6, r5, #0x54
    mov r3, #0x6
L_02029c4c:
    ldrb r0, [r6, #0x0]
    ldrb r2, [r6, #0x1]
    add r6, r6, #0x2
    subs r3, r3, #0x1
    swpb r0, r0, [r7]
    add r7, r7, #0x1
    swpb r0, r2, [r7]
    add r7, r7, #0x1
    bne L_02029c4c
    ldr r2, [r1, #0x0]
    ldr r0, [sp, #0x30]
    cmp r2, r0
    blt L_02029c8c
    ldr r0, [sp, #0x3c]
    cmp r2, r0
    ble L_02029c94
L_02029c8c:
    mov r0, #0x0
    b L_02029ce0
L_02029c94:
    ldr r2, [r1, #0x4]
    ldr r0, [sp, #0x34]
    cmp r2, r0
    blt L_02029cb0
    ldr r0, [sp, #0x40]
    cmp r2, r0
    ble L_02029cb8
L_02029cb0:
    mov r0, #0x0
    b L_02029ce0
L_02029cb8:
    ldr r2, [r1, #0x8]
    ldr r0, [sp, #0x38]
    cmp r2, r0
    blt L_02029cd4
    ldr r0, [sp, #0x44]
    cmp r2, r0
    ble L_02029cdc
L_02029cd4:
    mov r0, #0x0
    b L_02029ce0
L_02029cdc:
    mov r0, #0x1
L_02029ce0:
    cmp r0, #0x0
    beq L_02029e2c
    ldrb r0, [r5, #0x6c]
    cmp r0, #0x0
    bne L_02029e2c
    ldr r0, [ip, #0x4]
    ldr r6, [r0, #0x2c]
    ldr ip, [r0, #0x28]
    cmp r6, #0x0
    addle sp, sp, #0x48
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02029d0c:
    ldr r7, [ip, #0x0]
    ldrsb r0, [r5, #0x6f]
    ldr lr, [r7, #0x4]
    ldrsb r2, [lr, #0x6f]
    cmp r2, r0
    addle sp, sp, #0x48
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r0, [lr, #0x6c]
    cmp r0, #0x0
    bne L_02029e14
    add r3, sp, #0x18
    add r2, lr, #0x48
    mov r0, #0x6
L_02029d40:
    ldrb r8, [r2, #0x0]
    ldrb r9, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r8, r8, [r3]
    add r3, r3, #0x1
    swpb r8, r9, [r3]
    add r3, r3, #0x1
    bne L_02029d40
    add r0, sp, #0x24
    add r9, lr, #0x54
    mov r8, #0x6
L_02029d70:
    ldrb r2, [r9, #0x0]
    ldrb r3, [r9, #0x1]
    add r9, r9, #0x2
    subs r8, r8, #0x1
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    swpb r2, r3, [r0]
    add r0, r0, #0x1
    bne L_02029d70
    ldr r2, [r1, #0x0]
    ldr r0, [sp, #0x18]
    cmp r2, r0
    blt L_02029db0
    ldr r0, [sp, #0x24]
    cmp r2, r0
    ble L_02029db8
L_02029db0:
    mov r0, #0x0
    b L_02029e04
L_02029db8:
    ldr r2, [r1, #0x4]
    ldr r0, [sp, #0x1c]
    cmp r2, r0
    blt L_02029dd4
    ldr r0, [sp, #0x28]
    cmp r2, r0
    ble L_02029ddc
L_02029dd4:
    mov r0, #0x0
    b L_02029e04
L_02029ddc:
    ldr r2, [r1, #0x8]
    ldr r0, [sp, #0x20]
    cmp r2, r0
    blt L_02029df8
    ldr r0, [sp, #0x2c]
    cmp r2, r0
    ble L_02029e00
L_02029df8:
    mov r0, #0x0
    b L_02029e04
L_02029e00:
    mov r0, #0x1
L_02029e04:
    cmp r0, #0x0
    addne sp, sp, #0x48
    strne r7, [r4, #0x0]
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02029e14:
    sub r6, r6, #0x1
    cmp r6, #0x0
    add ip, ip, #0x4
    bgt L_02029d0c
    add sp, sp, #0x48
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02029e2c:
    ldr r0, [ip, #0x4]
    ldr r6, [r0, #0x2c]
    ldr r7, [r0, #0x28]
    cmp r6, #0x0
    ble L_02029f44
L_02029e40:
    ldr r5, [r7, #0x0]
    ldr lr, [r5, #0x4]
    ldrb r0, [lr, #0x6c]
    cmp r0, #0x0
    bne L_02029f34
    add r3, sp, #0x0
    add r2, lr, #0x48
    mov r0, #0x6
L_02029e60:
    ldrb r8, [r2, #0x0]
    ldrb r9, [r2, #0x1]
    add r2, r2, #0x2
    subs r0, r0, #0x1
    swpb r8, r8, [r3]
    add r3, r3, #0x1
    swpb r8, r9, [r3]
    add r3, r3, #0x1
    bne L_02029e60
    add r0, sp, #0xc
    add lr, lr, #0x54
    mov r8, #0x6
L_02029e90:
    ldrb r2, [lr, #0x0]
    ldrb r3, [lr, #0x1]
    add lr, lr, #0x2
    subs r8, r8, #0x1
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    swpb r2, r3, [r0]
    add r0, r0, #0x1
    bne L_02029e90
    ldr r2, [r1, #0x0]
    ldr r0, [sp, #0x0]
    cmp r2, r0
    blt L_02029ed0
    ldr r0, [sp, #0xc]
    cmp r2, r0
    ble L_02029ed8
L_02029ed0:
    mov r0, #0x0
    b L_02029f24
L_02029ed8:
    ldr r2, [r1, #0x4]
    ldr r0, [sp, #0x4]
    cmp r2, r0
    blt L_02029ef4
    ldr r0, [sp, #0x10]
    cmp r2, r0
    ble L_02029efc
L_02029ef4:
    mov r0, #0x0
    b L_02029f24
L_02029efc:
    ldr r2, [r1, #0x8]
    ldr r0, [sp, #0x8]
    cmp r2, r0
    blt L_02029f18
    ldr r0, [sp, #0x14]
    cmp r2, r0
    ble L_02029f20
L_02029f18:
    mov r0, #0x0
    b L_02029f24
L_02029f20:
    mov r0, #0x1
L_02029f24:
    cmp r0, #0x0
    addne sp, sp, #0x48
    strne r5, [r4, #0x0]
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02029f34:
    sub r6, r6, #0x1
    cmp r6, #0x0
    add r7, r7, #0x4
    bgt L_02029e40
L_02029f44:
    ldr r0, [ip, #0x1c]
    bl func_020299c4
    str r0, [r4, #0x0]
    add sp, sp, #0x48
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
