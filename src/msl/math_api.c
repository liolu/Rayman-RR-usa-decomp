/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int __fpclassifyd(double x);

/* func_0202b860 from projets/heroes-of-mana/src/donor/func_0202b860.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
int __fpclassifyd(double x) {
    switch ((((int *) &x)[1]) & 0x7FF00000) {
        case 0x7FF00000:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 1;
            } else {
                return 2;
            }
        case 0:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 5;
            } else {
                return 3;
            }
    }
    return 4;
}
