int mirrorBits(int a) {
    int res = 0;
    int logn = 31 - __builtin_clz(a);
    for (int i = 0; i < 32; i++) {
        if ((a >> i) & 1) {
            res += (1 << (logn - i));
        }
    }
    return res;
}
