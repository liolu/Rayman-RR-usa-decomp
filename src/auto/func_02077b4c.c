#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003e60();
extern void func_0200d6fc();
extern void func_0200e978();
extern void func_02017204();
extern void func_02017d70();
extern void func_0202c4ec();
extern void func_020738c4();
extern void func_020738e8();
extern void func_02075240();
extern void func_02075958();
extern void func_02077868();
extern void func_02078260();
extern void func_020791f4();
extern char data_020bd058[];
extern char data_020be828[];
extern char data_020be834[];
extern char data_020de6a0[];
extern char data_020df7a0[];
extern char data_020dfbb4[];
extern char data_020dfbc4[];
extern char data_020dfbf4[];
// clang-format off
asm void func_02077b4c(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    bne L_02077cd8
    bl func_0200e978
    ldr r0, =data_020dfbf4
    ldr r2, =data_020de6a0
    ldr r0, [r0, #0x4]
    mov r1, #0x1
    str r1, [r2, #0x8]
    cmp r0, #0x0
    ldrb r0, [r2, #0x1e]
    beq L_02077c90
    cmp r0, #0x21
    mov r1, #0x0
    bne L_02077b94
    mov r0, #0x22
    bl func_02075240
    b L_02077b98
L_02077b94:
    bl func_02075240
L_02077b98:
    ldr r2, =data_020dfbf4
    ldr r1, =data_020dfbc4
    ldrb r3, [r2, #0x78]
    mov ip, #0x1
    ldr r0, =data_020dfbb4
    str ip, [r1, r3, lsl #0x2]
    ldr r4, =0x4001000
    str ip, [r0, r3, lsl #0x2]
    ldr r3, [r4, #0x0]
    mov r1, #0x0
    bic r3, r3, #0xe000
    str r3, [r4, #0x0]
    ldr r3, [r4, #0x0]
    bic r3, r3, #0x1f00
    orr r3, r3, #0x1100
    str r3, [r4, #0x0]
    str ip, [r2, #0x0]
    bl func_02078260
    ldr r0, =data_020dfbf4
    bl func_020791f4
    ldr r0, =data_020de6a0
    ldr r0, [r0, #0xc]
    cmp r0, #0x1
    bne L_02077c18
    ldr r3, =data_020dfbf4
    mov r1, #0x20
    add r2, r3, #0x6a
    swpb r1, r1, [r2]
    add r2, r3, #0xa0
    mov r1, #0x1
    swpb r1, r1, [r2]
    b L_02077c74
L_02077c18:
    cmp r0, #0x2
    bne L_02077c40
    ldr r3, =data_020dfbf4
    mov r1, #0x10
    add r2, r3, #0x6a
    swpb r1, r1, [r2]
    add r2, r3, #0xa0
    mov r1, #0x0
    swpb r1, r1, [r2]
    b L_02077c74
L_02077c40:
    cmp r0, #0x5
    bne L_02077c58
    ldr r1, =data_020dfbf4
    mov r2, #0x1
    str r2, [r1, #0x9c]
    b L_02077c74
L_02077c58:
    ldr r3, =data_020dfbf4
    mov r1, #0x3e
    add r2, r3, #0x6a
    swpb r1, r1, [r2]
    add r2, r3, #0xa0
    mov r1, #0x0
    swpb r1, r1, [r2]
L_02077c74:
    cmp r0, #0x1
    cmpne r0, #0x2
    moveq r1, #0x1
    ldr r0, =data_020dfbf4
    movne r1, #0x0
    str r1, [r0, #0x98]
    b L_02077c94
L_02077c90:
    bl func_02075240
L_02077c94:
    ldr r4, =data_020de6a0
    mov ip, #0x0
    ldr r1, =data_020df7a0
    ldr r2, =0xc0c0c0c0
    mov r0, #0x3
    mov r3, #0x400
    str ip, [r4, #0x8]
    bl func_02017d70
    bl func_02075958
    ldr r0, =data_020df7a0
    mov r1, #0x400
    bl func_0200d6fc
    ldr r0, =data_020df7a0
    mov r1, #0x0
    mov r2, #0x400
    bl func_02017204
    ldmfd sp!, {r4, pc}
L_02077cd8:
    ldr r1, =data_020de6a0
    ldr r2, [r1, #0x14]
    str r2, [r1, #0x18]
    ldr r2, [r1, #0xc]
    str r2, [r1, #0x10]
    bl func_02077868
    ldr r1, =data_020de6a0
    mov r2, #0x4
    str r0, [r1, #0xc]
    mov r0, #0x0
    add ip, r1, #0x1c
    swpb r3, r0, [ip]
    mov r1, r0
    bl func_0202c4ec
    ldr r3, =data_020de6a0
    add r0, r0, #0x19
    add r1, r3, #0x1d
    swpb r0, r0, [r1]
    add r1, r3, #0x1e
    mov r0, #0x21
    swpb r0, r0, [r1]
    mov r2, #0x2
    mov r0, #0x0
    str r0, [r3, #0x20]
    str r2, [r3, #0x14]
    ldr r2, [r3, #0xc]
    cmp r2, #0xa
    addls pc, pc, r2, lsl #0x2
    b L_02077ea0
L_02077d4c:
    b L_02077ea0
    b L_02077d78
    b L_02077d9c
    b L_02077dc0
    b L_02077ea0
    b L_02077ddc
    b L_02077e38
    b L_02077e48
    b L_02077dec
    b L_02077e2c
    b L_02077ea0
L_02077d78:
    add r2, r3, #0x1c
    mov r4, #0x1
    swpb r0, r4, [r2]
    mov r0, #0x4
    str r0, [r3, #0x14]
    str r4, [r3, #0x20]
    mov r0, #0x22
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077d9c:
    add r2, r3, #0x1c
    mov r4, #0x1
    swpb r0, r4, [r2]
    mov r0, #0x4
    str r0, [r3, #0x14]
    str r4, [r3, #0x20]
    mov r0, #0x23
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077dc0:
    add r1, r3, #0x1c
    mov r2, #0x1
    swpb r0, r2, [r1]
    mov r0, #0x4
    str r0, [r3, #0x14]
    str r2, [r3, #0x20]
    b L_02077ea0
L_02077ddc:
    mov r2, #0x8
    str r2, [r3, #0x14]
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077dec:
    mov r4, #0x4
    mov r1, r0
    mov r2, #0x3
    str r4, [r3, #0x14]
    bl func_0202c4ec
    ldr r3, =data_020de6a0
    ldr r2, =data_020bd058
    add r1, r3, #0x1e
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldrb r3, [r3, #0x1e]
    str r0, [r2, #0x0]
    mov r0, r3, lsl #0x1
    add r0, r0, #0xe
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077e2c:
    mov r0, #0x16
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077e38:
    add r1, r3, #0x1c
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02077ea0
L_02077e48:
    ldr r1, =data_020be828
    mov r0, r4
    add r3, r3, #0x1c
    mov r2, #0x1
    swpb r2, r2, [r3]
    bl func_02003e60
    cmp r0, #0x0
    bne L_02077e7c
    ldr r0, =data_020de6a0
    mov r2, #0x17
    add r1, r0, #0x1e
    swpb r0, r2, [r1]
    b L_02077ea0
L_02077e7c:
    ldr r1, =data_020be834
    mov r0, r4
    bl func_02003e60
    cmp r0, #0x0
    bne L_02077ea0
    ldr r0, =data_020de6a0
    mov r2, #0x18
    add r1, r0, #0x1e
    swpb r0, r2, [r1]
L_02077ea0:
    ldr r0, =data_020de6a0
    mov r1, #0x1
    ldrb r0, [r0, #0x1d]
    bl func_02075240
    ldr r0, =data_020de6a0
    ldrb r0, [r0, #0x1c]
    bl func_020738c4
    bl func_020738e8
    ldr r1, =data_020df7a0
    ldr r2, =0xc0c0c0c0
    mov r0, #0x3
    mov r3, #0x400
    bl func_02017d70
    bl func_02075958
    ldr r0, =data_020df7a0
    mov r1, #0x400
    bl func_0200d6fc
    ldr r0, =data_020df7a0
    mov r1, #0x0
    mov r2, #0x400
    bl func_02017204
    ldmfd sp!, {r4, pc}
}
// clang-format on
