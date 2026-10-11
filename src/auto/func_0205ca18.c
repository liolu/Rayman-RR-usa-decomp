#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201bdf8();
extern void func_0201c454();
extern void func_02026844();
extern void func_0202b970();
extern void func_0202c664();
extern void func_0202f380();
extern void func_020376a8();
extern void func_02044cb4();
extern void func_02047bc0();
extern void func_02048db0();
extern void func_02052900();
extern void func_02057d34();
extern void func_020591c0();
extern void func_0205b794();
extern void func_0205cb5c();
extern void func_0205d0cc();
extern void func_0205d0d4();
extern void func_0205d87c();
extern void func_0205e188();
extern void func_0205f9f8();
extern void func_0205fe54();
extern void func_0208dd48();
extern void func_020a5f88();
extern char data_020c571c[];
extern char data_020db92c[];
extern char data_020db934[];
extern char data_020dc180[];
extern char data_020dc190[];
extern char data_020dc19c[];
extern char data_020dc3e4[];
extern char data_020dc448[];
extern char data_020dce9c[];
extern char data_020dcee8[];
extern char data_020e4c60[];
// clang-format off
asm void func_0205ca18(void) {
    stmfd sp!, {r4, lr}
    mov r0, #0x0
    mov r1, r0
    bl func_02052900
    bl func_020591c0
    ldr r0, =data_020dcee8
    ldr r0, [r0, #0x0]
    bl func_02026844
    ldr r0, =data_020dc3e4
    bl func_0202c664
    ldr r0, =data_020dc448
    bl func_0202c664
    ldr r0, =data_020dc19c
    mov r2, #0x0
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    bl func_02057d34
    bl func_0205b794
    mov r0, #0x10
    bl func_0202b970
    bl func_0205e188
    ldr r1, =data_020db934
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_020dc19c
    ldrb r0, [r0, #0xc7b]
    cmp r0, #0x1
    bne L_0205cac0
    bl func_0205d0d4
    bl func_0205d0cc
    mov r4, r0
    ldr r0, [r4, #0x24]
    add r0, r0, #0x4
    bl func_02047bc0
    mov r0, r4
    bl func_0201c454
    mov r0, r4
    bl func_020376a8
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x23c]
    bl func_0208dd48
L_0205cac0:
    ldr r0, =data_020dc190
    ldr r0, [r0, #0x0]
    bl func_0205cb5c
    mov r0, #0x1
    bl func_0205fe54
    bl func_02048db0
    ldr r0, =data_020dce9c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0205caf8
    ldr r0, =data_020c571c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    bl func_0205d87c
L_0205caf8:
    bl func_0202f380
    ldr r1, =data_020db92c
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_0201bdf8
    ldr r1, =data_020dc180
    mov r2, #0x0
    ldr r0, =data_020e4c60
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    bl func_02044cb4
    bl func_0205f9f8
    bl func_020a5f88
    ldmfd sp!, {r4, pc}
}
// clang-format on
