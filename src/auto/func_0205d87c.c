/* Setter/getter pair on a global table of longs. */
extern long data_020dceb0[];

void func_0205d87c(long lValue, long lIndex) {
    data_020dceb0[lIndex] = lValue;
}

long func_0205d88c(long lIndex) {
    return data_020dceb0[lIndex];
}
