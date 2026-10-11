#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020414ac();
extern void func_02041da8();
extern void func_02084fe8();
extern void func_020851a4();
extern void r2();
extern char data_020bed64[];
extern char data_020e3a80[];
extern char func_02087630[];
extern char func_0208763c[];
extern char func_02087648[];
extern char func_02087654[];
extern char func_02087660[];
extern char func_02087688[];
extern char func_02087694[];
extern char func_020876a0[];
extern char func_020876ac[];
extern char func_020876b8[];
extern char func_020876f8[];
extern char func_02087704[];
extern char func_02087710[];
extern char func_02087714[];
extern char func_02087790[];
extern char func_020877c8[];
extern char func_020877fc[];
extern char func_02087824[];
extern char func_020878f8[];
extern char func_02087910[];
extern char func_02087948[];
extern char func_02087960[];
extern char func_0208796c[];
extern char func_02087970[];
extern char func_02087a74[];
extern char func_02087a8c[];
extern char func_02087ad0[];
extern char func_02087adc[];
extern char func_02087ae8[];
extern char func_02087b00[];
extern char func_02087b18[];
extern char func_02087b24[];
extern char func_02087b58[];
extern char func_02087b64[];
extern char func_02087b7c[];
extern char func_02087b94[];
extern char func_02087ba0[];
extern char func_02087bac[];
// clang-format off
asm void func_02087358(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r2, =data_020bed64
    mov r4, r0
    ldr r0, [r2, #0x0]
    mov r10, r1
    cmp r0, #0x0
    beq L_020874b0
    ldr r3, =func_02087630
    ldr r1, =data_020e3a80
    ldr r0, =func_0208763c
    str r3, [r1, #0x0]
    ldr r3, =func_02087648
    str r0, [r1, #0x4]
    ldr r0, =func_02087654
    str r3, [r1, #0x14]
    ldr r3, =func_02087660
    str r0, [r1, #0x24]
    ldr r0, =func_02087688
    str r3, [r1, #0x30]
    ldr r3, =func_02087694
    str r0, [r1, #0x8]
    ldr r0, =func_020876a0
    str r3, [r1, #0xc]
    ldr r3, =func_020876ac
    str r0, [r1, #0x10]
    ldr r0, =func_020876b8
    str r3, [r1, #0x2c]
    ldr r3, =func_020876f8
    str r0, [r1, #0x34]
    ldr r0, =func_02087704
    str r3, [r1, #0x18]
    ldr r3, =func_02087710
    str r0, [r1, #0x1c]
    ldr r0, =func_02087714
    str r3, [r1, #0x40]
    ldr r3, =func_020878f8
    str r0, [r1, #0x3c]
    ldr r0, =func_02087910
    str r3, [r1, #0x5c]
    ldr r3, =func_02087948
    str r0, [r1, #0x60]
    ldr r0, =func_02087960
    str r3, [r1, #0x68]
    ldr r5, =func_0208796c
    str r0, [r1, #0x48]
    mov r0, #0x0
    ldr r3, =func_02087970
    str r5, [r1, #0x4c]
    ldr r5, =func_02087a74
    str r3, [r1, #0x70]
    ldr r3, =func_02087a8c
    str r5, [r1, #0x38]
    ldr r5, =func_02087ad0
    str r3, [r1, #0x50]
    ldr r3, =func_02087adc
    str r5, [r1, #0x44]
    ldr r5, =func_02087ae8
    str r3, [r1, #0x54]
    ldr r3, =func_02087b00
    str r5, [r1, #0x64]
    ldr r5, =func_02087b18
    str r3, [r1, #0x58]
    ldr r3, =func_02087b24
    str r5, [r1, #0x74]
    ldr r5, =func_02087b58
    str r3, [r1, #0x78]
    ldr r3, =func_02087790
    str r5, [r1, #0x6c]
    ldr r5, =func_020877c8
    str r3, [r1, #0x8c]
    ldr r3, =func_020877fc
    str r5, [r1, #0x98]
    ldr r5, =func_02087b64
    str r3, [r1, #0x94]
    ldr r3, =func_02087b7c
    str r5, [r1, #0x7c]
    ldr r5, =func_02087b94
    str r3, [r1, #0x80]
    ldr r3, =func_02087ba0
    str r5, [r1, #0x84]
    ldr r5, =func_02087824
    str r3, [r1, #0x88]
    ldr r3, =func_02087bac
    str r5, [r1, #0x9c]
    str r0, [r2, #0x0]
    str r3, [r1, #0x90]
L_020874b0:
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_020851a4
    mov r6, r0
    mov r1, r4
    mov r2, r10, lsl #0x2
    mov r0, #0x52
    bl func_020414ac
    mov r11, r0
    mov r7, r6
    mov r8, r11
    cmp r10, #0x0
    mov r9, #0x0
    ble L_0208756c
    ldr r4, =data_020e3a80
    mov r5, r9
L_020874f4:
    swpb r0, r5, [r7]
    add r1, r7, #0x1
    swpb r0, r5, [r1]
    add r1, r7, #0x2
    swpb r0, r5, [r1]
    add r1, r7, #0x3
    swpb r0, r5, [r1]
    add r1, r7, #0x4
    swpb r0, r5, [r1]
    add r1, r7, #0x5
    swpb r0, r5, [r1]
    add r3, r7, #0x6
    swpb r0, r5, [r3]
    add r2, r7, #0x7
    swpb r0, r5, [r2]
    mov r0, r8
    ldrb ip, [r8, #0x0]
    mov r1, r7
    swpb ip, ip, [r2]
    ldrb r2, [r8, #0x1]
    swpb r2, r2, [r3]
    ldrb r2, [r8], #0x4
    ldr r2, [r4, r2, lsl #0x2]
    blx r2
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    cmp r10, r0, asr #0x10
    mov r9, r0, asr #0x10
    add r7, r7, #0x8
    bgt L_020874f4
L_0208756c:
    mov r1, #0x0
    mov r0, r7
    mov r3, r1
    mov r2, #0x8
    bl func_02084fe8
    mov r0, r11
    bl func_02041da8
    mov r0, r6
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
