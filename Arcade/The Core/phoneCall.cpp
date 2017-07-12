int phoneCall(int min1, int min2_10, int min11, int s) {
    if (s < min1) return 0;
    int res = 1;
    s -= min1;
    for (int i = 2; ; i++) {
        s -= (i <= 10 ? min2_10 : min11);
        if (s < 0) return i - 1;
    }
}
