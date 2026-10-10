/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206b2f0(void) {
    ldrb r1, [r0, #0x1d]
    add r2, r0, #0x2c
    add r3, r0, #0x2d
    swpb r1, r1, [r2]
    add r2, r0, #0x2e
    ldrb r1, [r0, #0x1e]
    swpb r1, r1, [r3]
    ldrb r1, [r0, #0x25]
    and r1, r1, #0x7
    swpb r1, r1, [r2]
    ldr r1, [r0, #0x20]
    str r1, [r0, #0x28]
    bx lr
}
// clang-format on
