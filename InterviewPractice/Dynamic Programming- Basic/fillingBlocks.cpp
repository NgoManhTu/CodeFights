int fillingBlocks(int n) {
    int f[n + 1];
    f[1] = 1;
    f[2] = 5;
    f[3] = 11;
    f[4] = 36;
    f[5] = 95;
    for (int i = 5; i <= n; i++)  {
        f[i] = f[i - 1] + 5 * f[i - 2] + f[i - 3] - f[i - 4];
    }
    return f[n];
}
