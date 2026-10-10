/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02068a5c(void) {
    cmp r0, #0x0
    bxeq lr
    add ip, r0, #0x38
    swpb r1, r1, [ip]
    add ip, r0, #0x39
    swpb r1, r2, [ip]
    add r2, r0, #0x3a
    ldr ip, [sp, #0x0]
    swpb r1, r3, [r2]
    and r1, ip, #0xff
    str r1, [r0, #0x3c]
    bx lr
}
// clang-format on
