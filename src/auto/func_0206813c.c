/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206813c(void) {
    add ip, r0, #0x3
    swpb r1, r1, [ip]
    str r2, [r0, #0x20]
    str r3, [r0, #0x24]
    bx lr
}
// clang-format on
