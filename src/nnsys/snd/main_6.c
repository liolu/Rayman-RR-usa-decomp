/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 sCurDriverInfo;
extern u32 data_020e9254;
extern u32 sDriverInfoFirstFlag;
extern CallbackNode sPostSleepCallback;
extern CallbackNode sPreSleepCallback;
extern void BeginSleep(void);
extern void EndSleep(void);
extern void SND_Init(void);
extern void PM_PrependPreSleepCallback(CallbackNode *node);
extern void PM_AppendPostSleepCallback(CallbackNode *node);
extern void *NNSi_SndInitResourceMgr(void);
extern void NNSi_SndCaptureInit(void);
extern void NNSi_SndPlayerInit(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void NNS_SndInit(void) {
    if (data_020e9254 != 0) {
        return;
    }
    data_020e9254 = 1;
    SND_Init();
    sPreSleepCallback.func = BeginSleep;
    sPreSleepCallback.arg  = ((void *) 0);
    sPostSleepCallback.func = EndSleep;
    sPostSleepCallback.arg  = ((void *) 0);
    PM_PrependPreSleepCallback(&sPreSleepCallback);
    PM_AppendPostSleepCallback(&sPostSleepCallback);
    NNSi_SndInitResourceMgr();
    NNSi_SndCaptureInit();
    NNSi_SndPlayerInit();
    sCurDriverInfo = -1;
    sDriverInfoFirstFlag = 1;
}
