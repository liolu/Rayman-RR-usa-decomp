#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001588();
extern void func_02026034();
extern void func_0202b884();
extern void func_0202b970();
extern void func_02044cb4();
extern void func_02048db0();
extern void func_020591c0();
extern void func_0205b6a4();
extern void func_0205ca18();
extern void func_0205cb5c();
extern void func_0205d0cc();
extern void func_0205d0d4();
extern void func_0205d88c();
extern void func_0205e3bc();
extern void func_0205fe54();
extern char data_020db92c[];
extern char data_020dc180[];
extern char data_020dc190[];
extern char data_020dc19c[];
extern char data_020dc3e4[];
extern char data_020dc448[];
extern char data_020dce9c[];
extern char data_020dcee0[];
// clang-format off
asm void func_0205c864(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr r2, =data_020dc19c
    mov r3, #0x0
    add r0, r2, #0x7e
    str r3, [r2, #0x6c]
    add r1, r0, #0xc00
    swpb r0, r3, [r1]
    add r1, r2, #0xc80
    swpb r0, r3, [r1]
    bl func_020591c0
    ldr r0, =data_020dc190
    ldr r0, [r0, #0x0]
    bl func_0205cb5c
    mov r0, #0x1
    bl func_0205fe54
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x0]
    cmp r0, #0x5
    cmpne r0, #0x3
    beq L_0205c980
    bl func_0205d0d4
    bl func_0205d0cc
    mov r4, r0
    ldr r0, [r4, #0x4]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x1d]
    cmp r0, #0x0
    beq L_0205c8ec
    mov r0, #0x20
    bl func_0202b970
    bl func_0205e3bc
    bl func_02044cb4
    b L_0205c8f0
L_0205c8ec:
    bl func_0205ca18
L_0205c8f0:
    ldr r0, =data_020dc19c
    ldrb r0, [r0, #0xc7f]
    cmp r0, #0x0
    beq L_0205c958
    cmp r4, #0x0
    beq L_0205c928
    ldr r0, [r4, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    ldr r1, =data_020dc3e4
    mov r2, #0x64
    bl func_02001588
L_0205c928:
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x23c]
    cmp r0, #0x0
    beq L_0205c958
    ldr r0, [r0, #0x4]
    mov r1, #0x32
    ldr r0, [r0, #0x0]
    add r0, r0, #0x18
    bl func_0202b884
    ldr r1, =data_020dc448
    mov r2, #0x64
    bl func_02001588
L_0205c958:
    ldr r0, =data_020dc19c
    mov r2, #0x0
    add r0, r0, #0x7f
    add r1, r0, #0xc00
    swpb r0, r2, [r1]
    ldr r0, =data_020dc180
    ldr r1, =data_020db92c
    str r2, [r0, #0x0]
    swpb r0, r2, [r1]
    bl func_02048db0
L_0205c980:
    bl func_0205d0d4
    bl func_0205d0cc
    bl func_0205b6a4
    ldr r0, =data_020dc19c
    ldr r0, [r0, #0x0]
    cmp r0, #0x7
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, pc}
    ldr r0, =data_020dce9c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x0
    bl func_0205d88c
    mov r3, #0x0
    mov r2, r0
    ldr r0, =data_020dcee0
    str r3, [sp, #0x0]
    ldr r1, [r0, #0x0]
    sub r0, r3, #0x1
    str r2, [sp, #0x4]
    bl func_02026034
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
}
// clang-format on
