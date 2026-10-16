#include "m2c.h"

long func_02023954(void *p_vFirst, ...) {
    void *p_vObj = *(void **) &p_vFirst;
    if (p_vObj != 0 && *(long *) ((char *) p_vObj + 4) == 8) {
        return 1;
    }
    return 0;
}
