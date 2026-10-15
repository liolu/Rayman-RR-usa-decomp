/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c544 from https://github.com/RonyxDumb/mkds src/arm9/0214c544_func_0214c544.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MIi_CpuCopy32(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void GX_LoadTex(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, callback, arg);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}
extern u32 sTexLCDCBlk2;
extern u32 sTexLCDCBlk1;
extern u32 sSzTexBlk1;
extern u32 GXi_DmaId;
#pragma thumb off
void GX_LoadTex(void *src, u32 offset, u32 size) {
    void *temp;
    if (!sTexLCDCBlk2) {
        temp = (void *) (sTexLCDCBlk1 + offset);
    } else {
        if ((offset + size) < sSzTexBlk1) {
            temp = (void *) (sTexLCDCBlk1 + offset);
        } else if (offset >= sSzTexBlk1) {
            temp = (void *) (sTexLCDCBlk2 + offset - sSzTexBlk1);
        } else {
            void *temp2 = (void *) sTexLCDCBlk2;
            u32 temp1   = sSzTexBlk1 - offset;
            temp        = (void *) (sTexLCDCBlk1 + offset);
            GXi_DmaCopy32(GXi_DmaId, src, temp, temp1);
            GXi_DmaCopy32Async(GXi_DmaId, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(GXi_DmaId, src, temp, size, ((void *) 0), ((void *) 0));
}
