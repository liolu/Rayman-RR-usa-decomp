/* Write into tables of longs in the shared system area at the top of main RAM (0x027FF000). */
void func_0200d800(long lIndex, long lValue) {
    ((long *) 0x027FFDA0)[lIndex] = lValue;
}

void func_0200d814(long lIndex, long lValue) {
    ((long *) 0x027FFDC4)[lIndex] = lValue;
}
