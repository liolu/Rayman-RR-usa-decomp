#include "m2c.h"

/* func_02017fc8: block copy of 36 bytes, `src` = r0, `dst` = r1 (32- and 36-byte
 * transfer helpers of the SDK block at 0x02017f34..0x02017fe4).
 *
 * Written in assembly: this is the hand-written block-transfer idiom of that
 * SDK block (see MIi_CpuClear32 / MIi_CpuCopy32 / func_02017894), not compiler
 * output.  Probed without success: flat 9-word aggregate assignment (2.0/sp1p5
 * and 1.2/sp2p3, and -O1..-O4 / -O4,s), 12- and 24-byte aggregates, three
 * 12-byte aggregate copies, three nested 3-word members, arrays of 3 words,
 * nine scalar assignments, `*dst++ = *src++` chains, copy-then-increment
 * statements and a 3-iteration aggregate loop, plus 1.2/sp2p3 with
 * `-proc arm7tdmi`.  mwccarm always moves the two pointers to lr/ip and uses
 * {r0,r1,r2,r3} as data registers (16-byte chunks) for a 36-byte aggregate,
 * or keeps base+offset addressing with {r0,r1,r2}; it never keeps the
 * pointers in r0/r1 with a writeback and {r2,r3,ip} as data registers. */
// clang-format off
asm void func_02017fc8(void) {
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    bx lr
}
// clang-format on
