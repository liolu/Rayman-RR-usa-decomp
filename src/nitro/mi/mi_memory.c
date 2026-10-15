/* compiler: 2.0/sp1p5  */
#include "m2c.h"

typedef short s16;
typedef unsigned short u16;
typedef long s32;
// clang-format on

/* func_02010294 from projets/heroes-of-mana/src/auto/func_02010294.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void MIi_CpuCopy16(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_ip;

    var_ip = 0;
loop_1:
    if (var_ip < arg2) {
        u16 tmp                  = (u16) * (s16 *) (arg0 + var_ip);
        *(s16 *) (arg1 + var_ip) = (s16) tmp;
        var_ip += 2;
        goto loop_1;
    }
}

/* Word fill: val in r0, dst in r1, byte count in r2.
 *
 * No C form reproduces the single-register `stm` this routine uses.  mwccarm only turns an
 * aggregate copy into ldm/stm from 16 bytes upwards (4- and 8-byte copies compile to
 * ldr/str), and a scalar store is always `str r0, [r1], #4`.  ~110 candidate shapes
 * (aggregates, unions, packed structs, bitfields, type punning, struct-by-value parameters,
 * every installed compiler version, both -proc settings and -O1..-O4) all keep that one
 * instruction different, and only ever produce `stm` with two or more registers.
 *
 * The routine is hand-optimised assembly, exactly like its neighbours MIi_CpuCopy32
 * (`ldmlt`/`stmlt`, same loop shape) and MIi_CpuClearFast (8-register `stmlt` chunk loop plus
 * this 1-register tail), so it is written in assembly here - the project's rule for
 * instruction forms the compiler never generates.  Note the assembler spelling `stmltia`:
 * mwccarm rejects the bare `stmlt` mnemonic; `stmltia` assembles to the identical word
 * (0xB8810001, STMIA with the LT condition).
 */
// clang-format off
asm void MIi_CpuClear32(void) {
    add ip, r1, r2
L_02017f38:
    cmp r1, ip
    stmltia r1!, {r0}
    blt L_02017f38
    bx lr
}
