/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205e9e8(void) {
    add r2, r0, #0x1d
    swpb r0, r1, [r2]
    bx lr
}
// clang-format on
