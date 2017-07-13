int magicalWell(int a, int b, int n) {
    int res = 0;
    for (int i = 1; i <= n; i++, a++, b++) {
        res += a * b;
    }
    return res;
}
