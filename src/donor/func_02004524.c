/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02026b84 from projets/heroes-of-mana/src/donor/func_02026b84.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern unsigned long func_0200413c(int base, int max, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                                   int *negative, int *overflow);
extern int func_02003b48(void *isc, int ch, int action);
extern int data_020c0a10;
long func_02004524(const char *str, char **end, int base) {
    unsigned long value;
    int count, negative, overflow;
    __InStrCtrl isc;

    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_0200413c(base, 0x7fffffff, func_02003b48, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow || (!negative && value > 0x7fffffff) || (negative && value > 0x80000000)) {
        value         = (negative ? 0x80000000 : 0x7fffffff);
        data_020c0a10 = 0x22;
    } else if (negative) {
        value = -value;
    }

    return (long) value;
}
