typedef struct tdstHeader {
    long lValue;
    char pad[8];
    long lType;
} tdstHeader;

/* Copies the first word of p_lSrc into the header, sets its type to 0x27 and returns the data that follows. */
void *func_02083d34(void *p_vUnused, long *p_lSrc, tdstHeader *p_stDst) {
    p_stDst->lValue = *p_lSrc;
    p_stDst->lType  = 0x27;
    return (char *) p_lSrc + 8;
}
