typedef struct tdstEntry8 {
    long lValue;
    long lUnk;
} tdstEntry8;

extern tdstEntry8 data_020bedac[];

long func_02093110(long lIndex) {
    return data_020bedac[lIndex].lValue;
}
