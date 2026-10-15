/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 PM_GetBackLight(BOOL *top, BOOL *bottom);
u32 PMi_ReadRegister(u32 reg, u16 *buffer);

/* func_0207bd2c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
u32 PM_GetBackLight(BOOL *top, BOOL *bottom) {
    u16 status;
    u32 result = PMi_ReadRegister(0, &status);

    if (result != 0) {
        return result;
    }
    if (top) {
        *top = (status & 8) ? 1 : 0;
    }
    if (bottom) {
        *bottom = (status & 4) ? 1 : 0;
    }
    return result;
}
