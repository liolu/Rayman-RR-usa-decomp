/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c544 from https://github.com/RonyxDumb/mkds src/arm9/0214c544_func_0214c544.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_02017f48(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02017cf4(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02017afc(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020175e0(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02017cf4(dmaNo, src, dest, size);
    } else {
        func_02017f48(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02017afc(dmaNo, src, dest, size, callback, arg);
    } else {
        func_02017f48(src, dest, size);
    }
}
extern u32 data_020c202c;
extern u32 data_020c201c;
extern u32 data_020c2030;
extern u32 data_020bbfe0;
#pragma thumb off
void func_020175e0(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_020c202c) {
        temp = (void *) (data_020c201c + offset);
    } else {
        if ((offset + size) < data_020c2030) {
            temp = (void *) (data_020c201c + offset);
        } else if (offset >= data_020c2030) {
            temp = (void *) (data_020c202c + offset - data_020c2030);
        } else {
            void *temp2 = (void *) data_020c202c;
            u32 temp1   = data_020c2030 - offset;
            temp        = (void *) (data_020c201c + offset);
            GXi_DmaCopy32(data_020bbfe0, src, temp, temp1);
            GXi_DmaCopy32Async(data_020bbfe0, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_020bbfe0, src, temp, size, ((void *) 0), ((void *) 0));
}
