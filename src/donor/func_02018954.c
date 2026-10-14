/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207a478 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_interface.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_02018678(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern void func_0201942c(s32 no);
void func_02018954(u32 arg0, u32 arg1, u32 alarmMask, u32 arg3) {
    s32 i;
    u32 mask = alarmMask;

    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_0201942c(i);
        }
    }
    func_02018678(13, arg0, arg1, alarmMask, arg3);
}
void func_02018678(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
