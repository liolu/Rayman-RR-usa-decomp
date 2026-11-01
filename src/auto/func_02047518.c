#include "m2c.h"

void *func_02001588(void *p_vDst, const void *p_vSrc, unsigned long ulSize);
u16 GetCRC16(u32 seed, const void *p, u32 size);

extern u8 data_020d00f4[];

u32 func_02047518(s32 arg0, void *arg1) {
    s32 idx;
    u8 *base;

    if (arg0 < 0 || arg0 >= 3 || arg1 == NULL) {
        return 0;
    }
    idx  = arg0 * 0xA8;
    base = data_020d00f4 + idx;
    func_02001588(base + 0x10, arg1, 0x98);
    *(u16 *) base = GetCRC16(0xDCDCDCDC, base + 4, 0xA4);
    return 1;
}
