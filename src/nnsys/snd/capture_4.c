/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_0200d3c8(void *queue, void *msg, s32 flags);
extern void SND_StopTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_SetOutputSelector(int a, int b, int c, int d);
extern void SND_FlushCommand(int flag);
extern void SND_WaitForCommandProc(u32 tag);
extern u32 SND_GetCurrentCommandTag(void);
extern void NNS_SndUnlockCapture(u32 capBitMask);
extern BOOL NNS_SndUnlockChannel(u32 chBitMask);
extern void NNS_SndFreeAlarm(int alarm);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef void (*UnkCaptureCallback)(void *buf0, void *buf1, u32 size, int format, void *arg);
typedef struct UnkSndCapture {
    BOOL active;
    int type;
    int format;
    void *buf0;
    void *buf1;
    u32 bufSize;
    u32 unk_18;
    u32 unk_1c;
    u32 lockedChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    int alarmNo;
    u32 unk_30;
    UnkCaptureCallback callback;
    void *arg;
    UnkSndFader fader;
    BOOL stopAfterFade;
    int volume;
} UnkSndCapture;
typedef struct UnkMessageQueue {
    u8 unk_00[0x20];
} UnkMessageQueue;
extern UnkMessageQueue sMesgQ;
extern UnkSndCapture sCapParam;
extern void NNSi_SndCaptureStop(void);

/* func_020742fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void NNSi_SndCaptureStop(void) {
    UnkSndCapture *capture = &sCapParam;
    BOOL hasAlarm;

    if (!sCapParam.active) {
        return;
    }

    hasAlarm = capture->alarmNo >= 0;
    SND_StopTimer(capture->chBitMask, capture->capBitMask, hasAlarm ? 1 << capture->alarmNo : 0, 0);

    if (hasAlarm) {
        u32 tag = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(tag);

        while (func_0200d3c8(&sMesgQ, 0, 0)) {
        }
    }

    if (capture->capBitMask != 0) {
        NNS_SndUnlockCapture(capture->capBitMask);
    }
    if (capture->lockedChBitMask != 0) {
        NNS_SndUnlockChannel(capture->lockedChBitMask);
    }
    if (hasAlarm) {
        NNS_SndFreeAlarm(capture->alarmNo);
    }
    if (capture->type == 1) {
        SND_SetOutputSelector(0, 0, 0, 0);
    }

    capture->active = 0;
}
