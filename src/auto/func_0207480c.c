/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0207480c(void) {
    mov r3, #0x0
    str r3, [r0, #0x0]
    str r3, [r0, #0x4]
    str r3, [r0, #0x8]
    add r2, r0, #0x18
    swpb r1, r3, [r2]
    str r3, [r0, #0x1c]
    bx lr
}
// clang-format on
