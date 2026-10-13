#include "m2c.h"

/* Word fill: val in r0, dst in r1, byte count in r2.
 *
 * No C form reproduces the single-register `stm` this routine uses.  mwccarm only turns an
 * aggregate copy into ldm/stm from 16 bytes upwards (4- and 8-byte copies compile to
 * ldr/str), and a scalar store is always `str r0, [r1], #4`.  ~110 candidate shapes
 * (aggregates, unions, packed structs, bitfields, type punning, struct-by-value parameters,
 * every installed compiler version, both -proc settings and -O1..-O4) all keep that one
 * instruction different, and only ever produce `stm` with two or more registers.
 *
 * The routine is hand-optimised assembly, exactly like its neighbours func_02017f48
 * (`ldmlt`/`stmlt`, same loop shape) and func_02017f60 (8-register `stmlt` chunk loop plus
 * this 1-register tail), so it is written in assembly here - the project's rule for
 * instruction forms the compiler never generates.  Note the assembler spelling `stmltia`:
 * mwccarm rejects the bare `stmlt` mnemonic; `stmltia` assembles to the identical word
 * (0xB8810001, STMIA with the LT condition).
 */
// clang-format off
asm void func_02017f34(void) {
    add ip, r1, r2
L_02017f38:
    cmp r1, ip
    stmltia r1!, {r0}
    blt L_02017f38
    bx lr
}
// clang-format on
