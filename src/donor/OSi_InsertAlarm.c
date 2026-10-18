/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_InsertAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200f9c8_Os_InsertAlarm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef struct OSiAlarm OSAlarm;
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
extern void OSi_SetTimer(OSAlarm *alarm);
extern struct OSiAlarmQueue OSi_AlarmQueue;
void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire) {
    if (alarm->period > 0) {
        OSTick tick = OS_GetTick();

        fire = alarm->start;
        if (alarm->start < tick) {
            fire += alarm->period * ((tick - alarm->start) / alarm->period + 1);
        }
    }

    alarm->fire = fire;

    OSAlarm *prev;
    OSAlarm *next;

    for (next = OSi_AlarmQueue.head; next; next = next->next) {
        if ((s64) (fire - next->fire) >= 0) {
            continue;
        }

        alarm->prev = next->prev;
        next->prev  = alarm;
        alarm->next = next;
        prev        = alarm->prev;
        if (prev) {
            prev->next = alarm;
        } else {
            OSi_AlarmQueue.head = alarm;
            OSi_SetTimer(alarm);
        }

        return;
    }

    alarm->next         = 0;
    prev                = OSi_AlarmQueue.tail;
    OSi_AlarmQueue.tail = alarm;
    alarm->prev         = prev;
    if (prev) {
        prev->next = alarm;
    } else {
        OSi_AlarmQueue.head = OSi_AlarmQueue.tail = alarm;
        OSi_SetTimer(alarm);
    }
}
