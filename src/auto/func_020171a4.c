#include "m2c.h"

/* VRAM block copy: `src` = r0, destination byte offset = r1, byte count = r2.
 *
 * Written in assembly: this routine loads the destination bank base into `ip` once
 * (`mov ip, #0x6400000`) and then adds it to r1 with a register operand in both branches
 * (`add r2, ip, lr` / `add r1, ip, lr`).  mwccarm never materialises a constant that way:
 * for `x + 0x06400000` it always folds the constant into the immediate form
 * (`add r2, lr, #0x6400000`), and it only puts a value in a register when that value is not
 * statically known (a call result, as in src/auto/func_02016fa4.c) or when the constant does
 * not fit an ARM immediate (then it is a per-branch literal-pool `ldr`, as in
 * src/auto/func_02017204.c).
 *
 * Probed before falling back to assembly (see build/agent_work/func_020171a4/probe*.py):
 *  - expression forms: `arg1 + 0x06400000` (int/u32/long/u64, casts, commuted, `0x6400000u`,
 *    `0x64 << 20`, `0x6000000 + 0x400000`, `0x62000000 | 0x200000`, subtraction of the negative
 *    constant, byte/word/halfword pointer-scaled index forms, 64-bit adds, halfword operand);
 *  - value forms: local (s32/u32/register/const/static const), file-scope static const and
 *    extern const, inline helper returning the constant, a function call result, dead code,
 *    3+ uses of the constant, 64-bit locals truncated at the call, if/else and ternary joins;
 *  - control flow: if+return, if/else, nested if, inverted condition, goto shape;
 *  - ~150 generated shapes in total, plus every installed profile: mwccarm 1.2 (base, b56, sp2,
 *    sp2p3, sp3, sp4) and 2.0 (all ten builds), with -O1..-O4 and -O4,p/-O4,s, and 1.2/sp2p3
 *    and 2.0/sp1p5 with -proc arm7tdmi.  All of them keep exactly this one instruction
 *    different (the mov ip, #0x6400000) or change the code more.
 *
 * The routine therefore belongs to the hand-written block-transfer assembly of this SDK
 * family: its callees src/auto/func_02017f34.c and src/auto/func_02017f48.c are already
 * hand-optimised assembly, and its twin func_02017144 (same code with 0x0660000) has the
 * identical shape.
 */
extern void func_02017cf4();
extern void func_02017f48();
extern s32 data_020bbfe0;

// clang-format off
asm void func_020171a4(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_020bbfe0
    mov r4, r0
    ldr r0, [r3]
    mvn ip, #0x0
    mov lr, r1
    mov r3, r2
    cmp r0, ip
    mov ip, #0x6400000
    beq L_020171e8
    cmp r3, #0x30
    bls L_020171e8
    mov r1, r4
    add r2, ip, lr
    bl func_02017cf4
    ldmfd sp!, {r4, lr}
    bx lr
L_020171e8:
    mov r0, r4
    mov r2, r3
    add r1, ip, lr
    bl func_02017f48
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
