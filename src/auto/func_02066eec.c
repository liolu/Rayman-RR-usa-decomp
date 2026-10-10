/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02066eec(void) {
    ldrb r2, [r0, #0x42]
    cmp r1, #0x0
    addne r1, r0, #0x42
    orrne r0, r2, #0x4
    addeq r1, r0, #0x42
    biceq r0, r2, #0x4
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
