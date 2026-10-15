/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern double _dmul(double x, double y);

/* func_0202a088 from projets/heroes-of-mana/src/donor/func_0202a088.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
double frexp(double x, int *eptr) {
    int hi = ((int *) (&x))[1];
    int lo = ((int *) (&x))[0];
    int ix;
    *eptr = 0;
    ix    = hi & 0x7fffffff;
    if ((ix >= 0x7ff00000) || ((ix | lo) == 0)) {
        return x;
    }
    if (ix < 0x100000) {
        x     = _dmul(x, 0x1.0p54);
        hi    = ((int *) (&x))[1];
        *eptr = -54;
        ix    = hi & 0x7fffffff;
    }
    *eptr += (ix >> 20) - 0x3fe;
    hi                = (hi & 0x800fffff) | 0x3fe00000;
    ((int *) (&x))[1] = hi;
    return x;
}
