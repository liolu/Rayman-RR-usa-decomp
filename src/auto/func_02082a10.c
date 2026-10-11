#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02083314();
extern void func_02093228();
// clang-format off
asm void func_02082a10(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    movs r10, r0
    ldrne r0, [r10, #0xc]
    mov r9, r1
    cmpne r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r8, [r0, #0x4]
    ldr r4, [r0, #0x8]
    cmp r8, #0x0
    bne L_02082a44
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x8]
    ldr r8, [r0, #0x0]
L_02082a44:
    ldr r0, [r10, #0x0]
    mov r5, #0x0
    ldr r0, [r0, #0x8]
    ldrb r0, [r0, #0xc]
    cmp r0, #0x0
    ldmlsfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r11, r5
L_02082a60:
    ldr r0, [r10, #0xc]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x4]
    add r0, r1, r5, lsl #0x4
    ldr r6, [r0, #0x4]
    cmp r6, #0xa
    bne L_02082aa0
    ldr r2, [r1, r5, lsl #0x4]
    add r1, r4, r2
    swpb r0, r11, [r1]
    add r0, r8, r2
    ldrb r0, [r0, #0x1]
    add r1, r1, #0x1
    swpb r0, r0, [r1]
    b L_02082b10
L_02082aa0:
    ldr r0, [r0, #0xc]
    cmp r9, r0
    bgt L_02082b10
    mov r0, r6
    ldr r7, [r1, r5, lsl #0x4]
    bl func_02093228
    cmp r0, #0x29
    bne L_02082af4
    ldr r0, [r10, #0xc]
    ldr r1, [r10, #0x0]
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x0]
    ldr r2, [r1, #0x0]
    ldr r1, [r0, #0x4]
    mov r0, r6
    ldr r1, [r1, r5, lsl #0x4]
    add r1, r2, r1
    ldrb r1, [r1, #0x4]
    bl func_02083314
    b L_02082b00
L_02082af4:
    mov r0, r6
    mov r1, #0x0
    bl func_02083314
L_02082b00:
    mov r2, r0
    add r0, r4, r7
    add r1, r8, r7
    bl func_02001588
L_02082b10:
    ldr r0, [r10, #0x0]
    add r1, r5, #0x1
    ldr r0, [r0, #0x8]
    and r5, r1, #0xff
    ldrb r0, [r0, #0xc]
    cmp r5, r0
    blo L_02082a60
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
