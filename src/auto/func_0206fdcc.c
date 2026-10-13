#include "m2c.h"

/* Written in assembly: the original places the address of data_020dddd8 in the literal
   pool twice. The object has two consecutive, identical pool words (0x0206ff00 and
   0x0206ff04, function size 0x13C); the first ldr of the function uses the first word and
   the five later ones share the second. The compiler always pools the address once, which
   makes the function 4 bytes short (0x138).
   Probed (all give a single pool word or a different schedule/epilogue):
     - C spellings of the reference: plain &global, array decay, &global[0], an s32 array /
       struct / volatile / void-cast view, a local pointer copy, (char *)&global + 0, and an
       inner-scope redeclaration (rejected: "identifier redeclared").
     - every installed mwccarm version (1.2/*, 2.0/*, dsi/*) with -O4,p, -O4,s, -O2 and -O1,
       with and without -proc arm7tdmi (arm7tdmi matches the size only because it moves one
       ldr and returns with "pop {...,lr}; bx lr" instead of "pop {...,pc}").
     - -constpool / -noconstpool.
   The relocations of this object match the game's exactly: six arm_call relocations
   (+0x20, +0x40, +0x68, +0x90, +0xC4, +0xF0) and two load relocations (+0x134, +0x138). */
extern char data_020dddd8[];
extern void func_0206fa34();
extern s32 func_01ff8814();
// clang-format off
asm void func_0206fdcc(void) {
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r0
    mov r5, r1
    mov r4, r2
    ldr r0, [pc, #280]
    mov r1, r4
    mov r2, r5
    bl func_0206fa34
    ldr r0, [r5, #0x8]
    ldr r3, [pc, #264]
    str r0, [sp, #0x0]
    ldr r0, [r3, #0x8]
    str r0, [sp, #0x4]
    ldmia r5, {r0, r2}
    ldmia r3, {r1, r3}
    bl func_01ff8814
    str r0, [r6, #0x0]
    ldr r0, [r5, #0x14]
    ldr r2, [pc, #228]
    str r0, [sp, #0x0]
    ldr r0, [r2, #0x8]
    str r0, [sp, #0x4]
    ldmia r2, {r1, r3}
    ldr r0, [r5, #0xc]
    ldr r2, [r5, #0x10]
    bl func_01ff8814
    str r0, [r6, #0x4]
    ldr r0, [r5, #0x20]
    ldr r2, [pc, #188]
    str r0, [sp, #0x0]
    ldr r0, [r2, #0x8]
    str r0, [sp, #0x4]
    ldmia r2, {r1, r3}
    ldr r0, [r5, #0x18]
    ldr r2, [r5, #0x1c]
    bl func_01ff8814
    str r0, [r6, #0x8]
    ldr r0, [r6, #0x4]
    ldr r2, [pc, #148]
    str r0, [r6, #0xc]
    ldr r0, [r5, #0x14]
    str r0, [sp, #0x0]
    ldr r0, [r2, #0x14]
    str r0, [sp, #0x4]
    ldr r0, [r5, #0xc]
    ldr r1, [r2, #0xc]
    ldr r3, [r2, #0x10]
    ldr r2, [r5, #0x10]
    bl func_01ff8814
    str r0, [r6, #0x10]
    ldr r0, [r5, #0x20]
    ldr r3, [pc, #96]
    str r0, [sp, #0x0]
    ldr r0, [r3, #0x14]
    str r0, [sp, #0x4]
    ldr r1, [r3, #0xc]
    ldr r0, [r5, #0x18]
    ldr r2, [r5, #0x1c]
    ldr r3, [r3, #0x10]
    bl func_01ff8814
    str r0, [r6, #0x14]
    ldr r0, [r6, #0x8]
    str r0, [r6, #0x18]
    ldr r0, [r6, #0x14]
    str r0, [r6, #0x1c]
    ldr r2, [r4, #0x0]
    ldmib r4, {r1, r3}
    add r1, r2, r1
    ldr r0, [r6, #0x0]
    add r1, r3, r1
    sub r1, r1, r0
    ldr r0, [r6, #0x10]
    sub r0, r1, r0
    str r0, [r6, #0x20]
    add sp, sp, #0x8
    ldmia sp!, {r4, r5, r6, pc}
L_pool_0206ff00:
    dcd data_020dddd8
L_pool_0206ff04:
    dcd data_020dddd8
}
// clang-format on
