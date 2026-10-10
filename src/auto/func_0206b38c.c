/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206b38c(void) {
    ldr r1, [r0, #0x4]
    ldrb r0, [r1, #0x2c]
    add r1, r1, #0x1d
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
