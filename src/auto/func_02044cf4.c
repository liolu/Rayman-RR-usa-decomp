/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02044cf4(void) {
    mov r3, #0x1
    add r2, r0, #0x30
    swpb r1, r3, [r2]
    sub r1, r3, #0x3
    str r1, [r0, #0x28]
    bx lr
}
// clang-format on
