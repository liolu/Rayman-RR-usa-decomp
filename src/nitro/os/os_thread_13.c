extern long data_020c0c4c;

long OSi_GetUnusedThreadId(void) {
    return ++data_020c0c4c;
}
