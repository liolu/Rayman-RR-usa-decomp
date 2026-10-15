/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern void OSi_SetTimerReserved(s32 timerNum);
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void OS_InitAlarm(void);
typedef u32 OSIrqMask;
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern u16 OSi_UseAlarm;
extern struct OSiAlarmQueue OSi_AlarmQueue;

/* Os_InitializeAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fb28_Os_InitializeAlarm.c (license: none), reused by
 * tools/donor_match.py */
void OS_InitAlarm(void) {
    if (!OSi_UseAlarm) {
        OSi_UseAlarm = 1;

        OSi_SetTimerReserved(OS_TIMER_1);

        OSi_AlarmQueue.head = ((void *) 0);
        OSi_AlarmQueue.tail = ((void *) 0);

        (void) OS_DisableIrqMask((1UL << 4));
    }
}
