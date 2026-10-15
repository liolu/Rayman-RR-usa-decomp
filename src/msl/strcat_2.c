/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern char *strcat(char *dest, const char *src);

/* func_02024d5c from projets/heroes-of-mana/src/donor/func_02024d5c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
char *strcat(char *dest, const char *src) {
    const char *p = src;
    char *q       = dest;

    while (*q++ != 0)
        ;
    q--;
    while ((*q++ = *p++) != 0)
        ;
    return dest;
}
