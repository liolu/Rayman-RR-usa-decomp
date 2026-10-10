/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02074700(void) {
    mov r1, #0x0
    str r1, [r0, #0x0]
    add r3, r0, #0x1c
    swpb r2, r1, [r3]
    add r3, r0, #0x1d
    swpb r2, r1, [r3]
    add r3, r0, #0x29
    swpb r2, r1, [r3]
    add r3, r0, #0x2a
    swpb r2, r1, [r3]
    add r3, r0, #0x28
    str r1, [r0, #0x24]
    swpb r2, r1, [r3]
    add r3, r0, #0x22
    swpb r2, r1, [r3]
    add r3, r0, #0x23
    swpb r2, r1, [r3]
    add r3, r0, #0x1e
    swpb r2, r1, [r3]
    add r3, r0, #0x1f
    str r1, [r0, #0xc]
    swpb r2, r1, [r3]
    add r3, r0, #0x20
    str r1, [r0, #0x10]
    swpb r2, r1, [r3]
    add r3, r0, #0x21
    str r1, [r0, #0x14]
    swpb r2, r1, [r3]
    str r1, [r0, #0x18]
    bx lr
}
// clang-format on
