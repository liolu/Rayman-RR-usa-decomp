/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02024c44 from projets/heroes-of-mana/src/donor/func_02024c44.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern char *func_02003d18(char *dest, const char *src);
char *func_02003d18(char *dest, const char *src) {
    register unsigned char *destb, *fromb;
    register unsigned int w, t, align;
    register unsigned int k1, k2;

    fromb = (unsigned char *) src;
    destb = (unsigned char *) dest;

    if ((align = ((unsigned int) fromb & 3)) != ((unsigned int) destb & 3)) {
        goto bytecopy;
    }

    if (align != 0) {
        if ((*destb = *fromb) == 0) {
            return dest;
        }

        for (align = 3 - align; align != 0; align--) {
            if ((*++destb = *++fromb) == 0) {
                return dest;
            }
        }
        ++destb;
        ++fromb;
    }

    k1 = 0x80808080;
    k2 = 0xFEFEFEFF;

    w = *((int *) fromb);
    t = w + k2;
    t &= ~w;
    t &= k1;

    if (t != 0) {
        goto bytecopy;
    }

    --((int *) (destb));

    do {
        *(++((int *) destb)) = w;
        w                    = *(++((int *) fromb));
        t                    = w + k2;
        t &= ~w;
        t &= k1;
        if (t != 0) {
            goto adjust;
        }
    } while (1);

adjust:
    ++((int *) destb);
bytecopy:
    if ((*destb = *fromb) == 0) {
        return dest;
    }

    do {
        if ((*++destb = *++fromb) == 0) {
            return dest;
        }
    } while (1);

    return dest;
}
