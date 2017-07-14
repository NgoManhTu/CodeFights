bool isPower(int n) {
    if (n == 1) return true;
    for (int i = 2; i * i <= n; i++) {
        int j = i;
        while (j < n) {
            j = j * i;
        }
        if (j == n) return true;
    }
    return false;
}
