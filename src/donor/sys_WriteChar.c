/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202ddc8 from projets/heroes-of-mana/src/donor/func_0202ddc8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void sys_WriteChar(register void* c) {
    str     lr, [sp, #-4]!
    mov     r1, c
    mov     r0, #0x03
    swi     0x123456
    ldr     pc, [sp], #4
}
// clang-format on
