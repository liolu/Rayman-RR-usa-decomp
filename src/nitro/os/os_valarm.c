/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void OS_InitVAlarm(void);
typedef u32 OSIrqMask;
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} OSi_VAlarmQueue;
extern u16 OSi_UseVAlarm;
extern s32 OSi_VFrameCount;
extern s32 OSi_PreviousVCount;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void OS_InitVAlarm(void) {
    if (!OSi_UseVAlarm) {
        OSi_UseVAlarm = 1;

        OSi_VAlarmQueue.head = ((void *) 0);
        OSi_VAlarmQueue.tail = ((void *) 0);

        (void) OS_DisableIrqMask((1UL << 2));

        OSi_VFrameCount    = 0;
        OSi_PreviousVCount = 0;
    }
}
