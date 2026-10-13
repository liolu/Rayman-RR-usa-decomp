#include "m2c.h"

/*
 * func_02072874 - written in assembly on purpose.
 *
 * The closest C draft (build/agent_drafts/func_02072874.c) differs by 2/11
 * instructions. Every instruction, register and offset of the target is
 * produced by mwccarm for some C shape, but never in this order: the compiler
 * always hoists the "sub" of the second statement into the slot between the
 * "add" and the first "str".
 *
 *   target                                 best C candidate
 *   add r3, r3, r1                         add r3, r3, r1
 *   str r3, [ip, r0, lsl #0x4]             sub r1, r3, r1
 *   sub r1, r3, r1                         str r3, [ip, r0, lsl #0x4]
 *
 * Probed before falling back to asm (every probe keeps the same 2/11
 * permutation):
 *   - the raw m2c draft (byte-offset M2C_UNK accesses), which also commutes the
 *     "add" operands;
 *   - ~25 source shapes: "+=" and explicit "x = x + v" assignments, temporaries
 *     (n, val, old), s32 arrays indexed by arg0 * 4, 16-byte record structs,
 *     pointer locals, comma operators, negated second operand, volatile stores,
 *     mixed byte-offset/struct lvalues, returning a temporary vs. the stored
 *     field, and keeping the old value in a local (that shape compiles to 8
 *     instructions without any "sub");
 *   - mwccarm 2.0 service packs base, sp1, sp1p2, sp1p5, sp1p6, sp1p7, sp2,
 *     sp2p2, sp2p3, sp2p4;
 *   - mwccarm 1.2/sp2p3 and 1.2/sp2p3 -proc arm7tdmi (1.2 emits an extra reload
 *     instead);
 *   - optimization levels -O2,p, -O3,p, -O3,s, -O4,p, -O4,s.
 */
extern char data_020ddfa4[];
extern char data_020ddfa8[];
// clang-format off
asm void func_02072874(void) {
    ldr ip, =data_020ddfa8
    ldr r2, =data_020ddfa4
    ldr r3, [ip, r0, lsl #0x4]
    add r3, r3, r1
    str r3, [ip, r0, lsl #0x4]
    sub r1, r3, r1
    str r1, [r2, r0, lsl #0x4]
    mov r0, r1
    bx lr
}
// clang-format on
