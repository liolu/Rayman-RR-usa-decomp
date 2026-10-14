/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020212a0 from projets/heroes-of-mana/src/donor/func_020212a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef unsigned short wchar_t;
extern char *func_02003de0(char *dest, const char *src, size_t n);
extern int func_020014f4(char *s, wchar_t wchar);
int func_02001510(char *s, const wchar_t *pwcs, unsigned int n) {
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
            result = func_020014f4(temp, *source++);
            if ((chars_written + result) <= n) {
                func_02003de0(s + chars_written, temp, result);
                chars_written += result;
            } else {
                break;
            }
        }
    }

    return chars_written;
}
