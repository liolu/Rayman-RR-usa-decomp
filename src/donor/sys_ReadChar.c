/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202dddc from projets/heroes-of-mana/src/donor/func_0202dddc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm int sys_ReadChar(void) {
    str     lr, [sp, #-4]!
    mov     r1, #0
    mov     r0, #0x07
    swi     0x123456
    ldr     pc, [sp], #4
}
// clang-format on
