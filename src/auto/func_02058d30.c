#include "m2c.h"

/* func_0201a62c(p) releases the object *p and clears *p. */
M2C_UNK func_0201a62c(void **);

/* Releases the object whose pointer was passed in and clears the caller's
   pointer through the (spilled) local copy of the argument. */
void func_02058d30(void *arg0) {
    func_0201a62c(&arg0);
}
