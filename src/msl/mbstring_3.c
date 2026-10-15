/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long size_t;
typedef unsigned short wchar_t;
extern char *strncpy(char *dest, const char *src, size_t n);
extern int wctomb(char *s, wchar_t wchar);

/* func_020212a0 from projets/heroes-of-mana/src/donor/func_020212a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
int wcstombs(char *s, const wchar_t *pwcs, unsigned int n) {
    int chars_written = 0;
    int result;
    char temp[3];
    const unsigned short *source;

    if (s == 0 || pwcs == 0) {
        return 0;
    }

    source = pwcs;
    while (chars_written <= n) {
        if (!*source) {
            *(s + chars_written) = '\0';
            break;
        } else {
            result = wctomb(temp, *source++);
            if ((chars_written + result) <= n) {
                strncpy(s + chars_written, temp, result);
                chars_written += result;
            } else {
                break;
            }
        }
    }

    return chars_written;
}
