/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *NNS_FndGetNextListObject(void *, void *);

void *FindContainHeap(void *arg0, u32 arg1) {
    u8 *p;
    u8 *r;

    p = (u8 *) NNS_FndGetNextListObject(arg0, NULL);
    while (p != NULL) {
        if (*(u32 *) (p + 0x18) <= arg1 && arg1 < *(u32 *) (p + 0x1c)) {
            r = (u8 *) FindContainHeap(p + 0xc, arg1);
            if (r == NULL) {
                r = p;
            }
            return r;
        }
        p = (u8 *) NNS_FndGetNextListObject(arg0, p);
    }
    return NULL;
}
