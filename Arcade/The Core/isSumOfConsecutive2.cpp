int isSumOfConsecutive2(int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += k;
            }
            if (sum == n) {
                res++;
            }
        }
    }
    return res;
}
