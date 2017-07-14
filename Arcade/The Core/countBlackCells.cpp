int countBlackCells(int n, int m) {
    int res = 0;
    for (int x = 1; x <= n; x++) {
        int L = (1LL * m * (x - 1) / n);
        if (1LL * m * (x - 1) % n == 0) {
            L--;
        }
        int R = (1LL * m * x / n);
        L = max(0, L);
        R = min(R, m - 1);
        res += R - L + 1;
    }
    return res;
}