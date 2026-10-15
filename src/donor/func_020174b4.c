/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b558 from https://github.com/RonyxDumb/mkds src/arm9/0214b558_func_0214b558.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void MIi_CpuCopy32(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020174b4(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, callback, arg);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}
extern u32 sTexPlttLCDCBlk;
extern u32 GXi_DmaId;
#pragma thumb off
void func_020174b4(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(GXi_DmaId, src, (void *) (sTexPlttLCDCBlk + offset), size, ((void *) 0), ((void *) 0));
}
