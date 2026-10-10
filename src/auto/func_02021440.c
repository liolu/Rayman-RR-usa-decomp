/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02021440(void) {
    ldr r1, [r0, #0x8]
    cmp r1, #0x0
    bxne lr
    mov r1, #0x1
    str r1, [r0, #0x8]
    ldrb r1, [r0, #0x29]
    add r2, r0, #0x2a
    add r3, r0, #0x29
    swpb r1, r1, [r2]
    mov r2, #0x0
    swpb r1, r2, [r3]
    strh r2, [r0, #0x26]
    ldr r1, [r0, #0x0]
    orr r1, r1, #0x100
    str r1, [r0, #0x0]
    bx lr
}
// clang-format on
