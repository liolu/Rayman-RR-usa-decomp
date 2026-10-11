#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201a44c();
extern void func_0202afa4();
extern void func_0202c1b0();
extern void func_0202c5c8();
extern void func_0202e5f8();
extern void func_02044a2c();
extern void func_02046d4c();
extern void func_02046d9c();
extern void func_02054674();
extern void func_02056fe8();
extern void func_0205833c();
extern void func_02058aa0();
extern void func_02062464();
extern void func_020637ac();
extern void func_020637bc();
extern void func_0207ab84();
extern void func_020827c0();
extern char data_020bd280[];
extern char data_020dc19c[];
// clang-format off
asm void func_0205cc20(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020bd280
    ldrb r0, [r0, #0x0]
    cmp r0, #0xff
    bne L_0205cc40
    bl func_0207ab84
    ldr r1, =data_020bd280
    swpb r0, r0, [r1]
L_0205cc40:
    ldr r0, =data_020dc19c
    mov r1, #0x1
    str r1, [r0, #0x0]
    bl func_02054674
    bl func_02044a2c
    bl func_0202c1b0
    bl func_0202afa4
    bl func_0201a44c
    bl func_0202e5f8
    bl func_020827c0
    bl func_02056fe8
    bl func_0205833c
    mov r0, #0x1
    bl func_020637ac
    mov r0, #0x1
    bl func_020637bc
    bl func_02062464
    bl func_02058aa0
    bl func_0202c5c8
    bl func_02046d4c
    bl func_02046d9c
    ldmfd sp!, {r3, pc}
}
// clang-format on
