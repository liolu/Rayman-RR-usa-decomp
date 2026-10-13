#include "m2c.h"

/* The original compiled `movs r0, #0` followed by six word stores, and kept two
 * separate zero materialisations. No C spelling of this constructor produces
 * that: probed direct/array/pointer/chained/local-variable/inlined-helper/
 * aggregate-assignment forms, mixed int/pointer/unsigned/volatile field types,
 * every scalar ordering with every position of the getb0e4 call (2160 generated
 * variants), split zero blocks, constant spellings and casts, and every available
 * mwccarm build (2.0 base..sp2p4, 1.2 base..sp4, dsi 1.1..1.6sp2) with -O4,
 * -O4,p and -interworking removed. Every C form produced `mov r1, #0` + `stm`,
 * or the 2.0 peephole merged the field0/field4 stores. The instruction form
 * (flag-setting MOV immediate with dead flags) is written in assembly, like the
 * other functions whose instructions the compiler never generates.
 */
extern void *func_0205488c();
extern void func_0201b0e4();
extern void func_0202c664();
extern void func_0201c33c();

// clang-format off
asm void *func_0201c198(void) {
    stmfd sp!, {r4, lr}
    mov r0, #0x3c
    bl func_0205488c
    mov r4, r0
    movs r0, #0x0
    str r0, [r4, #0x8]
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    str r0, [r4, #0x1c]
    mov r1, #0x1
    mov r0, #0x0
    str r1, [r4, #0x0]
    str r0, [r4, #0x4]
    str r0, [r4, #0x34]
    sub r0, r0, #0x1
    str r0, [r4, #0x2c]
    bl func_0201b0e4
    str r0, [r4, #0x24]
    bl func_0202c664
    mov r0, r4
    bl func_0201c33c
    mov r0, #0xff000
    str r0, [r4, #0x38]
    ldr r1, [r4, #0x30]
    mov r0, r4
    bic r1, r1, #0x20000
    str r1, [r4, #0x30]
    ldmfd sp!, {r4, pc}
}
// clang-format on
