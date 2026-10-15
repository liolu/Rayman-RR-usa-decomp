/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

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
extern void __dorounddecup(decimal *d, int digits);
extern void __timesdec(decimal *result, const decimal *x, const decimal *y);
extern void __dorounddecup(decimal *d, int digits);
extern void __str2dec(decimal *d, const char *s, short exp);

/* func_0202a564 from projets/heroes-of-mana/src/donor/func_0202a564.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void __timesdec(decimal *result, const decimal *x, const decimal *y) {
    unsigned long accumulator = 0;
    unsigned char mantissa[32 * 2];
    int i             = x->sig.length + y->sig.length - 1;
    unsigned char *ip = mantissa + i + 1;
    unsigned char *ep = ip;

    result->sgn = 0;

    for (; i > 0; i--) {
        int k = y->sig.length - 1;
        int j = i - k - 1;
        int l;
        int t;
        const unsigned char *jp;
        const unsigned char *kp;

        if (j < 0) {
            j = 0;
            k = i - 1;
        }

        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l  = k + 1;
        t  = x->sig.length - j;

        if (l > t) {
            l = t;
        }

        for (; l > 0; l--, jp++, kp--) {
            accumulator += *jp * *kp;
        }

        *--ip = (unsigned char) (accumulator % 10);
        accumulator /= 10;
    }

    result->exp = (short) (x->exp + y->exp);

    if (accumulator > 0) {
        *--ip = (unsigned char) accumulator;
        result->exp++;
    }

    for (i = 0; i < 32 && ip < ep; i++, ip++) {
        result->sig.text[i] = *ip;
    }

    result->sig.length = (unsigned char) i;

    if (ip < ep && *ip >= 5) {
        if (*ip == 5) {
            unsigned char *jp = ip + 1;
            for (; jp < ep; jp++) {
                if (*jp != 0) {
                    goto round;
                }
            }
            if ((*(ip - 1) & 1) == 0) {
                return;
            }
        }
    round:
        __dorounddecup(result, result->sig.length);
    }
}

/* func_0202a6e8 from projets/heroes-of-mana/src/donor/func_0202a6e8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void __str2dec(decimal *d, const char *s, short exp) {
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
        __dorounddecup(d, d->sig.length);
    }
}
