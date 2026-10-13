#include "m2c.h"

extern long func_02084450(long lArg0, void *p_vObject, long lArg2);     /* extern */

/* Fills a 4-word local buffer through func_02084450 (the object's type handler) and
   writes 1 to *arg2 when the first three words are each within +/-0x10, else 0.

   The game keeps the loaded value in r1, the buffer base in r2, and the two flags in
   r3/ip, and reads the first word twice: once directly at [sp] and once through the
   base register at [r2].

   Probed before falling back to assembly (compiler 2.0/sp1p5 with -O4,p / -O4,s / -O4 /
   -O3,p / -O2 / -O1, 1.2/sp2p3 with and without -proc arm7tdmi, and every mwccarm
   version installed under tools/mwccarm): roughly a thousand source shapes - struct,
   array, union and 4-word locals, pointer against direct access, volatile fields and
   volatile pointers, volatile/signedness casts on a single one of the two reads,
   separate temporaries, and every declaration order. Each one either CSEs the two
   first-word reads (one load, 0x7c) or keeps the value in r0 with the base in r0/r1,
   so the size or the register allocation differs. No C form reproduced the target
   instruction sequence, which is why it is written out here. */
// clang-format off
asm void func_02091bcc(M2C_UNK arg0, void *arg1, s32 *arg2) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #16
    mov r4, r2
    add r2, sp, #0
    bl func_02084450
    ldr r1, [sp, #0]
    mov r3, #0
    add r2, sp, #0
    cmp r1, #0
    ldr r1, [r2, #0]
    mov ip, r3
    rsblt r1, r1, #0
    cmp r1, #16
    bge L_02091c18
    ldr r1, [r2, #4]
    cmp r1, #0
    rsblt r1, r1, #0
    cmp r1, #16
    movlt ip, #1
L_02091c18:
    cmp ip, #0
    beq L_02091c34
    ldr r1, [r2, #8]
    cmp r1, #0
    rsblt r1, r1, #0
    cmp r1, #16
    movlt r3, #1
L_02091c34:
    cmp r3, #0
    movne r1, #1
    moveq r1, #0
    str r1, [r4, #0]
    add sp, sp, #16
    ldmfd sp!, {r4, pc}
}
// clang-format on
