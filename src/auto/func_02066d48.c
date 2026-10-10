/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02066d48(void) {
    add r2, r0, #0x65
    swpb r0, r1, [r2]
    bx lr
}
// clang-format on
