int shapeArea(int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        res += 2 * (2 * (i - 1) + 1);
    }
    res += 2 * (n - 1) + 1;
    return res;
}
