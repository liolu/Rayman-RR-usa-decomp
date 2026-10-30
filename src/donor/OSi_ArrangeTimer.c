/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_AlarmHandlerImpl from https://github.com/RonyxDumb/mkds src/arm9/0200f7a0_Os_AlarmHandlerImpl.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef u16 REGType16;
typedef vu16 REGType16v;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((REGType16 *) ((u32) & (*(REGType16v *) 0x4000102) + id * 4)) = control;
}
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
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
extern u32 SDK_AUTOLOAD_DTCM_START[];
typedef u32 OSIrqMask;
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) |= (u32) intr;
}
extern void OSi_SetTimer(OSAlarm *alarm);
extern void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire);
extern struct OSiAlarmQueue OSi_AlarmQueue;
void OSi_ArrangeTimer(void) {
    OS_SetTimerControl(OS_TIMER_1, 0);

    (void) OS_DisableIrqMask((1UL << 4));

    OS_SetIrqCheckFlag((1UL << 4));

    OSTick tick = OS_GetTick();

    OSAlarm *alarm = OSi_AlarmQueue.head;

    if (!alarm) {
        return;
    }

    if (tick < alarm->fire) {
        OSi_SetTimer(alarm);
        return;
    }

    OSAlarm *next       = alarm->next;
    OSi_AlarmQueue.head = next;

    if (!next) {
        OSi_AlarmQueue.tail = ((void *) 0);
    } else {
        next->prev = ((void *) 0);
    }

    OSAlarmHandler handler = alarm->handler;

    if (!alarm->period) {
        alarm->handler = ((void *) 0);
    }

    if (handler) {
        (handler)(alarm->arg);
    }

    if (alarm->period > 0) {
        alarm->handler = handler;
        OSi_InsertAlarm(alarm, 0);
    }

    if (OSi_AlarmQueue.head) {
        OSi_SetTimer(OSi_AlarmQueue.head);
    }
}
