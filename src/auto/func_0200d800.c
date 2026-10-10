/* Writes into a table of longs at 0x027FFDA0, in the shared system area at the top of main RAM. */
void func_0200d800(long lIndex, long lValue) {
    ((long *) 0x027FFDA0)[lIndex] = lValue;
}
