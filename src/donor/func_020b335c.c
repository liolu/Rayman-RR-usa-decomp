/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_SndCaptureMain from https://github.com/RonyxDumb/mkds src/arm9/0212c9d4_func_0212c9d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
extern void func_02018848(u32 chBitMask, int volume, SNDChannelDataShift shift);
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef enum {
    NNS_SND_CAPTURE_TYPE_REVERB,
    NNS_SND_CAPTURE_TYPE_EFFECT,
    NNS_SND_CAPTURE_TYPE_SAMPLING
} NNSSndCaptureType;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
extern void func_020b335c(void);
extern void func_020b3260(void);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
extern int func_020b56cc(const NNSSndFader *fader);
extern void func_020b56b4(NNSSndFader *fader);
extern BOOL func_020b569c(const NNSSndFader *fader);
typedef struct CaptureParam {
    BOOL activeFlag;
    NNSSndCaptureType type;
    NNSSndCaptureFormat format;
    void *bufferL;
    void *bufferR;
    u32 bufLen;
    u32 blockSize;
    int curBuffer;
    u32 chBitMask;
    u32 playChBitMask;
    u32 capBitMask;
    int alarmNo;
    int interval;
    NNSSndCaptureCallback callback;
    void *callbackArg;
    NNSSndFader fader;
    BOOL fadeOutFlag;
    int volume;
} CaptureParam;
extern CaptureParam data_020e9c48;
void func_020b335c(void) {
    CaptureParam *cap;
    NNSSndFader *fader;
    int volume;

    cap = &data_020e9c48;

    if (cap->activeFlag && cap->type == NNS_SND_CAPTURE_TYPE_REVERB) {
        fader = &cap->fader;

        func_020b56b4(fader);

        if (cap->fadeOutFlag) {
            if (func_020b569c(fader)) {
                func_020b3260();
                return;
            }
        }

        volume = (func_020b56cc(fader) >> 8);

        if (volume != cap->volume) {
            func_02018848(cap->playChBitMask, volume, SND_CHANNEL_DATASHIFT_NONE);

            cap->volume = volume;
        }
    }
}
void func_020b3260(void);
