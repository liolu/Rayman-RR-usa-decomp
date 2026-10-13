#include "m2c.h"

/* No C form or compiler profile reproduces this function; written in assembly.
 *
 * Probed with mwccarm (build/try.py) on ~80 C formulations of the body:
 *   - 2.0/{base,sp1,sp1p2,sp1p5,sp1p6,sp1p7,sp2,sp2p2,sp2p3,sp2p4} and
 *     1.2/{b56,base,sp2,sp2p3,sp3,sp4}, plus dsi/{1.1,1.2,1.2p2,1.3,1.6sp1,1.6sp2},
 *     with and without -proc arm7tdmi, and -O4,p/-O4/-O3/-O3,p/-O2/-O2,p/-O4,s.
 *   - condition forms tried: (temp & 1), (temp % 2), ((u32)temp % 2), (temp & 1U),
 *     ((u8)temp & 1), (temp << 31), (temp & 1) != 0, == 1, > 0, !!x, mask variable,
 *     bitfield/union read, if/else, switch, goto, ternary, arithmetic masks
 *     (0x1F + (m << 5), m * 0x20 + 0x1F, m | (m ? 0x3E : 0x1F), ...).
 * Result: mwccarm 2.0 emits `ands rX, rX, #imm` only when the masked value stays
 * live (which then needs extra instructions); for a value used only as a condition
 * it always emits `tst`, and mwccarm 1.2 never emits `tst` at all (it always uses
 * `ands` for bit tests, also with -proc arm7tdmi). The game mixes `tst r2, #4` with
 * `ands r1, r1, #1` + conditional moves, which no profile produces from C.
 * The closest C candidate (build/agent_work/func_0200d2ac/v2.c) is 3/27 diff with
 * 2.0/sp1p5 and 4/27 diff with 1.2/sp2p3 -proc arm7tdmi. */
// clang-format off
asm void func_0200d2ac(void) {
    add r1, r1, #0x4
    str r1, [r0, #0x40]
    str r2, [r0, #0x44]
    sub r2, r2, #0x40
    tst r2, #0x4
    subne r2, r2, #0x4
    str r2, [r0, #0x38]
    ands r1, r1, #0x1
    movne r1, #0x3f
    moveq r1, #0x1f
    str r1, [r0, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    str r1, [r0, #0xc]
    str r1, [r0, #0x10]
    str r1, [r0, #0x14]
    str r1, [r0, #0x18]
    str r1, [r0, #0x1c]
    str r1, [r0, #0x20]
    str r1, [r0, #0x24]
    str r1, [r0, #0x28]
    str r1, [r0, #0x2c]
    str r1, [r0, #0x30]
    str r1, [r0, #0x34]
    str r1, [r0, #0x3c]
    bx lr
}
// clang-format on
