/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_DisableInterrupts(void) {
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}
// clang-format on
