#define REG_SQRTCNT (*(volatile unsigned short *) 0x040002B0)
#define REG_SQRT_PARAM (*(volatile unsigned long long *) 0x040002B8)

/* Starts the hardware square root unit on (lValue << 32), or on 0 when lValue <= 0. */
void FX_SqrtAsync(long lValue) {
    if (lValue > 0) {
        REG_SQRTCNT    = 1;
        REG_SQRT_PARAM = (unsigned long long) lValue << 32;
        return;
    }
    REG_SQRTCNT    = 1;
    REG_SQRT_PARAM = 0;
}
