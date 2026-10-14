/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202ddf0 from projets/heroes-of-mana/src/donor/func_0202ddf0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_0200b4a0(void);
// clang-format off
asm void func_0200b4a0(void) {
    mov     r1, #0
    mov     r0, #0x18
    swi     0x123456
    mov     pc, lr
}
// clang-format on
