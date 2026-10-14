/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020156bc();
extern void func_02017744();
extern u32 data_020c201c;
extern u32 data_020c2030;
extern u32 data_020c202c;
extern s32 data_020c2028;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020bb5a4[16];
void func_02017744() {
    u32 temp      = func_020156bc();
    data_020c2028 = (s32) temp;
    data_020c201c = (u32) (data_020bb5a4[temp].blk1 << 0xC);
    data_020c202c = (u32) (data_020bb5a4[temp].blk2 << 0xC);
    data_020c2030 = (u32) (data_020bb5a4[temp].szBlk1 << 0xC);
}
