/* ORs (lValue << 12) into lCount halfwords. */
void func_02078194(unsigned short *p_uwData, long lCount, long lValue) {
    if (lCount <= 0) {
        return;
    }
    do {
        lCount--;
        *p_uwData |= lValue << 12;
        p_uwData++;
    } while (lCount > 0);
}
