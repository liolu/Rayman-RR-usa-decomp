/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073f14 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_02018848(u32 chBitMask, int volume, int shift);
extern s32 func_020195a0(int volume);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
typedef struct UnkSndStrmChannel {
    u8 *bufAddr;
    int volume;
} UnkSndStrmChannel;
extern UnkSndStrmChannel data_020e9ba4[16];
void func_020b2d94(UnkSndStrm *strm, int volume) {
    int chNo;
    int i;

    strm->volume = volume;

    for (i = 0; i < strm->chNum; i++) {
        s32 vol;
        chNo = strm->chNo[i];
        vol  = func_020195a0(strm->volume + data_020e9ba4[chNo].volume);

        func_02018848(1 << chNo, vol & 0xFF, vol >> 8);
    }
}
