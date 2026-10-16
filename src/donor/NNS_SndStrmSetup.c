/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073d04 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 irq_flag);
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void NNS_FndAppendListObject(UnkList *list, void *obj);
extern void SND_SetupChannelPcm(int ch, int format, const void *data, int loop, int loopStart, int loopLen, int volume,
                                int shift, int timer, int pan);
extern void SND_SetupAlarm(int alarm, u32 tick, u32 period, void (*callback)(void *), void *arg);
extern int NNS_SndAllocAlarm(void);
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
extern UnkList sStrmList;
extern UnkSndStrmChannel sStrmChannel[16];
extern void NNS_SndStrmStop(UnkSndStrm *strm);
extern void AlarmCallback(void *arg);
extern void func_020b2bd4(UnkSndStrm *strm, int status);
BOOL NNS_SndStrmSetup(UnkSndStrm *strm, int format, u8 *buffer, u32 bufSize, int timer, int interval, UnkStrmCallback callback,
                      void *arg) {
    u32 len;
    u32 period;
    int i;
    int irq;

    if (strm->active) {
        NNS_SndStrmStop(strm);
    }

    bufSize       = bufSize / (strm->chNum * (interval * 32));
    strm->bufSize = bufSize * interval * 32;

    len = strm->bufSize;
    if (format == 1) {
        len >>= 1;
    }
    period = timer * len / interval;

    strm->alarmNo = NNS_SndAllocAlarm();
    if (strm->alarmNo < 0) {
        return 0;
    }

    for (i = 0; i < strm->chNum; i++) {
        int chNo              = strm->chNo[i];
        UnkSndStrmChannel *ch = &sStrmChannel[chNo];

        ch->bufAddr = buffer + strm->bufSize * i;
        ch->volume  = 0;
        SND_SetupChannelPcm(chNo, format, ch->bufAddr, 1, 0, strm->bufSize >> 2, 0x7F, 0, timer * 32, 0x40);
    }

    SND_SetupAlarm(strm->alarmNo, period, period, AlarmCallback, strm);
    NNS_FndAppendListObject(&sStrmList, strm);

    strm->format   = format;
    strm->interval = interval;
    strm->callback = callback;
    strm->arg      = arg;
    strm->curBlock = 0;
    strm->volume   = 0;
    strm->active   = 1;

    irq            = OS_DisableIrq();
    strm->interval = 1;
    func_020b2bd4(strm, 0);
    strm->interval = interval;
    OS_RestoreIrq(irq);

    return 1;
}
void NNS_SndStrmStop(UnkSndStrm *strm);
void AlarmCallback(void *arg);
void func_020b2bd4(UnkSndStrm *strm, int status);
