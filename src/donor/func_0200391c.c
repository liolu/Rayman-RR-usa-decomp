/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020236ac from projets/heroes-of-mana/src/donor/func_020236ac.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef char *va_list;
typedef struct {
    char *CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __OutStrCtrl;
extern int func_02002f70(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str,
                         va_list arg);
extern void *func_020037c0(void *wosc, const char *buffer, size_t numchars);
int func_0200391c(char *s, unsigned int n, const char *format, va_list arg) {
    unsigned int end;
    __OutStrCtrl osc;

    osc.CharStr      = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;

    end = func_02002f70(&func_020037c0, &osc, format, arg);

    if (s != 0) {
        if (end < n) {
            s[end] = 0;
        } else if (n > 0) {
            *(s + n - 1) = 0;
        }
    }

    return end;
}
