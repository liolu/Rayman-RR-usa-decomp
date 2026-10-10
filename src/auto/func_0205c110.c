/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205c110(void) {
    ldr r3, [r0, #0x4]
    ldrb r2, [r3, #0x1d]
    sub r1, r2, r1
    cmp r1, #0x0
    add r2, r3, #0x1d
    movle r1, #0x0
    swpb r1, r1, [r2]
    ldr r0, [r0, #0x4]
    ldrb r0, [r0, #0x1d]
    bx lr
}
// clang-format on
