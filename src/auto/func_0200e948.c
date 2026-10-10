/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200e948(void) {
    mrs r1, cpsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}
// clang-format on
