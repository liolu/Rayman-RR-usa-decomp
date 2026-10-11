#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207a970();
extern void func_0207aa94();
extern char data_020bd594[];
extern char data_020be0d0[];
extern char data_020de778[];
// clang-format off
asm void func_02074e78(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r0, #0x1
    mov r6, #0x0
    bl func_0207a970
    ldr r8, =data_020bd594
    mov r7, r6
    ldr r1, [r8, #0xb38]
    cmp r1, #0x0
    ble L_02074ef0
    ldr r5, =data_020be0d0
    mov r4, #0x1
L_02074ea4:
    add r1, r5, r7, lsl #0x2
    ldrb r1, [r1, #0x3]
    cmp r1, #0x0
    beq L_02074ec8
    mov r0, r4
    bl func_0207a970
    add r1, r5, r7, lsl #0x2
    add r2, r1, #0x3
    swpb r1, r0, [r2]
L_02074ec8:
    add r1, r5, r7, lsl #0x2
    ldrb r1, [r1, #0x2]
    cmp r1, #0x0
    beq L_02074ee0
    cmp r1, r6
    movgt r6, r1
L_02074ee0:
    ldr r1, [r8, #0xb38]
    add r7, r7, #0x1
    cmp r7, r1
    blt L_02074ea4
L_02074ef0:
    cmp r6, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_020de778
    add r1, r6, #0x1
    bl func_0207aa94
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
