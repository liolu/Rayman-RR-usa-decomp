#include "m2c.h"

extern M2C_UNK data_020cfa90;
extern u8 data_020cfa94;
extern s32 data_020cfa84;

/*
 * Probed without success (all gave the exact instruction sequence but with the
 * minuend in r2/r3 and the aligned size in r0; the game has the total in r0 and
 * the aligned size in r1):
 *   - plain `data_020cfa84 - (((e + 1) & ~7) + 8)`, with the count hoisted into
 *     a local / read twice / indexed through s32* and u8* / M2C_FIELD offsets;
 *   - splitting the expression into locals (entry, total, aligned, e = entry+1);
 *   - `t - 8 - ((e + 1) & ~7)` and `(t - ((e + 1) & ~7)) - 8` (reassociated to a
 *     `sub` + `sub #8`);
 *   - ternary / if-else / inverted-condition control flow;
 *   - s32/u32 mixes, volatile on the total or on the table, array vs pointer
 *     element type, struct-typed pool;
 *   - compilers 2.0/sp1p5 and 1.2/sp2p3 (also with -proc arm7tdmi) and flags
 *     -O4, -O3, -O4,p -opt speed.
 * No C form reproduces the target register allocation, so this function is
 * written in assembly (all of these instructions are ordinary compiler output,
 * but the allocator never selects this register assignment).
 */
// clang-format off
asm s32 func_02042084(void) {
    ldr r0, =data_020cfa90
    ldr r0, [r0, #0x1e0]
    cmp r0, #0x28
    moveq r0, #0x0
    bxeq lr
    sub r1, r0, #0x1
    mov r0, #0xc
    mul r2, r1, r0
    ldr r1, =data_020cfa94
    ldr r0, =data_020cfa84
    ldr r1, [r1, r2]
    ldr r0, [r0, #0x0]
    add r1, r1, #0x1
    bic r1, r1, #0x7
    add r1, r1, #0x8
    sub r0, r0, r1
    bx lr
}
// clang-format on
