int maximizeNumberRoundness(int n) {
    int tmp = n, zeros = 0, res;
    while (tmp) {
        if (tmp % 10 == 0) {
            zeros++;
        }
        tmp = tmp / 10;
    }
    res = zeros;
    for (int i = 0; i < zeros; i++) {
        if (n % 10 == 0) {
            res--;
        }
        n = n / 10;
    }
    return res;
}
