/* Compiler probe: func_02003e30, size 0x2c. strcat (signed char: ldrsb). Matches with mwccarm 2.0 -O4,p. */
char *func_02003e30(char *dst, const char *src) {
    char *p = dst;
    while (*p++)
        ;
    p--;
    while ((*p++ = *src++))
        ;
    return dst;
}
