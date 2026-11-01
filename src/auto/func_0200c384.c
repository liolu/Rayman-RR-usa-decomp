/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_0200c384(u32 v) {
    volatile u16 *ime = (volatile u16 *) 0x04000208;
    volatile u32 *ie  = (volatile u32 *) 0x04000210;
    u16 saved;
    u32 old;

    saved = *ime;
    *ime  = 0;
    old   = *ie;
    *ie   = v;
    (void) *ime;
    *ime = saved;
    return old;
}
