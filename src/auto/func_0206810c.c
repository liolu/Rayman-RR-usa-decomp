/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206810c(void) {
    add r3, r0, #0x2
    swpb r1, r1, [r3]
    str r2, [r0, #0x1c]
    bx lr
}
// clang-format on
