/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02027420(void) {
    ldr r2, [r0, #0x0]
    add r3, r1, #0xc
    str r2, [r1, #0x0]
    ldr r2, [r0, #0x4]
    str r2, [r1, #0x4]
    ldr r2, [r0, #0x8]
    str r2, [r1, #0x8]
    ldrb r2, [r0, #0x12]
    mov r0, #0x1
    swpb r2, r2, [r3]
    str r0, [r1, #0x10]
    bx lr
}
// clang-format on
