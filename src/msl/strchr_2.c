/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern char *strchr(const char *str, int chr);

/* func_02024ed4 from projets/heroes-of-mana/src/donor/func_02024ed4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
char *strchr(const char *str, int chr) {
    const char *p = str;
    char c        = chr;
    char ch;

    while ((ch = *p++)) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
