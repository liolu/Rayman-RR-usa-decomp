/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

// clang-format on
typedef unsigned int u32;

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_DisableInterrupts(void) {
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_RestoreInterrupts(void) {
    mrs r1, cpsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_GetProcMode(void) {
    mrs r0, cpsr
    and r0, r0, #0x1f
    bx lr
}

/* func_0200fafc from projets/heroes-of-mana/src/donor/func_0200fafc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void OS_SpinWait(register u32 count) {
loop:
    subs count, count, #0x4
    bhs loop
    bx lr
}
