int countSumOfTwoRepresentations2(int n, int l, int r) {
    int res = 0;
    for (int i = l; i <= r; i++) {
        int x = n - i;
        if (l <= x && x <= r) {
            res += (x == i ? 2 : 1);
        }
    }
    return res / 2;
}
