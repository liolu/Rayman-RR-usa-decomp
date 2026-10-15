#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02008d24();
extern void func_02009848();
extern void _fgr();
extern void _fdiv();
extern void _f2d();
extern void func_0200a3b8();
extern void func_0200a3ec();
extern void func_0200a42c();
extern void func_0200a474();
extern void func_0200a4bc();
extern void _fsub();
extern void _ddiv();
extern void func_020146c8();
extern char data_020bd594[];
extern char data_020be594[];
extern char data_020de734[];
extern char data_020de744[];
extern char data_020de754[];
extern char data_020de755[];
extern char data_020de770[];
extern char data_020df7a0[];
// clang-format off
asm void func_02075958(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, =data_020be594
    ldr r0, [r0, #0xac]
    bl _f2d
    mov r3, r1
    mov r2, r0
    ldr r1, =0x3ff00000
    mov r0, #0x0
    bl _ddiv
    bl func_02008d24
    ldr r1, =data_020be594
    mov r4, r0
    ldr r0, [r1, #0xb0]
    bl _f2d
    mov r3, r1
    mov r2, r0
    ldr r1, =0x3ff00000
    mov r0, #0x0
    bl _ddiv
    bl func_02008d24
    mov r5, r0
    ldr r0, =data_020de734
    bl func_020146c8
    ldr r0, =data_020de744
    bl func_020146c8
    mov r0, r4
    mov r1, #0x0
    bl _fgr
    ldr r0, =0x45800000
    mov r1, r4
    bls L_020759e8
    bl func_0200a4bc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_02009848
    b L_020759f4
L_020759e8:
    bl func_0200a4bc
    mov r1, #0x3f000000
    bl _fsub
L_020759f4:
    bl func_0200a3b8
    ldr r2, =data_020de744
    mov r1, #0x0
    stmia r2, {r0, r1}
    mov r0, r5
    str r1, [r2, #0x8]
    bl _fgr
    ldr r0, =0x45800000
    mov r1, r5
    bls L_02075a30
    bl func_0200a4bc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_02009848
    b L_02075a3c
L_02075a30:
    bl func_0200a4bc
    mov r1, #0x3f000000
    bl _fsub
L_02075a3c:
    bl func_0200a3b8
    ldr r3, =data_020de744
    ldr r1, =data_020de770
    str r0, [r3, #0xc]
    ldrb r0, [r1, #0x0]
    ldr r4, [r3, #0x0]
    ldr r1, =data_020df7a0
    add r2, r0, #0x1
    add r2, r1, r2, lsl #0x5
    mov r4, r4, asr #0x4
    strh r4, [r2, #0x6]
    ldr r4, [r3, #0x4]
    ldr ip, =data_020de734
    mov r4, r4, asr #0x4
    strh r4, [r2, #0xe]
    ldr r4, [r3, #0x8]
    ldr lr, [ip, #0x0]
    mov r4, r4, asr #0x4
    strh r4, [r2, #0x16]
    ldr r3, [r3, #0xc]
    ldr r5, [ip, #0x4]
    mov r4, r3, asr #0x4
    ldr r3, =data_020bd594
    strh r4, [r2, #0x1e]
    ldrb r4, [r3, #0x454]
    add r2, r1, r0, lsl #0x5
    mov r0, lr, asr #0x4
    strh r0, [r2, #0x6]
    mov r0, r5, asr #0x4
    strh r0, [r2, #0xe]
    ldr r1, [ip, #0x8]
    mov r0, r4, lsl #0x1
    mov r1, r1, asr #0x4
    strh r1, [r2, #0x16]
    ldr r1, [ip, #0xc]
    mov r1, r1, asr #0x4
    strh r1, [r2, #0x1e]
    bl func_0200a42c
    mov r5, r0
    mov r0, r4
    bl func_0200a474
    ldr r2, =data_020be594
    mov r1, r0
    ldr r0, [r2, #0xb0]
    bl func_0200a4bc
    mov r1, r0
    mov r0, r5
    bl _fsub
    mov r1, #0x40000000
    bl _fdiv
    bl func_0200a3ec
    ldr r1, =data_020bd594
    ldr r2, =data_020de754
    ldrb r5, [r1, #0x453]
    swpb r0, r0, [r2]
    mov r0, r5, lsl #0x1
    bl func_0200a42c
    mov r4, r0
    mov r0, r5
    bl func_0200a474
    mov r1, r0
    ldr r0, =data_020be594
    ldr r0, [r0, #0xac]
    bl func_0200a4bc
    mov r1, r0
    mov r0, r4
    bl _fsub
    mov r1, #0x40000000
    bl _fdiv
    bl func_0200a3ec
    ldr r2, =data_020de755
    swpb r1, r0, [r2]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
