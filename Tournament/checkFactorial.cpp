bool checkFactorial(int n) {
    int m = 1;
    for (int i = 1; i <= n; i++) {
        m *= i;
        if (m == n) return true;
    }
    return false;
}
