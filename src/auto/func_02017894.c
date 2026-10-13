#include "m2c.h"

/* func_02017894: block send, `src` = r0, `port` = r1 (both of its callers pass the GX FIFO
 * at 0x04000400 in r1 and tail-call it).  Two 32-byte block transfers to the same,
 * non-advancing destination, so 64 bytes leave r0 and 64 bytes are written to [r1].
 *
 * Written in assembly: this is the hand-written block-transfer idiom of the SDK block at
 * 0x02017f34..0x02017fe4, not compiler output.  An aggregate copy at -O4,p always uses
 * {r0,r1,r2,r3} as the data registers and moves the two pointers to lr/ip (16 bytes per
 * chunk), while this routine keeps the pointers in r0/r1 and moves 32 bytes per chunk with
 * the 8 registers left over: ldm r0!, {r2,r3,r4,r5,r6,r7,r8,ip} / stm r1, {same}, twice.
 * Probed without success: struct/union/array copies of 4..32 words, `u64` fields, volatile
 * destinations, fixed-destination double copies, unrolled loops, scalar word stores and
 * memcpy (never inlined), with all 25 installed mwccarm profiles; none emits either a
 * non-writeback `stm` of the same register list, or more than 4 data registers.  Neighbours
 * func_02017f34 and func_02017f48 are in assembly for the same reason.
 */
// clang-format off
asm void func_02017894(void) {
    stmfd sp!, {r4, r5, r6, r7, r8}
    ldmia r0!, {r2, r3, r4, r5, r6, r7, r8, ip}
    stmia r1, {r2, r3, r4, r5, r6, r7, r8, ip}
    ldmia r0!, {r2, r3, r4, r5, r6, r7, r8, ip}
    stmia r1, {r2, r3, r4, r5, r6, r7, r8, ip}
    ldmfd sp!, {r4, r5, r6, r7, r8}
    bx lr
}
// clang-format on
