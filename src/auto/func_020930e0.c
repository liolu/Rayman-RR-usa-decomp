typedef struct tdstEntry16 {
    long lValue;
    long a_lUnk[3];
} tdstEntry16;

extern tdstEntry16 data_020bed6c[];

long func_020930e0(long lIndex) {
    return data_020bed6c[lIndex].lValue;
}
