int rangeBitCount(int a, int b) {
    int res = 0;
    for (int i = a; i <= b; i++) {
        res += __builtin_popcount(i);
    }
    return res;
}
