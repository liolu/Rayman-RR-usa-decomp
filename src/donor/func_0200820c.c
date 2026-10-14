/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202a6e8 from projets/heroes-of-mana/src/donor/func_0202a6e8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;
extern void func_02007f2c(decimal *d, int digits);
extern void func_0200820c(decimal *d, const char *s, short exp);
extern void func_02007f2c(decimal *d, int digits);
void func_0200820c(decimal *d, const char *s, short exp) {
    int i;

    d->exp = exp;
    d->sgn = 0;

    for (i = 0; i < 32 && *s != 0;) {
        d->sig.text[i++] = *s++ - '0';
    }
    d->sig.length = i;

    if (*s != 0) {
        if (*s < 5) {
            return;
        }
        if (*s > 5) {
            goto round;
        }
        {
            const char *p = s + 1;
            for (; *p != 0; p++) {
                if (*p != '0') {
                    goto round;
                }
            }
        }
        if ((d->sig.text[i - 1] & 1) == 0) {
            return;
        }
    round:
        func_02007f2c(d, d->sig.length);
    }
}
