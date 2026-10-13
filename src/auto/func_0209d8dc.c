#include "m2c.h"

M2C_UNK func_02026034(s32, s32, s32, s32, s32, s32);   /* extern */
s32 func_02084450(M2C_UNK, void *, void **);           /* extern */
s32 func_020931d8(s32);                                /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);            /* extern */
extern s32 data_020dcee0;
extern s32 data_020dcee4;
extern s32 data_020dcee8;

/* Written in assembly: a plain C reconstruction of this function rebuilds the
   whole target (same size 0x10C, same 0x1C frame, same jump table, same case
   order) with 61/67 instructions identical, but mwccarm pins the second
   argument to r5 and the dispatch id to r4, while the game has them the other
   way round (`mov r4, r1` / `ldr r5, [r4, #-8]`); the two remaining
   differences are the `ldr`/`sub` scheduling that follows from it.
   Probed (compiler 2.0/sp1p5 -O4,p unless noted, all giving the swapped pair):
     - the id as a named local, as a temp, with inline duplicate field loads,
       with an explicit pointer variable, with an explicit switch-index temp;
     - a redundant copy of the object argument, a dead assignment, a
       two-temp field load, a three-parameter declaration;
     - the u32/s32/M2C_UNK/void* types of the id, the return value and both
       parameters; 4-, 5- and 6-argument prototypes of func_02026034 (fixed and
       variadic) and the 4- vs 5-argument call deciding the outgoing-argument
       area; the buffer declared as void*[4] / s32[4] / u32[4];
     - every local declaration order and the switch written as
       `switch (id - 0x4A)` and as `switch (id) { case 0x4A: ... }`;
     - default-first and default-last case order (default-last is the target);
     - 1.2/sp2p3 with and without -proc arm7tdmi.
   Every variant reaches 6/67 differing instructions (the prologue pair and the
   resulting `sub` scheduling); no C form and no profile produced the target's
   register assignment, so the function is written out here. */
// clang-format off
asm void func_0209d8dc(M2C_UNK arg0, void *arg1) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c
    mov r4, r1
    ldr r5, [r4, #-0x8]
    mov r6, r0
    mov r0, r5
    bl func_020931d8
    add r2, sp, #0x4
    mov r1, r6
    bl func_0209c740
    add r2, sp, #0xc
    mov r0, r6
    mov r1, r4
    bl func_02084450
    ldr r2, [sp, #0xc]
    sub r1, r5, #0x4a
    mov r4, r0
    str r2, [sp, #0x8]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0209d9d0
    b L_0209d940
    b L_0209d964
    b L_0209d988
    b L_0209d9ac
L_0209d940:
    mov r3, #0x0
    str r3, [sp, #0x0]
    ldr r1, =data_020dcee8
    ldr r0, [sp, #0x4]
    ldr r1, [r1, #0x0]
    bl func_02026034
    add sp, sp, #0x1c
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209d964:
    mov r3, #0x0
    ldr r0, =data_020dcee0
    str r3, [sp, #0x0]
    ldr r1, [r0, #0x0]
    sub r0, r3, #0x1
    bl func_02026034
    add sp, sp, #0x1c
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209d988:
    mov r3, #0x0
    ldr r0, =data_020dcee8
    str r3, [sp, #0x0]
    ldr r1, [r0, #0x0]
    sub r0, r3, #0x1
    bl func_02026034
    add sp, sp, #0x1c
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209d9ac:
    mov r3, #0x0
    ldr r0, =data_020dcee4
    str r3, [sp, #0x0]
    ldr r1, [r0, #0x0]
    sub r0, r3, #0x1
    bl func_02026034
    add sp, sp, #0x1c
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0209d9d0:
    mov r0, r4
    add sp, sp, #0x1c
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
