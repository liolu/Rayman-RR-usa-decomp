/* Adds lValue to lCount halfwords. */
void func_020781b8(unsigned short *p_uwData, long lCount, long lValue) {
    if (lCount <= 0) {
        return;
    }
    do {
        lCount--;
        *p_uwData += lValue;
        p_uwData++;
    } while (lCount > 0);
}
