/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020ea54c[];
extern void DisposeCallback(void);
u8 *NNS_SndArcGetStrmPlayerInfo(s32 i);
void *NNS_SndHeapAlloc(s32 heap, s32 size, void *cb, void *ud, s32 x);
void func_020b4d34(u8 *p);

s32 func_020b54bc(s32 heap) {
    s32 i;
    s32 sz;
    u8 *p = data_020ea54c;
    for (i = 0; i < 4; i++, p += 0x170) {
        u8 *info = NNS_SndArcGetStrmPlayerInfo(i);
        if (info != 0) {
            s32 k;
            u8 n;
            p[0x124] = *info;
            k        = 0;
            if ((s32) *info > 0) {
                do {
                    p[0x126 + k] = info[k + 1];
                    k++;
                } while (k < *info);
            }
            if (heap != 0) {
                void *r;
                n  = p[0x124];
                sz = n << 11;
                r  = NNS_SndHeapAlloc(heap, sz, DisposeCallback, p, 0);
                if (r == 0) {
                    return 0;
                }
                func_020b4d34(p);
                *(void **) (p + 0x12C) = r;
                *(s32 *) (p + 0x130)   = sz;
            }
        }
    }
    return 1;
}
