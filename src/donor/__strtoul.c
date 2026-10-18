/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __strtoul from projets/heroes-of-mana/src/donor/__strtoul.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
enum {
    __GetAChar,
    __UngetAChar,
    __TestForError
};
enum scan_states {
    start          = 0x01,
    check_for_zero = 0x02,
    leading_zero   = 0x04,
    need_digit     = 0x08,
    digit_loop     = 0x10,
    finished       = 0x20,
    failure        = 0x40
};
extern const unsigned char gAsciiUppercaseMap[128];
extern const unsigned short __ctype_mapC[128];
static inline int isalpha(int c) {
    return (c < 0 || c >= 128) ? 0 : (int) (__ctype_mapC[c] & 0x0001);
}
static inline int isdigit(int c) {
    return (c < 0 || c >= 128) ? 0 : (int) (__ctype_mapC[c] & 0x0008);
}
static inline int isspace(int c) {
    return (c < 0 || c >= 128) ? 0 : (int) (__ctype_mapC[c] & 0x0100);
}
static inline int toupper(int c) {
    return (c < 0 || c >= 128) ? c : gAsciiUppercaseMap[c];
}
unsigned long __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                        int *negative, int *overflow) {
    int spaces              = 0;
    int scan_state          = start;
    int count               = 0;
    unsigned long value     = 0;
    unsigned long value_max = 0;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        scan_state = failure;
    } else {
        c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
    }

    if (base != 0) {
        value_max = 0xffffffffUL / base;
    }

    while (count <= max_width && c != (-1) && !(scan_state & (finished | failure))) {
        switch (scan_state) {
            case start:
                if (isspace(c)) {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    count--;
                    spaces++;
                    break;
                }

                if (c == '+') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                } else if (c == '-') {
                    c         = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    *negative = 1;
                }

                scan_state = check_for_zero;
                break;

            case check_for_zero:
                if (base == 0 || base == 16) {
                    if (c == '0') {
                        scan_state = leading_zero;
                        c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        break;
                    }
                }

                scan_state = need_digit;
                break;

            case leading_zero:
                if (c == 'X' || c == 'x') {
                    base       = 16;
                    scan_state = need_digit;
                    c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }

                if (base == 0) {
                    base = 8;
                }

                scan_state = digit_loop;
                break;

            case need_digit:
            case digit_loop:
                if (base == 0) {
                    base = 10;
                }

                if (!value_max) {
                    value_max = 0xffffffffUL / base;
                }

                if (isdigit(c)) {
                    if ((c -= '0') >= base) {
                        if (scan_state == digit_loop) {
                            scan_state = finished;
                        } else {
                            scan_state = failure;
                        }

                        c += '0';
                        break;
                    }
                } else if (!isalpha(c) || (toupper(c) - 'A' + 10) >= base) {
                    if (scan_state == digit_loop) {
                        scan_state = finished;
                    } else {
                        scan_state = failure;
                    }

                    break;
                } else {
                    c = toupper(c) - 'A' + 10;
                }

                if (value > value_max) {
                    *overflow = 1;
                }

                value *= base;

                if (c > (0xffffffffUL - value)) {
                    *overflow = 1;
                }

                value += c;

                scan_state = digit_loop;

                c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));

                break;
        }
    }

    if (!(scan_state & (leading_zero | digit_loop | finished))) {
        count          = 0;
        value          = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }

    (*ReadProc)(ReadProcArg, c, __UngetAChar);

    return value;
}
