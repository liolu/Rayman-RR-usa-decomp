/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long size_t;
extern char *strncpy(char *dest, const char *src, size_t num);

/* func_02024d0c from projets/heroes-of-mana/src/donor/func_02024d0c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
char *strncpy(char *dest, const char *src, size_t n) {
    const char *p = src;
    char *q       = (char *) dest;

    n++;

    while (--n != 0) {
        if ((*q++ = *p++) == 0) {
            while (--n != 0) {
                *q++ = 0;
            }
            break;
        }
    }

    return dest;
}
