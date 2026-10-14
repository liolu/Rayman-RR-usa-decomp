/* compiler: 2.0/sp1p5  */
/* func_0201027c from projets/heroes-of-mana/src/auto/func_0201027c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef short s16;
typedef long s32;
void func_02017f00(s16 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = 0;
loop_1:
    if (var_r3 < arg2) {
        *(s16 *) (arg1 + var_r3) = (s16) arg0;
        var_r3 += 2;
        goto loop_1;
    }
}
